// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isDone
// Entry Point: 00ba4b10
// Size: 72 bytes
// Signature: undefined isDone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadPoolTaskManager::isDone() */

bool ThreadPoolTaskManager::isDone(void)

{
  int iVar1;
  long in_x0;
  
  Mutex::enterCriticalSection();
  iVar1 = *(int *)(in_x0 + 0x38);
  Mutex::leaveCriticalSection();
  return *(int *)(in_x0 + 8) == iVar1;
}


