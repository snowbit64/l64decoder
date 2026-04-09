// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMap
// Entry Point: 00b8524c
// Size: 36 bytes
// Signature: undefined __thiscall ~DensityMap(DensityMap * this)


/* DensityMap::~DensityMap() */

void __thiscall DensityMap::~DensityMap(DensityMap *this)

{
  ~DensityMap(this);
  operator_delete(this);
  return;
}


