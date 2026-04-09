// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeFit
// Entry Point: 00a56e64
// Size: 3084 bytes
// Signature: undefined __cdecl computeFit(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, MergedShadowClippingPlaneCorners * param_4, MergedShadowAABB * param_5)


/* LightSource::MergedShadowGroup::computeFit(Vector3 const&, Vector3 const&, Vector3 const&,
   LightSource::MergedShadowGroup::MergedShadowClippingPlaneCorners&,
   LightSource::MergedShadowGroup::MergedShadowAABB&) const */

void LightSource::MergedShadowGroup::computeFit
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,
               MergedShadowClippingPlaneCorners *param_4,MergedShadowAABB *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  MergedShadowGroup *this;
  float *in_x5;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float extraout_s0;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong in_d1;
  float fVar12;
  ulong in_d2;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 local_120;
  float local_118;
  undefined8 local_114;
  float local_10c;
  undefined8 local_108;
  float local_100;
  undefined8 local_fc;
  float local_f4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  Plane aPStack_b0 [16];
  long local_a0;
  undefined8 uVar13;
  undefined8 uVar19;
  
  lVar3 = tpidr_el0;
  local_a0 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if ((lVar2 - lVar1 & 0x7fffffff0U) == 0) goto LAB_00a57a30;
  computeCombinedFrustumBounds
            ((MergedShadowGroup *)param_1,param_2,param_3,(Vector3 *)param_4,(Vector3 *)in_x5,
             (Vector3 *)(in_x5 + 3),in_x5 + 6,in_x5 + 7);
  Plane::Plane(aPStack_b0,param_2,in_x5[2]);
  this = (MergedShadowGroup *)Plane::Plane((Plane *)&local_c0,param_2,in_x5[5]);
  uVar5 = 0;
  fVar8 = -3.402823e+38;
  fVar12 = 3.402823e+38;
  fVar16 = 3.402823e+38;
  fVar18 = -3.402823e+38;
  do {
    uVar15 = (undefined4)in_d2;
    fVar17 = (float)in_d1;
    computeWorldFrustumCorners
              (this,*(LightSource **)(*(long *)param_1 + uVar5 * 8),(Vector3 *)&local_120);
    uVar6 = Plane::projectPoint(aPStack_b0,(Vector3 *)&local_120);
    uVar14 = NEON_fmadd(uVar6,*(undefined4 *)param_4,fVar17 * *(float *)(param_4 + 4));
    uVar6 = NEON_fmadd(uVar6,*(undefined4 *)param_3,fVar17 * *(float *)(param_3 + 4));
    fVar9 = (float)NEON_fmadd(uVar15,*(undefined4 *)(param_4 + 8),uVar14);
    fVar7 = (float)NEON_fmadd(uVar15,*(undefined4 *)(param_3 + 8),uVar6);
    fVar17 = fVar9;
    if (fVar16 <= fVar9) {
      fVar17 = fVar16;
    }
    fVar16 = fVar7;
    if (fVar12 <= fVar7) {
      fVar16 = fVar12;
    }
    if (fVar9 <= fVar18) {
      fVar9 = fVar18;
    }
    if (fVar7 <= fVar8) {
      fVar7 = fVar8;
    }
    uVar6 = Plane::projectPoint(aPStack_b0,(Vector3 *)&local_114);
    uVar15 = NEON_fmadd(uVar6,*(undefined4 *)param_4,fVar8 * *(float *)(param_4 + 4));
    uVar6 = NEON_fmadd(uVar6,*(undefined4 *)param_3,fVar8 * *(float *)(param_3 + 4));
    fVar10 = (float)NEON_fmadd(fVar18,*(undefined4 *)(param_4 + 8),uVar15);
    fVar8 = (float)NEON_fmadd(fVar18,*(undefined4 *)(param_3 + 8),uVar6);
    fVar12 = fVar10;
    if (fVar17 <= fVar10) {
      fVar12 = fVar17;
    }
    fVar17 = fVar8;
    if (fVar16 <= fVar8) {
      fVar17 = fVar16;
    }
    fVar16 = fVar10;
    if (fVar10 <= fVar9) {
      fVar16 = fVar9;
    }
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    uVar6 = Plane::projectPoint(aPStack_b0,(Vector3 *)&local_108);
    uVar15 = NEON_fmadd(uVar6,*(undefined4 *)param_4,fVar10 * *(float *)(param_4 + 4));
    uVar6 = NEON_fmadd(uVar6,*(undefined4 *)param_3,fVar10 * *(float *)(param_3 + 4));
    fVar10 = (float)NEON_fmadd(fVar18,*(undefined4 *)(param_4 + 8),uVar15);
    fVar7 = (float)NEON_fmadd(fVar18,*(undefined4 *)(param_3 + 8),uVar6);
    fVar9 = fVar10;
    if (fVar12 <= fVar10) {
      fVar9 = fVar12;
    }
    fVar21 = fVar7;
    if (fVar17 <= fVar7) {
      fVar21 = fVar17;
    }
    fVar17 = fVar10;
    if (fVar10 <= fVar16) {
      fVar17 = fVar16;
    }
    if (fVar7 <= fVar8) {
      fVar7 = fVar8;
    }
    this = (MergedShadowGroup *)Plane::projectPoint(aPStack_b0,(Vector3 *)&local_fc);
    uVar5 = uVar5 + 1;
    fVar23 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar27 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar11 = *(float *)(param_4 + 8);
    in_d1 = (ulong)(uint)fVar11;
    fVar22 = (float)*(undefined8 *)param_4;
    fVar26 = (float)*(undefined8 *)param_3;
    fVar20 = (float)NEON_fmadd(fVar18,fVar11,fVar10 * fVar23 + extraout_s0 * fVar22);
    fVar8 = (float)NEON_fmadd(fVar18,*(float *)(param_3 + 8),fVar10 * fVar27 + extraout_s0 * fVar26)
    ;
    in_d2 = (ulong)(uint)fVar8;
    fVar16 = fVar20;
    if (fVar9 <= fVar20) {
      fVar16 = fVar9;
    }
    fVar12 = fVar8;
    if (fVar21 <= fVar8) {
      fVar12 = fVar21;
    }
    fVar18 = fVar20;
    if (fVar20 <= fVar17) {
      fVar18 = fVar17;
    }
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
  } while (((ulong)(lVar2 - lVar1) >> 3 & 0xffffffff) != uVar5);
  fVar17 = in_x5[2];
  fVar22 = fVar26 * fVar12 + fVar22 * fVar16 + (float)*(undefined8 *)param_2 * fVar17;
  fVar23 = fVar27 * fVar12 + fVar23 * fVar16 +
           (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar17;
  fVar21 = fVar12 * *(float *)(param_3 + 8) + fVar16 * fVar11 + fVar17 * *(float *)(param_2 + 8);
  *(ulong *)param_5 = CONCAT44(fVar23,fVar22);
  *(float *)(param_5 + 8) = fVar21;
  fVar7 = in_x5[2];
  fVar17 = (float)*(undefined8 *)param_3 * fVar12 + (float)*(undefined8 *)param_4 * fVar18 +
           (float)*(undefined8 *)param_2 * fVar7;
  fVar9 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar12 +
          (float)((ulong)*(undefined8 *)param_4 >> 0x20) * fVar18 +
          (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar7;
  uVar25 = CONCAT44(fVar9,fVar17);
  local_100 = fVar12 * *(float *)(param_3 + 8) + fVar18 * *(float *)(param_4 + 8) +
              fVar7 * *(float *)(param_2 + 8);
  *(undefined8 *)(param_5 + 0xc) = uVar25;
  *(float *)(param_5 + 0x14) = local_100;
  fVar10 = in_x5[2];
  fVar11 = *(float *)(param_3 + 8);
  fVar26 = *(float *)(param_4 + 8);
  fVar27 = *(float *)(param_2 + 8);
  fVar12 = (float)*(undefined8 *)param_3 * fVar8 + (float)*(undefined8 *)param_4 * fVar18 +
           (float)*(undefined8 *)param_2 * fVar10;
  fVar7 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar8 +
          (float)((ulong)*(undefined8 *)param_4 >> 0x20) * fVar18 +
          (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar10;
  uVar13 = CONCAT44(fVar7,fVar12);
  *(undefined8 *)(param_5 + 0x18) = uVar13;
  local_f4 = fVar8 * fVar11 + fVar18 * fVar26 + fVar10 * fVar27;
  *(float *)(param_5 + 0x20) = local_f4;
  uVar24 = NEON_fsqrt(CONCAT44((fVar7 - fVar9) * (fVar7 - fVar9) +
                               (fVar12 - fVar17) * (fVar12 - fVar17) +
                               (local_f4 - local_100) * (local_f4 - local_100),
                               (fVar9 - fVar23) * (fVar9 - fVar23) +
                               (fVar17 - fVar22) * (fVar17 - fVar22) +
                               (local_100 - fVar21) * (local_100 - fVar21)),4);
  fVar11 = in_x5[2];
  fVar18 = (float)*(undefined8 *)param_3 * fVar8 + (float)*(undefined8 *)param_4 * fVar16 +
           (float)*(undefined8 *)param_2 * fVar11;
  fVar10 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar8 +
           (float)((ulong)*(undefined8 *)param_4 >> 0x20) * fVar16 +
           (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar11;
  uVar19 = CONCAT44(fVar10,fVar18);
  fVar16 = fVar8 * *(float *)(param_3 + 8) + fVar16 * *(float *)(param_4 + 8) +
           fVar11 * *(float *)(param_2 + 8);
  fVar11 = (float)((ulong)uVar24 >> 0x20);
  *(undefined8 *)(param_5 + 0x24) = uVar19;
  *(float *)(param_5 + 0x2c) = fVar16;
  fVar8 = (float)uVar24;
  if (fVar8 <= fVar11) {
    if (fVar8 < fVar11) {
      fVar8 = (fVar12 + fVar18) * 0.5;
      fVar7 = (fVar7 + fVar10) * 0.5;
      fVar10 = (float)*(undefined8 *)param_4 * fVar11 * 0.5;
      fVar26 = (float)((ulong)*(undefined8 *)param_4 >> 0x20) * fVar11 * 0.5;
      local_f4 = (local_f4 + fVar16) * 0.5;
      fVar11 = fVar11 * *(float *)(param_4 + 8) * 0.5;
      fVar12 = (fVar17 + fVar22) * 0.5;
      fVar18 = (fVar9 + fVar23) * 0.5;
      local_100 = (local_100 + fVar21) * 0.5;
      uVar19 = CONCAT44(fVar7 - fVar26,fVar8 - fVar10);
      uVar13 = CONCAT44(fVar7 + fVar26,fVar8 + fVar10);
      fVar16 = local_f4 - fVar11;
      local_f4 = local_f4 + fVar11;
      uVar24 = CONCAT44(fVar18 - fVar26,fVar12 - fVar10);
      local_118 = local_100 - fVar11;
      uVar25 = CONCAT44(fVar18 + fVar26,fVar12 + fVar10);
      local_100 = local_100 + fVar11;
      *(undefined8 *)(param_5 + 0x24) = uVar19;
      *(float *)(param_5 + 0x2c) = fVar16;
      *(undefined8 *)(param_5 + 0x18) = uVar13;
      *(float *)(param_5 + 0x20) = local_f4;
      *(undefined8 *)param_5 = uVar24;
      *(float *)(param_5 + 8) = local_118;
      goto LAB_00a57324;
    }
    uVar24 = *(undefined8 *)param_5;
    local_118 = *(float *)(param_5 + 8);
  }
  else {
    fVar11 = (fVar22 + fVar18) * 0.5;
    fVar10 = (fVar23 + fVar10) * 0.5;
    fVar12 = (fVar17 + fVar12) * 0.5;
    fVar18 = (fVar9 + fVar7) * 0.5;
    fVar17 = (float)*(undefined8 *)param_3 * fVar8 * 0.5;
    fVar9 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar8 * 0.5;
    local_118 = (fVar21 + fVar16) * 0.5;
    fVar8 = fVar8 * *(float *)(param_3 + 8) * 0.5;
    local_100 = (local_100 + local_f4) * 0.5;
    uVar19 = CONCAT44(fVar10 + fVar9,fVar11 + fVar17);
    uVar24 = CONCAT44(fVar10 - fVar9,fVar11 - fVar17);
    fVar16 = local_118 + fVar8;
    local_118 = local_118 - fVar8;
    uVar13 = CONCAT44(fVar18 + fVar9,fVar12 + fVar17);
    local_f4 = local_100 + fVar8;
    uVar25 = CONCAT44(fVar18 - fVar9,fVar12 - fVar17);
    local_100 = local_100 - fVar8;
    *(undefined8 *)(param_5 + 0x24) = uVar19;
    *(float *)(param_5 + 0x2c) = fVar16;
    *(undefined8 *)param_5 = uVar24;
    *(float *)(param_5 + 8) = local_118;
    *(undefined8 *)(param_5 + 0x18) = uVar13;
    *(float *)(param_5 + 0x20) = local_f4;
LAB_00a57324:
    *(undefined8 *)(param_5 + 0xc) = uVar25;
    *(float *)(param_5 + 0x14) = local_100;
  }
  fVar22 = *in_x5;
  fVar7 = in_x5[1];
  fVar34 = in_x5[6];
  fVar9 = (float)*(undefined8 *)param_3;
  fVar18 = fVar9 * fVar7;
  fVar10 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar31 = fVar10 * fVar7;
  fVar21 = (float)*(undefined8 *)param_4;
  fVar27 = fVar21 * fVar22;
  fVar11 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  fVar20 = fVar11 * fVar22;
  fVar32 = (float)*(undefined8 *)param_2 * fVar34;
  fVar33 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar34;
  fVar22 = *(float *)(param_4 + 8) * fVar22;
  fVar7 = *(float *)(param_3 + 8) * fVar7;
  fVar40 = in_x5[3];
  fVar44 = in_x5[4];
  fVar34 = fVar34 * *(float *)(param_2 + 8);
  fVar21 = fVar21 * fVar40;
  fVar11 = fVar11 * fVar40;
  fVar40 = fVar40 * *(float *)(param_4 + 8);
  fVar9 = fVar9 * fVar44;
  fVar10 = fVar10 * fVar44;
  fVar44 = fVar44 * *(float *)(param_3 + 8);
  fVar8 = (float)uVar24;
  fVar23 = (fVar32 + fVar27 + fVar18) - fVar8;
  fVar17 = (float)((ulong)uVar24 >> 0x20);
  fVar26 = (fVar33 + fVar20 + fVar31) - fVar17;
  fVar41 = (fVar34 + fVar22 + fVar7) - local_118;
  fVar12 = (float)uVar25;
  fVar36 = (fVar32 + fVar21 + fVar18) - fVar12;
  fVar18 = (float)((ulong)uVar25 >> 0x20);
  fVar37 = (fVar33 + fVar11 + fVar31) - fVar18;
  fVar31 = (fVar34 + fVar40 + fVar7) - local_100;
  fVar35 = 1.0;
  fVar7 = (float)NEON_fmadd(fVar41,fVar41,fVar26 * fVar26 + fVar23 * fVar23);
  fVar42 = 1.0;
  if (1e-06 < fVar7) {
    fVar42 = 1.0 / SQRT(fVar7);
  }
  fVar28 = fStack_b4 * fStack_bc;
  fVar29 = fStack_b4 * local_c0;
  fStack_b4 = fStack_b4 * local_b8;
  uVar6 = NEON_fmadd(fVar29 - fVar8,local_c0,fStack_bc * (fVar28 - fVar17));
  fVar43 = (float)NEON_fmadd(fStack_b4 - local_118,local_b8,uVar6);
  fVar7 = (float)NEON_fmadd(fVar41 * fVar42,local_b8,
                            fStack_bc * fVar26 * fVar42 + local_c0 * fVar23 * fVar42);
  fVar43 = fVar43 / fVar7;
  fVar7 = (float)uVar13;
  fVar38 = (fVar9 + fVar21 + fVar32) - fVar7;
  fVar21 = (float)((ulong)uVar13 >> 0x20);
  fVar39 = (fVar10 + fVar11 + fVar33) - fVar21;
  fVar40 = (fVar44 + fVar40 + fVar34) - local_f4;
  fVar11 = (float)NEON_fmadd(fVar31,fVar31,fVar37 * fVar37 + fVar36 * fVar36);
  if (1e-06 < fVar11) {
    fVar35 = 1.0 / SQRT(fVar11);
  }
  uVar6 = NEON_fmadd(fVar29 - fVar12,local_c0,fStack_bc * (fVar28 - fVar18));
  fVar11 = (float)NEON_fmadd(fVar31 * fVar35,local_b8,
                             fStack_bc * fVar37 * fVar35 + local_c0 * fVar36 * fVar35);
  fVar30 = (float)NEON_fmadd(fStack_b4 - local_100,local_b8,uVar6);
  fVar30 = fVar30 / fVar11;
  fVar11 = (float)uVar19;
  fVar32 = (fVar32 + fVar9 + fVar27) - fVar11;
  fVar9 = (float)((ulong)uVar19 >> 0x20);
  fVar20 = (fVar33 + fVar10 + fVar20) - fVar9;
  fVar10 = (float)NEON_fmadd(fVar40,fVar40,fVar39 * fVar39 + fVar38 * fVar38);
  fVar22 = (fVar34 + fVar44 + fVar22) - fVar16;
  fVar27 = 1.0;
  fVar33 = 1.0;
  if (1e-06 < fVar10) {
    fVar33 = 1.0 / SQRT(fVar10);
  }
  uVar6 = NEON_fmadd(fVar29 - fVar7,local_c0,fStack_bc * (fVar28 - fVar21));
  fVar34 = (float)NEON_fmadd(fStack_b4 - local_f4,local_b8,uVar6);
  fVar10 = (float)NEON_fmadd(fVar40 * fVar33,local_b8,
                             fStack_bc * fVar39 * fVar33 + local_c0 * fVar38 * fVar33);
  fVar34 = fVar34 / fVar10;
  fVar10 = (float)NEON_fmadd(fVar22,fVar22,fVar20 * fVar20 + fVar32 * fVar32);
  local_118 = local_118 + fVar41 * fVar42 * fVar43;
  local_108 = CONCAT44(fVar18 + fVar37 * fVar35 * fVar30,fVar12 + fVar36 * fVar35 * fVar30);
  local_100 = local_100 + fVar31 * fVar35 * fVar30;
  uVar25 = CONCAT44(fVar21 + fVar39 * fVar33 * fVar34,fVar7 + fVar38 * fVar33 * fVar34);
  local_f4 = local_f4 + fVar40 * fVar33 * fVar34;
  if (1e-06 < fVar10) {
    fVar27 = 1.0 / SQRT(fVar10);
  }
  local_120 = CONCAT44(fVar17 + fVar26 * fVar42 * fVar43,fVar8 + fVar23 * fVar42 * fVar43);
  uVar6 = NEON_fmadd(fVar29 - fVar11,local_c0,fStack_bc * (fVar28 - fVar9));
  fVar18 = (float)NEON_fmadd(fVar22 * fVar27,local_b8,
                             fStack_bc * fVar20 * fVar27 + local_c0 * fVar32 * fVar27);
  fVar12 = (float)NEON_fmadd(fStack_b4 - fVar16,local_b8,uVar6);
  fVar12 = fVar12 / fVar18;
  local_114 = CONCAT44(fVar9 + fVar20 * fVar27 * fVar12,fVar11 + fVar32 * fVar27 * fVar12);
  fVar16 = fVar16 + fVar22 * fVar27 * fVar12;
  local_10c = fVar16;
  local_fc = uVar25;
  uVar6 = Plane::projectPoint((Plane *)&local_c0,(Vector3 *)&local_120);
  uVar15 = NEON_fmadd(uVar6,*(undefined4 *)param_4,(float)uVar25 * *(float *)(param_4 + 4));
  uVar6 = NEON_fmadd(uVar6,*(undefined4 *)param_3,(float)uVar25 * *(float *)(param_3 + 4));
  fVar18 = (float)NEON_fmadd(fVar16,*(undefined4 *)(param_4 + 8),uVar15);
  fVar16 = (float)NEON_fmadd(fVar16,*(undefined4 *)(param_3 + 8),uVar6);
  fVar12 = 3.402823e+38;
  uVar6 = 0xff7fffff;
  fVar8 = (float)NEON_fminnm(fVar18,0x7f7fffff);
  fVar17 = (float)NEON_fminnm(fVar16,0x7f7fffff);
  if (fVar18 <= -3.402823e+38) {
    fVar18 = -3.402823e+38;
  }
  if (fVar16 <= -3.402823e+38) {
    fVar16 = -3.402823e+38;
  }
  uVar15 = Plane::projectPoint((Plane *)&local_c0,(Vector3 *)&local_114);
  uVar14 = NEON_fmadd(uVar15,*(undefined4 *)param_4,fVar12 * *(float *)(param_4 + 4));
  uVar15 = NEON_fmadd(uVar15,*(undefined4 *)param_3,fVar12 * *(float *)(param_3 + 4));
  fVar7 = (float)NEON_fmadd(uVar6,*(undefined4 *)(param_4 + 8),uVar14);
  fVar9 = (float)NEON_fmadd(uVar6,*(undefined4 *)(param_3 + 8),uVar15);
  fVar12 = fVar7;
  if (fVar8 <= fVar7) {
    fVar12 = fVar8;
  }
  fVar8 = fVar9;
  if (fVar17 <= fVar9) {
    fVar8 = fVar17;
  }
  fVar17 = fVar7;
  if (fVar7 <= fVar18) {
    fVar17 = fVar18;
  }
  if (fVar9 <= fVar16) {
    fVar9 = fVar16;
  }
  uVar15 = Plane::projectPoint((Plane *)&local_c0,(Vector3 *)&local_108);
  uVar14 = NEON_fmadd(uVar15,*(undefined4 *)param_4,fVar7 * *(float *)(param_4 + 4));
  uVar15 = NEON_fmadd(uVar15,*(undefined4 *)param_3,fVar7 * *(float *)(param_3 + 4));
  fVar7 = (float)NEON_fmadd(uVar6,*(undefined4 *)(param_4 + 8),uVar14);
  fVar18 = (float)NEON_fmadd(uVar6,*(undefined4 *)(param_3 + 8),uVar15);
  fVar16 = fVar7;
  if (fVar12 <= fVar7) {
    fVar16 = fVar12;
  }
  fVar12 = fVar18;
  if (fVar8 <= fVar18) {
    fVar12 = fVar8;
  }
  fVar8 = fVar7;
  if (fVar7 <= fVar17) {
    fVar8 = fVar17;
  }
  if (fVar18 <= fVar9) {
    fVar18 = fVar9;
  }
  fVar17 = (float)Plane::projectPoint((Plane *)&local_c0,(Vector3 *)&local_fc);
  fVar26 = *(float *)(param_4 + 8);
  fVar11 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  fVar27 = *(float *)(param_3 + 8);
  fVar23 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar20 = *(float *)(param_2 + 8);
  fVar21 = (float)*(undefined8 *)param_4;
  fVar22 = (float)*(undefined8 *)param_3;
  fVar9 = (float)NEON_fmadd(uVar6,fVar26,fVar7 * fVar11 + fVar17 * fVar21);
  fVar7 = (float)NEON_fmadd(uVar6,fVar27,fVar7 * fVar23 + fVar17 * fVar22);
  fVar10 = in_x5[5];
  fVar17 = fVar9;
  if (fVar16 <= fVar9) {
    fVar17 = fVar16;
  }
  fVar16 = fVar7;
  if (fVar12 <= fVar7) {
    fVar16 = fVar12;
  }
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  puVar4 = (undefined8 *)(param_5 + 0x30);
  *puVar4 = CONCAT44(fVar11 * fVar17 + fVar23 * fVar16 +
                     (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar10,
                     fVar21 * fVar17 + fVar22 * fVar16 + (float)*(undefined8 *)param_2 * fVar10);
  *(float *)(param_5 + 0x38) = fVar26 * fVar17 + fVar27 * fVar16 + fVar10 * fVar20;
  fVar10 = in_x5[5];
  fVar12 = (float)*(undefined8 *)param_3 * fVar16 + (float)*(undefined8 *)param_4 * fVar9 +
           (float)*(undefined8 *)param_2 * fVar10;
  fVar8 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar16 +
          (float)((ulong)*(undefined8 *)param_4 >> 0x20) * fVar9 +
          (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar10;
  fVar16 = fVar16 * *(float *)(param_3 + 8) + fVar9 * *(float *)(param_4 + 8) +
           fVar10 * *(float *)(param_2 + 8);
  if (fVar7 <= fVar18) {
    fVar7 = fVar18;
  }
  *(ulong *)(param_5 + 0x3c) = CONCAT44(fVar8,fVar12);
  *(float *)(param_5 + 0x44) = fVar16;
  fVar18 = in_x5[5];
  fVar21 = (float)*(undefined8 *)param_3 * fVar7 + (float)*(undefined8 *)param_4 * fVar9 +
           (float)*(undefined8 *)param_2 * fVar18;
  fVar11 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar7 +
           (float)((ulong)*(undefined8 *)param_4 >> 0x20) * fVar9 +
           (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar18;
  fVar10 = (float)((ulong)*puVar4 >> 0x20);
  fVar23 = fVar7 * *(float *)(param_3 + 8) + fVar9 * *(float *)(param_4 + 8) +
           fVar18 * *(float *)(param_2 + 8);
  fVar26 = *(float *)(param_5 + 0x38);
  fVar18 = (float)*puVar4;
  *(ulong *)(param_5 + 0x48) = CONCAT44(fVar11,fVar21);
  *(float *)(param_5 + 0x50) = fVar23;
  fVar27 = in_x5[5];
  uVar25 = NEON_fsqrt(CONCAT44((fVar11 - fVar8) * (fVar11 - fVar8) +
                               (fVar21 - fVar12) * (fVar21 - fVar12) +
                               (fVar23 - fVar16) * (fVar23 - fVar16),
                               (fVar8 - fVar10) * (fVar8 - fVar10) +
                               (fVar12 - fVar18) * (fVar12 - fVar18) +
                               (fVar16 - fVar26) * (fVar16 - fVar26)),4);
  fVar9 = (float)*(undefined8 *)param_3 * fVar7 + (float)*(undefined8 *)param_4 * fVar17 +
          (float)*(undefined8 *)param_2 * fVar27;
  fVar22 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar7 +
           (float)((ulong)*(undefined8 *)param_4 >> 0x20) * fVar17 +
           (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar27;
  fVar17 = fVar7 * *(float *)(param_3 + 8) + fVar17 * *(float *)(param_4 + 8) +
           fVar27 * *(float *)(param_2 + 8);
  *(ulong *)(param_5 + 0x54) = CONCAT44(fVar22,fVar9);
  *(float *)(param_5 + 0x5c) = fVar17;
  fVar27 = (float)((ulong)uVar25 >> 0x20);
  fVar7 = (float)uVar25;
  if (1.0 <= fVar7 / fVar27) {
    if (fVar7 / fVar27 <= 1.0) {
      *(undefined8 *)(param_5 + 0x84) = *(undefined8 *)(param_5 + 0x54);
      *(undefined8 *)(param_5 + 0x60) = *puVar4;
      *(undefined4 *)(param_5 + 0x68) = *(undefined4 *)(param_5 + 0x38);
      *(undefined4 *)(param_5 + 0x8c) = *(undefined4 *)(param_5 + 0x5c);
      *(undefined8 *)(param_5 + 0x78) = *(undefined8 *)(param_5 + 0x48);
      *(undefined4 *)(param_5 + 0x80) = *(undefined4 *)(param_5 + 0x50);
      *(undefined4 *)(param_5 + 0x74) = *(undefined4 *)(param_5 + 0x44);
      *(undefined8 *)(param_5 + 0x6c) = *(undefined8 *)(param_5 + 0x3c);
      goto LAB_00a57a30;
    }
    fVar9 = (fVar18 + fVar9) * 0.5;
    fVar10 = (fVar10 + fVar22) * 0.5;
    fVar18 = (fVar12 + fVar21) * 0.5;
    fVar8 = (fVar8 + fVar11) * 0.5;
    fVar21 = (float)*(undefined8 *)param_3 * fVar7 * 0.5;
    fVar11 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar7 * 0.5;
    fVar12 = (fVar26 + fVar17) * 0.5;
    fVar7 = fVar7 * *(float *)(param_3 + 8) * 0.5;
    fVar16 = (fVar16 + fVar23) * 0.5;
    uVar25 = CONCAT44(fVar8 - fVar11,fVar18 - fVar21);
    *(ulong *)(param_5 + 0x84) = CONCAT44(fVar10 + fVar11,fVar9 + fVar21);
    *(float *)(param_5 + 0x8c) = fVar12 + fVar7;
    fVar17 = fVar16 - fVar7;
    *(ulong *)(param_5 + 0x60) = CONCAT44(fVar10 - fVar11,fVar9 - fVar21);
    *(float *)(param_5 + 0x68) = fVar12 - fVar7;
    *(ulong *)(param_5 + 0x78) = CONCAT44(fVar8 + fVar11,fVar18 + fVar21);
    *(float *)(param_5 + 0x80) = fVar16 + fVar7;
  }
  else {
    fVar7 = (fVar21 + fVar9) * 0.5;
    fVar21 = (fVar11 + fVar22) * 0.5;
    fVar11 = (float)*(undefined8 *)param_4 * fVar27 * 0.5;
    fVar22 = (float)((ulong)*(undefined8 *)param_4 >> 0x20) * fVar27 * 0.5;
    fVar9 = (fVar23 + fVar17) * 0.5;
    fVar23 = fVar27 * *(float *)(param_4 + 8) * 0.5;
    fVar12 = (fVar12 + fVar18) * 0.5;
    fVar18 = (fVar8 + fVar10) * 0.5;
    fVar16 = (fVar16 + fVar26) * 0.5;
    uVar25 = CONCAT44(fVar18 + fVar22,fVar12 + fVar11);
    *(ulong *)(param_5 + 0x84) = CONCAT44(fVar21 - fVar22,fVar7 - fVar11);
    fVar17 = fVar16 + fVar23;
    *(float *)(param_5 + 0x8c) = fVar9 - fVar23;
    *(ulong *)(param_5 + 0x78) = CONCAT44(fVar21 + fVar22,fVar7 + fVar11);
    *(float *)(param_5 + 0x80) = fVar9 + fVar23;
    *(ulong *)(param_5 + 0x60) = CONCAT44(fVar18 - fVar22,fVar12 - fVar11);
    *(float *)(param_5 + 0x68) = fVar16 - fVar23;
  }
  *(undefined8 *)(param_5 + 0x6c) = uVar25;
  *(float *)(param_5 + 0x74) = fVar17;
LAB_00a57a30:
  if (*(long *)(lVar3 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


