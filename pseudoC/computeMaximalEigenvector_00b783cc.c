// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMaximalEigenvector
// Entry Point: 00b783cc
// Size: 1524 bytes
// Signature: undefined __thiscall computeMaximalEigenvector(PCA3D * this, float * param_1)


/* PCA3D::computeMaximalEigenvector(float*) */

float __thiscall PCA3D::computeMaximalEigenvector(PCA3D *this,float *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar26 = 0.0;
  fVar25 = 0.0;
  fVar27 = 0.0;
  fVar22 = 0.0;
  uVar5 = *(uint *)(this + 8);
  uVar7 = (ulong)uVar5;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  if (uVar5 != 0) {
    fVar23 = 0.0;
    lVar6 = *(long *)this;
    if (uVar5 == 1) {
      fVar24 = 0.0;
      fVar26 = 0.0;
      fVar25 = 0.0;
      fVar27 = 0.0;
      fVar22 = 0.0;
      uVar9 = 0;
LAB_00b78580:
      lVar8 = uVar7 - uVar9;
      uVar5 = (int)uVar9 * 3;
      do {
        uVar1 = uVar5 + 1;
        uVar2 = uVar5 + 2;
        uVar14 = *(undefined4 *)(lVar6 + (ulong)uVar5 * 4);
        lVar8 = lVar8 + -1;
        uVar5 = uVar5 + 3;
        uVar16 = *(undefined4 *)(lVar6 + (ulong)uVar1 * 4);
        uVar19 = *(undefined4 *)(lVar6 + (ulong)uVar2 * 4);
        fVar22 = (float)NEON_fmadd(uVar14,uVar14,fVar22);
        fVar27 = (float)NEON_fmadd(uVar14,uVar16,fVar27);
        fVar26 = (float)NEON_fmadd(uVar16,uVar16,fVar26);
        fVar25 = (float)NEON_fmadd(uVar14,uVar19,fVar25);
        fVar24 = (float)NEON_fmadd(uVar16,uVar19,fVar24);
        fVar23 = (float)NEON_fmadd(uVar19,uVar19,fVar23);
      } while (lVar8 != 0);
    }
    else {
      uVar10 = uVar7 - 1;
      uVar9 = 0;
      uVar11 = (uVar10 & 0xffffffff) + (uVar10 & 0xffffffff) * 2;
      bVar4 = (uVar11 & 0xffffffff00000000) != 0;
      uVar5 = (uint)uVar11;
      if ((((uVar5 == 0xffffffff) || (bVar4)) || (uVar10 >> 0x20 != 0)) ||
         ((0xfffffffd < uVar5 || (bVar4)))) {
        fVar24 = 0.0;
        fVar26 = 0.0;
        fVar25 = 0.0;
        fVar27 = 0.0;
        fVar22 = 0.0;
        goto LAB_00b78580;
      }
      uVar9 = uVar7 & 0xfffffffe;
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar26 = 0.0;
      fVar25 = 0.0;
      fVar27 = 0.0;
      fVar22 = 0.0;
      uVar5 = 5;
      uVar11 = uVar9;
      do {
        fVar20 = *(float *)(lVar6 + (ulong)uVar5 * 4);
        uVar11 = uVar11 - 2;
        fVar12 = *(float *)(lVar6 + (ulong)(uVar5 - 5) * 4);
        fVar13 = *(float *)(lVar6 + (ulong)(uVar5 - 4) * 4);
        fVar15 = *(float *)(lVar6 + (ulong)(uVar5 - 3) * 4);
        fVar21 = *(float *)(lVar6 + (ulong)(uVar5 - 2) * 4);
        fVar17 = *(float *)(lVar6 + (ulong)(uVar5 - 1) * 4);
        uVar5 = uVar5 + 6;
        fVar22 = fVar22 + fVar12 * fVar12 + fVar21 * fVar21;
        fVar27 = fVar27 + fVar12 * fVar13 + fVar21 * fVar17;
        fVar25 = fVar25 + fVar12 * fVar15 + fVar21 * fVar20;
        fVar26 = fVar26 + fVar13 * fVar13 + fVar17 * fVar17;
        fVar24 = fVar24 + fVar13 * fVar15 + fVar17 * fVar20;
        fVar23 = fVar23 + fVar15 * fVar15 + fVar20 * fVar20;
      } while (uVar11 != 0);
      if (uVar9 != uVar7) goto LAB_00b78580;
    }
    local_80 = CONCAT44(fVar27,fVar22);
    local_78 = CONCAT44(fVar26,fVar25);
    local_70 = CONCAT44(fVar23,fVar24);
  }
  fVar12 = ABS(fVar27);
  if (ABS(fVar27) <= ABS(fVar22)) {
    fVar12 = ABS(fVar22);
  }
  fVar13 = ABS(fVar25);
  if (ABS(fVar25) <= fVar12) {
    fVar13 = fVar12;
  }
  fVar12 = ABS(fVar26);
  if (ABS(fVar26) <= fVar13) {
    fVar12 = fVar13;
  }
  fVar13 = ABS(fVar24);
  if (ABS(fVar24) <= fVar12) {
    fVar13 = fVar12;
  }
  fVar12 = ABS(fVar23);
  if (ABS(fVar23) <= fVar13) {
    fVar12 = fVar13;
  }
  if (1.0 < fVar12) {
    fVar22 = fVar22 / fVar12;
    fVar27 = fVar27 / fVar12;
    fVar25 = fVar25 / fVar12;
    local_80 = CONCAT44(fVar27,fVar22);
    fVar26 = fVar26 / fVar12;
    fVar24 = fVar24 / fVar12;
    local_78 = CONCAT44(fVar26,fVar25);
    fVar23 = fVar23 / fVar12;
    local_70 = CONCAT44(fVar23,fVar24);
  }
  uVar14 = NEON_fmadd(fVar22,fVar26,fVar22 * fVar23);
  fVar21 = fVar22 + fVar26 + fVar23;
  uVar14 = NEON_fmadd(fVar26,fVar23,uVar14);
  uVar14 = NEON_fmsub(fVar27,fVar27,uVar14);
  uVar16 = NEON_fmadd(fVar22 * fVar26,fVar23,(fVar27 + fVar27) * fVar25 * fVar24);
  uVar14 = NEON_fmsub(fVar25,fVar25,uVar14);
  uVar16 = NEON_fmadd(fVar24 * -fVar22,fVar24,uVar16);
  fVar12 = (float)NEON_fmsub(fVar24,fVar24,uVar14);
  uVar14 = NEON_fmadd(fVar25 * -fVar26,fVar25,uVar16);
  fVar13 = (float)NEON_fmadd(fVar21 * -0.3333333,fVar21,fVar12);
  fVar15 = (float)NEON_fmadd(fVar27 * -fVar23,fVar27,uVar14);
  fVar12 = (float)NEON_fmadd(fVar21 * fVar21 * -0.07407407,fVar21,fVar21 * fVar12 * 0.3333333);
  fVar12 = fVar12 - fVar15;
  fVar13 = (float)NEON_fmadd(fVar12 * 0.25,fVar12,fVar13 * fVar13 * fVar13 * 0.03703704);
  if (fVar12 * fVar12 * 1.192093e-07 <= fVar13) {
    param_1[2] = 0.0;
    *(undefined8 *)param_1 = 0x3f800000;
    goto LAB_00b78808;
  }
  if (fVar13 < fVar12 * fVar12 * -1.192093e-07) {
    fVar22 = atan2f(SQRT(-fVar13),fVar12 * -0.5);
    fVar23 = (float)NEON_fnmsub(fVar12 * 0.25,fVar12,fVar13);
    fVar24 = powf(SQRT(fVar23),0.3333333);
    sincosf(fVar22 / 3.0,&fStack_84,&local_88);
    fVar23 = (float)NEON_fmadd(fStack_84,0x3fddb3d7,local_88);
    fVar25 = (float)NEON_fmadd(fVar21,0x3eaaaaab,(fVar24 + fVar24) * local_88);
    fVar22 = (float)NEON_fmadd(fStack_84,0xbfddb3d7,local_88);
    fVar23 = (float)NEON_fmadd(fVar21,0x3eaaaaab,fVar23 * -fVar24);
    fVar22 = (float)NEON_fmadd(fVar21,0x3eaaaaab,fVar22 * -fVar24);
    if (ABS(fVar23) <= ABS(fVar25)) {
      fVar23 = fVar25;
    }
    if (ABS(fVar22) <= ABS(fVar23)) {
      fVar22 = fVar23;
    }
    getEigenvector1((float *)&local_80,param_1,fVar22);
    goto LAB_00b78808;
  }
  if (0.0 <= fVar12) {
    fVar12 = powf(fVar12 * 0.5,0.3333333);
  }
  else {
    fVar12 = powf(fVar12 * -0.5,0.3333333);
    fVar12 = -fVar12;
  }
  fVar13 = (float)NEON_fmadd(fVar21,0x3eaaaaab,fVar12);
  fVar12 = (float)NEON_fmadd(fVar21,0x3eaaaaab,fVar12 * -2.0);
  if (ABS(fVar13) <= ABS(fVar12)) {
    getEigenvector1((float *)&local_80,param_1,fVar12);
    fVar22 = fVar12;
    goto LAB_00b78808;
  }
  fVar15 = ABS(fVar22 - fVar13);
  fVar21 = ABS(fVar27);
  fVar12 = fVar21;
  if (fVar21 <= fVar15) {
    fVar12 = fVar15;
  }
  fVar17 = ABS(fVar25);
  fVar20 = fVar17;
  if (fVar17 <= fVar12) {
    fVar20 = fVar12;
  }
  fVar18 = ABS(fVar26 - fVar13);
  uVar5 = 2;
  if (fVar17 <= fVar12) {
    uVar5 = (uint)(fVar15 < fVar21);
  }
  fVar12 = fVar18;
  if (fVar18 <= fVar20) {
    fVar12 = fVar20;
  }
  fVar15 = ABS(fVar24);
  uVar1 = 3;
  if (fVar18 <= fVar20) {
    uVar1 = uVar5;
  }
  fVar21 = fVar15;
  if (fVar15 <= fVar12) {
    fVar21 = fVar12;
  }
  uVar5 = 4;
  if (fVar15 <= fVar12) {
    uVar5 = uVar1;
  }
  fVar12 = fVar22 - fVar13;
  uVar1 = 5;
  if (ABS(fVar23 - fVar13) <= fVar21) {
    uVar1 = uVar5;
  }
  if (uVar1 < 2) {
    fVar25 = -fVar27;
    fVar26 = 0.0;
  }
  else {
    if (uVar1 - 3 < 2) {
      fVar26 = fVar26 - fVar13;
      fVar23 = fVar24;
    }
    else {
      if (uVar1 == 2) {
        fVar26 = -fVar12;
        fVar12 = 0.0;
        goto LAB_00b78974;
      }
      fVar23 = fVar23 - fVar13;
      fVar26 = fVar24;
    }
    fVar12 = -fVar23;
    fVar25 = 0.0;
  }
LAB_00b78974:
  uVar14 = NEON_fmadd(fVar25,fVar25,fVar12 * fVar12);
  fVar23 = (float)NEON_fmadd(fVar26,fVar26,uVar14);
  fVar23 = SQRT(fVar23);
  fVar22 = fVar13;
  if (1.192093e-07 <= fVar23) {
    *param_1 = fVar25 / fVar23;
    param_1[1] = fVar12 / fVar23;
    param_1[2] = fVar26 / fVar23;
  }
  else {
    param_1[2] = 0.0;
    *(undefined8 *)param_1 = 0;
  }
LAB_00b78808:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar22;
}


