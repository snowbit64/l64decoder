// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateLinearInfo
// Entry Point: 00f3c78c
// Size: 484 bytes
// Signature: undefined calculateLinearInfo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btGeneric6DofConstraint::calculateLinearInfo() */

void btGeneric6DofConstraint::calculateLinearInfo(void)

{
  long in_x0;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar2 = *(float *)(in_x0 + 0x450);
  fVar16 = *(float *)(in_x0 + 0x460);
  fVar23 = *(float *)(in_x0 + 0x440);
  uVar5 = *(undefined8 *)(in_x0 + 0x454);
  uVar8 = *(undefined8 *)(in_x0 + 0x464);
  uVar20 = *(undefined8 *)(in_x0 + 0x444);
  uVar18 = NEON_rev64(uVar5,4);
  uVar12 = NEON_rev64(uVar8,4);
  uVar21 = NEON_rev64(uVar20,4);
  fVar10 = (float)((ulong)uVar5 >> 0x20);
  fVar26 = -(fVar16 * (float)uVar5) + fVar2 * (float)uVar8;
  fVar17 = (float)((ulong)uVar8 >> 0x20);
  fVar25 = (float)((ulong)uVar20 >> 0x20);
  fVar7 = (float)uVar20;
  fVar13 = (float)((ulong)uVar12 >> 0x20);
  *(undefined4 *)(in_x0 + 0x50c) = 0;
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  fVar14 = -(fVar2 * (float)uVar12) + (float)uVar18 * fVar16;
  fVar15 = -(fVar10 * fVar13) + fVar19 * fVar17;
  fVar22 = (float)((ulong)uVar21 >> 0x20);
  fVar24 = *(float *)(in_x0 + 0x4b4) - *(float *)(in_x0 + 0x474);
  fVar11 = *(float *)(in_x0 + 0x4b8) - *(float *)(in_x0 + 0x478);
  fVar6 = *(float *)(in_x0 + 0x4b0) - *(float *)(in_x0 + 0x470);
  fVar9 = *(float *)(in_x0 + 0x2c0);
  fVar1 = 1.0 / (fVar14 * fVar7 + fVar23 * fVar15 + fVar26 * fVar25);
  uVar3 = NEON_fmadd(fVar11,-(fVar7 * fVar2) + fVar23 * (float)uVar5,
                     fVar24 * (-(fVar23 * (float)uVar8) + fVar16 * fVar7));
  fVar4 = *(float *)(in_x0 + 0x2d0);
  fVar7 = (float)NEON_fmadd(fVar6,fVar26,uVar3);
  fVar2 = ((-((float)uVar21 * fVar16) + (float)uVar12 * fVar23) * fVar24 +
           (-(fVar23 * (float)uVar18) + fVar2 * (float)uVar21) * fVar11 + fVar14 * fVar6) * fVar1;
  fVar6 = ((-(fVar22 * fVar17) + fVar13 * fVar25) * fVar24 +
           (-(fVar25 * fVar19) + fVar10 * fVar22) * fVar11 + fVar15 * fVar6) * fVar1;
  fVar7 = fVar7 * fVar1;
  uVar5 = NEON_rev64(CONCAT44(fVar6,fVar2),4);
  *(float *)(in_x0 + 0x508) = fVar7;
  *(float *)(in_x0 + 0x360) = fVar6;
  *(undefined8 *)(in_x0 + 0x500) = uVar5;
  if (fVar4 < fVar9) {
LAB_00f3c8c0:
    fVar6 = 0.0;
    *(undefined4 *)(in_x0 + 0x370) = 0;
  }
  else if (fVar9 <= fVar6) {
    if (fVar6 <= fVar4) goto LAB_00f3c8c0;
    fVar6 = fVar6 - fVar4;
    *(undefined4 *)(in_x0 + 0x370) = 1;
  }
  else {
    fVar6 = fVar6 - fVar9;
    *(undefined4 *)(in_x0 + 0x370) = 2;
  }
  fVar4 = *(float *)(in_x0 + 0x2c4);
  *(float *)(in_x0 + 0x350) = fVar6;
  fVar1 = *(float *)(in_x0 + 0x2d4);
  *(float *)(in_x0 + 0x364) = fVar2;
  if (fVar1 < fVar4) {
LAB_00f3c910:
    fVar2 = 0.0;
    *(undefined4 *)(in_x0 + 0x374) = 0;
  }
  else if (fVar4 <= fVar2) {
    if (fVar2 <= fVar1) goto LAB_00f3c910;
    fVar2 = fVar2 - fVar1;
    *(undefined4 *)(in_x0 + 0x374) = 1;
  }
  else {
    fVar2 = fVar2 - fVar4;
    *(undefined4 *)(in_x0 + 0x374) = 2;
  }
  fVar6 = *(float *)(in_x0 + 0x2c8);
  *(float *)(in_x0 + 0x354) = fVar2;
  fVar1 = *(float *)(in_x0 + 0x2d8);
  *(float *)(in_x0 + 0x368) = fVar7;
  if (fVar6 <= fVar1) {
    if (fVar6 <= fVar7) {
      if (fVar7 <= fVar1) goto LAB_00f3c960;
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
      fVar1 = fVar6;
    }
    *(undefined4 *)(in_x0 + 0x378) = uVar3;
    *(float *)(in_x0 + 0x358) = fVar7 - fVar1;
    return;
  }
LAB_00f3c960:
  *(undefined4 *)(in_x0 + 0x378) = 0;
  *(undefined4 *)(in_x0 + 0x358) = 0;
  return;
}


