// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lineDown
// Entry Point: 006d4e84
// Size: 20 bytes
// Signature: undefined lineDown(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::lineDown() */

void Console::lineDown(void)

{
  long in_x0;
  
  if (0 < *(int *)(in_x0 + 0xb0)) {
    *(int *)(in_x0 + 0xb0) = *(int *)(in_x0 + 0xb0) + -1;
  }
  return;
}


