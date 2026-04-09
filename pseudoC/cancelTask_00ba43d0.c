// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelTask
// Entry Point: 00ba43d0
// Size: 20 bytes
// Signature: undefined __thiscall cancelTask(ThreadPoolTaskManager * this, Task * param_1)


/* ThreadPoolTaskManager::cancelTask(ThreadPool::Task*) */

void __thiscall ThreadPoolTaskManager::cancelTask(ThreadPoolTaskManager *this,Task *param_1)

{
  ThreadPool::cancelTask(*(ThreadPool **)this,this,param_1);
  return;
}


