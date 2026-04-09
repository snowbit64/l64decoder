// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00765320
// Size: 240 bytes
// Signature: undefined __thiscall initialize(DensityMapModifierLua * this, TerrainDataPlane * param_1, uint param_2, uint param_3, uint param_4)


/* DensityMapModifierLua::initialize(TerrainDataPlane*, unsigned int, unsigned int, unsigned int) */

void __thiscall
DensityMapModifierLua::initialize
          (DensityMapModifierLua *this,TerrainDataPlane *param_1,uint param_2,uint param_3,
          uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  uint local_50;
  uint uStack_4c;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_50 = param_3;
  uStack_4c = param_2;
  DensityMapFilterLua::reportAndFixProblems
            (*(DensityMap **)(param_1 + 0x50),&uStack_4c,&local_50,param_4,"DensityMapModifier");
  uVar6 = local_50;
  lVar8 = *(long *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x80);
  this[0x68] = (DensityMapModifierLua)0x0;
  *(long *)this = lVar8;
  iVar1 = uStack_4c + param_4;
  lVar9 = 0;
  if (lVar8 != 0) {
    lVar9 = lVar8 + 0x58;
  }
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  iVar2 = 0;
  if (iVar3 != -1) {
    iVar2 = iVar3;
  }
  *(int *)(this + 0x58) = iVar1;
  *(uint *)(this + 0x5c) = local_50;
  *(long *)(this + 0x48) = lVar9;
  *(undefined8 *)(this + 0x60) = 0x7fffffff00000000;
  *(uint *)(this + 0x50) = (uint)(iVar3 == -1) << 1;
  *(int *)(this + 0x54) = iVar2;
  uVar7 = DensityMap::getPolygonRoundingMode();
  uVar4 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x20) = uVar7;
  lVar9 = *(long *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x38) = 0;
  *(int *)(this + 0x3c) = iVar1;
  *(uint *)(this + 0x40) = uVar6;
  *(uint *)(this + 0x44) = param_4;
  *(undefined4 *)(this + 0x30) = uVar4;
  *(undefined4 *)(this + 0x34) = uVar4;
  *(long *)(this + 0x28) = lVar9 + 0x170;
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


