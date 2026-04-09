// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateAngleInfo
// Entry Point: 00f3c970
// Size: 700 bytes
// Signature: undefined calculateAngleInfo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btGeneric6DofConstraint::calculateAngleInfo() */

void btGeneric6DofConstraint::calculateAngleInfo(void)

{
  long in_x0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  fVar1 = *(float *)(in_x0 + 0x458);
  fVar2 = *(float *)(in_x0 + 0x464);
  fVar10 = *(float *)(in_x0 + 0x454);
  fVar11 = *(float *)(in_x0 + 0x468);
  fVar17 = *(float *)(in_x0 + 0x450);
  fVar7 = *(float *)(in_x0 + 0x460);
  fVar12 = *(float *)(in_x0 + 0x440);
  fVar21 = *(float *)(in_x0 + 0x444);
  fVar6 = (float)NEON_fnmsub(fVar11,fVar10,fVar2 * fVar1);
  fVar14 = *(float *)(in_x0 + 0x448);
  fVar13 = *(float *)(in_x0 + 0x480);
  fVar20 = (float)NEON_fnmsub(fVar7,fVar1,fVar17 * fVar11);
  fVar15 = *(float *)(in_x0 + 0x490);
  fVar18 = (float)NEON_fnmsub(fVar17,fVar2,fVar7 * fVar10);
  fVar22 = (float)NEON_fnmsub(fVar21,fVar7,fVar12 * fVar2);
  fVar16 = *(float *)(in_x0 + 0x4a0);
  uVar8 = NEON_fmadd(fVar20,fVar21,fVar12 * fVar6);
  fVar9 = (float)NEON_fmadd(fVar14,fVar18,uVar8);
  fVar9 = 1.0 / fVar9;
  fVar3 = (float)NEON_fnmsub(fVar14,fVar2,fVar21 * fVar11);
  fVar18 = fVar9 * fVar18;
  fVar4 = (float)NEON_fnmsub(fVar21,fVar1,fVar14 * fVar10);
  fVar19 = (float)NEON_fnmsub(fVar12,fVar11,fVar14 * fVar7);
  fVar21 = (float)NEON_fnmsub(fVar12,fVar10,fVar21 * fVar17);
  fVar22 = fVar9 * fVar22;
  fVar11 = *(float *)(in_x0 + 0x484);
  uVar23 = *(undefined4 *)(in_x0 + 0x494);
  fVar1 = (float)NEON_fnmsub(fVar14,fVar17,fVar12 * fVar1);
  fVar21 = fVar9 * fVar21;
  uVar25 = NEON_fmadd(fVar22,fVar15,fVar18 * fVar13);
  uVar24 = *(undefined4 *)(in_x0 + 0x4a4);
  uVar8 = NEON_fmadd(uVar23,fVar9 * fVar3,fVar11 * fVar9 * fVar6);
  uVar5 = NEON_fmadd(uVar23,fVar9 * fVar19,fVar9 * fVar20 * fVar11);
  fVar10 = (float)NEON_fmadd(fVar21,fVar16,uVar25);
  fVar2 = (float)NEON_fmadd(uVar24,fVar9 * fVar4,uVar8);
  fVar7 = (float)NEON_fmadd(uVar24,fVar9 * fVar1,uVar5);
  if (1.0 <= fVar10) {
    fVar1 = atan2f(fVar2,fVar7);
    uVar8 = 0x3fc90fdb;
  }
  else {
    if (-1.0 < fVar10) {
      uVar8 = NEON_fmadd(uVar23,fVar22,fVar18 * fVar11);
      uVar23 = NEON_fmadd(fVar9 * fVar3,fVar15,fVar9 * fVar6 * fVar13);
      uVar25 = NEON_fmadd(fVar9 * fVar19,fVar15,fVar9 * fVar20 * fVar13);
      uVar5 = NEON_fmadd(*(undefined4 *)(in_x0 + 0x498),fVar22,*(float *)(in_x0 + 0x488) * fVar18);
      fVar2 = (float)NEON_fmadd(uVar24,fVar21,uVar8);
      fVar3 = (float)NEON_fmadd(fVar9 * fVar4,fVar16,uVar23);
      fVar4 = (float)NEON_fmadd(fVar9 * fVar1,fVar16,uVar25);
      fVar1 = (float)NEON_fmadd(*(undefined4 *)(in_x0 + 0x4a8),fVar21,uVar5);
      fVar1 = atan2f(-fVar2,fVar1);
      if (fVar10 <= -1.0) {
        fVar10 = -1.0;
      }
      *(float *)(in_x0 + 0x4c0) = fVar1;
      fVar1 = (float)NEON_fminnm(fVar10,0x3f800000);
      fVar1 = asinf(fVar1);
      *(float *)(in_x0 + 0x4c4) = fVar1;
      fVar2 = atan2f(-fVar4,fVar3);
      goto LAB_00f3cb28;
    }
    fVar1 = atan2f(fVar2,fVar7);
    fVar1 = -fVar1;
    uVar8 = 0xbfc90fdb;
  }
  fVar2 = 0.0;
  *(float *)(in_x0 + 0x4c0) = fVar1;
  *(undefined4 *)(in_x0 + 0x4c4) = uVar8;
LAB_00f3cb28:
  fVar1 = *(float *)(in_x0 + 0x458);
  fVar3 = *(float *)(in_x0 + 0x468);
  *(float *)(in_x0 + 0x4c8) = fVar2;
  *(undefined4 *)(in_x0 + 0x4ec) = 0;
  fVar7 = (float)NEON_fnmsub(fVar3,fVar13,fVar14 * fVar16);
  *(undefined4 *)(in_x0 + 0x4dc) = 0;
  fVar2 = (float)NEON_fnmsub(fVar14,fVar15,fVar1 * fVar13);
  *(undefined4 *)(in_x0 + 0x4fc) = 0;
  fVar10 = (float)NEON_fnmsub(fVar1,fVar16,fVar3 * fVar15);
  fVar9 = (float)NEON_fnmsub(fVar2,fVar15,fVar7 * fVar16);
  fVar4 = (float)NEON_fnmsub(fVar7,fVar3,fVar2 * fVar1);
  fVar6 = (float)NEON_fnmsub(fVar2,fVar14,fVar10 * fVar3);
  fVar22 = (float)NEON_fnmsub(fVar10,fVar16,fVar2 * fVar13);
  fVar11 = (float)NEON_fnmsub(fVar7,fVar13,fVar10 * fVar15);
  fVar1 = (float)NEON_fnmsub(fVar10,fVar1,fVar7 * fVar14);
  uVar5 = NEON_fmadd(fVar22,fVar22,fVar9 * fVar9);
  uVar8 = NEON_fmadd(fVar6,fVar6,fVar4 * fVar4);
  fVar12 = (float)NEON_fmadd(fVar11,fVar11,uVar5);
  fVar3 = (float)NEON_fmadd(fVar1,fVar1,uVar8);
  uVar8 = NEON_fmadd(fVar7,fVar7,fVar2 * fVar2);
  fVar18 = (float)NEON_fmadd(fVar10,fVar10,uVar8);
  fVar3 = 1.0 / SQRT(fVar3);
  fVar18 = 1.0 / SQRT(fVar18);
  *(float *)(in_x0 + 0x4d0) = fVar3 * fVar4;
  *(float *)(in_x0 + 0x4d4) = fVar3 * fVar6;
  *(float *)(in_x0 + 0x4d8) = fVar3 * fVar1;
  fVar1 = 1.0 / SQRT(fVar12);
  *(float *)(in_x0 + 0x4e4) = fVar18 * fVar7;
  *(float *)(in_x0 + 0x4e0) = fVar18 * fVar10;
  *(float *)(in_x0 + 0x4e8) = fVar18 * fVar2;
  *(float *)(in_x0 + 0x4f0) = fVar1 * fVar9;
  *(float *)(in_x0 + 0x4f4) = fVar1 * fVar22;
  *(float *)(in_x0 + 0x4f8) = fVar1 * fVar11;
  return;
}


