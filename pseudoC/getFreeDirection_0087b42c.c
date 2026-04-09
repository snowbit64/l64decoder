// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFreeDirection
// Entry Point: 0087b42c
// Size: 1488 bytes
// Signature: undefined __thiscall getFreeDirection(ObstacleWallDetector * this, Vector3 * param_1, Vector3 * param_2)


/* ObstacleWallDetector::getFreeDirection(Vector3 const&, Vector3&) */

void __thiscall
ObstacleWallDetector::getFreeDirection(ObstacleWallDetector *this,Vector3 *param_1,Vector3 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  undefined4 uVar11;
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
  float fVar23;
  
  fVar13 = *(float *)param_1 - *(float *)(this + 0x3a0);
  fVar22 = *(float *)(param_1 + 8) - *(float *)(this + 0x3a8);
  uVar11 = NEON_fmadd(fVar13,fVar13,0);
  fVar12 = (float)NEON_fmadd(fVar22,fVar22,uVar11);
  uVar5 = (ulong)(uint)fVar13;
  if (0.0001 <= SQRT(fVar12)) {
    fVar12 = 1.0 / SQRT(fVar12);
    uVar5 = CONCAT44(fVar12 * 0.0,fVar13 * fVar12);
    fVar22 = fVar22 * fVar12;
  }
  fVar13 = *(float *)(this + 0x34);
  fVar12 = atan2f((float)uVar5,fVar22);
  for (fVar12 = fVar12 - fVar13; fVar12 < 0.0; fVar12 = fVar12 + 6.283185) {
  }
  fVar14 = fVar13 - fVar13;
  fVar17 = *(float *)(this + 0x74) - fVar13;
  fVar20 = *(float *)(this + 0xb4) - fVar13;
  fVar23 = fVar14 + 6.283185;
  if (0.0 <= fVar14) {
    fVar23 = fVar14;
  }
  fVar15 = *(float *)(this + 0xf4) - fVar13;
  fVar14 = fVar17 + 6.283185;
  if (0.0 <= fVar17) {
    fVar14 = fVar17;
  }
  fVar18 = *(float *)(this + 0x134) - fVar13;
  *(float *)(this + 0x38) = fVar23;
  fVar17 = fVar20 + 6.283185;
  if (0.0 <= fVar20) {
    fVar17 = fVar20;
  }
  fVar21 = *(float *)(this + 0x174) - fVar13;
  *(float *)(this + 0x78) = fVar14;
  fVar20 = fVar15 + 6.283185;
  if (0.0 <= fVar15) {
    fVar20 = fVar15;
  }
  fVar16 = *(float *)(this + 0x1b4) - fVar13;
  *(float *)(this + 0xb8) = fVar17;
  fVar15 = fVar18 + 6.283185;
  if (0.0 <= fVar18) {
    fVar15 = fVar18;
  }
  fVar19 = *(float *)(this + 500) - fVar13;
  *(float *)(this + 0xf8) = fVar20;
  fVar18 = fVar21 + 6.283185;
  if (0.0 <= fVar21) {
    fVar18 = fVar21;
  }
  fVar13 = *(float *)(this + 0x234) - fVar13;
  *(float *)(this + 0x138) = fVar15;
  fVar21 = fVar16 + 6.283185;
  if (0.0 <= fVar16) {
    fVar21 = fVar16;
  }
  *(float *)(this + 0x178) = fVar18;
  fVar16 = fVar19 + 6.283185;
  if (0.0 <= fVar19) {
    fVar16 = fVar19;
  }
  *(float *)(this + 0x1b8) = fVar21;
  fVar19 = fVar13 + 6.283185;
  if (0.0 <= fVar13) {
    fVar19 = fVar13;
  }
  *(float *)(this + 0x1f8) = fVar16;
  *(float *)(this + 0x238) = fVar19;
  if ((fVar12 < fVar23) || (fVar14 < fVar12)) {
    if ((fVar14 <= fVar12) && (fVar12 <= fVar17)) {
      uVar3 = 2;
      uVar6 = 1;
      goto LAB_0087b68c;
    }
    if ((fVar17 <= fVar12) && (fVar12 <= fVar20)) {
      uVar3 = 3;
      uVar6 = 2;
      goto LAB_0087b68c;
    }
    if ((fVar20 <= fVar12) && (fVar12 <= fVar15)) {
      uVar3 = 4;
      uVar6 = 3;
      goto LAB_0087b68c;
    }
    if ((fVar15 <= fVar12) && (fVar12 <= fVar18)) {
      uVar3 = 5;
      uVar6 = 4;
      goto LAB_0087b68c;
    }
    if ((fVar18 <= fVar12) && (fVar12 <= fVar21)) {
      uVar3 = 6;
      uVar6 = 5;
      goto LAB_0087b68c;
    }
    if ((fVar21 <= fVar12) && (fVar12 <= fVar16)) {
      uVar3 = 7;
      uVar6 = 6;
      goto LAB_0087b68c;
    }
    uVar3 = 8;
    uVar6 = 7;
    if ((fVar16 <= fVar12) && (fVar12 <= fVar19)) goto LAB_0087b68c;
    fVar13 = (float)NEON_fmadd(6.283185 - fVar19,0x3f000000,fVar19);
    if (fVar13 <= fVar12) {
      uVar6 = 0;
    }
    uVar1 = 8;
    if (fVar13 <= fVar12) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
  }
  else {
    uVar6 = 0;
    uVar3 = 1;
LAB_0087b68c:
    if ((*(float *)(this + (ulong)uVar6 * 0x40 + 0x30) == 3.402823e+38) &&
       (*(float *)(this + uVar3 * 0x40 + 0x30) == 3.402823e+38)) {
      *(float *)(param_2 + 8) = fVar22;
      *(ulong *)param_2 = uVar5;
      return;
    }
  }
  uVar8 = (ulong)uVar6;
  uVar5 = uVar8;
  if ((*(float *)(this + uVar8 * 0x40 + 0x30) != 3.402823e+38) &&
     ((uVar6 == 0 ||
      ((uVar5 = uVar8 - 1, *(float *)(this + (uVar8 - 1) * 0x40 + 0x30) != 3.402823e+38 &&
       ((uVar6 < 2 ||
        ((uVar5 = uVar8 - 2, *(float *)(this + (uVar8 - 2) * 0x40 + 0x30) != 3.402823e+38 &&
         ((uVar6 < 3 ||
          ((uVar5 = uVar8 - 3, *(float *)(this + (uVar8 - 3) * 0x40 + 0x30) != 3.402823e+38 &&
           ((uVar6 < 4 ||
            ((uVar5 = uVar8 - 4, *(float *)(this + (uVar8 - 4) * 0x40 + 0x30) != 3.402823e+38 &&
             ((uVar6 < 5 ||
              ((uVar5 = uVar8 - 5, *(float *)(this + (uVar8 - 5) * 0x40 + 0x30) != 3.402823e+38 &&
               ((uVar6 < 6 ||
                ((uVar5 = uVar8 - 6, *(float *)(this + (uVar8 - 6) * 0x40 + 0x30) != 3.402823e+38 &&
                 ((uVar6 < 7 ||
                  (uVar5 = uVar8 - 7, *(float *)(this + (uVar8 - 7) * 0x40 + 0x30) != 3.402823e+38))
                 )))))))))))))))))))))))))) {
    uVar5 = 0x7fffffff;
  }
  pfVar9 = (float *)(this + uVar3 * 0x40 + 0x30);
  do {
    if (*pfVar9 == 3.402823e+38) goto LAB_0087b850;
    uVar3 = uVar3 + 1;
    pfVar9 = pfVar9 + 0x10;
  } while (uVar3 != 9);
  uVar3 = 0x80000000;
LAB_0087b850:
  iVar7 = (int)uVar5;
  iVar2 = (int)uVar3;
  if ((iVar7 == 0x7fffffff) && (iVar2 == -0x80000000)) {
    fVar13 = (float)NEON_fmadd(6.283185 - fVar19,0x3f000000,fVar19);
    if (fVar13 <= fVar12) {
      uVar4 = *(undefined8 *)(this + 0xc);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x14);
      *(undefined8 *)param_2 = uVar4;
      return;
    }
    uVar11 = *(undefined4 *)(this + 0x214);
    uVar4 = *(undefined8 *)(this + 0x20c);
    goto LAB_0087b9b0;
  }
  if ((iVar7 == 0x7fffffff) || (iVar2 != -0x80000000)) {
    if ((iVar7 == 0x7fffffff) && (iVar2 != -0x80000000)) {
      if ((iVar2 < 7) && (*(float *)(this + ((long)iVar2 + 1) * 0x40 + 0x30) == 3.402823e+38)) {
        iVar2 = (int)((long)iVar2 + 1);
      }
      uVar5 = (ulong)iVar2;
      goto LAB_0087b9a4;
    }
    lVar10 = (long)iVar2;
    fVar22 = ABS(*(float *)(this + lVar10 * 0x40 + 0x38) - fVar12);
    fVar13 = ABS(*(float *)(this + (long)iVar7 * 0x40 + 0x38) - fVar12);
    fVar12 = 6.283185 - fVar22;
    if (fVar22 <= 3.141593) {
      fVar12 = fVar22;
    }
    fVar22 = 6.283185 - fVar13;
    if (fVar13 <= 3.141593) {
      fVar22 = fVar13;
    }
    if (fVar22 < fVar12) goto joined_r0x0087b998;
    if ((iVar2 < 7) && (*(float *)(this + (lVar10 + 1) * 0x40 + 0x30) == 3.402823e+38)) {
      lVar10 = lVar10 + 1;
    }
    lVar10 = lVar10 << 6;
  }
  else {
joined_r0x0087b998:
    if (iVar7 < 1) {
      uVar5 = 0;
    }
    else if (*(float *)(this + (ulong)(iVar7 - 1) * 0x40 + 0x30) == 3.402823e+38) {
      uVar5 = (ulong)(iVar7 - 1);
    }
    uVar5 = uVar5 & 0xffffffff;
LAB_0087b9a4:
    lVar10 = uVar5 * 0x40;
  }
  uVar11 = *(undefined4 *)(this + lVar10 + 0x14);
  uVar4 = *(undefined8 *)(this + lVar10 + 0xc);
LAB_0087b9b0:
  *(undefined4 *)(param_2 + 8) = uVar11;
  *(undefined8 *)param_2 = uVar4;
  return;
}


