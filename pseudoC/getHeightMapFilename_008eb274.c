// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHeightMapFilename
// Entry Point: 008eb274
// Size: 24 bytes
// Signature: undefined getHeightMapFilename(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::getHeightMapFilename() const */

long BaseTerrain::getHeightMapFilename(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0xc1;
  if ((*(byte *)(in_x0 + 0xc0) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0xd0);
  }
  return lVar1;
}


