// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createNew
// Entry Point: 0088f7b0
// Size: 68 bytes
// Signature: undefined __thiscall createNew(DensityMapEntity * this, DensityMapDesc * param_1, uint param_2, uint param_3, bool param_4)


/* DensityMapEntity::createNew(DensityMapDesc const&, unsigned int, unsigned int, bool) */

void __thiscall
DensityMapEntity::createNew
          (DensityMapEntity *this,DensityMapDesc *param_1,uint param_2,uint param_3,bool param_4)

{
  create(this,param_1);
  DensityMap::createEmpty(*(DensityMap **)(this + 0x20),param_2,param_3,param_4);
  return;
}


