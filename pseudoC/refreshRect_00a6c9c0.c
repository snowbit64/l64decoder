// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refreshRect
// Entry Point: 00a6c9c0
// Size: 208 bytes
// Signature: undefined __thiscall refreshRect(DensityAnimationMap * this, uint param_1, uint param_2, uint param_3, uint param_4, bool param_5)


/* DensityAnimationMap::refreshRect(unsigned int, unsigned int, unsigned int, unsigned int, bool) */

void __thiscall
DensityAnimationMap::refreshRect
          (DensityAnimationMap *this,uint param_1,uint param_2,uint param_3,uint param_4,
          bool param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint local_68;
  uint uStack_64;
  undefined local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar6 = *(uint *)(this + 0x50);
  uVar5 = 0;
  if (uVar6 != 0) {
    uVar5 = (*(int *)(this + 0x4c) + param_3) / uVar6;
  }
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = (*(int *)(this + 0x4c) + param_4) / uVar6;
  }
  if (uVar5 < uVar1) {
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = (*(int *)(this + 0x48) + param_1) / uVar6;
    }
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = (*(int *)(this + 0x48) + param_2) / uVar6;
    }
    do {
      uVar6 = uVar2;
      if (uVar2 < uVar3) {
        do {
          local_68 = uVar6;
          uStack_64 = uVar5;
          local_60 = param_5;
          FUN_00a6ca90(this + 0x408,&local_68);
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar3);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


