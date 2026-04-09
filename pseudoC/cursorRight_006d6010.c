// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cursorRight
// Entry Point: 006d6010
// Size: 44 bytes
// Signature: undefined cursorRight(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::cursorRight() */

void Console::cursorRight(void)

{
  uint uVar1;
  long in_x0;
  
  uVar1 = (uint)(*(byte *)(in_x0 + 0x80) >> 1);
  if ((*(byte *)(in_x0 + 0x80) & 1) != 0) {
    uVar1 = *(uint *)(in_x0 + 0x88);
  }
  if (*(int *)(in_x0 + 0xe8) + 1U < uVar1) {
    uVar1 = *(int *)(in_x0 + 0xe8) + 1;
  }
  *(uint *)(in_x0 + 0xe8) = uVar1;
  return;
}


