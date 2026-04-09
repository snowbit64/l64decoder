// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPixelSourceName
// Entry Point: 00b87a30
// Size: 24 bytes
// Signature: undefined __thiscall getPixelSourceName(DensityMap * this)


/* non-virtual thunk to DensityMap::getPixelSourceName() const */

DensityMap * __thiscall DensityMap::getPixelSourceName(DensityMap *this)

{
  DensityMap *pDVar1;
  
  pDVar1 = this + -0x27;
  if (((byte)this[-0x28] & 1) != 0) {
    pDVar1 = *(DensityMap **)(this + -0x18);
  }
  return pDVar1;
}


