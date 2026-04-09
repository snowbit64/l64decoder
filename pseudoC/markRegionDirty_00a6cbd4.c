// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markRegionDirty
// Entry Point: 00a6cbd4
// Size: 276 bytes
// Signature: undefined __thiscall markRegionDirty(DensityAnimationMap * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* DensityAnimationMap::markRegionDirty(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
DensityAnimationMap::markRegionDirty
          (DensityAnimationMap *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint local_68;
  uint uStack_64;
  undefined local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  uVar2 = *(uint *)(this + 0x20);
  uVar9 = *(uint *)(this + 0x48);
  uVar1 = *(uint *)(this + 0x4c);
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = param_1 / uVar2;
  }
  uVar8 = 0;
  if (uVar2 != 0) {
    uVar8 = param_2 / uVar2;
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = ((uVar2 - 1) + param_3) / uVar2;
  }
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = ((uVar2 - 1) + param_4) / uVar2;
  }
  uVar2 = uVar9;
  if (uVar9 <= uVar4) {
    uVar2 = uVar4;
  }
  uVar3 = *(uint *)(this + 0x50);
  uVar4 = uVar1;
  if (uVar1 <= uVar8) {
    uVar4 = uVar8;
  }
  uVar8 = 0;
  if (uVar3 != 0) {
    uVar8 = uVar4 / uVar3;
  }
  uVar9 = *(int *)(this + 0x6c) + uVar9;
  uVar1 = *(int *)(this + 0x6c) + uVar1;
  if (uVar5 <= uVar9) {
    uVar9 = uVar5;
  }
  if (uVar6 <= uVar1) {
    uVar1 = uVar6;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = (uVar1 + (uVar3 - 1)) / uVar3;
  }
  if (uVar8 < uVar4) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar2 / uVar3;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = (uVar9 + (uVar3 - 1)) / uVar3;
    }
    do {
      uVar9 = uVar1;
      if (uVar1 < uVar2) {
        do {
          local_60 = 0;
          local_68 = uVar9;
          uStack_64 = uVar8;
          FUN_00a6ca90(this + 0x408,&local_68);
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar2);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar4);
  }
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


