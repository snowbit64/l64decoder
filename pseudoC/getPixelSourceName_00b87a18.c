// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPixelSourceName
// Entry Point: 00b87a18
// Size: 24 bytes
// Signature: undefined getPixelSourceName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DensityMap::getPixelSourceName() const */

long DensityMap::getPixelSourceName(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x31;
  if ((*(byte *)(in_x0 + 0x30) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x40);
  }
  return lVar1;
}


