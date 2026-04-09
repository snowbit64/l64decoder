// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cursorEnd
// Entry Point: 006d6044
// Size: 28 bytes
// Signature: undefined cursorEnd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::cursorEnd() */

void Console::cursorEnd(void)

{
  uint uVar1;
  long in_x0;
  
  uVar1 = (uint)(*(byte *)(in_x0 + 0x80) >> 1);
  if ((*(byte *)(in_x0 + 0x80) & 1) != 0) {
    uVar1 = (uint)*(undefined8 *)(in_x0 + 0x88);
  }
  *(uint *)(in_x0 + 0xe8) = uVar1;
  return;
}


