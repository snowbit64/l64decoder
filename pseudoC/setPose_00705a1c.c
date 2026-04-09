// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPose
// Entry Point: 00705a1c
// Size: 556 bytes
// Signature: undefined __thiscall setPose(AnimalAnimationSystem * this, Vector3 * param_1, Vector3 * param_2, bool param_3)


/* AnimalAnimationSystem::setPose(Vector3 const&, Vector3 const&, bool) */

void __thiscall
AnimalAnimationSystem::setPose
          (AnimalAnimationSystem *this,Vector3 *param_1,Vector3 *param_2,bool param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (this[0x2d8] != (AnimalAnimationSystem)0x0) {
    fVar7 = 1.0;
    uVar3 = NEON_fmadd(*(float *)(this + 0x2e0) - *(float *)(param_1 + 4),
                       *(float *)(this + 0x2e0) - *(float *)(param_1 + 4),
                       (*(float *)(this + 0x2dc) - *(float *)param_1) *
                       (*(float *)(this + 0x2dc) - *(float *)param_1));
    fVar4 = (float)NEON_fmadd(*(float *)(this + 0x2e4) - *(float *)(param_1 + 8),
                              *(float *)(this + 0x2e4) - *(float *)(param_1 + 8),uVar3);
    *(float *)(this + 0x2f4) = SQRT(fVar4);
    uVar2 = *(undefined8 *)param_1;
    *(undefined4 *)(this + 0x2e4) = *(undefined4 *)(param_1 + 8);
    *(undefined8 *)(this + 0x2dc) = uVar2;
    uVar3 = NEON_fmadd(*(float *)param_2,*(undefined4 *)(this + 0x2e8),
                       *(float *)(param_2 + 4) * *(float *)(this + 0x2ec));
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),*(float *)(this + 0x2f0),uVar3);
    fVar6 = (float)NEON_fmin(fVar5,0x3f800000);
    fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)(this + 0x2e8),
                              *(float *)(this + 0x2f0) * -*(float *)param_2);
    fVar4 = -1.0;
    if (-1.0 <= fVar5) {
      fVar4 = fVar6;
    }
    fVar5 = acosf(fVar4);
    fVar4 = -fVar5;
    if (fVar8 <= 0.0) {
      fVar4 = fVar5;
    }
    *(float *)(this + 0x2f8) = fVar4;
    uVar3 = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)(this + 0x2e8) = *(undefined8 *)param_2;
    *(undefined4 *)(this + 0x2f0) = uVar3;
    if (!param_3) {
      fVar5 = *(float *)param_2;
      fStack_74 = *(float *)(param_2 + 4);
      local_8c = 0;
      local_7c = 0;
      local_6c = 0;
      uVar3 = NEON_fmadd(fVar5,fVar5,fStack_74 * fStack_74);
      local_70 = *(float *)(param_2 + 8);
      local_5c = 0x3f800000;
      fVar4 = (float)NEON_fmadd(local_70,local_70,uVar3);
      if (1e-06 < fVar4) {
        fVar7 = 1.0 / SQRT(fVar4);
      }
      local_70 = local_70 * fVar7;
      local_78 = fVar5 * fVar7;
      fStack_74 = fStack_74 * fVar7;
      fStack_94 = (float)NEON_fmadd(local_78,0,local_70 * -0.0);
      local_90 = (float)NEON_fnmsub(fStack_74,0,local_78);
      local_98 = local_70 + fStack_74 * -0.0;
      uVar3 = NEON_fmadd(local_98,local_98,fStack_94 * fStack_94);
      fVar6 = (float)NEON_fmadd(local_90,local_90,uVar3);
      fVar4 = 1.0;
      if (1e-06 < fVar6) {
        fVar4 = 1.0 / SQRT(fVar6);
      }
      fStack_94 = fStack_94 * fVar4;
      local_98 = local_98 * fVar4;
      local_90 = local_90 * fVar4;
      local_68 = *(undefined8 *)param_1;
      local_88 = NEON_fmadd(fStack_74,local_90,fStack_94 * -local_70);
      uStack_84 = NEON_fmadd(local_70,local_98,local_90 * -(fVar5 * fVar7));
      local_60 = *(undefined4 *)(param_1 + 8);
      local_80 = NEON_fmadd(local_78,fStack_94,local_98 * -fStack_74);
      RawTransformGroup::setTransformation
                (*(RawTransformGroup **)(this + 0x290),(Matrix4x4 *)&local_98,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


