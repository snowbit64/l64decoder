// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sleep
// Entry Point: 00e44078
// Size: 12 bytes
// Signature: undefined __cdecl sleep(int param_1)


/* SoLoud::Thread::sleep(int) */

int SoLoud::Thread::sleep(int param_1)

{
  int iVar1;
  
  iVar1 = usleep(param_1 * 1000);
  return iVar1;
}


