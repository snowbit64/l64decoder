// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAeroForceToFace
// Entry Point: 00f7dd18
// Size: 1512 bytes
// Signature: undefined __thiscall addAeroForceToFace(btSoftBody * this, btVector3 * param_1, int param_2)


/* btSoftBody::addAeroForceToFace(btVector3 const&, int) */

void __thiscall btSoftBody::addAeroForceToFace(btSoftBody *this,btVector3 *param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  ulong uVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar11 = *(float *)(this + 0x184);
  fVar18 = *(float *)(this + 0x188);
  iVar4 = *(int *)(this + 0x178);
  bVar1 = 0.0 < fVar11;
  bVar5 = true;
  if ((bVar1 || fVar18 != 0.0) && (bVar1 || 0.0 <= fVar18)) {
    bVar5 = iVar4 + -4 < 0;
  }
  if (bVar5 == (((bVar1 || fVar18 != 0.0) && (bVar1 || 0.0 <= fVar18)) && SBORROW4(iVar4,4))) {
    lVar7 = *(long *)(this + 0x3c0);
    lVar6 = lVar7 + (long)param_2 * 0x48;
    lVar2 = *(long *)(lVar6 + 0x10);
    lVar3 = *(long *)(lVar6 + 0x18);
    lVar6 = *(long *)(lVar6 + 0x20);
    fVar15 = *(float *)(lVar2 + 0x38);
    fVar14 = (float)*(undefined8 *)(lVar2 + 0x30);
    fVar17 = (float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20);
    fVar24 = -(float)*(undefined8 *)param_1 +
             ((float)*(undefined8 *)(lVar3 + 0x30) + fVar14 + (float)*(undefined8 *)(lVar6 + 0x30))
             * 0.3333333;
    fVar26 = -(float)((ulong)*(undefined8 *)param_1 >> 0x20) +
             ((float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20) + fVar17 +
             (float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20)) * 0.3333333;
    fVar23 = (float)NEON_fnmsub(*(float *)(lVar3 + 0x38) + fVar15 + *(float *)(lVar6 + 0x38),
                                0x3eaaaaab,*(undefined4 *)(param_1 + 8));
    fVar12 = (float)NEON_fmadd(fVar23,fVar23,fVar24 * fVar24 + fVar26 * fVar26);
    if (1.192093e-07 < fVar12) {
      lVar8 = (long)param_2;
      lVar9 = lVar7 + lVar8 * 0x48;
      fVar10 = *(float *)(this + 0x240);
      uVar29 = *(undefined8 *)(lVar9 + 0x28);
      fVar27 = *(float *)(lVar9 + 0x30);
      fVar19 = 1.0 / SQRT(fVar12);
      fVar20 = fVar24 * fVar19;
      fVar22 = fVar26 * fVar19;
      fVar19 = fVar19 * fVar23;
      fVar30 = (float)uVar29;
      fVar25 = (float)((ulong)uVar29 >> 0x20);
      if ((iVar4 == 4) || (iVar4 == 6)) {
        fVar31 = (float)NEON_fmadd(fVar27,fVar23,fVar30 * fVar24 + fVar25 * fVar26);
        fVar28 = -1.0;
        if (0.0 <= fVar31) {
          fVar28 = 1.0;
        }
        fVar23 = (float)NEON_fmadd(fVar28 * fVar27,fVar23,
                                   fVar30 * fVar28 * fVar24 + fVar25 * fVar28 * fVar26);
        if (0.0 < fVar23) {
          fVar12 = **(float **)(this + 0x348) * -fVar12 * fVar23 *
                   *(float *)(lVar7 + lVar8 * 0x48 + 0x38);
          fVar11 = fVar12 * fVar11;
          fVar12 = fVar12 * fVar18;
          fVar23 = (float)NEON_fmadd(fVar12,fVar28 * fVar27,fVar11 * fVar19);
          fVar18 = (fVar20 * fVar11 + fVar30 * fVar28 * fVar12) * 0.3333333;
          fVar11 = (fVar22 * fVar11 + fVar25 * fVar28 * fVar12) * 0.3333333;
          fVar23 = fVar23 * 0.3333333;
          fVar20 = *(float *)(lVar2 + 0x60) * fVar10;
          fVar12 = (float)NEON_fmadd(fVar23,fVar23,fVar18 * fVar18 + fVar11 * fVar11);
          fVar24 = fVar17 * fVar17 + fVar14 * fVar14 + fVar15 * fVar15;
          fVar12 = 1.0 / SQRT(fVar12);
          uVar21 = NEON_fcmgt(CONCAT44(fVar24,fVar11 * fVar20 * fVar11 * fVar20 +
                                              fVar18 * fVar20 * fVar18 * fVar20 +
                                              fVar20 * fVar23 * fVar20 * fVar23),
                              CONCAT44(fVar24,fVar24),4);
          fVar24 = fVar18 * fVar12;
          fVar26 = fVar11 * fVar12;
          fVar12 = fVar12 * fVar23;
          if ((uVar21 & 1) == 0) {
            *(ulong *)(lVar2 + 0x40) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) + fVar11,
                          (float)*(undefined8 *)(lVar2 + 0x40) + fVar18);
            *(float *)(lVar2 + 0x48) = *(float *)(lVar2 + 0x48) + fVar23;
          }
          else {
            fVar14 = (float)NEON_fmadd(fVar15,fVar12,fVar14 * fVar24 + fVar17 * fVar26);
            fVar14 = fVar14 / fVar20;
            uVar13 = NEON_fmsub(fVar14,fVar12,*(undefined4 *)(lVar2 + 0x48));
            *(ulong *)(lVar2 + 0x40) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) - fVar26 * fVar14,
                          (float)*(undefined8 *)(lVar2 + 0x40) - fVar24 * fVar14);
            *(undefined4 *)(lVar2 + 0x48) = uVar13;
          }
          fVar14 = *(float *)(lVar3 + 0x60) * fVar10;
          fVar17 = *(float *)(lVar3 + 0x30);
          fVar15 = *(float *)(lVar3 + 0x34);
          uVar13 = *(undefined4 *)(lVar3 + 0x38);
          fVar22 = (float)NEON_fmadd(fVar14 * fVar23,fVar14 * fVar23,
                                     fVar18 * fVar14 * fVar18 * fVar14 +
                                     fVar11 * fVar14 * fVar11 * fVar14);
          uVar16 = NEON_fmadd(fVar15,fVar15,fVar17 * fVar17);
          fVar20 = (float)NEON_fmadd(uVar13,uVar13,uVar16);
          if (fVar22 <= fVar20) {
            *(ulong *)(lVar3 + 0x40) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20) + fVar11,
                          (float)*(undefined8 *)(lVar3 + 0x40) + fVar18);
            *(float *)(lVar3 + 0x48) = *(float *)(lVar3 + 0x48) + fVar23;
          }
          else {
            fVar17 = (float)NEON_fmadd(uVar13,fVar12,fVar17 * fVar24 + fVar15 * fVar26);
            fVar17 = fVar17 / fVar14;
            uVar13 = NEON_fmsub(fVar17,fVar12,*(undefined4 *)(lVar3 + 0x48));
            *(ulong *)(lVar3 + 0x40) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20) - fVar26 * fVar17,
                          (float)*(undefined8 *)(lVar3 + 0x40) - fVar24 * fVar17);
            *(undefined4 *)(lVar3 + 0x48) = uVar13;
          }
          fVar10 = *(float *)(lVar6 + 0x60) * fVar10;
          fVar14 = *(float *)(lVar6 + 0x30);
          fVar17 = *(float *)(lVar6 + 0x34);
          uVar13 = *(undefined4 *)(lVar6 + 0x38);
          fVar20 = (float)NEON_fmadd(fVar10 * fVar23,fVar10 * fVar23,
                                     fVar18 * fVar10 * fVar18 * fVar10 +
                                     fVar11 * fVar10 * fVar11 * fVar10);
          uVar16 = NEON_fmadd(fVar17,fVar17,fVar14 * fVar14);
          fVar15 = (float)NEON_fmadd(uVar13,uVar13,uVar16);
          if (fVar20 <= fVar15) {
            *(ulong *)(lVar6 + 0x40) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x40) >> 0x20) + fVar11,
                          (float)*(undefined8 *)(lVar6 + 0x40) + fVar18);
            *(float *)(lVar6 + 0x48) = *(float *)(lVar6 + 0x48) + fVar23;
            return;
          }
          fVar11 = (float)NEON_fmadd(uVar13,fVar12,fVar14 * fVar24 + fVar17 * fVar26);
          fVar11 = fVar11 / fVar10;
          uVar13 = NEON_fmsub(fVar11,fVar12,*(undefined4 *)(lVar6 + 0x48));
          *(ulong *)(lVar6 + 0x40) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x40) >> 0x20) - fVar26 * fVar11,
                        (float)*(undefined8 *)(lVar6 + 0x40) - fVar24 * fVar11);
          *(undefined4 *)(lVar6 + 0x48) = uVar13;
        }
      }
      else if (iVar4 == 5) {
        fVar31 = **(float **)(this + 0x348) * 0.5;
        fVar24 = (float)NEON_fmadd(fVar27,fVar23,fVar30 * fVar24 + fVar25 * fVar26);
        fVar23 = 0.0;
        fVar26 = -1.0;
        if (0.0 <= fVar24) {
          fVar26 = 1.0;
        }
        fVar30 = fVar26 * fVar30;
        fVar25 = fVar26 * fVar25;
        fVar26 = fVar26 * fVar27;
        fVar28 = *(float *)(lVar7 + lVar8 * 0x48 + 0x38) * 0.5;
        fVar32 = (float)NEON_fmadd(fVar26,fVar19,fVar30 * fVar20 + fVar25 * fVar22);
        fVar27 = fVar32 * fVar31 * fVar11 * fVar12 * fVar28;
        fVar11 = 0.0;
        fVar24 = 0.0;
        if (0.0 < fVar32 && fVar32 < 0.9848) {
          fVar11 = (float)NEON_fnmadd(fVar32,fVar32,0x3f800000);
          fVar24 = (float)NEON_fnmsub(fVar30,fVar22,fVar25 * fVar20);
          fVar25 = (float)NEON_fnmsub(fVar25,fVar19,fVar26 * fVar22);
          fVar26 = (float)NEON_fnmsub(fVar26,fVar20,fVar30 * fVar19);
          fVar23 = (float)NEON_fnmsub(fVar26,fVar19,fVar24 * fVar22);
          fVar11 = fVar31 * fVar18 * SQRT(fVar12) * SQRT(fVar11) * fVar28 * 0.3333333;
          fVar18 = (float)NEON_fnmsub(fVar25,fVar22,fVar26 * fVar20);
          fVar24 = (float)NEON_fnmsub(fVar24,fVar20,fVar25 * fVar19);
          fVar23 = fVar11 * fVar23;
          fVar24 = fVar11 * fVar24;
          fVar11 = fVar11 * fVar18;
        }
        fVar18 = fVar27 * -0.3333333;
        fVar20 = fVar20 * fVar18;
        fVar22 = fVar22 * fVar18;
        fVar27 = fVar19 * -0.3333333 * fVar27;
        if (0.0 < *(float *)(lVar2 + 0x60)) {
          fVar10 = fVar10 * *(float *)(lVar2 + 0x60);
          fVar18 = fVar22 * fVar10 * fVar22 * fVar10 + fVar20 * fVar10 * fVar20 * fVar10 +
                   fVar10 * fVar27 * fVar10 * fVar27;
          fVar12 = fVar17 * fVar17 + fVar14 * fVar14 + fVar15 * fVar15;
          if ((fVar12 <= fVar18) && (0.0 < fVar18)) {
            fVar18 = (SQRT(fVar12) * 0.8) / SQRT(fVar18);
            fVar20 = fVar20 * fVar18;
            fVar22 = fVar22 * fVar18;
            fVar27 = fVar18 * fVar27;
          }
          *(float *)(lVar2 + 0x40) = *(float *)(lVar2 + 0x40) + fVar20 + fVar23;
          *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) + fVar22 + fVar24;
          *(float *)(lVar2 + 0x48) = *(float *)(lVar2 + 0x48) + fVar27 + fVar11;
        }
        if (0.0 < *(float *)(lVar3 + 0x60)) {
          fVar18 = *(float *)(this + 0x240) * *(float *)(lVar3 + 0x60);
          uVar16 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x34),*(undefined4 *)(lVar3 + 0x34),
                              *(float *)(lVar3 + 0x30) * *(float *)(lVar3 + 0x30));
          uVar13 = NEON_fmadd(fVar18 * fVar22,fVar18 * fVar22,fVar18 * fVar20 * fVar18 * fVar20);
          fVar12 = (float)NEON_fmadd(fVar18 * fVar27,fVar18 * fVar27,uVar13);
          fVar18 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x38),*(undefined4 *)(lVar3 + 0x38),
                                     uVar16);
          if ((fVar18 <= fVar12) && (0.0 < fVar12)) {
            fVar18 = (SQRT(fVar18) * 0.8) / SQRT(fVar12);
            fVar20 = fVar18 * fVar20;
            fVar22 = fVar18 * fVar22;
            fVar27 = fVar18 * fVar27;
          }
          *(float *)(lVar3 + 0x40) = *(float *)(lVar3 + 0x40) + fVar20 + fVar23;
          *(float *)(lVar3 + 0x44) = *(float *)(lVar3 + 0x44) + fVar22 + fVar24;
          *(float *)(lVar3 + 0x48) = *(float *)(lVar3 + 0x48) + fVar27 + fVar11;
        }
        if (0.0 < *(float *)(lVar6 + 0x60)) {
          fVar18 = *(float *)(this + 0x240) * *(float *)(lVar6 + 0x60);
          uVar16 = NEON_fmadd(*(undefined4 *)(lVar6 + 0x34),*(undefined4 *)(lVar6 + 0x34),
                              *(float *)(lVar6 + 0x30) * *(float *)(lVar6 + 0x30));
          uVar13 = NEON_fmadd(fVar18 * fVar22,fVar18 * fVar22,fVar18 * fVar20 * fVar18 * fVar20);
          fVar12 = (float)NEON_fmadd(fVar18 * fVar27,fVar18 * fVar27,uVar13);
          fVar18 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x38),*(undefined4 *)(lVar6 + 0x38),
                                     uVar16);
          if ((fVar18 <= fVar12) && (0.0 < fVar12)) {
            fVar18 = (SQRT(fVar18) * 0.8) / SQRT(fVar12);
            fVar20 = fVar18 * fVar20;
            fVar22 = fVar18 * fVar22;
            fVar27 = fVar18 * fVar27;
          }
          *(float *)(lVar6 + 0x40) = *(float *)(lVar6 + 0x40) + fVar20 + fVar23;
          *(float *)(lVar6 + 0x44) = *(float *)(lVar6 + 0x44) + fVar22 + fVar24;
          *(float *)(lVar6 + 0x48) = *(float *)(lVar6 + 0x48) + fVar27 + fVar11;
          return;
        }
      }
    }
  }
  return;
}


