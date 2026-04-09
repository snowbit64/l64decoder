// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b95a4
// Entry Point: 007b95a4
// Size: 332 bytes
// Signature: undefined FUN_007b95a4(void)


void FUN_007b95a4(long param_1,float *param_2)

{
  long lVar1;
  DetourNavigationMeshQuery *this;
  ulong uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_5c;
  float local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  float local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined *)(param_2 + 0x40) = 0;
  param_2[0x42] = 4.203895e-45;
  param_2[0x44] = 0.0;
  param_2[0x46] = 5.605194e-45;
  this = (DetourNavigationMeshQuery *)NavigationMeshScenegraphNode::getNavigationMeshQuery();
  if (this != (DetourNavigationMeshQuery *)0x0) {
    RawTransformGroup::updateWorldTransformation();
    fVar5 = param_2[4] - *(float *)(param_1 + 0xec);
    fVar3 = *param_2 - *(float *)(param_1 + 0xe8);
    fVar9 = param_2[0x10] - *(float *)(param_1 + 0xec);
    uVar11 = NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 0xb8),fVar5 * *(float *)(param_1 + 0xbc));
    uVar12 = NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 200),fVar5 * *(float *)(param_1 + 0xcc));
    fVar7 = param_2[0xc] - *(float *)(param_1 + 0xe8);
    uVar4 = NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 0xd8),fVar5 * *(float *)(param_1 + 0xdc));
    fVar3 = param_2[8] - *(float *)(param_1 + 0xf0);
    uVar10 = NEON_fmadd(fVar7,*(undefined4 *)(param_1 + 0xb8),*(float *)(param_1 + 0xbc) * fVar9);
    fVar5 = param_2[0x14] - *(float *)(param_1 + 0xf0);
    uVar6 = NEON_fmadd(fVar7,*(undefined4 *)(param_1 + 200),*(float *)(param_1 + 0xcc) * fVar9);
    uVar8 = NEON_fmadd(fVar7,*(undefined4 *)(param_1 + 0xd8),*(float *)(param_1 + 0xdc) * fVar9);
    local_48 = (float)NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 0xc0),uVar11);
    uStack_44 = NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 0xd0),uVar12);
    local_40 = NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 0xe0),uVar4);
    local_58 = (float)NEON_fmadd(fVar5,*(undefined4 *)(param_1 + 0xc0),uVar10);
    uStack_54 = NEON_fmadd(fVar5,*(undefined4 *)(param_1 + 0xd0),uVar6);
    local_50 = NEON_fmadd(fVar5,*(undefined4 *)(param_1 + 0xe0),uVar8);
    uVar2 = DetourNavigationMeshQuery::raycast(this,&local_48,&local_58,&local_5c);
    if ((uVar2 & 1) != 0) {
      *(undefined *)(param_2 + 0x40) = 1;
      param_2[0x44] = local_5c;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


