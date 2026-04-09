// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00703c54
// Size: 224 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalOutsideNavMeshCondition::onInitialize() */

void AnimalOutsideNavMeshCondition::onInitialize(void)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long in_x0;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  bool local_5c [4];
  float afStack_58 [4];
  float afStack_48 [4];
  float local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  pfVar1 = *(float **)(in_x0 + 0x28);
  lVar2 = *(long *)(in_x0 + 0x30);
  local_5c[0] = false;
  fVar6 = pfVar1[1] - *(float *)(lVar2 + 0x38);
  fVar4 = *pfVar1 - *(float *)(lVar2 + 0x34);
  fVar9 = pfVar1[2] - *(float *)(lVar2 + 0x3c);
  uVar7 = NEON_fmadd(fVar4,*(undefined4 *)(lVar2 + 4),fVar6 * *(float *)(lVar2 + 8));
  uVar8 = NEON_fmadd(fVar4,*(undefined4 *)(lVar2 + 0x14),fVar6 * *(float *)(lVar2 + 0x18));
  uVar5 = NEON_fmadd(fVar4,*(undefined4 *)(lVar2 + 0x24),fVar6 * *(float *)(lVar2 + 0x28));
  local_30 = NEON_fmadd(fVar9,*(undefined4 *)(lVar2 + 0x2c),uVar5);
  local_38 = (float)NEON_fmadd(fVar9,*(undefined4 *)(lVar2 + 0xc),uVar7);
  uStack_34 = NEON_fmadd(fVar9,*(undefined4 *)(lVar2 + 0x1c),uVar8);
  DetourNavigationMeshQuery::findDistanceToWall
            (*(DetourNavigationMeshQuery **)(lVar2 + 0x50),&local_38,0.01,local_5c,afStack_48,
             afStack_58);
  uVar5 = 1;
  if (local_5c[0] != false) {
    uVar5 = 2;
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


