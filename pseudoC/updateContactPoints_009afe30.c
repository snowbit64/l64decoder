// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateContactPoints
// Entry Point: 009afe30
// Size: 1112 bytes
// Signature: undefined __cdecl updateContactPoints(WheelManifoldResult * param_1)


/* Bt2WheelConvexCollisionAlgorithm::updateContactPoints(Bt2WheelConvexCollisionAlgorithm::WheelManifoldResult&)
    */

void Bt2WheelConvexCollisionAlgorithm::updateContactPoints(WheelManifoldResult *param_1)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  btPersistentManifold *this;
  int iVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float local_98 [4];
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  this = *(btPersistentManifold **)(param_1 + 8);
  iVar10 = *(int *)(this + 0x318);
  if (0 < iVar10) {
    iVar11 = 0;
    fVar35 = *(float *)(param_1 + 0x70);
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    lVar12 = *(long *)(this + 0x308);
    do {
      lVar8 = (long)iVar11;
      bVar7 = lVar12 == lVar4;
      lVar9 = (long)iVar11 * 0xc0 + 0x28;
      if (!bVar7) {
        lVar9 = (long)iVar11 * 0xc0 + 0x38;
      }
      pfVar1 = (float *)(this + lVar9);
      if (bVar7) {
        uVar14 = *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x48);
        fVar17 = *(float *)(this + lVar8 * 0xc0 + 0x50);
      }
      else {
        uVar14 = *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x48);
        uVar14 = CONCAT44(-(float)((ulong)uVar14 >> 0x20),-(float)uVar14);
        fVar17 = -*(float *)(this + lVar8 * 0xc0 + 0x50);
      }
      fVar13 = (float)uVar14;
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      if (*(float *)(lVar3 + 0x54) <= *(float *)(lVar3 + 0x48)) {
LAB_009affb8:
        iVar11 = iVar11 + 1;
        *(undefined4 *)(this + lVar8 * 0xc0 + 0x5c) = *(undefined4 *)(lVar3 + 0x4c);
        fVar37 = *(float *)(param_1 + 0x50);
        fVar26 = *(float *)(param_1 + 0x54);
        uVar36 = NEON_fmadd(fVar37,*pfVar1,fVar26 * pfVar1[1]);
        fVar38 = *(float *)(param_1 + 0x58);
        fVar34 = (float)NEON_fmadd(fVar38,pfVar1[2],uVar36);
        fVar34 = fVar34 - fVar35;
        fVar30 = (pfVar1[1] - fVar26 * fVar34) - *(float *)(param_1 + 100);
        fVar27 = (*pfVar1 - fVar37 * fVar34) - *(float *)(param_1 + 0x60);
        fVar34 = (pfVar1[2] - fVar38 * fVar34) - *(float *)(param_1 + 0x68);
        uVar36 = NEON_fmadd(fVar27,fVar27,fVar30 * fVar30);
        fVar39 = (float)NEON_fmadd(fVar34,fVar34,uVar36);
        if (1e-06 < fVar39) {
          fVar39 = (float)NEON_fmadd(fVar34,fVar37,fVar38 * -fVar27);
          fVar40 = *(float *)(lVar3 + 0x50);
          fVar38 = (float)NEON_fmadd(fVar30,fVar38,fVar26 * -fVar34);
          fVar26 = (float)NEON_fmadd(fVar27,fVar26,fVar37 * -fVar30);
          fVar30 = (float)NEON_fmadd(fVar26 * fVar40,fVar17,
                                     fVar39 * fVar40 * fVar15 + fVar38 * fVar40 * fVar13);
          fVar27 = fVar39 * fVar40 - fVar30 * fVar15;
          fVar37 = fVar38 * fVar40 - fVar30 * fVar13;
          fVar38 = fVar26 * fVar40 - fVar17 * fVar30;
          uVar36 = NEON_fmadd(fVar37,fVar37,fVar27 * fVar27);
          fVar26 = (float)NEON_fmadd(fVar38,fVar38,uVar36);
          if (1e-06 < fVar26) {
            local_98[3] = 0.0;
            this[lVar8 * 0xc0 + 0x80] = (btPersistentManifold)0x1;
            *(undefined4 *)(this + lVar8 * 0xc0 + 0xb4) = 0;
            *(undefined4 *)(this + lVar8 * 0xc0 + 0xc4) = 0;
            fVar34 = 1.0 / SQRT(fVar26);
            *(float *)(this + lVar8 * 0xc0 + 0xb0) = fVar38 * fVar34;
            *(float *)(this + lVar8 * 0xc0 + 0xa8) = fVar37 * fVar34;
            *(float *)(this + lVar8 * 0xc0 + 0xac) = fVar27 * fVar34;
            fVar30 = (float)NEON_fmadd(fVar27 * fVar34,fVar17,fVar15 * -(fVar38 * fVar34));
            fVar38 = (float)NEON_fmadd(fVar38 * fVar34,fVar13,fVar17 * -(fVar37 * fVar34));
            local_98[0] = ABS(fVar30);
            local_98[1] = ABS(fVar38);
            fVar13 = (float)NEON_fmadd(fVar37 * fVar34,fVar15,fVar13 * -(fVar27 * fVar34));
            fVar17 = local_98[1];
            if (local_98[0] >= local_98[1]) {
              fVar17 = local_98[0];
            }
            local_98[2] = ABS(fVar13);
            uVar2 = 2;
            if (ABS(fVar13) <= fVar17) {
              uVar2 = (ulong)(local_98[0] < local_98[1]);
            }
            if (local_98[uVar2] <= 0.0) {
              *(undefined8 *)(this + lVar8 * 0xc0 + 0xc0) = 0;
              *(undefined8 *)(this + lVar8 * 0xc0 + 0xb8) = 0x3f800000;
            }
            else {
              fVar17 = 1.0 / local_98[uVar2];
              fVar38 = fVar38 * fVar17;
              fVar30 = fVar30 * fVar17;
              fVar13 = fVar13 * fVar17;
              uVar36 = NEON_fmadd(fVar30,fVar30,fVar38 * fVar38);
              fVar17 = (float)NEON_fmadd(fVar13,fVar13,uVar36);
              fVar17 = 1.0 / SQRT(fVar17);
              *(float *)(this + lVar8 * 0xc0 + 0xb8) = fVar30 * fVar17;
              *(float *)(this + lVar8 * 0xc0 + 0xbc) = fVar38 * fVar17;
              *(float *)(this + lVar8 * 0xc0 + 0xc0) = fVar13 * fVar17;
            }
            *(float *)(this + lVar8 * 0xc0 + 0x90) = SQRT(fVar26);
            goto LAB_009afecc;
          }
        }
        if (*(float *)(this + lVar8 * 0xc0 + 0x90) != 0.0) {
          *(float *)(this + lVar8 * 0xc0 + 0x90) = 0.0;
          this[lVar8 * 0xc0 + 0x80] = (btPersistentManifold)0x0;
        }
      }
      else {
        fVar26 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x48),fVar17,
                                   *(float *)(param_1 + 0x44) * fVar15 +
                                   *(float *)(param_1 + 0x40) * fVar13);
        if (-0.5 < fVar26) goto LAB_009affb8;
        uVar36 = NEON_fmadd(*(float *)(param_1 + 0x50),*pfVar1,
                            *(float *)(param_1 + 0x54) * pfVar1[1]);
        fVar37 = (float)NEON_fmadd(*(float *)(param_1 + 0x58),pfVar1[2],uVar36);
        fVar37 = fVar37 - fVar35;
        fVar26 = (pfVar1[1] - *(float *)(param_1 + 0x54) * fVar37) - *(float *)(param_1 + 100);
        fVar38 = (pfVar1[2] - *(float *)(param_1 + 0x58) * fVar37) - *(float *)(param_1 + 0x68);
        fVar37 = (*pfVar1 - *(float *)(param_1 + 0x50) * fVar37) - *(float *)(param_1 + 0x60);
        uVar33 = NEON_fmadd(fVar37,fVar37,fVar26 * fVar26);
        uVar36 = NEON_fmadd(*(float *)(param_1 + 0x40),fVar37,*(float *)(param_1 + 0x44) * fVar26);
        fVar37 = (float)NEON_fmadd(fVar38,fVar38,uVar33);
        fVar26 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x48),fVar38,uVar36);
        if (fVar26 < SQRT(fVar37) * 0.5) goto LAB_009affb8;
        btPersistentManifold::clearUserCache
                  (this,(btManifoldPoint *)(this + (long)iVar11 * 0xc0 + 8));
        lVar9 = (long)*(int *)(this + 0x318) + -1;
        iVar5 = iVar11;
        if ((int)lVar9 != iVar11) {
          uVar14 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x38);
          uVar19 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x10);
          uVar18 = *(undefined8 *)(this + lVar9 * 0xc0 + 8);
          uVar21 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x20);
          uVar20 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x18);
          uVar23 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x30);
          uVar22 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x28);
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x40) =
               *(undefined8 *)(this + lVar9 * 0xc0 + 0x40);
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x38) = uVar14;
          uVar16 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x80);
          uVar14 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x78);
          uVar24 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x68);
          uVar28 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x60);
          uVar25 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x58);
          uVar31 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x50);
          uVar29 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x48);
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x70) =
               *(undefined8 *)(this + lVar9 * 0xc0 + 0x70);
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x68) = uVar24;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x80) = uVar16;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x78) = uVar14;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x50) = uVar31;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x48) = uVar29;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x60) = uVar28;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x58) = uVar25;
          uVar16 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x90);
          uVar14 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x88);
          uVar25 = *(undefined8 *)(this + lVar9 * 0xc0 + 0xa0);
          uVar24 = *(undefined8 *)(this + lVar9 * 0xc0 + 0x98);
          uVar29 = *(undefined8 *)(this + lVar9 * 0xc0 + 0xb0);
          uVar28 = *(undefined8 *)(this + lVar9 * 0xc0 + 0xa8);
          uVar32 = *(undefined8 *)(this + lVar9 * 0xc0 + 0xc0);
          uVar31 = *(undefined8 *)(this + lVar9 * 0xc0 + 0xb8);
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x20) = uVar21;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x18) = uVar20;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x30) = uVar23;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x28) = uVar22;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x90) = uVar16;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x88) = uVar14;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0xa0) = uVar25;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x98) = uVar24;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0x10) = uVar19;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 8) = uVar18;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0xb0) = uVar29;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0xa8) = uVar28;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0xc0) = uVar32;
          *(undefined8 *)(this + (long)iVar11 * 0xc0 + 0xb8) = uVar31;
          iVar5 = *(int *)(this + 0x318);
          *(undefined8 *)(this + lVar9 * 0xc0 + 0x78) = 0;
          this[lVar9 * 0xc0 + 0x80] = (btPersistentManifold)0x0;
          *(undefined8 *)(this + lVar9 * 0xc0 + 0x88) = 0;
          iVar5 = iVar5 + -1;
          *(undefined4 *)(this + lVar9 * 0xc0 + 0x84) = 0;
          *(undefined4 *)(this + lVar9 * 0xc0 + 0xa0) = 0;
          this[lVar9 * 0xc0 + 0xa4] = (btPersistentManifold)0x0;
        }
        iVar10 = iVar10 + -1;
        *(int *)(this + 0x318) = iVar5;
      }
LAB_009afecc:
    } while (iVar11 < iVar10);
  }
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


