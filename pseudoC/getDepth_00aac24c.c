// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDepth
// Entry Point: 00aac24c
// Size: 20 bytes
// Signature: undefined getDepth(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NullTexture::getDepth() const */

undefined4 NullTexture::getDepth(void)

{
  undefined4 uVar1;
  long in_x0;
  
  uVar1 = *(undefined4 *)(in_x0 + 0x24);
  if (*(int *)(in_x0 + 0x30) != 1) {
    uVar1 = 1;
  }
  return uVar1;
}


