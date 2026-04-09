// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitForTaskWatermark
// Entry Point: 00ba4aa8
// Size: 104 bytes
// Signature: undefined __thiscall waitForTaskWatermark(ThreadPoolTaskManager * this, uint param_1)


/* ThreadPoolTaskManager::waitForTaskWatermark(unsigned int) */

byte __thiscall
ThreadPoolTaskManager::waitForTaskWatermark(ThreadPoolTaskManager *this,uint param_1)

{
  long lVar1;
  byte bVar2;
  
  if (param_1 < *(uint *)(this + 8)) {
    bVar2 = 1;
    do {
      lVar1 = waitForNextTask();
      bVar2 = *(char *)(lVar1 + 8) == '\0' & bVar2;
    } while (param_1 < *(uint *)(this + 8));
  }
  else {
    bVar2 = 1;
  }
  return bVar2;
}


