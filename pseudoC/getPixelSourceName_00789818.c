// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPixelSourceName
// Entry Point: 00789818
// Size: 24 bytes
// Signature: undefined getPixelSourceName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralDensityPixelSource::getPixelSourceName() const */

long ProceduralDensityPixelSource::getPixelSourceName(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x21;
  if ((*(byte *)(in_x0 + 0x20) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x30);
  }
  return lVar1;
}


