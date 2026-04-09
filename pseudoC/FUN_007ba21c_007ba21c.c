// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ba21c
// Entry Point: 007ba21c
// Size: 340 bytes
// Signature: undefined FUN_007ba21c(void)


void FUN_007ba21c(VehicleNavigationAgentEntity *param_1,float *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar6 = *param_2;
  fVar7 = param_2[4];
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  fVar8 = param_2[8];
  RawTransformGroup::updateWorldTransformation();
  fVar7 = fVar7 - *(float *)(lVar4 + 0xec);
  fVar6 = fVar6 - *(float *)(lVar4 + 0xe8);
  fVar8 = fVar8 - *(float *)(lVar4 + 0xf0);
  uVar10 = NEON_fmadd(fVar6,*(undefined4 *)(lVar4 + 0xb8),fVar7 * *(float *)(lVar4 + 0xbc));
  uVar5 = NEON_fmadd(fVar6,*(undefined4 *)(lVar4 + 0xd8),fVar7 * *(float *)(lVar4 + 0xdc));
  fVar9 = param_2[0xc];
  fVar6 = (float)NEON_fmadd(fVar8,*(undefined4 *)(lVar4 + 0xc0),uVar10);
  fVar7 = (float)NEON_fmadd(fVar8,*(undefined4 *)(lVar4 + 0xe0),uVar5);
  fVar11 = param_2[0x10];
  fVar8 = param_2[0x14];
  if (((fVar9 == 0.0) && (fVar11 == 0.0)) && (fVar8 == 0.0)) {
    puVar2 = (undefined8 *)&local_60;
    local_68 = 0;
    puVar3 = &local_68;
    local_60 = fVar6;
    fStack_5c = fVar7;
  }
  else {
    uVar10 = NEON_fmadd(fVar9,*(undefined4 *)(lVar4 + 0xd8),*(float *)(lVar4 + 0xdc) * fVar11);
    uVar5 = NEON_fmadd(fVar9,*(undefined4 *)(lVar4 + 0xb8),*(float *)(lVar4 + 0xbc) * fVar11);
    fStack_5c = (float)NEON_fmadd(fVar8,*(undefined4 *)(lVar4 + 0xe0),uVar10);
    local_60 = (float)NEON_fmadd(fVar8,*(undefined4 *)(lVar4 + 0xc0),uVar5);
    fVar9 = (float)NEON_fmadd(local_60,local_60,fStack_5c * fStack_5c);
    fVar8 = 1.0;
    if (1e-06 < fVar9) {
      fVar8 = 1.0 / SQRT(fVar9);
    }
    local_60 = local_60 * fVar8;
    fStack_5c = fStack_5c * fVar8;
    puVar2 = &local_68;
    puVar3 = (undefined8 *)&local_60;
    local_68 = CONCAT44(fVar7,fVar6);
  }
  VehicleNavigationAgentEntity::setGoal(param_1,(Vector2 *)puVar2,(Vector2 *)puVar3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


