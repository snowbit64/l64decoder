// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: popKeyPress
// Entry Point: 00b22dc8
// Size: 60 bytes
// Signature: undefined popKeyPress(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidInputDevice::popKeyPress() */

undefined4 AndroidInputDevice::popKeyPress(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long in_x0;
  
  uVar2 = *(uint *)(in_x0 + 0x1040);
  if (*(uint *)(in_x0 + 0x1044) == uVar2) {
    return 0;
  }
  *(uint *)(in_x0 + 0x1040) = uVar2 + 1;
  iVar1 = 0;
  if (uVar2 + 1 != 0x400) {
    iVar1 = uVar2 + 1;
  }
  uVar3 = *(undefined4 *)(in_x0 + (ulong)uVar2 * 4 + 0x40);
  *(int *)(in_x0 + 0x1040) = iVar1;
  return uVar3;
}


