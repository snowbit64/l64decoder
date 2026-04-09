// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcTimeOfImpact
// Entry Point: 00f6b3e4
// Size: 1192 bytes
// Signature: undefined __thiscall calcTimeOfImpact(btContinuousConvexCollision * this, btTransform * param_1, btTransform * param_2, btTransform * param_3, btTransform * param_4, CastResult * param_5)


/* btContinuousConvexCollision::calcTimeOfImpact(btTransform const&, btTransform const&, btTransform
   const&, btTransform const&, btConvexCast::CastResult&) */

void __thiscall
btContinuousConvexCollision::calcTimeOfImpact
          (btContinuousConvexCollision *this,btTransform *param_1,btTransform *param_2,
          btTransform *param_3,btTransform *param_4,CastResult *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined **local_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  float local_1b8;
  char local_1b4;
  float local_1b0 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined auStack_140 [16];
  undefined **local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  char local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  float local_b8;
  undefined4 local_b4;
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  local_b4 = 0;
  fVar12 = *(float *)(param_2 + 0x38);
  fVar15 = *(float *)(param_1 + 0x38);
  fVar9 = (float)*(undefined8 *)(param_2 + 0x30) - (float)*(undefined8 *)(param_1 + 0x30);
  fVar11 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) -
           (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  local_c0 = CONCAT44(fVar11,fVar9);
  local_b8 = fVar12 - fVar15;
  btTransformUtil::calculateDiffAxisAngle(param_1,param_2,(btVector3 *)&local_170,local_1b0);
  fVar21 = local_1b0[0] * (float)local_170;
  fVar22 = local_170._4_4_ * local_1b0[0];
  fVar13 = *(float *)(param_4 + 0x38);
  fVar23 = (float)uStack_168 * local_1b0[0];
  fVar6 = *(float *)(param_3 + 0x38);
  fVar19 = (float)*(undefined8 *)(param_4 + 0x30) - (float)*(undefined8 *)(param_3 + 0x30);
  fVar20 = (float)((ulong)*(undefined8 *)(param_4 + 0x30) >> 0x20) -
           (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
  local_e0 = CONCAT44(fVar20,fVar19);
  local_c4 = 0;
  local_d4 = 0;
  local_d8 = fVar13 - fVar6;
  local_d0 = fVar21;
  fStack_cc = fVar22;
  local_c8 = fVar23;
  btTransformUtil::calculateDiffAxisAngle(param_3,param_4,(btVector3 *)&local_170,local_1b0);
  local_e4 = 0;
  fVar18 = local_1b0[0] * (float)local_170;
  fVar17 = local_170._4_4_ * local_1b0[0];
  fVar16 = (float)uStack_168 * local_1b0[0];
  local_f0 = fVar18;
  fStack_ec = fVar17;
  local_e8 = fVar16;
  fVar7 = (float)(**(code **)(**(long **)(this + 0x18) + 0x20))();
  if (*(long **)(this + 0x20) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(**(long **)(this + 0x20) + 0x20))();
  }
  fVar19 = fVar19 - fVar9;
  fVar20 = fVar20 - fVar11;
  uVar10 = NEON_fmadd(fVar22,fVar22,fVar21 * fVar21);
  fVar12 = (fVar13 - fVar6) - (fVar12 - fVar15);
  uVar14 = NEON_fmadd(fVar17,fVar17,fVar18 * fVar18);
  fVar6 = (float)NEON_fmadd(fVar23,fVar23,uVar10);
  fVar9 = (float)NEON_fmadd(fVar16,fVar16,uVar14);
  fVar11 = (float)NEON_fmadd(fVar12,fVar12,fVar19 * fVar19 + fVar20 * fVar20);
  fVar6 = (float)NEON_fmadd(SQRT(fVar9),uVar8,SQRT(fVar6) * fVar7);
  if (SQRT(fVar11) + fVar6 != 0.0) {
    local_104 = '\0';
    local_108 = 1e+18;
    local_130 = &PTR__Result_0101b478;
    computeClosestPoints(this,param_1,param_3,(btPointCollector *)&local_130);
    uStack_f8 = uStack_110;
    local_100 = local_118;
    if (local_104 != '\0') {
      uVar8 = NEON_fmadd(local_128,fVar19,fVar6);
      fVar9 = *(float *)(param_5 + 0xb8) + local_108;
      uVar8 = NEON_fmadd(uStack_124,fVar20,uVar8);
      fVar7 = (float)NEON_fmadd(local_120,fVar12,uVar8);
      if (fVar7 <= 1.192093e-07) {
        uVar2 = 0;
        if ((this[0x30] == (btContinuousConvexCollision)0x0) || (0.0 < fVar9)) goto LAB_00f6b5b4;
        *(undefined4 *)(param_5 + 0xa8) = 0;
        *(undefined4 *)(param_5 + 0x88) = local_128;
        *(undefined4 *)(param_5 + 0x8c) = uStack_124;
      }
      else {
        fVar7 = 0.0;
        if (0.001 < fVar9) {
          iVar5 = 0;
          uVar8 = local_128;
          uVar10 = uStack_124;
          uVar14 = local_120;
          fVar11 = 0.0;
          do {
            plVar3 = *(long **)(param_5 + 0xb0);
            if (plVar3 != (long *)0x0) {
              uStack_168 = 0x3f800000;
              local_170 = 0x3f8000003f800000;
              (**(code **)(*plVar3 + 0x38))(0x3e4ccccd,plVar3,&local_100,&local_170);
            }
            uVar8 = NEON_fmadd(uVar8,fVar19,fVar6);
            uVar8 = NEON_fmadd(uVar10,fVar20,uVar8);
            fVar7 = (float)NEON_fmadd(uVar14,fVar12,uVar8);
            if (fVar7 <= 1.192093e-07) goto LAB_00f6b5b0;
            uVar2 = 0;
            fVar7 = fVar9 / fVar7 + fVar11;
            if ((1.0 < fVar7) ||
               ((fVar7 < 0.0 || fVar7 == fVar11) || fVar7 >= 0.0 && fVar7 < fVar11))
            goto LAB_00f6b5b4;
            btTransformUtil::integrateTransform
                      (param_1,(btVector3 *)&local_c0,(btVector3 *)&local_d0,fVar7,
                       (btTransform *)&local_170);
            btTransformUtil::integrateTransform
                      (param_3,(btVector3 *)&local_e0,(btVector3 *)&local_f0,fVar7,
                       (btTransform *)local_1b0);
            plVar3 = *(long **)(param_5 + 0xb0);
            if (plVar3 != (long *)0x0) {
              uStack_1d8 = 0;
              local_1e0 = (undefined **)0x3f800000;
              (**(code **)(*plVar3 + 0x38))(0x3e4ccccd,plVar3,auStack_140,&local_1e0);
            }
            (***(code ***)param_5)(fVar7,param_5);
            local_1b8 = 1e+18;
            local_1b4 = '\0';
            local_1e0 = &PTR__Result_0101b478;
            computeClosestPoints
                      (this,(btTransform *)&local_170,(btTransform *)local_1b0,
                       (btPointCollector *)&local_1e0);
            if (local_1b4 == '\0') {
              lVar4 = *(long *)param_5;
              uVar2 = 0xffffffff;
LAB_00f6b87c:
              (**(code **)(lVar4 + 0x10))(param_5,uVar2,iVar5);
              goto LAB_00f6b5b0;
            }
            uStack_f8 = uStack_1c0;
            local_100 = local_1c8;
            if (iVar5 == 0x40) {
              lVar4 = *(long *)param_5;
              uVar2 = 0xfffffffe;
              iVar5 = 0x41;
              goto LAB_00f6b87c;
            }
            fVar9 = *(float *)(param_5 + 0xb8) + local_1b8;
            iVar5 = iVar5 + 1;
            local_128 = (undefined4)uStack_1d8;
            uVar8 = (undefined4)uStack_1d8;
            uStack_124 = uStack_1d8._4_4_;
            uVar10 = uStack_1d8._4_4_;
            local_120 = uStack_1d0;
            uVar14 = uStack_1d0;
            fVar11 = fVar7;
            uStack_11c = local_1cc;
          } while (0.001 < fVar9);
        }
        *(float *)(param_5 + 0xa8) = fVar7;
        *(undefined4 *)(param_5 + 0x88) = local_128;
        *(undefined4 *)(param_5 + 0x8c) = uStack_124;
      }
      uVar2 = 1;
      *(undefined4 *)(param_5 + 0x90) = local_120;
      *(undefined4 *)(param_5 + 0x94) = uStack_11c;
      *(undefined8 *)(param_5 + 0xa0) = uStack_f8;
      *(undefined8 *)(param_5 + 0x98) = local_100;
      goto LAB_00f6b5b4;
    }
  }
LAB_00f6b5b0:
  uVar2 = 0;
LAB_00f6b5b4:
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


