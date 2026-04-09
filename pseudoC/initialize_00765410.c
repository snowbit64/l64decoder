// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00765410
// Size: 228 bytes
// Signature: undefined __thiscall initialize(DensityMapModifierLua * this, DensityMapEntity * param_1, BaseTerrain * param_2, uint param_3, uint param_4, uint param_5)


/* DensityMapModifierLua::initialize(DensityMapEntity*, BaseTerrain*, unsigned int, unsigned int,
   unsigned int) */

void __thiscall
DensityMapModifierLua::initialize
          (DensityMapModifierLua *this,DensityMapEntity *param_1,BaseTerrain *param_2,uint param_3,
          uint param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  uint local_50;
  uint uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_50 = param_4;
  uStack_4c = param_3;
  DensityMapFilterLua::reportAndFixProblems
            (*(DensityMap **)(param_1 + 0x20),&uStack_4c,&local_50,param_5,"DensityMapModifier");
  uVar4 = local_50;
  lVar6 = *(long *)(param_1 + 0x20);
  this[0x68] = (DensityMapModifierLua)0x0;
  *(undefined8 *)(this + 0x50) = 2;
  lVar2 = 0;
  if (lVar6 != 0) {
    lVar2 = lVar6 + 0x58;
  }
  *(long *)this = lVar6;
  iVar1 = uStack_4c + param_5;
  *(undefined8 *)(this + 0x60) = 0x7fffffff00000000;
  *(long *)(this + 0x48) = lVar2;
  *(int *)(this + 0x58) = iVar1;
  *(uint *)(this + 0x5c) = local_50;
  *(undefined8 *)(this + 0x6c) = 0;
  uVar5 = DensityMap::getPolygonRoundingMode();
  *(undefined4 *)(this + 0x38) = 0;
  *(int *)(this + 0x3c) = iVar1;
  *(undefined4 *)(this + 0x20) = uVar5;
  *(uint *)(this + 0x40) = uVar4;
  *(uint *)(this + 0x44) = param_5;
  *(BaseTerrain **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = 0;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


