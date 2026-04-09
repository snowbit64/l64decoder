// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugRenderJoints
// Entry Point: 00855d0c
// Size: 1052 bytes
// Signature: undefined __cdecl debugRenderJoints(Joint * param_1, uint param_2, Matrix4x4 * param_3, bool param_4, DeferredDebugRenderer * param_5)


/* CCDIKSolverUtil::debugRenderJoints(CCDIKSolverUtil::Joint const*, unsigned int, Matrix4x4 const&,
   bool, DeferredDebugRenderer*) */

void CCDIKSolverUtil::debugRenderJoints
               (Joint *param_1,uint param_2,Matrix4x4 *param_3,bool param_4,
               DeferredDebugRenderer *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float local_190;
  float local_18c;
  undefined8 local_188;
  float local_180;
  float fStack_17c;
  float local_178;
  float local_170;
  float fStack_16c;
  float local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float local_150;
  float fStack_14c;
  float local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float local_130;
  float fStack_12c;
  float local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  if (1 < param_2) {
    local_108 = *(undefined8 *)(param_3 + 0x18);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uStack_f8 = *(undefined8 *)(param_3 + 0x28);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    uVar15 = NEON_fmov(0x3f800000,4);
    uVar6 = 0;
    uStack_118 = *(undefined8 *)(param_3 + 8);
    uVar8 = *(undefined8 *)param_3;
    uVar10 = *(undefined4 *)(param_1 + 0x20);
    fVar11 = *(float *)(param_1 + 0x24);
    uStack_e8 = *(undefined8 *)(param_3 + 0x38);
    uVar13 = *(undefined8 *)(param_3 + 0x30);
    uVar19 = *(undefined4 *)(param_1 + 0x28);
    local_110._0_4_ = (float)uVar7;
    local_110._4_4_ = (float)((ulong)uVar7 >> 0x20);
    local_120._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
    uVar16 = *(undefined4 *)(param_1 + 0x30);
    fVar18 = *(float *)(param_1 + 0x34);
    local_120._0_4_ = (undefined4)uVar8;
    local_100._0_4_ = (undefined4)uVar9;
    local_100._4_4_ = (undefined4)((ulong)uVar9 >> 0x20);
    uVar14 = NEON_fmadd(uVar10,(undefined4)local_120,fVar11 * (float)local_110);
    uVar17 = NEON_fmadd(uVar10,local_120._4_4_,fVar11 * local_110._4_4_);
    uVar10 = NEON_fmadd(uVar10,(undefined4)uStack_118,fVar11 * (float)local_108);
    uStack_154 = 0;
    uVar12 = NEON_fmadd(uVar16,(undefined4)local_120,(float)local_110 * fVar18);
    uVar20 = NEON_fmadd(uVar16,local_120._4_4_,local_110._4_4_ * fVar18);
    local_160 = NEON_fmadd(uVar19,(undefined4)local_100,uVar14);
    uStack_15c = NEON_fmadd(uVar19,local_100._4_4_,uVar17);
    uVar14 = *(undefined4 *)(param_1 + 0x38);
    uStack_158 = NEON_fmadd(uVar19,(undefined4)uStack_f8,uVar10);
    uVar10 = NEON_fmadd(uVar16,(undefined4)uStack_118,(float)local_108 * fVar18);
    local_f0._0_4_ = (float)uVar13;
    uVar16 = *(undefined4 *)(param_1 + 0x40);
    fVar18 = *(float *)(param_1 + 0x44);
    local_150 = (float)NEON_fmadd(uVar14,(undefined4)local_100,uVar12);
    fStack_14c = (float)NEON_fmadd(uVar14,local_100._4_4_,uVar20);
    local_148 = (float)NEON_fmadd(uVar14,(undefined4)uStack_f8,uVar10);
    fVar11 = *(float *)(param_1 + 0x54);
    local_144 = 0;
    uVar12 = NEON_fmadd(uVar16,(undefined4)local_120,(float)local_110 * fVar18);
    uVar14 = NEON_fmadd(uVar16,local_120._4_4_,local_110._4_4_ * fVar18);
    uVar19 = *(undefined4 *)(param_1 + 0x50);
    uVar16 = NEON_fmadd(uVar16,(undefined4)uStack_118,(float)local_108 * fVar18);
    uVar20 = *(undefined4 *)(param_1 + 0x48);
    uStack_134 = 0;
    uVar10 = NEON_fmadd(uVar19,(undefined4)local_120,(float)local_110 * fVar11);
    uVar17 = NEON_fmadd(uVar19,local_120._4_4_,local_110._4_4_ * fVar11);
    local_140 = NEON_fmadd(uVar20,(undefined4)local_100,uVar12);
    uStack_13c = NEON_fmadd(uVar20,local_100._4_4_,uVar14);
    uVar12 = *(undefined4 *)(param_1 + 0x58);
    uStack_138 = NEON_fmadd(uVar20,(undefined4)uStack_f8,uVar16);
    local_124 = 0x3f800000;
    local_130 = (float)NEON_fmadd(uVar12,(undefined4)local_100,uVar10);
    fStack_12c = (float)NEON_fmadd(uVar12,local_100._4_4_,uVar17);
    uVar10 = NEON_fmadd(uVar19,(undefined4)uStack_118,(float)local_108 * fVar11);
    local_f0._4_4_ = (float)((ulong)uVar13 >> 0x20);
    local_130 = (float)local_f0 + local_130;
    local_128 = (float)NEON_fmadd(uVar12,(undefined4)uStack_f8,uVar10);
    fStack_12c = fStack_12c + local_f0._4_4_;
    local_128 = local_128 + (float)uStack_e8;
    local_120 = uVar8;
    local_110 = uVar7;
    local_100 = uVar9;
    local_f0 = uVar13;
    do {
      uVar8 = CONCAT44(uStack_154,uStack_158);
      uVar7 = CONCAT44(uStack_15c,local_160);
      uVar13 = CONCAT44(local_144,local_148);
      uVar9 = CONCAT44(fStack_14c,local_150);
      uStack_154 = 0;
      local_144 = 0;
      local_190 = 1.0;
      fVar18 = *(float *)((JointLimits *)param_1 + 0x138);
      uStack_d8 = uStack_118;
      local_e0 = local_120;
      uStack_c8 = local_108;
      uStack_d0 = local_110;
      uVar3 = CONCAT44(uStack_134,uStack_138);
      uVar2 = CONCAT44(uStack_13c,local_140);
      uVar5 = CONCAT44(local_124,local_128);
      uVar4 = CONCAT44(fStack_12c,local_130);
      uStack_134 = 0;
      local_124 = 0x3f800000;
      uVar12 = *(undefined4 *)((JointLimits *)param_1 + 0x134);
      uVar10 = NEON_fmadd(uVar12,local_160,local_150 * fVar18);
      uStack_b8 = uStack_f8;
      local_c0 = local_100;
      uStack_a8 = uStack_e8;
      uStack_b0 = local_f0;
      uVar16 = *(undefined4 *)((JointLimits *)param_1 + 0x13c);
      uVar14 = NEON_fmadd(uVar12,uStack_15c,fStack_14c * fVar18);
      local_180 = (float)NEON_fmadd(uVar16,local_140,uVar10);
      fVar11 = *(float *)((JointLimits *)param_1 + 0x118);
      uVar10 = *(undefined4 *)((JointLimits *)param_1 + 0x114);
      uVar24 = *(undefined4 *)((JointLimits *)param_1 + 0x10c);
      uVar12 = NEON_fmadd(uVar12,uStack_158,local_148 * fVar18);
      fStack_17c = (float)NEON_fmadd(uVar16,uStack_13c,uVar14);
      local_180 = local_130 + local_180;
      local_178 = (float)NEON_fmadd(uVar16,uStack_138,uVar12);
      uVar14 = NEON_fmadd(uVar10,local_160,local_150 * fVar11);
      fStack_17c = fStack_17c + fStack_12c;
      local_170 = local_130;
      fStack_16c = fStack_12c;
      uVar16 = NEON_fmadd(uVar10,uStack_15c,fStack_14c * fVar11);
      uVar10 = NEON_fmadd(uVar10,uStack_158,local_148 * fVar11);
      local_178 = local_178 + local_128;
      uVar12 = *(undefined4 *)((JointLimits *)param_1 + 0x124);
      local_168 = local_128;
      uVar17 = NEON_fmadd(fStack_12c - fStack_17c,fStack_12c - fStack_17c,
                          (local_130 - local_180) * (local_130 - local_180));
      fVar11 = *(float *)((JointLimits *)param_1 + 0x108);
      fVar18 = (float)NEON_fmadd(local_128 - local_178,local_128 - local_178,uVar17);
      uVar17 = *(undefined4 *)((JointLimits *)param_1 + 0x104);
      uVar19 = NEON_fmadd(uVar17,local_160,fVar11 * local_150);
      uVar20 = NEON_fmadd(uVar17,uStack_15c,fVar11 * fStack_14c);
      uVar17 = NEON_fmadd(uVar17,uStack_158,fVar11 * local_148);
      fVar21 = *(float *)((JointLimits *)param_1 + 0x128);
      uVar22 = NEON_fmadd(uVar24,local_140,uVar19);
      uVar23 = NEON_fmadd(uVar24,uStack_13c,uVar20);
      uVar20 = NEON_fmadd(uVar24,uStack_138,uVar17);
      uVar24 = *(undefined4 *)((JointLimits *)param_1 + 0x11c);
      fVar11 = local_148 * fVar21;
      uVar17 = NEON_fmadd(uVar12,local_160,local_150 * fVar21);
      uVar19 = NEON_fmadd(uVar12,uStack_15c,fStack_14c * fVar21);
      local_150 = (float)NEON_fmadd(uVar24,local_140,uVar14);
      fStack_14c = (float)NEON_fmadd(uVar24,uStack_13c,uVar16);
      local_148 = (float)NEON_fmadd(uVar24,uStack_138,uVar10);
      uVar14 = *(undefined4 *)((JointLimits *)param_1 + 300);
      uVar10 = NEON_fmadd(uVar12,uStack_158,fVar11);
      uStack_13c = NEON_fmadd(uVar14,uStack_13c,uVar19);
      local_140 = NEON_fmadd(uVar14,local_140,uVar17);
      uStack_138 = NEON_fmadd(uVar14,uStack_138,uVar10);
      local_18c = (float)(uVar6 & 0xffffffff) / (float)(ulong)(param_2 - 1);
      local_188 = uVar15;
      local_160 = uVar22;
      uStack_15c = uVar23;
      uStack_158 = uVar20;
      local_130 = local_180;
      fStack_12c = fStack_17c;
      local_128 = local_178;
      local_120 = uVar7;
      uStack_118 = uVar8;
      local_110 = uVar9;
      local_108 = uVar13;
      local_100 = uVar2;
      uStack_f8 = uVar3;
      local_f0 = uVar4;
      uStack_e8 = uVar5;
      DeferredDebugRenderer::addLine(param_5,&local_170,&local_190,&local_180,&local_190,0x7ff);
      fVar11 = SQRT(fVar18) * 0.3;
      DeferredDebugRenderer::addFrame
                (param_5,(Matrix4x4 *)&local_120,fVar11,false,(float *)0x0,(float *)0x0,(float *)0x0
                 ,0xffffffff,0x7ff,0,false,10,1.0);
      if (param_4) {
        JointLimits::draw((JointLimits *)param_1,(Matrix4x4 *)&local_e0,(Vector3 *)&local_170,
                          SQRT(fVar18) * 0.5,param_5);
      }
      uVar6 = uVar6 + 1;
      param_1 = (Joint *)((JointLimits *)param_1 + 0xe4);
    } while (param_2 - 1 != uVar6);
    DeferredDebugRenderer::addFrame
              (param_5,(Matrix4x4 *)&local_160,fVar11,false,(float *)0x0,(float *)0x0,(float *)0x0,
               0xffffffff,0x7ff,0,false,10,1.0);
  }
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


