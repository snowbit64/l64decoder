// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GenericResourceDescLoader
// Entry Point: 00754bac
// Size: 4 bytes
// Signature: undefined __thiscall ~GenericResourceDescLoader(GenericResourceDescLoader<DensityMap,DensityMapDesc> * this)


/* GenericResourceDescLoader<DensityMap, DensityMapDesc>::~GenericResourceDescLoader() */

void __thiscall
GenericResourceDescLoader<DensityMap,DensityMapDesc>::~GenericResourceDescLoader
          (GenericResourceDescLoader<DensityMap,DensityMapDesc> *this)

{
  operator_delete(this);
  return;
}


