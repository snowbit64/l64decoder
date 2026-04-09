// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcAngleInfo
// Entry Point: 00f3b4b0
// Size: 1592 bytes
// Signature: undefined calcAngleInfo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btConeTwistConstraint::calcAngleInfo() */

void btConeTwistConstraint::calcAngleInfo(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long in_x0;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  fVar5 = *(float *)(in_x0 + 0x144);
  uVar7 = *(undefined4 *)(in_x0 + 0x154);
  fVar10 = *(float *)(in_x0 + 0x184);
  *(undefined8 *)(in_x0 + 0x20c) = 0;
  uVar22 = *(undefined4 *)(in_x0 + 0x194);
  lVar1 = *(long *)(in_x0 + 0x28);
  lVar2 = *(long *)(in_x0 + 0x30);
  *(undefined2 *)(in_x0 + 0x225) = 0;
  uVar8 = *(undefined4 *)(in_x0 + 0x164);
  fVar25 = *(float *)(in_x0 + 0x1d4);
  fVar32 = *(float *)(lVar1 + 8);
  uVar29 = *(undefined4 *)(lVar1 + 0xc);
  fVar31 = *(float *)(lVar1 + 0x18);
  uVar30 = *(undefined4 *)(lVar1 + 0x1c);
  fVar26 = *(float *)(lVar1 + 0x28);
  uVar27 = *(undefined4 *)(lVar1 + 0x2c);
  uVar33 = *(undefined4 *)(lVar1 + 0x10);
  uVar36 = *(undefined4 *)(lVar1 + 0x20);
  uVar35 = *(undefined4 *)(lVar1 + 0x30);
  uVar4 = NEON_fmadd(uVar29,uVar7,fVar32 * fVar5);
  uVar12 = NEON_fmadd(uVar30,uVar7,fVar31 * fVar5);
  uVar7 = NEON_fmadd(uVar27,uVar7,fVar26 * fVar5);
  uVar14 = NEON_fmadd(*(undefined4 *)(lVar2 + 0xc),uVar22,*(float *)(lVar2 + 8) * fVar10);
  uVar18 = *(undefined4 *)(in_x0 + 0x1a4);
  fVar5 = (float)NEON_fmadd(uVar33,uVar8,uVar4);
  fVar6 = (float)NEON_fmadd(uVar35,uVar8,uVar7);
  fVar23 = 0.0;
  uVar4 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x1c),uVar22,*(float *)(lVar2 + 0x18) * fVar10);
  uVar7 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x2c),uVar22,*(float *)(lVar2 + 0x28) * fVar10);
  fVar10 = (float)NEON_fmadd(uVar36,uVar8,uVar12);
  fVar13 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x10),uVar18,uVar14);
  fVar15 = 0.0;
  fVar11 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x20),uVar18,uVar4);
  fVar16 = 0.0;
  fVar9 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x30),uVar18,uVar7);
  fVar21 = 0.0;
  fVar19 = 0.0;
  if (0.05 <= fVar25) {
    fVar15 = *(float *)(in_x0 + 0x148);
    uVar7 = *(undefined4 *)(in_x0 + 0x158);
    uVar12 = *(undefined4 *)(in_x0 + 0x168);
    uVar4 = NEON_fmadd(uVar7,uVar29,fVar15 * fVar32);
    uVar8 = NEON_fmadd(uVar7,uVar30,fVar15 * fVar31);
    uVar7 = NEON_fmadd(uVar7,uVar27,fVar15 * fVar26);
    fVar15 = (float)NEON_fmadd(uVar12,uVar33,uVar4);
    fVar16 = (float)NEON_fmadd(uVar12,uVar36,uVar8);
    fVar19 = (float)NEON_fmadd(uVar12,uVar35,uVar7);
    fVar23 = (float)NEON_fmadd(fVar11,fVar10,fVar13 * fVar5);
    uVar4 = NEON_fmadd(fVar16,fVar11,fVar15 * fVar13);
    fVar39 = (float)NEON_fmadd(fVar9,fVar6,fVar23);
    fVar23 = (float)NEON_fnmadd(fVar9,fVar6,-fVar23);
    fVar20 = (float)NEON_fmadd(fVar19,fVar9,uVar4);
    bVar3 = 0.0 <= fVar39;
    fVar37 = ABS(fVar20);
    if (bVar3) {
      fVar23 = fVar39;
    }
    fVar28 = fVar37;
    if (bVar3) {
      fVar28 = -fVar37;
    }
    fVar24 = 2.356194;
    if (bVar3) {
      fVar24 = 0.7853982;
    }
    fVar24 = fVar24 - ((fVar28 + fVar39) * 0.7853982) / (fVar37 + fVar23);
    fVar37 = (float)NEON_fmadd(fVar20,fVar20,fVar39 * fVar39);
    fVar23 = -fVar24;
    if (0.0 <= fVar20) {
      fVar23 = fVar24;
    }
    fVar23 = (fVar23 * fVar37 * 100.0) / (fVar37 * 100.0 + 1.0);
  }
  fVar37 = *(float *)(in_x0 + 0x1d8);
  uVar4 = 0;
  fVar20 = 0.0;
  uVar7 = 0;
  if (0.05 <= fVar37) {
    fVar21 = *(float *)(in_x0 + 0x14c);
    uVar7 = *(undefined4 *)(in_x0 + 0x15c);
    uVar4 = NEON_fmadd(uVar7,uVar29,fVar21 * fVar32);
    uVar8 = *(undefined4 *)(in_x0 + 0x16c);
    uVar12 = NEON_fmadd(uVar7,uVar30,fVar21 * fVar31);
    uVar7 = NEON_fmadd(uVar7,uVar27,fVar21 * fVar26);
    fVar21 = (float)NEON_fmadd(uVar8,uVar33,uVar4);
    uVar4 = NEON_fmadd(uVar8,uVar36,uVar12);
    uVar7 = NEON_fmadd(uVar8,uVar35,uVar7);
    fVar26 = (float)NEON_fmadd(fVar11,fVar10,fVar13 * fVar5);
    fVar32 = (float)NEON_fmadd(fVar9,fVar6,fVar26);
    fVar26 = (float)NEON_fnmadd(fVar9,fVar6,-fVar26);
    uVar8 = NEON_fmadd(uVar4,fVar11,fVar21 * fVar13);
    bVar3 = 0.0 <= fVar32;
    fVar31 = (float)NEON_fmadd(uVar7,fVar9,uVar8);
    if (bVar3) {
      fVar26 = fVar32;
    }
    fVar39 = ABS(fVar31);
    fVar20 = fVar39;
    if (bVar3) {
      fVar20 = -fVar39;
    }
    fVar28 = 2.356194;
    if (bVar3) {
      fVar28 = 0.7853982;
    }
    fVar28 = fVar28 - ((fVar20 + fVar32) * 0.7853982) / (fVar39 + fVar26);
    fVar32 = (float)NEON_fmadd(fVar31,fVar31,fVar32 * fVar32);
    fVar26 = -fVar28;
    if (0.0 <= fVar31) {
      fVar26 = fVar28;
    }
    fVar20 = (fVar26 * fVar32 * 100.0) / (fVar32 * 100.0 + 1.0);
  }
  fVar25 = (fVar20 * fVar20) / (fVar37 * fVar37) + (fVar23 * fVar23) / (fVar25 * fVar25);
  if (1.0 < fVar25) {
    *(undefined4 *)(in_x0 + 0x1f0) = 0;
    uVar8 = NEON_fmadd(fVar16,fVar11,fVar15 * fVar13);
    uVar12 = NEON_fmadd(uVar4,fVar11,fVar21 * fVar13);
    *(undefined *)(in_x0 + 0x226) = 1;
    fVar26 = (float)NEON_fmadd(fVar19,fVar9,uVar8);
    uVar8 = NEON_fmadd(uVar7,fVar9,uVar12);
    fVar32 = (float)NEON_fmadd(uVar8,uVar4,fVar26 * fVar16);
    fVar31 = (float)NEON_fmadd(uVar8,uVar7,fVar26 * fVar19);
    fVar26 = (float)NEON_fmadd(uVar8,fVar21,fVar26 * fVar15);
    fVar23 = (float)NEON_fnmsub(fVar31,fVar11,fVar32 * fVar9);
    fVar31 = (float)NEON_fnmsub(fVar26,fVar9,fVar31 * fVar13);
    fVar32 = (float)NEON_fnmsub(fVar32,fVar13,fVar26 * fVar11);
    uVar8 = NEON_fmadd(fVar31,fVar31,fVar23 * fVar23);
    uVar12 = NEON_fmadd(fVar11,fVar10,fVar13 * fVar5);
    fVar26 = (float)NEON_fmadd(fVar32,fVar32,uVar8);
    fVar20 = (float)NEON_fmadd(fVar9,fVar6,uVar12);
    *(float *)(in_x0 + 0x210) = fVar25 + -1.0;
    fVar26 = 1.0 / SQRT(fVar26);
    fVar25 = 1.0;
    if (fVar20 < 0.0) {
      fVar25 = -1.0;
    }
    *(float *)(in_x0 + 0x1e4) = fVar26 * fVar23 * fVar25;
    *(float *)(in_x0 + 0x1e8) = fVar26 * fVar31 * fVar25;
    *(float *)(in_x0 + 0x1ec) = fVar26 * fVar32 * fVar25;
  }
  fVar25 = *(float *)(in_x0 + 0x1dc);
  if (0.0 <= fVar25) {
    fVar26 = *(float *)(in_x0 + 0x188);
    uVar12 = *(undefined4 *)(in_x0 + 0x198);
    uVar8 = NEON_fmadd(fVar11,fVar10,fVar13 * fVar5);
    fVar20 = (float)NEON_fmadd(fVar9,fVar6,uVar8);
    uVar14 = NEON_fmadd(*(undefined4 *)(lVar2 + 0xc),uVar12,*(float *)(lVar2 + 8) * fVar26);
    fVar31 = (float)NEON_fmadd(fVar20,0x40000000,0x40000000);
    uVar18 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x1c),uVar12,*(float *)(lVar2 + 0x18) * fVar26);
    uVar12 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x2c),uVar12,*(float *)(lVar2 + 0x28) * fVar26);
    fVar37 = (float)NEON_fnmsub(fVar13,fVar10,fVar11 * fVar5);
    uVar8 = *(undefined4 *)(in_x0 + 0x1a8);
    fVar32 = (float)NEON_fmadd(fVar11,fVar11,fVar13 * fVar13);
    fVar39 = (float)NEON_fnmsub(fVar11,fVar6,fVar9 * fVar10);
    fVar23 = (float)NEON_fmadd(fVar9,fVar9,fVar11 * fVar11);
    fVar26 = (1.0 / SQRT(fVar32)) * -fVar11;
    if (0.7071068 < ABS(fVar9)) {
      fVar26 = 0.0;
    }
    fVar24 = 1.0 / SQRT(fVar31);
    fVar17 = (float)NEON_fnmsub(fVar9,fVar5,fVar13 * fVar6);
    fVar28 = 0.0;
    fVar32 = (1.0 / SQRT(fVar32)) * fVar13;
    if (0.7071068 < ABS(fVar9)) {
      fVar28 = (1.0 / SQRT(fVar23)) * fVar11;
      fVar32 = (1.0 / SQRT(fVar23)) * -fVar9;
    }
    bVar3 = fVar20 < -0.9999999;
    fVar38 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x20),uVar8,uVar18);
    fVar20 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x30),uVar8,uVar12);
    fVar23 = fVar24 * fVar37;
    if (bVar3) {
      fVar23 = fVar28;
    }
    fVar34 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x10),uVar8,uVar14);
    fVar28 = fVar24 * fVar17;
    fVar37 = fVar24 * fVar39;
    if (bVar3) {
      fVar28 = fVar32;
      fVar37 = fVar26;
    }
    fVar26 = SQRT(fVar31) * 0.5;
    if (bVar3) {
      fVar26 = 0.0;
    }
    uVar14 = NEON_fnmsub(fVar28,fVar20,fVar23 * fVar38);
    uVar8 = NEON_fmadd(fVar28,fVar38,fVar37 * fVar34);
    uVar12 = NEON_fnmsub(fVar23,fVar34,fVar37 * fVar20);
    fVar32 = (float)NEON_fmadd(fVar26,fVar34,uVar14);
    uVar8 = NEON_fmadd(fVar23,fVar20,uVar8);
    fVar31 = (float)NEON_fmadd(fVar26,fVar38,uVar12);
    uVar14 = NEON_fnmsub(fVar26,fVar20,fVar28 * fVar34);
    uVar12 = NEON_fmadd(uVar8,fVar37,fVar32 * fVar26);
    uVar14 = NEON_fmadd(fVar37,fVar38,uVar14);
    uVar18 = NEON_fmadd(fVar31,fVar26,fVar32 * fVar23);
    uVar22 = NEON_fmsub(fVar31,fVar23,uVar12);
    uVar12 = NEON_fmadd(uVar8,fVar28,uVar18);
    fVar20 = (float)NEON_fmadd(uVar14,fVar28,uVar22);
    uVar8 = NEON_fmadd(uVar8,fVar23,fVar31 * fVar37);
    uVar12 = NEON_fmsub(uVar14,fVar37,uVar12);
    uVar8 = NEON_fmsub(fVar32,fVar28,uVar8);
    uVar8 = NEON_fmadd(uVar14,fVar26,uVar8);
    uVar4 = NEON_fmadd(uVar12,uVar4,fVar20 * fVar21);
    fVar15 = (float)NEON_fmadd(uVar12,fVar16,fVar20 * fVar15);
    fVar26 = (float)NEON_fmadd(uVar8,uVar7,uVar4);
    fVar31 = (float)NEON_fmadd(uVar8,fVar19,fVar15);
    fVar15 = (float)NEON_fnmadd(uVar8,fVar19,-fVar15);
    fVar21 = ABS(fVar26);
    fVar16 = fVar21;
    if (0.0 <= fVar31) {
      fVar16 = -fVar21;
      fVar15 = fVar31;
    }
    fVar19 = 2.356194;
    if (0.0 <= fVar31) {
      fVar19 = 0.7853982;
    }
    fVar19 = fVar19 - ((fVar16 + fVar31) * 0.7853982) / (fVar15 + fVar21);
    fVar15 = -fVar19;
    if (0.0 <= fVar26) {
      fVar15 = fVar19;
    }
    fVar16 = 1.0;
    if (fVar25 <= 0.05) {
      fVar16 = 0.0;
    }
    *(float *)(in_x0 + 0x218) = fVar15;
    if (fVar15 <= fVar16 * -fVar25) {
      *(undefined4 *)(in_x0 + 0x200) = 0;
      fVar5 = (fVar13 + fVar5) * 0.5;
      fVar10 = (fVar11 + fVar10) * 0.5;
      fVar6 = (fVar9 + fVar6) * 0.5;
      *(undefined *)(in_x0 + 0x225) = 1;
      uVar4 = NEON_fmadd(fVar10,fVar10,fVar5 * fVar5);
      fVar9 = (float)NEON_fmadd(fVar6,fVar6,uVar4);
      fVar9 = -1.0 / SQRT(fVar9);
      fVar15 = -(fVar15 + fVar25);
      fVar5 = fVar5 * fVar9;
      fVar10 = fVar10 * fVar9;
      fVar6 = fVar6 * fVar9;
    }
    else {
      if (fVar15 <= fVar16 * fVar25) {
        return;
      }
      *(undefined4 *)(in_x0 + 0x200) = 0;
      fVar5 = (fVar13 + fVar5) * 0.5;
      fVar10 = (fVar11 + fVar10) * 0.5;
      fVar9 = (fVar9 + fVar6) * 0.5;
      *(undefined *)(in_x0 + 0x225) = 1;
      uVar4 = NEON_fmadd(fVar10,fVar10,fVar5 * fVar5);
      fVar6 = (float)NEON_fmadd(fVar9,fVar9,uVar4);
      fVar6 = 1.0 / SQRT(fVar6);
      fVar15 = fVar15 - fVar25;
      fVar5 = fVar6 * fVar5;
      fVar10 = fVar6 * fVar10;
      fVar6 = fVar6 * fVar9;
    }
    *(float *)(in_x0 + 0x214) = fVar15;
    *(float *)(in_x0 + 500) = fVar5;
    *(float *)(in_x0 + 0x1f8) = fVar10;
    *(float *)(in_x0 + 0x1fc) = fVar6;
  }
  return;
}


