// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitForAllTasks
// Entry Point: 00ba4310
// Size: 160 bytes
// Signature: undefined __thiscall waitForAllTasks(ThreadPoolTaskManager * this, bool param_1)


/* ThreadPoolTaskManager::waitForAllTasks(bool) */

byte __thiscall ThreadPoolTaskManager::waitForAllTasks(ThreadPoolTaskManager *this,bool param_1)

{
  long lVar1;
  byte bVar2;
  
  if (*(int *)(this + 8) == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 1;
    do {
      while ((param_1 & 1U) != 0) {
        while (lVar1 = getNextFinishedTask(), lVar1 != 0) {
          bVar2 = *(char *)(lVar1 + 8) == '\0' & bVar2;
        }
        if (*(int *)(this + 8) == 0) {
          return bVar2;
        }
        param_1 = (bool)ThreadPool::tryExecuteTaskOnLocalThread();
        if (*(int *)(this + 8) == 0) {
          return bVar2;
        }
      }
      lVar1 = waitForNextTask();
      param_1 = false;
      bVar2 = *(char *)(lVar1 + 8) == '\0' & bVar2;
    } while (*(int *)(this + 8) != 0);
  }
  return bVar2;
}


