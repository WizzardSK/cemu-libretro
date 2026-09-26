#pragma once
#include "util/helpers/fspinlock.h"

struct VulkanPipelineHash
{
	VulkanPipelineHash() = default;
	VulkanPipelineHash(uint64 h0, uint64 h1) : h0(h0), h1(h1) {};

	uint64 h0;
	uint64 h1;
};

class VulkanPipelineStableCache
{
	struct PipelineHash 
	{
		PipelineHash(uint64 h0, uint64 h1) : h0(h0), h1(h1) {};

		uint64 h0;
		uint64 h1;

		bool operator==(const PipelineHash& r) const
		{
			return h0 == r.h0 && h1 == r.h1;
		}

		struct HashFunc 
		{
			size_t operator()(const PipelineHash& v) const
			{
				static_assert(sizeof(uint64) == sizeof(size_t));
				return v.h0 ^ v.h1;
			}
		};
	};

public:
	static VulkanPipelineStableCache& GetInstance();

	uint32 BeginLoading(uint64 cacheTitleId); // returns count of pipelines stored in cache
	bool UpdateLoading(uint32& pipelinesLoadedTotal, uint32& pipelinesMissingShaders);
	void EndLoading();
	void LoadPipelineFromCache(std::span<uint8> fileData);
    void Close(); // called on title exit

	bool HasPipelineCached(uint64 baseHash, uint64 pipelineStateHash);
	void AddCurrentStateToCache(uint64 baseHash, uint64 pipelineStateHash);

	// pipeline serialization for file
	bool SerializePipeline(class MemStreamWriter& memWriter, struct CachedPipeline& cachedPipeline);
	bool DeserializePipeline(class MemStreamReader& memReader, struct CachedPipeline& cachedPipeline);

private:
	int CompilerThread(); // runs on: this cache's own plCacheCompiler threads
	void WorkerThread();  // runs on: this cache's own plCacheWriter thread

	std::thread* m_pipelineCacheStoreThread;
	// Upstream detaches both kinds of thread and never waits for them, which
	// costs nothing in a process that is about to end. A core outlives the
	// title: the compiler threads build pipelines that are registered with the
	// renderer, and the writer holds the cache file, so both have to be gone
	// before the renderer is - and a handle is what lets Close() join them
	// instead of waiting on a flag. The loops themselves are upstream's.
	std::vector<std::thread> m_compilerThreads;
	std::atomic_bool m_stopCacheStoreThread{ false };

	std::unordered_set<PipelineHash, PipelineHash::HashFunc> m_pipelineIsCached;
	FSpinlock m_pipelineIsCachedLock;
	class FileCache* s_cache;

	std::atomic_uint32_t m_numCompilationThreads{ 0 };
	ConcurrentQueue<std::vector<uint8>> m_compilationQueue;
	std::atomic_uint32_t m_compilationCount;
};