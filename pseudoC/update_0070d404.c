// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0070d404
// Size: 1400 bytes
// Signature: undefined __thiscall update(AnimalLocomotionSystem * this, float param_1, bool param_2)


/* AnimalLocomotionSystem::update(float, bool) */

void __thiscall
AnimalLocomotionSystem::update(AnimalLocomotionSystem *this,float param_1,bool param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  AnimalLocomotionSystem AVar3;
  long lVar4;
  int iVar5;
  Bt2ScenegraphPhysicsContext *this_00;
  undefined8 *puVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_a8;
  float local_a4;
  float fStack_a0;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  if (this[0x24] == (AnimalLocomotionSystem)0x0) goto switchD_0070d470_caseD_9;
  switch(*(undefined4 *)this) {
  case 0:
    fVar16 = *(float *)(this + 0x28) - param_1;
    *(float *)(this + 0x28) = fVar16;
    if (*(int *)(this + 0x54) != 1) {
      if ((*(int *)(this + 0x54) != 0) || (0.0 < fVar16)) goto switchD_0070d470_caseD_9;
      *(undefined4 *)(this + 0x54) = 1;
LAB_0070d5a0:
      uVar14 = AnimalAnimationSystem::setState
                         ((AnimalAnimationSystem *)(this + 0x78),0xb,0xffffffff,false,0.0);
      *(undefined4 *)(this + 0x28) = uVar14;
      goto switchD_0070d470_caseD_9;
    }
    break;
  case 1:
    updateMoveCommand(this,param_1);
    goto switchD_0070d470_caseD_9;
  case 2:
    fVar16 = *(float *)(this + 0x28);
    iVar5 = *(int *)(this + 0x38);
    goto LAB_0070d51c;
  case 3:
    fVar16 = *(float *)(this + 0x28);
    iVar5 = *(int *)(this + 0x3c);
    goto LAB_0070d51c;
  case 4:
    fVar16 = *(float *)(this + 0x28) - param_1;
    *(float *)(this + 0x28) = fVar16;
    if (*(int *)(this + 0x48) != 1) {
      if ((*(int *)(this + 0x48) != 0) || (0.0 < fVar16)) goto switchD_0070d470_caseD_9;
      *(undefined4 *)(this + 0x48) = 1;
      goto LAB_0070d5a0;
    }
    break;
  case 5:
    fVar16 = *(float *)(this + 0x28);
    iVar5 = *(int *)(this + 0x4c);
LAB_0070d51c:
    fVar16 = fVar16 - param_1;
    *(float *)(this + 0x28) = fVar16;
    if (iVar5 != 0) goto switchD_0070d470_caseD_9;
    break;
  case 6:
    fVar16 = *(float *)(this + 0x28) - param_1;
    *(float *)(this + 0x28) = fVar16;
    if (*(int *)(this + 0x40) != 1) {
      if ((*(int *)(this + 0x40) != 0) || (0.0 < fVar16)) goto switchD_0070d470_caseD_9;
      *(undefined4 *)(this + 0x40) = 1;
      goto LAB_0070d5a0;
    }
    break;
  case 7:
    updateWanderCommand(this,param_1);
    goto switchD_0070d470_caseD_9;
  case 8:
    fVar16 = *(float *)(this + 0x28) - param_1;
    *(float *)(this + 0x28) = fVar16;
    if (*(int *)(this + 0x44) != 1) {
      if ((*(int *)(this + 0x44) != 0) || (0.0 < fVar16)) goto switchD_0070d470_caseD_9;
      *(undefined4 *)(this + 0x44) = 1;
      goto LAB_0070d5a0;
    }
    break;
  default:
    goto switchD_0070d470_caseD_9;
  }
  if (fVar16 <= 0.0) {
    *(undefined2 *)(this + 0x24) = 0x100;
  }
switchD_0070d470_caseD_9:
  puVar6 = *(undefined8 **)(this + 0x3b8);
  puVar1 = (undefined8 *)(this + 0x3dc);
  local_e0 = *(float *)(puVar6 + 1);
  local_e8._0_4_ = (float)*puVar6;
  uVar7 = *(undefined8 *)((long)puVar6 + 0xc);
  fVar16 = *(float *)((long)puVar6 + 0x14);
  fVar8 = (float)NEON_fmadd(*(float *)(this + 0x3cc) - local_e0,*(float *)(this + 0x3cc) - local_e0,
                            (*(float *)(this + 0x3c4) - (float)local_e8) *
                            (*(float *)(this + 0x3c4) - (float)local_e8));
  fVar10 = (float)NEON_fmin(SQRT(fVar8) * 4.0,0x3f800000);
  fVar9 = (float)NEON_fmadd(*(float *)(this + 0x3d4) - *(float *)(this + 0x3c8),fVar10,
                            *(float *)(this + 0x3c8));
  local_e8 = CONCAT44(fVar9,(float)local_e8);
  *(float *)(this + 0x3f4) = fVar9;
  if (fVar10 <= 0.0) {
    uVar12 = *puVar1;
    fVar10 = *(float *)(this + 0x3e4);
  }
  else if (1.0 <= fVar10) {
    uVar12 = *(undefined8 *)(this + 1000);
    fVar10 = *(float *)(this + 0x3f0);
  }
  else {
    fVar18 = (float)*puVar1;
    fVar20 = (float)((ulong)*puVar1 >> 0x20);
    uVar12 = CONCAT44(fVar20 + ((float)((ulong)*(undefined8 *)(this + 1000) >> 0x20) - fVar20) *
                               fVar10,
                      fVar18 + ((float)*(undefined8 *)(this + 1000) - fVar18) * fVar10);
    fVar10 = *(float *)(this + 0x3e4) +
             fVar10 * (*(float *)(this + 0x3f0) - *(float *)(this + 0x3e4));
  }
  fVar20 = (float)((ulong)uVar12 >> 0x20);
  local_f8._0_4_ = (float)uVar7;
  local_f8._4_4_ = (float)((ulong)uVar7 >> 0x20);
  fVar18 = (float)uVar12;
  fVar13 = (float)NEON_fnmadd(fVar20,fVar16,-(local_f8._4_4_ * -fVar10));
  fVar15 = (float)NEON_fnmadd(fVar18,local_f8._4_4_,-((float)local_f8 * -fVar20));
  uVar14 = NEON_fmadd(fVar10,(float)local_f8,fVar16 * -fVar18);
  fVar19 = (float)NEON_fnmadd(fVar10,(float)local_f8,-(fVar16 * -fVar18));
  fVar13 = fVar10 * fVar13 + ((float)local_f8 * -fVar20 + local_f8._4_4_ * fVar18) * fVar18;
  fVar15 = (float)NEON_fmadd(uVar14,fVar10,fVar15 * fVar20);
  fVar16 = fVar19 * fVar18 + (local_f8._4_4_ * -fVar10 + fVar16 * fVar20) * fVar20;
  uVar14 = NEON_fmadd(fVar15,fVar15,fVar13 * fVar13);
  fVar20 = (float)NEON_fmadd(fVar16,fVar16,uVar14);
  fVar18 = 1.0;
  if (1e-06 < fVar20) {
    fVar18 = 1.0 / SQRT(fVar20);
  }
  fVar15 = fVar15 * fVar18;
  fVar13 = fVar13 * fVar18;
  fVar16 = fVar16 * fVar18;
  local_f8 = CONCAT44(fVar13,fVar15);
  local_f0 = fVar16;
  if ((0.25 < SQRT(fVar8)) || (this[0x3f8] != (AnimalLocomotionSystem)0x0)) {
    puVar6 = (undefined8 *)(this + 0x3d0);
    *(undefined8 *)(this + 0x3dc) = uVar12;
    *(float *)(this + 0x3e4) = fVar10;
    *(float *)(this + 0x3cc) = local_e0;
    *(undefined8 *)(this + 0x3c4) = local_e8;
    fVar9 = fVar9 + fVar13 * 0.25;
    fVar18 = *(float *)(*(long *)(this + 0x3b0) + 0x4d8);
    fVar10 = (float)local_e8 + fVar15 * 0.25;
    uVar2 = *(uint *)(*(long *)(this + 0x3b0) + 0x4dc);
    fVar8 = local_e0 + fVar16 * 0.25;
    local_a4 = fVar9 + fVar18;
    local_d8 = &PTR__IRaycastReport_00fd9d48;
    local_b0 = 0;
    local_b8 = 0xbf80000000000000;
    local_a8 = fVar10;
    fStack_a0 = fVar8;
    ScenegraphPhysicsContextManager::getInstance();
    this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    iVar5 = Bt2ScenegraphPhysicsContext::raycastShapes
                      (this_00,(Vector3 *)&local_a8,(Vector3 *)&local_b8,(IRaycastReport *)&local_d8
                       ,fVar18 + fVar18,true,uVar2,true,true,0);
    if (iVar5 == 0) {
      *(float *)(this + 0x3d0) = fVar10;
      *(float *)(this + 0x3d4) = fVar9;
      *(float *)(this + 0x3d8) = fVar8;
      *(undefined4 *)(this + 0x3f0) = 0;
      *(undefined8 *)(this + 1000) = 0x3f80000000000000;
      AVar3 = this[0x3f8];
    }
    else {
      *puVar6 = local_d0;
      *(undefined4 *)(this + 0x3d8) = local_c8;
      *(undefined8 *)(this + 1000) = local_c4;
      *(undefined4 *)(this + 0x3f0) = local_bc;
      AVar3 = this[0x3f8];
    }
    if (AVar3 != (AnimalLocomotionSystem)0x0) {
      fVar9 = *(float *)(this + 0x3f0);
      fVar10 = *(float *)(this + 0x3ec);
      fVar18 = *(float *)(this + 1000);
      this[0x3f8] = (AnimalLocomotionSystem)0x0;
      *puVar1 = *(undefined8 *)(this + 1000);
      *(undefined4 *)(this + 0x3e4) = *(undefined4 *)(this + 0x3f0);
      *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(this + 0x3d8);
      fVar20 = (float)NEON_fnmadd(fVar10,fVar16,-(fVar13 * -fVar9));
      fVar8 = (float)NEON_fnmadd(fVar18,fVar13,-(fVar15 * -fVar10));
      uVar14 = NEON_fmadd(fVar18,fVar13,fVar15 * -fVar10);
      uVar11 = NEON_fmadd(fVar10,fVar16,fVar13 * -fVar9);
      uVar17 = NEON_fmadd(fVar9,fVar15,fVar16 * -fVar18);
      fVar16 = (float)NEON_fmadd(uVar14,fVar18,fVar9 * fVar20);
      fVar20 = (float)NEON_fnmadd(fVar9,fVar15,-(fVar16 * -fVar18));
      fVar8 = (float)NEON_fmadd(uVar17,fVar9,fVar10 * fVar8);
      local_f0 = (float)NEON_fmadd(uVar11,fVar10,fVar18 * fVar20);
      uVar14 = NEON_fmadd(fVar8,fVar8,fVar16 * fVar16);
      fVar10 = (float)NEON_fmadd(local_f0,local_f0,uVar14);
      fVar9 = 1.0;
      *(undefined8 *)(this + 0x3c4) = *puVar6;
      if (1e-06 < fVar10) {
        fVar9 = 1.0 / SQRT(fVar10);
      }
      local_e8 = *puVar6;
      local_f0 = local_f0 * fVar9;
      local_e0 = *(float *)(this + 0x3d8);
      local_f8 = CONCAT44(fVar16 * fVar9,fVar8 * fVar9);
    }
  }
  AnimalAnimationSystem::setPose
            ((AnimalAnimationSystem *)(this + 0x78),(Vector3 *)&local_e8,(Vector3 *)&local_f8,
             param_2);
  AnimalAnimationSystem::update((AnimalAnimationSystem *)(this + 0x78),param_1,param_2);
  if (s_debugRenderingEnabled != '\0') {
    debugDrawStates();
  }
  if (*(long *)(lVar4 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


