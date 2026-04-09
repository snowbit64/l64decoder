// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: configureDensityMap
// Entry Point: 008d49dc
// Size: 392 bytes
// Signature: undefined __thiscall configureDensityMap(FoliageBendingSystem * this, DensityMap * param_1, DensityMapModifier * param_2, TerrainTransformGroup * param_3)


/* FoliageBendingSystem::configureDensityMap(DensityMap*, DensityMapModifier*,
   TerrainTransformGroup*) */

void __thiscall
FoliageBendingSystem::configureDensityMap
          (FoliageBendingSystem *this,DensityMap *param_1,DensityMapModifier *param_2,
          TerrainTransformGroup *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  DensityMap *local_70;
  uint local_68;
  undefined4 uStack_64;
  DensityMapModifier *local_60;
  undefined local_58;
  undefined local_57;
  undefined local_56;
  int local_54;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar2 = *(long *)(this + 0x4d0) - *(long *)(this + 0x4c8);
  if (lVar2 == 0) {
    *(TerrainTransformGroup **)(this + 0x4c0) = param_3;
  }
  else {
    uVar7 = 0;
    uVar8 = (lVar2 >> 3) * -0x3333333333333333;
    do {
      if (*(DensityMap **)(*(long *)(this + 0x4c8) + uVar7 * 0x28) == param_1) goto LAB_008d4b38;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 <= uVar8 && uVar8 - uVar7 != 0);
  }
  local_70 = param_1;
  local_68 = DensityMap::getSquareSize();
  uStack_64 = 0;
  local_60 = param_2;
  uVar4 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
  local_57 = (undefined)uVar4;
  iVar5 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  iVar6 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
  uVar1 = iVar5 - iVar6;
  uVar4 = 1 << (ulong)(uVar4 & 0x1f);
  local_54 = 1 << (ulong)(uVar1 & 0x1f);
  uVar7 = (ulong)((uVar4 & 0xff) << (ulong)(uVar1 & 0x1f)) << 2;
  local_56 = (undefined)uVar1;
  local_58 = (undefined)uVar4;
  local_50 = operator_new__(uVar7);
  memset(local_50,0,uVar7);
  FUN_008d4b64(this + 0x4c8,&local_70);
  if (*(uint *)(this + 0x94) < local_68) {
    *(uint *)(this + 0x94) = local_68;
  }
  uVar4 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  DensityMap::addDirtyListener(param_1,(DirtyListener *)(this + 0x28),false,0,uVar4);
LAB_008d4b38:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


