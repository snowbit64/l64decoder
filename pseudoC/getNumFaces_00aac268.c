// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumFaces
// Entry Point: 00aac268
// Size: 20 bytes
// Signature: undefined getNumFaces(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NullTexture::getNumFaces() const */

undefined4 NullTexture::getNumFaces(void)

{
  long in_x0;
  undefined4 uVar1;
  
  uVar1 = 6;
  if (*(int *)(in_x0 + 0x30) != 2) {
    uVar1 = 1;
  }
  return uVar1;
}


