// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapSaveHelper
// Entry Point: 00b87a88
// Size: 84 bytes
// Signature: undefined __thiscall ~DensityMapSaveHelper(DensityMapSaveHelper * this)


/* DensityMap::DensityMapSaveHelper::~DensityMapSaveHelper() */

void __thiscall DensityMap::DensityMapSaveHelper::~DensityMapSaveHelper(DensityMapSaveHelper *this)

{
  BitVector *this_00;
  
  *(undefined ***)this = &PTR__DensityMapSaveHelper_00fea728;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x58));
  }
  this_00 = *(BitVector **)(this + 0x68);
  if (this_00 != (BitVector *)0x0) {
    BitVector::~BitVector(this_00);
    operator_delete(this_00);
  }
  SaveHelper::~SaveHelper((SaveHelper *)this);
  return;
}


