// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapOldOperations
// Entry Point: 007bca24
// Size: 36 bytes
// Signature: undefined __thiscall ~DensityMapOldOperations(DensityMapOldOperations * this)


/* DensityMapOldOperations::~DensityMapOldOperations() */

void __thiscall DensityMapOldOperations::~DensityMapOldOperations(DensityMapOldOperations *this)

{
  DensityMapModifier::~DensityMapModifier((DensityMapModifier *)this);
  operator_delete(this);
  return;
}


