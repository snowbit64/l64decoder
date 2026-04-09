// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeFrustumExtents
// Entry Point: 00a45d90
// Size: 892 bytes
// Signature: undefined __cdecl computeFrustumExtents(Vector3 * param_1, Matrix4x4 * param_2, Vector3 * param_3, Vector3 * param_4)


/* ShadowRenderController::computeFrustumExtents(Vector3 const*, Matrix4x4 const&, Vector3&,
   Vector3&) */

void ShadowRenderController::computeFrustumExtents
               (Vector3 *param_1,Matrix4x4 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
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
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  uVar13 = *(undefined4 *)param_1;
  fVar6 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_2 + 0x10);
  fVar4 = *(float *)(param_2 + 0x14);
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)(param_2 + 4);
  fVar14 = *(float *)(param_1 + 0x10);
  uVar15 = *(undefined4 *)(param_1 + 0x14);
  fVar3 = *(float *)(param_2 + 0x18);
  uVar18 = *(undefined4 *)(param_1 + 8);
  uVar21 = *(undefined4 *)(param_1 + 0xc);
  uVar11 = *(undefined4 *)(param_2 + 8);
  uVar12 = NEON_fmadd(uVar13,uVar1,fVar6 * fVar5);
  uVar24 = NEON_fmadd(uVar13,uVar2,fVar6 * fVar4);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar27 = NEON_fmadd(uVar21,uVar1,fVar14 * fVar5);
  fVar10 = *(float *)(param_2 + 0x30);
  fVar9 = *(float *)(param_2 + 0x34);
  uVar16 = NEON_fmadd(uVar13,uVar11,fVar6 * fVar3);
  uVar23 = NEON_fmadd(uVar21,uVar2,fVar14 * fVar4);
  fVar30 = (float)NEON_fmadd(uVar18,uVar7,uVar12);
  uVar12 = *(undefined4 *)(param_2 + 0x28);
  fVar25 = (float)NEON_fmadd(uVar18,uVar8,uVar24);
  fVar28 = (float)NEON_fmadd(uVar15,uVar7,uVar27);
  uVar13 = NEON_fmadd(uVar21,uVar11,fVar14 * fVar3);
  fVar17 = (float)NEON_fmadd(uVar18,uVar12,uVar16);
  fVar6 = *(float *)(param_2 + 0x38);
  fVar30 = fVar30 + fVar10;
  fVar19 = (float)NEON_fmadd(uVar15,uVar8,uVar23);
  fVar25 = fVar9 + fVar25;
  fVar28 = fVar28 + fVar10;
  fVar14 = (float)NEON_fmadd(uVar15,uVar12,uVar13);
  fVar17 = fVar6 + fVar17;
  fVar26 = (float)NEON_fminnm(fVar30,0x7f7fffff);
  fVar19 = fVar9 + fVar19;
  fVar20 = (float)NEON_fminnm(fVar25,0x7f7fffff);
  uVar13 = *(undefined4 *)(param_1 + 0x18);
  fVar29 = *(float *)(param_1 + 0x1c);
  fVar14 = fVar6 + fVar14;
  fVar31 = (float)NEON_fminnm(fVar17,0x7f7fffff);
  if (fVar30 <= -3.402823e+38) {
    fVar30 = -3.402823e+38;
  }
  uVar15 = *(undefined4 *)(param_1 + 0x20);
  uVar16 = *(undefined4 *)(param_1 + 0x24);
  fVar22 = fVar28;
  if (fVar26 <= fVar28) {
    fVar22 = fVar26;
  }
  if (fVar25 <= -3.402823e+38) {
    fVar25 = -3.402823e+38;
  }
  if (fVar17 <= -3.402823e+38) {
    fVar17 = -3.402823e+38;
  }
  fVar26 = fVar19;
  if (fVar20 <= fVar19) {
    fVar26 = fVar20;
  }
  uVar18 = NEON_fmadd(uVar13,uVar1,fVar29 * fVar5);
  uVar21 = NEON_fmadd(uVar13,uVar2,fVar29 * fVar4);
  uVar13 = NEON_fmadd(uVar13,uVar11,fVar29 * fVar3);
  fVar20 = fVar14;
  if (fVar31 <= fVar14) {
    fVar20 = fVar31;
  }
  fVar29 = (float)NEON_fmadd(uVar15,uVar7,uVar18);
  if (fVar28 <= fVar30) {
    fVar28 = fVar30;
  }
  fVar30 = (float)NEON_fmadd(uVar15,uVar8,uVar21);
  if (fVar19 <= fVar25) {
    fVar19 = fVar25;
  }
  fVar29 = fVar29 + fVar10;
  fVar25 = (float)NEON_fmadd(uVar15,uVar12,uVar13);
  fVar30 = fVar9 + fVar30;
  if (fVar14 <= fVar17) {
    fVar14 = fVar17;
  }
  fVar31 = *(float *)(param_1 + 0x28);
  uVar13 = *(undefined4 *)(param_1 + 0x2c);
  fVar25 = fVar6 + fVar25;
  fVar17 = fVar29;
  if (fVar22 <= fVar29) {
    fVar17 = fVar22;
  }
  uVar15 = NEON_fmadd(uVar16,uVar1,fVar31 * fVar5);
  fVar22 = fVar30;
  if (fVar26 <= fVar30) {
    fVar22 = fVar26;
  }
  uVar18 = NEON_fmadd(uVar16,uVar2,fVar31 * fVar4);
  uVar16 = NEON_fmadd(uVar16,uVar11,fVar31 * fVar3);
  fVar26 = fVar25;
  if (fVar20 <= fVar25) {
    fVar26 = fVar20;
  }
  fVar20 = (float)NEON_fmadd(uVar13,uVar7,uVar15);
  if (fVar29 <= fVar28) {
    fVar29 = fVar28;
  }
  fVar31 = (float)NEON_fmadd(uVar13,uVar8,uVar18);
  fVar28 = (float)NEON_fmadd(uVar13,uVar12,uVar16);
  fVar20 = fVar20 + fVar10;
  if (fVar30 <= fVar19) {
    fVar30 = fVar19;
  }
  fVar19 = *(float *)(param_1 + 0x34);
  uVar13 = *(undefined4 *)(param_1 + 0x38);
  fVar31 = fVar9 + fVar31;
  fVar28 = fVar6 + fVar28;
  if (fVar25 <= fVar14) {
    fVar25 = fVar14;
  }
  uVar15 = *(undefined4 *)(param_1 + 0x30);
  fVar14 = fVar20;
  if (fVar17 <= fVar20) {
    fVar14 = fVar17;
  }
  uVar16 = NEON_fmadd(uVar15,uVar1,fVar19 * fVar5);
  fVar17 = fVar31;
  if (fVar22 <= fVar31) {
    fVar17 = fVar22;
  }
  uVar18 = NEON_fmadd(uVar15,uVar2,fVar19 * fVar4);
  uVar15 = NEON_fmadd(uVar15,uVar11,fVar19 * fVar3);
  fVar19 = fVar28;
  if (fVar26 <= fVar28) {
    fVar19 = fVar26;
  }
  fVar22 = (float)NEON_fmadd(uVar13,uVar7,uVar16);
  fVar26 = (float)NEON_fmadd(uVar13,uVar8,uVar18);
  if (fVar20 <= fVar29) {
    fVar20 = fVar29;
  }
  fVar22 = fVar22 + fVar10;
  fVar26 = fVar9 + fVar26;
  if (fVar31 <= fVar30) {
    fVar31 = fVar30;
  }
  fVar29 = (float)NEON_fmadd(uVar13,uVar12,uVar15);
  uVar13 = *(undefined4 *)(param_1 + 0x3c);
  fVar30 = *(float *)(param_1 + 0x40);
  if (fVar28 <= fVar25) {
    fVar28 = fVar25;
  }
  uVar15 = *(undefined4 *)(param_1 + 0x44);
  fVar29 = fVar6 + fVar29;
  fVar25 = fVar22;
  if (fVar14 <= fVar22) {
    fVar25 = fVar14;
  }
  uVar16 = NEON_fmadd(uVar13,uVar1,fVar30 * fVar5);
  fVar14 = fVar26;
  if (fVar17 <= fVar26) {
    fVar14 = fVar17;
  }
  uVar18 = NEON_fmadd(uVar13,uVar2,fVar30 * fVar4);
  uVar13 = NEON_fmadd(uVar13,uVar11,fVar30 * fVar3);
  fVar17 = fVar29;
  if (fVar19 <= fVar29) {
    fVar17 = fVar19;
  }
  fVar19 = (float)NEON_fmadd(uVar15,uVar7,uVar16);
  if (fVar22 <= fVar20) {
    fVar22 = fVar20;
  }
  fVar30 = (float)NEON_fmadd(uVar15,uVar8,uVar18);
  fVar20 = (float)NEON_fmadd(uVar15,uVar12,uVar13);
  fVar19 = fVar19 + fVar10;
  uVar13 = *(undefined4 *)(param_1 + 0x48);
  if (fVar26 <= fVar31) {
    fVar26 = fVar31;
  }
  fVar31 = *(float *)(param_1 + 0x4c);
  uVar15 = *(undefined4 *)(param_1 + 0x50);
  fVar30 = fVar9 + fVar30;
  fVar20 = fVar6 + fVar20;
  if (fVar29 <= fVar28) {
    fVar29 = fVar28;
  }
  fVar28 = fVar19;
  if (fVar25 <= fVar19) {
    fVar28 = fVar25;
  }
  uVar16 = NEON_fmadd(uVar13,uVar1,fVar31 * fVar5);
  fVar25 = fVar30;
  if (fVar14 <= fVar30) {
    fVar25 = fVar14;
  }
  uVar18 = NEON_fmadd(uVar13,uVar2,fVar31 * fVar4);
  uVar13 = NEON_fmadd(uVar13,uVar11,fVar31 * fVar3);
  fVar14 = fVar20;
  if (fVar17 <= fVar20) {
    fVar14 = fVar17;
  }
  fVar17 = (float)NEON_fmadd(uVar15,uVar7,uVar16);
  fVar31 = (float)NEON_fmadd(uVar15,uVar8,uVar18);
  if (fVar19 <= fVar22) {
    fVar19 = fVar22;
  }
  fVar17 = fVar17 + fVar10;
  if (fVar30 <= fVar26) {
    fVar30 = fVar26;
  }
  fVar26 = (float)NEON_fmadd(uVar15,uVar12,uVar13);
  fVar31 = fVar9 + fVar31;
  uVar13 = *(undefined4 *)(param_1 + 0x54);
  fVar22 = *(float *)(param_1 + 0x58);
  if (fVar20 <= fVar29) {
    fVar20 = fVar29;
  }
  uVar15 = *(undefined4 *)(param_1 + 0x5c);
  fVar26 = fVar6 + fVar26;
  fVar29 = fVar17;
  if (fVar28 <= fVar17) {
    fVar29 = fVar28;
  }
  fVar28 = fVar31;
  if (fVar25 <= fVar31) {
    fVar28 = fVar25;
  }
  uVar1 = NEON_fmadd(uVar13,uVar1,fVar22 * fVar5);
  uVar2 = NEON_fmadd(uVar13,uVar2,fVar22 * fVar4);
  uVar11 = NEON_fmadd(uVar13,uVar11,fVar22 * fVar3);
  fVar3 = fVar26;
  if (fVar14 <= fVar26) {
    fVar3 = fVar14;
  }
  fVar14 = (float)NEON_fmadd(uVar15,uVar7,uVar1);
  fVar4 = (float)NEON_fmadd(uVar15,uVar8,uVar2);
  if (fVar17 <= fVar19) {
    fVar17 = fVar19;
  }
  fVar19 = (float)NEON_fmadd(uVar15,uVar12,uVar11);
  fVar14 = fVar14 + fVar10;
  if (fVar31 <= fVar30) {
    fVar31 = fVar30;
  }
  fVar9 = fVar9 + fVar4;
  fVar6 = fVar6 + fVar19;
  if (fVar26 <= fVar20) {
    fVar26 = fVar20;
  }
  fVar19 = fVar14;
  if (fVar29 <= fVar14) {
    fVar19 = fVar29;
  }
  fVar4 = fVar9;
  if (fVar28 <= fVar9) {
    fVar4 = fVar28;
  }
  *(float *)param_3 = fVar19;
  fVar19 = fVar6;
  if (fVar3 <= fVar6) {
    fVar19 = fVar3;
  }
  *(float *)(param_3 + 4) = fVar4;
  if (fVar14 <= fVar17) {
    fVar14 = fVar17;
  }
  *(float *)(param_3 + 8) = fVar19;
  if (fVar9 <= fVar31) {
    fVar9 = fVar31;
  }
  *(float *)param_4 = fVar14;
  if (fVar6 <= fVar26) {
    fVar6 = fVar26;
  }
  *(float *)(param_4 + 4) = fVar9;
  *(float *)(param_4 + 8) = fVar6;
  return;
}


