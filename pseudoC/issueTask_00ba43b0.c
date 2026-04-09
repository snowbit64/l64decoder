// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueTask
// Entry Point: 00ba43b0
// Size: 32 bytes
// Signature: undefined __thiscall issueTask(ThreadPoolTaskManager * this, Task * param_1)


/* ThreadPoolTaskManager::issueTask(ThreadPool::Task*) */

void __thiscall ThreadPoolTaskManager::issueTask(ThreadPoolTaskManager *this,Task *param_1)

{
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  ThreadPool::issueTask(*(ThreadPool **)this,this,param_1);
  return;
}


