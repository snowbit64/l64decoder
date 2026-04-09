// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cursorLeft
// Entry Point: 006d5ff8
// Size: 24 bytes
// Signature: undefined cursorLeft(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::cursorLeft() */

void Console::cursorLeft(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = *(int *)(in_x0 + 0xe8);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(in_x0 + 0xe8) = iVar1 + -1;
  return;
}


