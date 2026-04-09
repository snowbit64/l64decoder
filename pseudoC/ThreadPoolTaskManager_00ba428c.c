// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ThreadPoolTaskManager
// Entry Point: 00ba428c
// Size: 80 bytes
// Signature: undefined __thiscall ~ThreadPoolTaskManager(ThreadPoolTaskManager * this)


/* ThreadPoolTaskManager::~ThreadPoolTaskManager() */

void __thiscall ThreadPoolTaskManager::~ThreadPoolTaskManager(ThreadPoolTaskManager *this)

{
                    /* try { // try from 00ba42a0 to 00ba42a7 has its CatchHandler @ 00ba42dc */
  ThreadPool::cancelAllTasks(*(ThreadPool **)this,this);
  while (*(int *)(this + 8) != 0) {
                    /* try { // try from 00ba42b0 to 00ba42b7 has its CatchHandler @ 00ba42e0 */
    waitForNextTask();
  }
  Semaphore::~Semaphore((Semaphore *)(this + 0x68));
  Mutex::~Mutex((Mutex *)(this + 0x40));
  std::__ndk1::__deque_base<ThreadPool::Task*,std::__ndk1::allocator<ThreadPool::Task*>>::
  ~__deque_base((__deque_base<ThreadPool::Task*,std::__ndk1::allocator<ThreadPool::Task*>> *)
                (this + 0x10));
  return;
}


