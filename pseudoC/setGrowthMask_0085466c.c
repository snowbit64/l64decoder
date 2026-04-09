// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGrowthMask
// Entry Point: 0085466c
// Size: 16 bytes
// Signature: undefined __thiscall setGrowthMask(FieldCropsUpdater * this, DensityMap * param_1, uint param_2, uint param_3)


/* FieldCropsUpdater::setGrowthMask(DensityMap*, unsigned int, unsigned int) */

void __thiscall
FieldCropsUpdater::setGrowthMask
          (FieldCropsUpdater *this,DensityMap *param_1,uint param_2,uint param_3)

{
  *(DensityMap **)(this + 0xce8) = param_1;
  *(uint *)(this + 0xcf0) = param_2;
  *(uint *)(this + 0xcf4) = param_3;
  return;
}


