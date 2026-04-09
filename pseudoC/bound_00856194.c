// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bound
// Entry Point: 00856194
// Size: 552 bytes
// Signature: undefined __thiscall bound(JointLimits * this, Matrix4x4 * param_1)


/* CCDIKSolverUtil::JointLimits::bound(Matrix4x4&) const */

void __thiscall CCDIKSolverUtil::JointLimits::bound(JointLimits *this,Matrix4x4 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar11 = *(undefined4 *)(this + 8);
  fVar10 = *(float *)(this + 0xc);
  uVar12 = *(undefined4 *)(this + 0x10);
  uVar13 = *(undefined4 *)(this + 0x14);
  GsQuaternion::set((GsQuaternion *)&local_68,param_1);
  uVar4 = NEON_fmadd(uVar11,local_68,fVar10 * local_64);
  uVar7 = NEON_fmadd(uVar11,local_5c,fStack_60 * -fVar10);
  uVar8 = NEON_fmadd(uVar11,fStack_60,fVar10 * local_5c);
  uVar11 = NEON_fmadd(uVar11,local_64,local_68 * -fVar10);
  uVar4 = NEON_fmadd(uVar12,fStack_60,uVar4);
  uVar7 = NEON_fmadd(uVar12,local_64,uVar7);
  uVar8 = NEON_fmsub(uVar12,local_68,uVar8);
  uVar11 = NEON_fmsub(uVar12,local_5c,uVar11);
  fVar2 = (float)NEON_fmadd(uVar13,local_5c,uVar4);
  local_6c = (float)NEON_fmsub(uVar13,local_68,uVar7);
  local_70 = (float)NEON_fmsub(uVar13,local_64,uVar8);
  fVar10 = (float)NEON_fmadd(uVar13,fStack_60,uVar11);
  if (fVar2 < 0.0) {
    local_6c = -local_6c;
    local_70 = -local_70;
    fVar10 = -fVar10;
  }
  fVar2 = *(float *)(this + 4);
  if (fVar10 <= *(float *)(this + 4)) {
    fVar2 = fVar10;
  }
  fVar3 = *(float *)this;
  if (*(float *)this <= fVar10) {
    fVar3 = fVar2;
  }
  Ellipse2::clamp((Ellipse2 *)(this + 0x18),&local_70,&local_6c,1e-05,0x32);
  uVar4 = NEON_fmadd(fVar3,fVar3,local_70 * local_70);
  fVar2 = (float)NEON_fmadd(local_6c,local_6c,uVar4);
  fVar10 = 1.0 - fVar2;
  if (1.0 - fVar2 <= 0.0) {
    fVar10 = 0.0;
  }
  uVar4 = *(undefined4 *)(this + 8);
  fVar2 = *(float *)(this + 0xc);
  fVar10 = SQRT(fVar10);
  uVar8 = NEON_fmadd(uVar4,local_6c,local_70 * fVar2);
  uVar11 = NEON_fmadd(uVar4,local_70,local_6c * -fVar2);
  uVar7 = NEON_fmadd(uVar4,fVar10,fVar3 * -fVar2);
  uVar4 = NEON_fmadd(uVar4,fVar3,fVar2 * fVar10);
  uVar13 = *(undefined4 *)(this + 0x10);
  uVar12 = *(undefined4 *)(this + 0x14);
  uVar8 = NEON_fmsub(uVar13,fVar3,uVar8);
  uVar11 = NEON_fmadd(uVar13,fVar10,uVar11);
  uVar7 = NEON_fmsub(uVar13,local_70,uVar7);
  uVar4 = NEON_fmadd(uVar13,local_6c,uVar4);
  fVar6 = (float)NEON_fmadd(uVar12,fVar10,uVar8);
  fVar3 = (float)NEON_fmadd(uVar12,fVar3,uVar11);
  fVar2 = (float)NEON_fmsub(uVar12,local_6c,uVar7);
  fVar10 = (float)NEON_fmsub(uVar12,local_70,uVar4);
  fVar5 = fVar6 * fVar2 + fVar3 * fVar10;
  fVar9 = fVar3 * fVar10 - fVar6 * fVar2;
  fVar16 = fVar6 * fVar10 - fVar3 * fVar2;
  fVar14 = fVar3 * fVar2 + fVar6 * fVar10;
  uVar8 = NEON_fmadd(fVar6 * fVar6 + fVar3 * fVar3,0xc0000000,0x3f800000);
  fVar15 = fVar6 * fVar3 + fVar2 * fVar10;
  fVar2 = fVar6 * fVar3 - fVar2 * fVar10;
  uVar7 = NEON_fmadd(fVar6 * fVar6 + fVar10 * fVar10,0xc0000000,0x3f800000);
  uVar4 = NEON_fmadd(fVar3 * fVar3 + fVar10 * fVar10,0xc0000000,0x3f800000);
  *(undefined4 *)param_1 = uVar8;
  *(float *)(param_1 + 4) = fVar5 + fVar5;
  *(float *)(param_1 + 8) = fVar16 + fVar16;
  *(float *)(param_1 + 0x10) = fVar9 + fVar9;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  *(float *)(param_1 + 0x18) = fVar15 + fVar15;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(float *)(param_1 + 0x20) = fVar14 + fVar14;
  *(float *)(param_1 + 0x24) = fVar2 + fVar2;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


