// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lineUp
// Entry Point: 006d4e28
// Size: 92 bytes
// Signature: undefined lineUp(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::lineUp() */

void Console::lineUp(void)

{
  long in_x0;
  
  Mutex::enterCriticalSection();
  if (*(int *)(in_x0 + 0xb0) <
      (int)((ulong)(*(long *)(in_x0 + 0x10) - *(long *)(in_x0 + 8)) >> 3) * -0x55555555 -
      *(int *)(in_x0 + 0xb4)) {
    *(int *)(in_x0 + 0xb0) = *(int *)(in_x0 + 0xb0) + 1;
  }
  Mutex::leaveCriticalSection();
  return;
}


