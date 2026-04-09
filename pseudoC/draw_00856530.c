// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: draw
// Entry Point: 00856530
// Size: 704 bytes
// Signature: undefined __thiscall draw(JointLimits * this, Matrix4x4 * param_1, Vector3 * param_2, float param_3, DeferredDebugRenderer * param_4)


/* CCDIKSolverUtil::JointLimits::draw(Matrix4x4 const&, Vector3 const&, float,
   DeferredDebugRenderer*) const */

void __thiscall
CCDIKSolverUtil::JointLimits::draw
          (JointLimits *this,Matrix4x4 *param_1,Vector3 *param_2,float param_3,
          DeferredDebugRenderer *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_e0;
  float fStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  float local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  float local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  fVar2 = asinf(*(float *)(this + 0x18));
  fVar3 = asinf(*(float *)(this + 0x1c));
  GsQuaternion::set((GsQuaternion *)&local_e0,param_1);
  fVar7 = *(float *)(this + 0xc);
  fVar5 = *(float *)(this + 0x10);
  fVar6 = *(float *)(this + 8);
  fVar9 = *(float *)(this + 0x14);
  uVar11 = NEON_fmadd(local_e0,fVar9,fStack_dc * fVar5);
  uVar4 = NEON_fmadd(local_e0,fVar7,fStack_dc * fVar6);
  uVar18 = NEON_fmadd(local_e0,fVar5,fVar9 * -fStack_dc);
  uVar8 = NEON_fmadd(local_e0,fVar6,fVar7 * -fStack_dc);
  uVar11 = NEON_fmsub(local_d8,fVar7,uVar11);
  uVar4 = NEON_fmadd(local_d8,fVar9,uVar4);
  uVar18 = NEON_fmadd(local_d8,fVar6,uVar18);
  uVar8 = NEON_fmsub(local_d8,fVar5,uVar8);
  fVar15 = (float)NEON_fmadd(uStack_d4,fVar6,uVar11);
  fVar14 = (float)NEON_fmsub(uStack_d4,fVar5,uVar4);
  fVar16 = (float)NEON_fmadd(uStack_d4,fVar7,uVar18);
  fVar17 = (float)NEON_fmsub(uStack_d4,fVar9,uVar8);
  uVar4 = NEON_fmadd(fVar17,0,fVar16);
  uVar8 = NEON_fmadd(fVar17,0,fVar15);
  fVar7 = (float)NEON_fmadd(fVar17,0,fVar15 * 0.0);
  fVar5 = (float)NEON_fmadd(fVar17,0,fVar14 * 0.0);
  fVar6 = (float)NEON_fmadd(fVar15,0x80000000,uVar4);
  fVar12 = (float)NEON_fmadd(fVar14,0x80000000,fVar16 * -0.0);
  fVar7 = fVar7 - fVar14;
  fVar9 = (float)NEON_fmadd(fVar16,0x80000000,fVar17 + fVar14 * 0.0);
  fVar10 = (float)NEON_fmadd(fVar14,0x80000000,uVar8);
  fVar5 = fVar5 - fVar16;
  fVar13 = (float)NEON_fmadd(fVar15,0x80000000,fVar17 + fVar16 * 0.0);
  fVar12 = fVar12 - fVar15;
  uVar4 = NEON_fmadd(fVar15,0x80000000,fVar16 * -0.0 - fVar14);
  uVar11 = NEON_fmsub(fVar12,fVar14,fVar17 * fVar6);
  uVar18 = NEON_fmsub(fVar12,fVar16,fVar17 * fVar7);
  uVar8 = NEON_fmsub(fVar12,fVar15,fVar17 * fVar9);
  uVar19 = NEON_fmsub(uVar4,fVar16,fVar17 * fVar10);
  uVar20 = NEON_fmsub(uVar4,fVar15,fVar17 * fVar5);
  uVar4 = NEON_fmsub(uVar4,fVar14,fVar17 * fVar13);
  uVar11 = NEON_fmsub(fVar7,fVar15,uVar11);
  uVar18 = NEON_fmsub(fVar9,fVar14,uVar18);
  uVar8 = NEON_fmsub(fVar6,fVar16,uVar8);
  uVar19 = NEON_fmsub(fVar5,fVar14,uVar19);
  uVar20 = NEON_fmsub(fVar13,fVar16,uVar20);
  uVar4 = NEON_fmsub(fVar10,fVar15,uVar4);
  local_98 = (float)NEON_fmadd(fVar16,fVar9,uVar11);
  uStack_94 = NEON_fmadd(fVar15,fVar6,uVar18);
  local_90 = NEON_fmadd(fVar14,fVar7,uVar8);
  local_a4 = NEON_fmadd(fVar15,fVar13,uVar19);
  uStack_a0 = NEON_fmadd(fVar14,fVar10,uVar20);
  local_a8 = (float)NEON_fmadd(fVar16,fVar5,uVar4);
  uStack_b8 = 0x3f80000000000000;
  local_c0 = 0x3f800000;
  DeferredDebugRenderer::addSpherePatch
            (param_4,(float *)param_2,&local_98,&local_a8,param_3,-(fVar2 + fVar2),fVar2 + fVar2,
             -(fVar3 + fVar3),fVar3 + fVar3,0.1,true,(float *)&local_c0,0x7ff);
  fVar2 = asinf(*(float *)(this + 4));
  uVar4 = NEON_fmadd(fVar17,0,fVar14);
  uVar8 = NEON_fnmsub(fVar14,0x80000000,fVar16);
  fVar3 = (float)NEON_fmadd(fVar17,0,fVar16 * 0.0);
  fVar6 = (float)NEON_fmadd(fVar16,0x80000000,uVar4);
  uVar4 = NEON_fmadd(fVar15,0x80000000,uVar8);
  fVar3 = fVar3 - fVar15;
  fVar5 = (float)NEON_fmadd(fVar14,0x80000000,fVar17 + fVar15 * 0.0);
  uVar8 = NEON_fmsub(uVar4,fVar14,fVar17 * fVar3);
  uVar11 = NEON_fmsub(uVar4,fVar16,fVar17 * fVar5);
  uVar4 = NEON_fmsub(uVar4,fVar15,fVar17 * fVar6);
  uVar8 = NEON_fmsub(fVar5,fVar15,uVar8);
  uVar11 = NEON_fmsub(fVar6,fVar14,uVar11);
  uVar4 = NEON_fmsub(fVar3,fVar16,uVar4);
  local_d0 = (float)NEON_fmadd(fVar16,fVar6,uVar8);
  uStack_cc = NEON_fmadd(fVar15,fVar3,uVar11);
  local_c8 = NEON_fmadd(fVar14,fVar5,uVar4);
  DeferredDebugRenderer::addArc
            (param_4,(float *)param_2,&local_a8,&local_d0,param_3,param_3,-(fVar2 + fVar2),
             fVar2 + fVar2,0.1,true,(float *)&local_c0,0x7ff);
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


