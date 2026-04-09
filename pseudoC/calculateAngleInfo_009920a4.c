// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateAngleInfo
// Entry Point: 009920a4
// Size: 3792 bytes
// Signature: undefined calculateAngleInfo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2D6Joint::calculateAngleInfo() */

void Bt2D6Joint::calculateAngleInfo(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float in_s21;
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
  undefined8 local_88;
  float local_80;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (5 < *(uint *)(in_x0 + 0x28c)) {
    fVar37 = *(float *)(in_x0 + 0x330);
    fVar4 = *(float *)(in_x0 + 0x334);
    fVar6 = *(float *)(in_x0 + 0x338);
    fVar35 = *(float *)(in_x0 + 0x340);
    fVar11 = *(float *)(in_x0 + 0x344);
    fVar33 = *(float *)(in_x0 + 0x348);
    fVar34 = *(float *)(in_x0 + 0x350);
    fVar36 = *(float *)(in_x0 + 0x354);
    fVar9 = *(float *)(in_x0 + 0x358);
    goto LAB_00992964;
  }
  fVar23 = *(float *)(in_x0 + 0x2a0);
  fVar28 = *(float *)(in_x0 + 0x2e0);
  fVar24 = *(float *)(in_x0 + 0x290);
  fVar27 = *(float *)(in_x0 + 0x2d0);
  fVar25 = *(float *)(in_x0 + 0x2e4);
  fVar30 = *(float *)(in_x0 + 0x2e8);
  fVar31 = *(float *)(in_x0 + 0x2a4);
  fVar26 = *(float *)(in_x0 + 0x2b0);
  uVar3 = NEON_fmadd(fVar24,fVar27,fVar23 * fVar28);
  fVar19 = *(float *)(in_x0 + 0x2f0);
  fVar29 = *(float *)(in_x0 + 0x2d4);
  fVar15 = *(float *)(in_x0 + 0x2d8);
  fVar32 = *(float *)(in_x0 + 0x294);
  fVar33 = (float)NEON_fmadd(fVar26,fVar19,uVar3);
  fVar18 = *(float *)(in_x0 + 0x2a8);
  uVar3 = NEON_fmadd(fVar24,fVar29,fVar23 * fVar25);
  uVar5 = NEON_fmadd(fVar24,fVar15,fVar23 * fVar30);
  fVar20 = *(float *)(in_x0 + 0x298);
  uVar7 = NEON_fmadd(fVar32,fVar27,fVar28 * fVar31);
  uVar10 = NEON_fmadd(fVar32,fVar15,fVar30 * fVar31);
  fVar17 = *(float *)(in_x0 + 0x2f4);
  uVar8 = NEON_fmadd(fVar32,fVar29,fVar25 * fVar31);
  fVar16 = *(float *)(in_x0 + 0x2f8);
  uVar12 = NEON_fmadd(fVar20,fVar27,fVar28 * fVar18);
  uVar13 = NEON_fmadd(fVar20,fVar29,fVar25 * fVar18);
  uVar14 = NEON_fmadd(fVar20,fVar15,fVar30 * fVar18);
  fVar21 = *(float *)(in_x0 + 0x2b4);
  fVar22 = *(float *)(in_x0 + 0x2b8);
  fVar36 = (float)NEON_fmadd(fVar26,fVar17,uVar3);
  fVar37 = (float)NEON_fmadd(fVar26,fVar16,uVar5);
  fVar34 = (float)NEON_fmadd(fVar21,fVar19,uVar7);
  fVar35 = (float)NEON_fmadd(fVar21,fVar17,uVar8);
  fVar4 = (float)NEON_fmadd(fVar21,fVar16,uVar10);
  fVar11 = (float)NEON_fmadd(fVar22,fVar19,uVar12);
  fVar9 = (float)NEON_fmadd(fVar22,fVar17,uVar13);
  fVar6 = (float)NEON_fmadd(fVar22,fVar16,uVar14);
  switch(*(uint *)(in_x0 + 0x28c)) {
  case 0:
    if (1.0 <= fVar11) {
      in_s21 = atan2f(fVar36,fVar35);
      local_88._4_4_ = 1.570796;
LAB_00992600:
      local_80 = 0.0;
    }
    else {
      if (fVar11 <= -1.0) {
        fVar4 = atan2f(fVar36,fVar35);
        in_s21 = -fVar4;
        local_88._4_4_ = -1.570796;
        goto LAB_00992600;
      }
      in_s21 = atan2f(-fVar9,fVar6);
      fVar4 = (float)NEON_fmin(fVar11,0x3f800000);
      local_88._4_4_ = asinf(fVar4);
      local_80 = atan2f(-fVar34,fVar33);
    }
    *(undefined4 *)(in_x0 + 0x34c) = 0;
    *(undefined4 *)(in_x0 + 0x33c) = 0;
    fVar4 = (float)NEON_fnmadd(fVar20,fVar28,-(fVar27 * -fVar18));
    fVar36 = (float)NEON_fnmadd(fVar18,fVar19,-(fVar28 * -fVar22));
    fVar11 = (float)NEON_fmadd(fVar22,fVar27,fVar19 * -fVar20);
    fVar6 = (float)NEON_fnmadd(fVar22,fVar27,-(fVar19 * -fVar20));
    fVar35 = (float)NEON_fmadd(fVar18,fVar19,fVar28 * -fVar22);
    fVar33 = (float)NEON_fmadd(fVar20,fVar28,fVar27 * -fVar18);
    fVar37 = (float)NEON_fmadd(fVar11,fVar22,fVar18 * fVar4);
    fVar4 = (float)NEON_fmadd(fVar33,fVar20,fVar22 * fVar36);
    fVar6 = (float)NEON_fmadd(fVar35,fVar18,fVar20 * fVar6);
    fVar34 = (float)NEON_fmadd(fVar28,fVar33,fVar11 * -fVar19);
    fVar36 = (float)NEON_fmadd(fVar19,fVar35,fVar33 * -fVar27);
    fVar9 = (float)NEON_fmadd(fVar27,fVar11,fVar35 * -fVar28);
    break;
  case 1:
    if (1.0 <= fVar34) {
      in_s21 = atan2f(-fVar37,fVar6);
      local_80 = -1.570796;
LAB_00992818:
      local_88._4_4_ = 0.0;
    }
    else {
      if (fVar34 <= -1.0) {
        fVar4 = atan2f(-fVar37,fVar6);
        in_s21 = -fVar4;
        local_80 = 1.570796;
        goto LAB_00992818;
      }
      in_s21 = atan2f(fVar4,fVar35);
      local_88._4_4_ = atan2f(fVar11,fVar33);
      fVar34 = -fVar34;
      if (fVar34 <= -1.0) {
        fVar34 = -1.0;
      }
      fVar4 = (float)NEON_fmin(fVar34,0x3f800000);
      local_80 = asinf(fVar4);
    }
    *(undefined4 *)(in_x0 + 0x35c) = 0;
    *(undefined4 *)(in_x0 + 0x33c) = 0;
    *(undefined4 *)(in_x0 + 0x34c) = 0;
    fVar36 = (float)NEON_fmadd(fVar19,fVar32,fVar21 * -fVar27);
    fVar9 = (float)NEON_fmadd(fVar27,fVar31,fVar32 * -fVar28);
    fVar34 = (float)NEON_fmadd(fVar28,fVar21,fVar31 * -fVar19);
    fVar11 = (float)NEON_fnmadd(fVar27,fVar31,-(fVar32 * -fVar28));
    fVar15 = (float)NEON_fnmadd(fVar28,fVar21,-(fVar31 * -fVar19));
    fVar33 = (float)NEON_fnmadd(fVar19,fVar32,-(fVar21 * -fVar27));
    fVar37 = (float)NEON_fmadd(fVar31,fVar9,fVar36 * -fVar21);
    fVar4 = (float)NEON_fmadd(fVar21,fVar34,fVar9 * -fVar32);
    fVar6 = (float)NEON_fmadd(fVar32,fVar36,fVar34 * -fVar31);
    fVar35 = (float)NEON_fmadd(fVar36,fVar19,fVar28 * fVar11);
    fVar11 = (float)NEON_fmadd(fVar9,fVar27,fVar19 * fVar15);
    fVar33 = (float)NEON_fmadd(fVar34,fVar28,fVar27 * fVar33);
    goto LAB_00992964;
  case 2:
    if (1.0 <= fVar9) {
      in_s21 = -1.570796;
      local_88._4_4_ = atan2f(-fVar34,fVar33);
LAB_009926a4:
      local_80 = 0.0;
    }
    else {
      if (fVar9 <= -1.0) {
        in_s21 = 1.570796;
        local_88._4_4_ = atan2f(-fVar34,fVar33);
        local_88._4_4_ = -local_88._4_4_;
        goto LAB_009926a4;
      }
      fVar4 = (float)NEON_fmin(-fVar9,0x3f800000);
      in_s21 = asinf(fVar4);
      local_88._4_4_ = atan2f(fVar11,fVar6);
      local_80 = atan2f(fVar36,fVar35);
    }
    *(undefined4 *)(in_x0 + 0x33c) = 0;
    *(undefined4 *)(in_x0 + 0x34c) = 0;
    fVar4 = (float)NEON_fmadd(fVar17,fVar20,fVar22 * -fVar29);
    fVar6 = (float)NEON_fmadd(fVar29,fVar18,fVar20 * -fVar25);
    fVar37 = (float)NEON_fmadd(fVar25,fVar22,fVar18 * -fVar17);
    fVar36 = (float)NEON_fnmadd(fVar29,fVar18,-(fVar20 * -fVar25));
    fVar15 = (float)NEON_fnmadd(fVar25,fVar22,-(fVar18 * -fVar17));
    fVar9 = (float)NEON_fnmadd(fVar17,fVar20,-(fVar22 * -fVar29));
    *(float *)(in_x0 + 0x330) = fVar37;
    fVar35 = (float)NEON_fmadd(fVar18,fVar6,fVar4 * -fVar22);
    fVar11 = (float)NEON_fmadd(fVar22,fVar37,fVar6 * -fVar20);
    *(float *)(in_x0 + 0x334) = fVar4;
    fVar33 = (float)NEON_fmadd(fVar20,fVar4,fVar37 * -fVar18);
    *(float *)(in_x0 + 0x338) = fVar6;
    fVar34 = (float)NEON_fmadd(fVar4,fVar17,fVar25 * fVar36);
    fVar36 = (float)NEON_fmadd(fVar6,fVar29,fVar17 * fVar15);
    fVar9 = (float)NEON_fmadd(fVar37,fVar25,fVar29 * fVar9);
    *(float *)(in_x0 + 0x340) = fVar35;
    *(float *)(in_x0 + 0x344) = fVar11;
    break;
  case 3:
    if (1.0 <= fVar36) {
      local_88._4_4_ = atan2f(fVar4,fVar6);
      local_80 = 1.570796;
LAB_00992754:
      in_s21 = 0.0;
    }
    else {
      if (fVar36 <= -1.0) {
        local_88._4_4_ = atan2f(fVar4,fVar6);
        local_88._4_4_ = -local_88._4_4_;
        local_80 = -1.570796;
        goto LAB_00992754;
      }
      in_s21 = atan2f(-fVar9,fVar35);
      local_88._4_4_ = atan2f(-fVar37,fVar33);
      if (fVar36 <= -1.0) {
        fVar36 = -1.0;
      }
      fVar4 = (float)NEON_fmin(fVar36,0x3f800000);
      local_80 = asinf(fVar4);
    }
    *(undefined4 *)(in_x0 + 0x35c) = 0;
    *(undefined4 *)(in_x0 + 0x33c) = 0;
    *(undefined4 *)(in_x0 + 0x34c) = 0;
    fVar36 = (float)NEON_fmadd(fVar26,fVar29,fVar17 * -fVar24);
    fVar9 = (float)NEON_fmadd(fVar24,fVar25,fVar29 * -fVar23);
    fVar34 = (float)NEON_fmadd(fVar23,fVar17,fVar25 * -fVar26);
    fVar11 = (float)NEON_fnmadd(fVar24,fVar25,-(fVar29 * -fVar23));
    fVar33 = (float)NEON_fnmadd(fVar23,fVar17,-(fVar25 * -fVar26));
    fVar15 = (float)NEON_fnmadd(fVar26,fVar29,-(fVar17 * -fVar24));
    *(float *)(in_x0 + 0x350) = fVar34;
    fVar37 = (float)NEON_fmadd(fVar25,fVar9,fVar36 * -fVar17);
    fVar4 = (float)NEON_fmadd(fVar17,fVar34,fVar9 * -fVar29);
    fVar6 = (float)NEON_fmadd(fVar29,fVar36,fVar34 * -fVar25);
    fVar35 = (float)NEON_fmadd(fVar36,fVar26,fVar23 * fVar11);
    fVar11 = (float)NEON_fmadd(fVar9,fVar24,fVar26 * fVar33);
    fVar33 = (float)NEON_fmadd(fVar34,fVar23,fVar24 * fVar15);
    *(float *)(in_x0 + 0x354) = fVar36;
    *(float *)(in_x0 + 0x358) = fVar9;
    *(float *)(in_x0 + 0x330) = fVar37;
    *(float *)(in_x0 + 0x334) = fVar4;
    *(float *)(in_x0 + 0x338) = fVar6;
    *(float *)(in_x0 + 0x340) = fVar35;
    *(float *)(in_x0 + 0x344) = fVar11;
    *(float *)(in_x0 + 0x348) = fVar33;
    goto LAB_00992964;
  case 4:
    if (1.0 <= fVar4) {
      local_80 = atan2f(fVar11,fVar33);
      in_s21 = 1.570796;
LAB_00992550:
      local_88._4_4_ = 0.0;
    }
    else {
      if (fVar4 <= -1.0) {
        fVar4 = atan2f(fVar11,fVar33);
        local_80 = -fVar4;
        in_s21 = -1.570796;
        goto LAB_00992550;
      }
      if (fVar4 <= -1.0) {
        fVar4 = -1.0;
      }
      fVar4 = (float)NEON_fmin(fVar4,0x3f800000);
      in_s21 = asinf(fVar4);
      local_88._4_4_ = atan2f(-fVar37,fVar6);
      local_80 = atan2f(-fVar34,fVar35);
    }
    *(undefined4 *)(in_x0 + 0x33c) = 0;
    *(undefined4 *)(in_x0 + 0x34c) = 0;
    fVar4 = (float)NEON_fmadd(fVar21,fVar15,fVar16 * -fVar32);
    fVar6 = (float)NEON_fmadd(fVar32,fVar30,fVar15 * -fVar31);
    fVar37 = (float)NEON_fmadd(fVar31,fVar16,fVar30 * -fVar21);
    fVar34 = (float)NEON_fnmadd(fVar32,fVar30,-(fVar15 * -fVar31));
    fVar36 = (float)NEON_fnmadd(fVar31,fVar16,-(fVar30 * -fVar21));
    fVar9 = (float)NEON_fnmadd(fVar21,fVar15,-(fVar16 * -fVar32));
    *(float *)(in_x0 + 0x330) = fVar37;
    fVar35 = (float)NEON_fmadd(fVar30,fVar6,fVar4 * -fVar16);
    fVar11 = (float)NEON_fmadd(fVar16,fVar37,fVar6 * -fVar15);
    fVar33 = (float)NEON_fmadd(fVar15,fVar4,fVar37 * -fVar30);
    *(float *)(in_x0 + 0x334) = fVar4;
    *(float *)(in_x0 + 0x338) = fVar6;
    fVar34 = (float)NEON_fmadd(fVar4,fVar21,fVar31 * fVar34);
    fVar36 = (float)NEON_fmadd(fVar6,fVar32,fVar21 * fVar36);
    fVar9 = (float)NEON_fmadd(fVar37,fVar31,fVar32 * fVar9);
    *(float *)(in_x0 + 0x340) = fVar35;
    *(float *)(in_x0 + 0x344) = fVar11;
    *(float *)(in_x0 + 0x348) = fVar33;
    goto LAB_00992954;
  case 5:
    if (1.0 <= fVar37) {
      local_88._4_4_ = -1.570796;
      local_80 = atan2f(-fVar34,-fVar11);
      in_s21 = 0.0;
    }
    else if (fVar37 <= -1.0) {
      local_88._4_4_ = 1.570796;
      fVar4 = atan2f(fVar34,fVar11);
      in_s21 = 0.0;
      local_80 = -fVar4;
    }
    else {
      in_s21 = atan2f(fVar4,fVar6);
      fVar37 = -fVar37;
      if (fVar37 <= -1.0) {
        fVar37 = -1.0;
      }
      fVar4 = (float)NEON_fmin(fVar37,0x3f800000);
      local_88._4_4_ = asinf(fVar4);
      local_80 = atan2f(fVar36,fVar33);
    }
    *(undefined4 *)(in_x0 + 0x34c) = 0;
    *(undefined4 *)(in_x0 + 0x33c) = 0;
    fVar4 = (float)NEON_fnmadd(fVar15,fVar23,-(fVar24 * -fVar30));
    fVar36 = (float)NEON_fnmadd(fVar30,fVar26,-(fVar23 * -fVar16));
    fVar11 = (float)NEON_fmadd(fVar16,fVar24,fVar26 * -fVar15);
    fVar33 = (float)NEON_fmadd(fVar15,fVar23,fVar24 * -fVar30);
    fVar6 = (float)NEON_fnmadd(fVar16,fVar24,-(fVar26 * -fVar15));
    fVar35 = (float)NEON_fmadd(fVar30,fVar26,fVar23 * -fVar16);
    *(float *)(in_x0 + 0x344) = fVar11;
    *(float *)(in_x0 + 0x340) = fVar35;
    fVar37 = (float)NEON_fmadd(fVar11,fVar16,fVar30 * fVar4);
    fVar4 = (float)NEON_fmadd(fVar33,fVar15,fVar16 * fVar36);
    fVar6 = (float)NEON_fmadd(fVar35,fVar30,fVar15 * fVar6);
    *(float *)(in_x0 + 0x348) = fVar33;
    fVar34 = (float)NEON_fmadd(fVar23,fVar33,fVar11 * -fVar26);
    fVar36 = (float)NEON_fmadd(fVar26,fVar35,fVar33 * -fVar24);
    *(float *)(in_x0 + 0x330) = fVar37;
    *(float *)(in_x0 + 0x334) = fVar4;
    *(float *)(in_x0 + 0x338) = fVar6;
    fVar9 = (float)NEON_fmadd(fVar24,fVar11,fVar35 * -fVar23);
LAB_00992954:
    *(float *)(in_x0 + 0x350) = fVar34;
    *(float *)(in_x0 + 0x354) = fVar36;
    *(float *)(in_x0 + 0x358) = fVar9;
  }
  *(undefined4 *)(in_x0 + 0x35c) = 0;
LAB_00992964:
  uVar3 = NEON_fmadd(fVar37,fVar37,fVar4 * fVar4);
  uVar5 = NEON_fmadd(fVar35,fVar35,fVar11 * fVar11);
  uVar7 = NEON_fmadd(fVar34,fVar34,fVar36 * fVar36);
  fVar15 = (float)NEON_fmadd(fVar6,fVar6,uVar3);
  fVar16 = (float)NEON_fmadd(fVar33,fVar33,uVar5);
  fVar17 = (float)NEON_fmadd(fVar9,fVar9,uVar7);
  fVar15 = 1.0 / SQRT(fVar15);
  fVar16 = 1.0 / SQRT(fVar16);
  *(float *)(in_x0 + 0x338) = fVar6 * fVar15;
  *(float *)(in_x0 + 0x330) = fVar37 * fVar15;
  fVar6 = *(float *)(in_x0 + 0x1c0);
  *(float *)(in_x0 + 0x334) = fVar4 * fVar15;
  fVar37 = *(float *)(in_x0 + 0x1c4);
  fVar4 = 1.0 / SQRT(fVar17);
  *(float *)(in_x0 + 0x344) = fVar11 * fVar16;
  *(float *)(in_x0 + 0x340) = fVar35 * fVar16;
  *(float *)(in_x0 + 0x348) = fVar33 * fVar16;
  *(float *)(in_x0 + 0x350) = fVar34 * fVar4;
  *(float *)(in_x0 + 0x354) = fVar36 * fVar4;
  *(float *)(in_x0 + 0x358) = fVar9 * fVar4;
  fVar4 = in_s21;
  if (fVar6 < fVar37) {
    if (fVar6 <= in_s21) {
      if (in_s21 <= fVar37) goto LAB_00992b70;
      fVar36 = in_s21 - fVar37;
      if (-3.141593 <= fVar36) {
        if (3.141593 < fVar36) {
          fVar4 = -6.283185;
          goto LAB_00992b00;
        }
      }
      else {
        fVar4 = 6.283185;
LAB_00992b00:
        fVar36 = fVar36 + fVar4;
      }
      fVar34 = in_s21 - fVar6;
      if (-3.141593 <= fVar34) {
        if (3.141593 < fVar34) {
          fVar4 = -6.283185;
          goto LAB_00992b4c;
        }
      }
      else {
        fVar4 = 6.283185;
LAB_00992b4c:
        fVar34 = fVar34 + fVar4;
      }
      fVar4 = in_s21 + -6.283185;
      if (ABS(fVar36) <= ABS(fVar34)) {
        fVar4 = in_s21;
      }
    }
    else {
      fVar36 = fVar6 - in_s21;
      if (-3.141593 <= fVar36) {
        if (3.141593 < fVar36) {
          fVar34 = -6.283185;
          goto LAB_00992a70;
        }
      }
      else {
        fVar34 = 6.283185;
LAB_00992a70:
        fVar36 = fVar36 + fVar34;
      }
      fVar34 = fVar37 - in_s21;
      if (-3.141593 <= fVar34) {
        if (3.141593 < fVar34) {
          fVar9 = -6.283185;
          goto LAB_00992abc;
        }
      }
      else {
        fVar9 = 6.283185;
LAB_00992abc:
        fVar34 = fVar34 + fVar9;
      }
      if (ABS(fVar34) <= ABS(fVar36)) {
        fVar4 = in_s21 + 6.283185;
      }
    }
  }
LAB_00992b70:
  *(float *)(in_x0 + 0x1fc) = fVar4;
  if (fVar6 <= fVar37) {
    *(float *)(in_x0 + 500) = fVar4 - fVar6;
    if (fVar6 == fVar37) {
      uVar3 = 3;
    }
    else {
      uVar3 = 4;
      *(float *)(in_x0 + 0x1f8) = fVar4 - fVar37;
    }
    *(undefined4 *)(in_x0 + 0x200) = uVar3;
  }
  else {
    *(undefined4 *)(in_x0 + 0x200) = 0;
    *(undefined4 *)(in_x0 + 500) = 0;
  }
  fVar6 = *(float *)(in_x0 + 0x204);
  fVar37 = *(float *)(in_x0 + 0x208);
  fVar4 = local_88._4_4_;
  if (fVar6 < fVar37) {
    if (fVar6 <= local_88._4_4_) {
      if (local_88._4_4_ <= fVar37) goto LAB_00992d34;
      fVar36 = local_88._4_4_ - fVar37;
      if (-3.141593 <= fVar36) {
        if (3.141593 < fVar36) {
          fVar4 = -6.283185;
          goto LAB_00992cc4;
        }
      }
      else {
        fVar4 = 6.283185;
LAB_00992cc4:
        fVar36 = fVar36 + fVar4;
      }
      fVar34 = local_88._4_4_ - fVar6;
      if (-3.141593 <= fVar34) {
        if (3.141593 < fVar34) {
          fVar4 = -6.283185;
          goto LAB_00992d10;
        }
      }
      else {
        fVar4 = 6.283185;
LAB_00992d10:
        fVar34 = fVar34 + fVar4;
      }
      fVar4 = local_88._4_4_ + -6.283185;
      if (ABS(fVar36) <= ABS(fVar34)) {
        fVar4 = local_88._4_4_;
      }
    }
    else {
      fVar36 = fVar6 - local_88._4_4_;
      if (-3.141593 <= fVar36) {
        if (3.141593 < fVar36) {
          fVar34 = -6.283185;
          goto LAB_00992c34;
        }
      }
      else {
        fVar34 = 6.283185;
LAB_00992c34:
        fVar36 = fVar36 + fVar34;
      }
      fVar34 = fVar37 - local_88._4_4_;
      if (-3.141593 <= fVar34) {
        if (3.141593 < fVar34) {
          fVar9 = -6.283185;
          goto LAB_00992c80;
        }
      }
      else {
        fVar9 = 6.283185;
LAB_00992c80:
        fVar34 = fVar34 + fVar9;
      }
      if (ABS(fVar34) <= ABS(fVar36)) {
        fVar4 = local_88._4_4_ + 6.283185;
      }
    }
  }
LAB_00992d34:
  *(float *)(in_x0 + 0x240) = fVar4;
  if (fVar6 <= fVar37) {
    *(float *)(in_x0 + 0x238) = fVar4 - fVar6;
    if (fVar6 == fVar37) {
      *(undefined4 *)(in_x0 + 0x244) = 3;
    }
    else {
      *(undefined4 *)(in_x0 + 0x244) = 4;
      *(float *)(in_x0 + 0x23c) = fVar4 - fVar37;
    }
  }
  else {
    *(undefined4 *)(in_x0 + 0x244) = 0;
    *(undefined4 *)(in_x0 + 0x238) = 0;
  }
  fVar6 = *(float *)(in_x0 + 0x248);
  fVar37 = *(float *)(in_x0 + 0x24c);
  fVar4 = local_80;
  if (fVar37 <= fVar6) goto LAB_00992efc;
  if (fVar6 <= local_80) {
    if (local_80 <= fVar37) goto LAB_00992efc;
    fVar36 = local_80 - fVar37;
    if (-3.141593 <= fVar36) {
      if (3.141593 < fVar36) {
        fVar4 = -6.283185;
        goto LAB_00992e8c;
      }
    }
    else {
      fVar4 = 6.283185;
LAB_00992e8c:
      fVar36 = fVar36 + fVar4;
    }
    fVar34 = local_80 - fVar6;
    if (-3.141593 <= fVar34) {
      if (3.141593 < fVar34) {
        fVar4 = -6.283185;
        goto LAB_00992ed8;
      }
    }
    else {
      fVar4 = 6.283185;
LAB_00992ed8:
      fVar34 = fVar34 + fVar4;
    }
    fVar4 = local_80 + -6.283185;
    if (ABS(fVar36) <= ABS(fVar34)) {
      fVar4 = local_80;
    }
    goto LAB_00992efc;
  }
  fVar36 = fVar6 - local_80;
  if (-3.141593 <= fVar36) {
    if (3.141593 < fVar36) {
      fVar34 = -6.283185;
      goto LAB_00992dfc;
    }
  }
  else {
    fVar34 = 6.283185;
LAB_00992dfc:
    fVar36 = fVar36 + fVar34;
  }
  fVar34 = fVar37 - local_80;
  if (-3.141593 <= fVar34) {
    if (3.141593 < fVar34) {
      fVar9 = -6.283185;
      goto LAB_00992e48;
    }
  }
  else {
    fVar9 = 6.283185;
LAB_00992e48:
    fVar34 = fVar34 + fVar9;
  }
  if (ABS(fVar34) <= ABS(fVar36)) {
    fVar4 = local_80 + 6.283185;
  }
LAB_00992efc:
  *(float *)(in_x0 + 0x284) = fVar4;
  if (fVar6 <= fVar37) {
    *(float *)(in_x0 + 0x27c) = fVar4 - fVar6;
    if (fVar6 == fVar37) {
      *(undefined4 *)(in_x0 + 0x288) = 3;
    }
    else {
      *(undefined4 *)(in_x0 + 0x288) = 4;
      *(float *)(in_x0 + 0x280) = fVar4 - fVar37;
    }
  }
  else {
    *(undefined4 *)(in_x0 + 0x288) = 0;
    *(undefined4 *)(in_x0 + 0x27c) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


