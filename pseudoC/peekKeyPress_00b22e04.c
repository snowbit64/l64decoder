// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: peekKeyPress
// Entry Point: 00b22e04
// Size: 36 bytes
// Signature: undefined peekKeyPress(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidInputDevice::peekKeyPress() */

undefined4 AndroidInputDevice::peekKeyPress(void)

{
  long in_x0;
  
  if (*(uint *)(in_x0 + 0x1044) == *(uint *)(in_x0 + 0x1040)) {
    return 0;
  }
  return *(undefined4 *)(in_x0 + (ulong)*(uint *)(in_x0 + 0x1040) * 4 + 0x40);
}


