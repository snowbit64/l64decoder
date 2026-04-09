// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findSeparatingAxis
// Entry Point: 00f7119c
// Size: 3240 bytes
// Signature: undefined __cdecl findSeparatingAxis(btConvexPolyhedron * param_1, btConvexPolyhedron * param_2, btTransform * param_3, btTransform * param_4, btVector3 * param_5, Result * param_6)


/* btPolyhedralContactClipping::findSeparatingAxis(btConvexPolyhedron const&, btConvexPolyhedron
   const&, btTransform const&, btTransform const&, btVector3&,
   btDiscreteCollisionDetectorInterface::Result&) */

void btPolyhedralContactClipping::findSeparatingAxis
               (btConvexPolyhedron *param_1,btConvexPolyhedron *param_2,btTransform *param_3,
               btTransform *param_4,btVector3 *param_5,Result *param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_168;
  float fStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  int local_138;
  int local_134;
  float local_110;
  float local_10c;
  float fStack_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float local_ec;
  float fStack_e8;
  float fStack_e0;
  float local_dc;
  float fStack_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  uVar21 = *(undefined8 *)(param_1 + 0x68);
  uVar25 = *(undefined8 *)(param_2 + 0x68);
  uVar33 = NEON_rev64(uVar21,4);
  uVar31 = NEON_ext(*(undefined8 *)param_3,*(undefined8 *)(param_3 + 0x10),4,1);
  fVar10 = *(float *)(param_3 + 0x20);
  fVar16 = *(float *)(param_3 + 0x24);
  uVar34 = NEON_ext(*(undefined8 *)param_4,*(undefined8 *)(param_4 + 0x10),4,1);
  uVar35 = NEON_rev64(uVar25,4);
  fVar13 = *(float *)(param_1 + 0x70);
  fVar38 = (float)((ulong)uVar21 >> 0x20);
  uVar12 = *(undefined4 *)(param_3 + 0x28);
  fVar17 = (float)((ulong)uVar25 >> 0x20);
  fVar36 = *(float *)(param_2 + 0x70);
  fVar14 = (float)NEON_fmadd(uVar12,fVar13,fVar10 * (float)uVar21 + fVar16 * fVar38);
  fVar18 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),fVar36,
                             *(float *)(param_4 + 0x20) * (float)uVar25 +
                             *(float *)(param_4 + 0x24) * fVar17);
  DAT_02125798 = DAT_02125798 + 1;
  uVar3 = *(uint *)(param_1 + 0x2c);
  fVar37 = ((float)uVar31 * (float)uVar33 + (float)uVar21 * (float)*(undefined8 *)param_3 +
            (float)*(undefined8 *)(param_3 + 8) * fVar13 + (float)*(undefined8 *)(param_3 + 0x30)) -
           ((float)*(undefined8 *)(param_4 + 0x30) +
           (float)uVar34 * (float)uVar35 + (float)uVar25 * (float)*(undefined8 *)param_4 +
           (float)*(undefined8 *)(param_4 + 8) * fVar36);
  fVar38 = ((float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar33 >> 0x20) +
            fVar38 * (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) +
            *(float *)(param_3 + 0x18) * fVar13 +
           (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20)) -
           ((float)((ulong)*(undefined8 *)(param_4 + 0x30) >> 0x20) +
           (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar35 >> 0x20) +
           fVar17 * (float)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x20) +
           *(float *)(param_4 + 0x18) * fVar36);
  fVar13 = (fVar14 + *(float *)(param_3 + 0x38)) - (*(float *)(param_4 + 0x38) + fVar18);
  if (0 < (int)uVar3) {
    lVar7 = 0;
    fVar14 = 3.402823e+38;
    do {
      lVar9 = *(long *)(param_1 + 0x38) + lVar7;
      fVar18 = *(float *)(lVar9 + 0x20);
      uVar22 = *(undefined4 *)(lVar9 + 0x24);
      uVar19 = NEON_fmadd(*(undefined4 *)(param_3 + 4),uVar22,*(float *)param_3 * fVar18);
      uVar28 = *(undefined4 *)(lVar9 + 0x28);
      uVar32 = NEON_fmadd(*(undefined4 *)(param_3 + 0x14),uVar22,*(float *)(param_3 + 0x10) * fVar18
                         );
      uStack_f4 = 0;
      local_100 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 8),uVar28,uVar19);
      uVar19 = NEON_fmadd(fVar16,uVar22,fVar10 * fVar18);
      fStack_fc = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x18),uVar28,uVar32);
      fStack_f8 = (float)NEON_fmadd(uVar12,uVar28,uVar19);
      uVar12 = NEON_fmadd(fVar38,fStack_fc,fVar37 * local_100);
      fVar16 = (float)NEON_fmadd(fVar13,fStack_f8,uVar12);
      if (fVar16 < 0.0) {
        local_100 = -local_100;
        fStack_fc = -fStack_fc;
        fStack_f8 = -fStack_f8;
      }
      gExpectedNbTests = gExpectedNbTests + 1;
      if (gUseInternalObject == '\0') {
LAB_00f7146c:
        gActualNbTests = gActualNbTests + 1;
        btConvexPolyhedron::project
                  (param_1,param_3,(btVector3 *)&local_100,&local_104,&fStack_108,
                   (btVector3 *)&local_c0,(btVector3 *)&local_d0);
        btConvexPolyhedron::project
                  (param_2,param_4,(btVector3 *)&local_100,&local_10c,&local_110,
                   (btVector3 *)&fStack_e0,(btVector3 *)&fStack_f0);
        if ((fStack_108 < local_10c) || (local_110 < local_104)) goto LAB_00f71b74;
        fVar10 = (float)NEON_fminnm(fStack_108 - local_10c,local_110 - local_104);
        if (fVar10 < fVar14) {
          *(ulong *)(param_5 + 8) = CONCAT44(uStack_f4,fStack_f8);
          *(ulong *)param_5 = CONCAT44(fStack_fc,local_100);
          fVar14 = fVar10;
        }
      }
      else {
        uVar12 = NEON_fmadd(*(float *)(param_3 + 0x10),fStack_fc,*(float *)param_3 * local_100);
        fVar16 = (float)NEON_fmadd(fVar10,fStack_f8,uVar12);
        fVar17 = (float)*(undefined8 *)(param_3 + 4) * local_100 +
                 (float)*(undefined8 *)(param_3 + 0x14) * fStack_fc +
                 (float)*(undefined8 *)(param_3 + 0x24) * fStack_f8;
        fVar36 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) * local_100 +
                 (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) * fStack_fc +
                 (float)((ulong)*(undefined8 *)(param_3 + 0x24) >> 0x20) * fStack_f8;
        uVar21 = *(undefined8 *)(param_1 + 0x7c);
        fVar23 = (float)*(undefined8 *)(param_4 + 4) * local_100 +
                 (float)*(undefined8 *)(param_4 + 0x14) * fStack_fc +
                 (float)*(undefined8 *)(param_4 + 0x24) * fStack_f8;
        fVar26 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20) * local_100 +
                 (float)((ulong)*(undefined8 *)(param_4 + 0x14) >> 0x20) * fStack_fc +
                 (float)((ulong)*(undefined8 *)(param_4 + 0x24) >> 0x20) * fStack_f8;
        uVar25 = *(undefined8 *)(param_2 + 0x7c);
        uVar19 = NEON_fmadd(*(undefined4 *)(param_4 + 0x10),fStack_fc,*(float *)param_4 * local_100)
        ;
        uVar31 = NEON_fcmlt(CONCAT44(fVar36,fVar17),0,4);
        uVar33 = NEON_fcmlt(CONCAT44(fVar26,fVar23),0,4);
        uVar12 = NEON_fmadd(fStack_fc,fVar38,local_100 * fVar37);
        fVar29 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x20),fStack_f8,uVar19);
        uVar21 = NEON_bif(CONCAT44(-(float)((ulong)uVar21 >> 0x20),-(float)uVar21),uVar21,uVar31,1);
        uVar25 = NEON_bit(uVar25,CONCAT44(-(float)((ulong)uVar25 >> 0x20),-(float)uVar25),uVar33,1);
        fVar18 = (float)NEON_fmadd(fStack_f8,fVar13,uVar12);
        fVar10 = -*(float *)(param_1 + 0x78);
        if (0.0 <= fVar16) {
          fVar10 = *(float *)(param_1 + 0x78);
        }
        fVar11 = -*(float *)(param_2 + 0x78);
        if (0.0 <= fVar29) {
          fVar11 = *(float *)(param_2 + 0x78);
        }
        fVar10 = (float)NEON_fmadd(fVar10,fVar16,(float)uVar21 * fVar17);
        fVar16 = (float)NEON_fmadd(fVar11,fVar29,(float)uVar25 * fVar23);
        fVar10 = fVar10 + (float)((ulong)uVar21 >> 0x20) * fVar36;
        fVar16 = fVar16 + (float)((ulong)uVar25 >> 0x20) * fVar26;
        if (fVar10 <= *(float *)(param_1 + 0x88)) {
          fVar10 = *(float *)(param_1 + 0x88);
        }
        if (fVar16 <= *(float *)(param_2 + 0x88)) {
          fVar16 = *(float *)(param_2 + 0x88);
        }
        fVar10 = (float)NEON_fminnm(fVar16 + fVar10 + fVar18,(fVar16 + fVar10) - fVar18);
        if (fVar10 <= fVar14) goto LAB_00f7146c;
      }
      if ((ulong)uVar3 * 0x30 + -0x30 == lVar7) goto LAB_00f71518;
      fVar16 = *(float *)(param_3 + 0x24);
      uVar12 = *(undefined4 *)(param_3 + 0x28);
      fVar10 = *(float *)(param_3 + 0x20);
      lVar7 = lVar7 + 0x30;
    } while( true );
  }
  fVar14 = 3.402823e+38;
LAB_00f71518:
  uVar3 = *(uint *)(param_2 + 0x2c);
  if (0 < (int)uVar3) {
    lVar7 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x38) + lVar7;
      fVar10 = *(float *)(lVar9 + 0x20);
      uVar19 = *(undefined4 *)(lVar9 + 0x24);
      uVar28 = *(undefined4 *)(lVar9 + 0x28);
      uStack_f4 = 0;
      uVar12 = NEON_fmadd(*(undefined4 *)(param_4 + 4),uVar19,*(float *)param_4 * fVar10);
      uVar22 = NEON_fmadd(*(undefined4 *)(param_4 + 0x14),uVar19,*(float *)(param_4 + 0x10) * fVar10
                         );
      local_100 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 8),uVar28,uVar12);
      fStack_fc = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x18),uVar28,uVar22);
      uVar12 = NEON_fmadd(*(undefined4 *)(param_4 + 0x24),uVar19,*(float *)(param_4 + 0x20) * fVar10
                         );
      uVar19 = NEON_fmadd(fVar38,fStack_fc,fVar37 * local_100);
      fStack_f8 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),uVar28,uVar12);
      fVar10 = (float)NEON_fmadd(fVar13,fStack_f8,uVar19);
      if (fVar10 < 0.0) {
        local_100 = -local_100;
        fStack_fc = -fStack_fc;
        fStack_f8 = -fStack_f8;
      }
      gExpectedNbTests = gExpectedNbTests + 1;
      if (gUseInternalObject == '\0') {
LAB_00f716dc:
        gActualNbTests = gActualNbTests + 1;
        btConvexPolyhedron::project
                  (param_1,param_3,(btVector3 *)&local_100,&local_104,&fStack_108,
                   (btVector3 *)&local_c0,(btVector3 *)&local_d0);
        btConvexPolyhedron::project
                  (param_2,param_4,(btVector3 *)&local_100,&local_10c,&local_110,
                   (btVector3 *)&fStack_e0,(btVector3 *)&fStack_f0);
        if ((fStack_108 < local_10c) || (local_110 < local_104)) goto LAB_00f71b74;
        fVar10 = (float)NEON_fminnm(fStack_108 - local_10c,local_110 - local_104);
        if (fVar10 < fVar14) {
          *(ulong *)(param_5 + 8) = CONCAT44(uStack_f4,fStack_f8);
          *(ulong *)param_5 = CONCAT44(fStack_fc,local_100);
          fVar14 = fVar10;
        }
      }
      else {
        uVar12 = NEON_fmadd(*(float *)(param_4 + 0x10),fStack_fc,*(float *)param_4 * local_100);
        uVar19 = NEON_fmadd(*(undefined4 *)(param_3 + 0x10),fStack_fc,*(float *)param_3 * local_100)
        ;
        fVar16 = (float)NEON_fmadd(*(float *)(param_4 + 0x20),fStack_f8,uVar12);
        fVar18 = (float)*(undefined8 *)(param_3 + 4) * local_100 +
                 (float)*(undefined8 *)(param_3 + 0x14) * fStack_fc +
                 (float)*(undefined8 *)(param_3 + 0x24) * fStack_f8;
        fVar17 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) * local_100 +
                 (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) * fStack_fc +
                 (float)((ulong)*(undefined8 *)(param_3 + 0x24) >> 0x20) * fStack_f8;
        uVar21 = *(undefined8 *)(param_1 + 0x7c);
        fVar36 = (float)*(undefined8 *)(param_4 + 4) * local_100 +
                 (float)*(undefined8 *)(param_4 + 0x14) * fStack_fc +
                 (float)*(undefined8 *)(param_4 + 0x24) * fStack_f8;
        fVar23 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20) * local_100 +
                 (float)((ulong)*(undefined8 *)(param_4 + 0x14) >> 0x20) * fStack_fc +
                 (float)((ulong)*(undefined8 *)(param_4 + 0x24) >> 0x20) * fStack_f8;
        uVar25 = *(undefined8 *)(param_2 + 0x7c);
        fVar26 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x20),fStack_f8,uVar19);
        uVar31 = NEON_fcmlt(CONCAT44(fVar17,fVar18),0,4);
        uVar33 = NEON_fcmlt(CONCAT44(fVar23,fVar36),0,4);
        uVar12 = NEON_fmadd(fStack_fc,fVar38,local_100 * fVar37);
        uVar21 = NEON_bit(uVar21,CONCAT44(-(float)((ulong)uVar21 >> 0x20),-(float)uVar21),uVar31,1);
        uVar25 = NEON_bit(uVar25,CONCAT44(-(float)((ulong)uVar25 >> 0x20),-(float)uVar25),uVar33,1);
        fVar10 = -*(float *)(param_1 + 0x78);
        if (0.0 <= fVar26) {
          fVar10 = *(float *)(param_1 + 0x78);
        }
        fVar11 = (float)NEON_fmadd(fStack_f8,fVar13,uVar12);
        fVar29 = -*(float *)(param_2 + 0x78);
        if (0.0 <= fVar16) {
          fVar29 = *(float *)(param_2 + 0x78);
        }
        fVar10 = (float)NEON_fmadd(fVar10,fVar26,(float)uVar21 * fVar18);
        fVar16 = (float)NEON_fmadd(fVar29,fVar16,(float)uVar25 * fVar36);
        fVar10 = fVar10 + (float)((ulong)uVar21 >> 0x20) * fVar17;
        fVar16 = fVar16 + (float)((ulong)uVar25 >> 0x20) * fVar23;
        if (fVar10 <= *(float *)(param_1 + 0x88)) {
          fVar10 = *(float *)(param_1 + 0x88);
        }
        if (fVar16 <= *(float *)(param_2 + 0x88)) {
          fVar16 = *(float *)(param_2 + 0x88);
        }
        fVar10 = (float)NEON_fminnm(fVar16 + fVar10 + fVar11,(fVar16 + fVar10) - fVar11);
        if (fVar10 <= fVar14) goto LAB_00f716dc;
      }
      lVar7 = lVar7 + 0x30;
    } while ((ulong)uVar3 * 0x30 - lVar7 != 0);
  }
  iVar6 = *(int *)(param_1 + 0x4c);
  if ((0 < iVar6) && (uVar5 = (ulong)*(uint *)(param_2 + 0x4c), 0 < (int)*(uint *)(param_2 + 0x4c)))
  {
    local_134 = -1;
    lVar7 = 0;
    local_148 = 0.0;
    local_14c = 0.0;
    local_138 = -1;
    local_150 = 0.0;
    local_13c = 0.0;
    local_140 = 0.0;
    local_144 = 0.0;
    do {
      if (0 < (int)uVar5) {
        lVar8 = 0;
        pfVar1 = (float *)(*(long *)(param_1 + 0x58) + lVar7 * 0x10);
        lVar9 = 0;
        fVar10 = *pfVar1;
        fVar16 = pfVar1[1];
        uVar12 = NEON_fmadd(*(undefined4 *)(param_3 + 4),fVar16,*(float *)param_3 * fVar10);
        uVar22 = NEON_fmadd(*(undefined4 *)(param_3 + 0x14),fVar16,
                            *(float *)(param_3 + 0x10) * fVar10);
        uVar19 = NEON_fmadd(*(undefined4 *)(param_3 + 0x24),fVar16,
                            *(float *)(param_3 + 0x20) * fVar10);
        fVar10 = pfVar1[2];
        fVar16 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 8),fVar10,uVar12);
        fVar18 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x18),fVar10,uVar22);
        fVar10 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x28),fVar10,uVar19);
        do {
          pfVar1 = (float *)(*(long *)(param_2 + 0x58) + lVar8);
          fVar17 = *pfVar1;
          fVar36 = pfVar1[1];
          uVar12 = NEON_fmadd(*(undefined4 *)(param_4 + 0x14),fVar36,
                              *(float *)(param_4 + 0x10) * fVar17);
          fVar23 = pfVar1[2];
          uStack_f4 = 0;
          fVar29 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x18),fVar23,uVar12);
          uVar12 = NEON_fmadd(*(undefined4 *)(param_4 + 0x24),fVar36,
                              *(float *)(param_4 + 0x20) * fVar17);
          fVar11 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),fVar23,uVar12);
          uVar12 = NEON_fmadd(*(undefined4 *)(param_4 + 4),fVar36,*(float *)param_4 * fVar17);
          fVar17 = (float)NEON_fnmsub(fVar11,fVar18,fVar29 * fVar10);
          fVar26 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 8),fVar23,uVar12);
          fVar23 = (float)NEON_fnmsub(fVar26,fVar10,fVar11 * fVar16);
          fVar36 = (float)NEON_fnmsub(fVar29,fVar16,fVar26 * fVar18);
          if (((1e-06 < ABS(fVar17)) || (1e-06 < ABS(fVar23))) || (1e-06 < ABS(fVar36))) {
            uVar12 = NEON_fmadd(fVar17,fVar17,fVar36 * fVar36);
            fVar20 = (float)NEON_fmadd(fVar23,fVar23,uVar12);
            fStack_f8 = 1.0 / SQRT(fVar20);
            local_100 = fStack_f8 * fVar17;
            fStack_fc = fStack_f8 * fVar23;
            fStack_f8 = fStack_f8 * fVar36;
            uVar12 = NEON_fmadd(fVar38,fStack_fc,fVar37 * local_100);
            fVar17 = (float)NEON_fmadd(fStack_f8,fVar13,uVar12);
            if (fVar17 < 0.0) {
              local_100 = -local_100;
              fStack_fc = -fStack_fc;
              fStack_f8 = -fStack_f8;
            }
            gExpectedNbTests = gExpectedNbTests + 1;
            if (gUseInternalObject != '\0') {
              uVar12 = NEON_fmadd(*(float *)(param_4 + 0x10),fStack_fc,*(float *)param_4 * local_100
                                 );
              uVar19 = NEON_fmadd(*(undefined4 *)(param_3 + 0x10),fStack_fc,
                                  *(float *)param_3 * local_100);
              fVar36 = (float)NEON_fmadd(*(float *)(param_4 + 0x20),fStack_f8,uVar12);
              fVar23 = (float)*(undefined8 *)(param_3 + 4) * local_100 +
                       (float)*(undefined8 *)(param_3 + 0x14) * fStack_fc +
                       (float)*(undefined8 *)(param_3 + 0x24) * fStack_f8;
              fVar20 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) * local_100 +
                       (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) * fStack_fc +
                       (float)((ulong)*(undefined8 *)(param_3 + 0x24) >> 0x20) * fStack_f8;
              uVar21 = *(undefined8 *)(param_1 + 0x7c);
              fVar24 = (float)*(undefined8 *)(param_4 + 4) * local_100 +
                       (float)*(undefined8 *)(param_4 + 0x14) * fStack_fc +
                       (float)*(undefined8 *)(param_4 + 0x24) * fStack_f8;
              fVar27 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20) * local_100 +
                       (float)((ulong)*(undefined8 *)(param_4 + 0x14) >> 0x20) * fStack_fc +
                       (float)((ulong)*(undefined8 *)(param_4 + 0x24) >> 0x20) * fStack_f8;
              uVar25 = *(undefined8 *)(param_2 + 0x7c);
              fVar30 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x20),fStack_f8,uVar19);
              uVar31 = NEON_fcmlt(CONCAT44(fVar20,fVar23),0,4);
              uVar33 = NEON_fcmlt(CONCAT44(fVar27,fVar24),0,4);
              uVar12 = NEON_fmadd(fStack_fc,fVar38,local_100 * fVar37);
              uVar21 = NEON_bit(uVar21,CONCAT44(-(float)((ulong)uVar21 >> 0x20),-(float)uVar21),
                                uVar31,1);
              uVar25 = NEON_bit(uVar25,CONCAT44(-(float)((ulong)uVar25 >> 0x20),-(float)uVar25),
                                uVar33,1);
              fVar17 = -*(float *)(param_1 + 0x78);
              if (0.0 <= fVar30) {
                fVar17 = *(float *)(param_1 + 0x78);
              }
              fVar15 = -*(float *)(param_2 + 0x78);
              if (0.0 <= fVar36) {
                fVar15 = *(float *)(param_2 + 0x78);
              }
              fVar17 = (float)NEON_fmadd(fVar17,fVar30,(float)uVar21 * fVar23);
              fVar36 = (float)NEON_fmadd(fVar15,fVar36,(float)uVar25 * fVar24);
              fVar17 = fVar17 + (float)((ulong)uVar21 >> 0x20) * fVar20;
              fVar36 = fVar36 + (float)((ulong)uVar25 >> 0x20) * fVar27;
              if (fVar17 <= *(float *)(param_1 + 0x88)) {
                fVar17 = *(float *)(param_1 + 0x88);
              }
              fVar23 = (float)NEON_fmadd(fStack_f8,fVar13,uVar12);
              if (fVar36 <= *(float *)(param_2 + 0x88)) {
                fVar36 = *(float *)(param_2 + 0x88);
              }
              fVar17 = (float)NEON_fminnm(fVar36 + fVar17 + fVar23,(fVar36 + fVar17) - fVar23);
              if (fVar14 < fVar17) goto LAB_00f71854;
            }
            gActualNbTests = gActualNbTests + 1;
            btConvexPolyhedron::project
                      (param_1,param_3,(btVector3 *)&local_100,&local_104,&fStack_108,
                       (btVector3 *)&local_c0,(btVector3 *)&local_d0);
            btConvexPolyhedron::project
                      (param_2,param_4,(btVector3 *)&local_100,&local_10c,&local_110,
                       (btVector3 *)&fStack_e0,(btVector3 *)&fStack_f0);
            if ((fStack_108 < local_10c) || (local_110 < local_104)) goto LAB_00f71b74;
            fVar36 = fStack_108 - local_10c;
            fVar23 = local_110 - local_104;
            fVar17 = (float)NEON_fminnm(fVar36,fVar23);
            pfVar1 = &local_d0;
            if (fVar23 <= fVar36) {
              pfVar1 = &local_c0;
            }
            pfVar2 = &fStack_e0;
            if (fVar23 <= fVar36) {
              pfVar2 = &fStack_f0;
            }
            if (fVar17 < fVar14) {
              local_14c = local_cc;
              local_148 = local_c8;
              if (fVar23 <= fVar36) {
                local_14c = local_bc;
                local_148 = local_b8;
              }
              local_138 = (int)lVar9;
              local_134 = (int)lVar7;
              local_140 = local_dc;
              local_13c = fStack_d8;
              if (fVar23 <= fVar36) {
                local_140 = local_ec;
                local_13c = fStack_e8;
              }
              local_150 = *pfVar1;
              local_144 = *pfVar2;
              *(ulong *)(param_5 + 8) = CONCAT44(uStack_f4,fStack_f8);
              *(ulong *)param_5 = CONCAT44(fStack_fc,local_100);
              fVar14 = fVar17;
              local_168 = fVar26;
              fStack_164 = fVar29;
              local_160 = fVar16;
              local_15c = fVar18;
              local_158 = fVar11;
              local_154 = fVar10;
            }
          }
LAB_00f71854:
          uVar5 = (ulong)*(int *)(param_2 + 0x4c);
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
        } while (lVar9 < (long)uVar5);
        iVar6 = *(int *)(param_1 + 0x4c);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
    if ((-1 < local_134) && (-1 < local_138)) {
      local_150 = local_144 - local_150;
      uVar12 = NEON_fmadd(local_15c,fStack_164,local_160 * local_168);
      local_14c = local_140 - local_14c;
      uVar19 = NEON_fmadd(local_154,local_158,uVar12);
      local_148 = local_13c - local_148;
      uVar22 = NEON_fmadd(local_15c,local_14c,local_160 * local_150);
      uVar12 = NEON_fmadd(fStack_164,local_14c,local_168 * local_150);
      fVar14 = (float)NEON_fmsub(uVar19,uVar19,0x3f800000);
      uVar22 = NEON_fmadd(local_154,local_148,uVar22);
      fVar10 = 0.0;
      uVar12 = NEON_fmadd(local_158,local_148,uVar12);
      if (fVar14 == 0.0) {
LAB_00f71c60:
        fVar16 = fVar10;
      }
      else {
        fVar16 = (float)NEON_fmsub(uVar19,uVar12,uVar22);
        fVar10 = -1e+30;
        fVar16 = fVar16 / fVar14;
        if ((fVar16 < -1e+30) || (fVar10 = 1e+30, 1e+30 < fVar16)) goto LAB_00f71c60;
      }
      fVar10 = (float)NEON_fnmsub(fVar16,uVar19,uVar12);
      if (-1e+30 <= fVar10) {
        if (1e+30 < fVar10) {
          fVar10 = 1e+30;
          fVar16 = (float)NEON_fmadd(uVar19,0x7149f2ca,uVar22);
          if (-1e+30 <= fVar16) {
            fVar10 = 1e+30;
            if (1e+30 < fVar16) {
              fVar10 = 1e+30;
              fVar16 = 1e+30;
            }
          }
          else {
            fVar16 = -1e+30;
          }
        }
      }
      else {
        fVar10 = -1e+30;
        fVar14 = (float)NEON_fmadd(uVar19,0xf149f2ca,uVar22);
        fVar16 = fVar10;
        if (-1e+30 <= fVar14) {
          if (fVar14 <= 1e+30) {
            fVar10 = -1e+30;
            fVar16 = fVar14;
          }
          else {
            fVar10 = -1e+30;
            fVar16 = 1e+30;
          }
        }
      }
      local_b4 = 0;
      fVar17 = (float)NEON_fmsub(fVar16,local_160,fVar10 * local_168 + local_150);
      fVar18 = (float)NEON_fmsub(fVar16,local_15c,fVar10 * fStack_164 + local_14c);
      fVar16 = (float)NEON_fmsub(fVar16,local_154,fVar10 * local_158 + local_148);
      uVar12 = NEON_fmadd(fVar18,fVar18,fVar17 * fVar17);
      fVar14 = (float)NEON_fmadd(fVar16,fVar16,uVar12);
      if (1.192093e-07 < fVar14) {
        local_b8 = 1.0 / SQRT(fVar14);
        local_c0 = local_b8 * fVar17;
        local_bc = local_b8 * fVar18;
        local_b8 = local_b8 * fVar16;
        uVar12 = NEON_fmadd(fVar38,local_bc,fVar37 * local_c0);
        fVar16 = (float)NEON_fmadd(fVar13,local_b8,uVar12);
        if (fVar16 < 0.0) {
          local_c0 = -local_c0;
          local_bc = -local_bc;
          local_b8 = -local_b8;
        }
        local_d0 = fVar10 * local_168 + local_144;
        local_cc = fVar10 * fStack_164 + local_140;
        local_c8 = fVar10 * local_158 + local_13c;
        local_c4 = 0;
        (**(code **)(*(long *)param_6 + 0x20))(-SQRT(fVar14),param_6,&local_c0,&local_d0);
      }
    }
  }
  fVar10 = (float)*(undefined8 *)param_5;
  fVar14 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
  fVar13 = (float)NEON_fmadd(*(float *)(param_5 + 8),fVar13,fVar10 * fVar37 + fVar14 * fVar38);
  if (0.0 <= fVar13) {
    uVar21 = 1;
  }
  else {
    uVar21 = 1;
    *(undefined4 *)(param_5 + 0xc) = 0;
    *(ulong *)param_5 = CONCAT44(-fVar14,-fVar10);
    *(float *)(param_5 + 8) = -*(float *)(param_5 + 8);
  }
LAB_00f71b78:
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar21);
LAB_00f71b74:
  uVar21 = 0;
  goto LAB_00f71b78;
}


