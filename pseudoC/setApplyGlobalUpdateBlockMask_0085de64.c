// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setApplyGlobalUpdateBlockMask
// Entry Point: 0085de64
// Size: 136 bytes
// Signature: undefined __thiscall setApplyGlobalUpdateBlockMask(DensityMapHeightUpdater * this, DensityMap * param_1, uint param_2, uint param_3)


/* DensityMapHeightUpdater::setApplyGlobalUpdateBlockMask(DensityMap*, unsigned int, unsigned int)
    */

void __thiscall
DensityMapHeightUpdater::setApplyGlobalUpdateBlockMask
          (DensityMapHeightUpdater *this,DensityMap *param_1,uint param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  
  if (-1 < *(int *)(this + 0xc54)) {
    if (param_1 != (DensityMap *)0x0) {
      FUN_00f276d0(1,param_1 + 8);
    }
    plVar2 = *(long **)(this + 0xc68);
    if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00f27700(0xffffffff,plVar2 + 1), iVar1 < 2)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    *(DensityMap **)(this + 0xc68) = param_1;
    *(uint *)(this + 0xc70) = param_2;
    *(uint *)(this + 0xc74) = param_3;
  }
  return;
}


