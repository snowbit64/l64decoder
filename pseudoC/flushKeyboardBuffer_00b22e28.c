// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flushKeyboardBuffer
// Entry Point: 00b22e28
// Size: 60 bytes
// Signature: undefined flushKeyboardBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidInputDevice::flushKeyboardBuffer() */

void AndroidInputDevice::flushKeyboardBuffer(void)

{
  long in_x0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_x0 + 0x1040);
  if (*(uint *)(in_x0 + 0x1044) != uVar1) {
    do {
      *(undefined4 *)(in_x0 + (ulong)uVar1 * 4 + 0x40) = 0;
      uVar1 = 0;
      if (*(int *)(in_x0 + 0x1040) != 0x3ff) {
        uVar1 = *(int *)(in_x0 + 0x1040) + 1;
      }
      *(uint *)(in_x0 + 0x1040) = uVar1;
    } while (*(uint *)(in_x0 + 0x1044) != uVar1);
  }
  return;
}


