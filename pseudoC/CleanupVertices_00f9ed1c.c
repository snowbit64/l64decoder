// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanupVertices
// Entry Point: 00f9ed1c
// Size: 1664 bytes
// Signature: undefined __thiscall CleanupVertices(HullLibrary * this, uint param_1, btVector3 * param_2, uint param_3, uint * param_4, btVector3 * param_5, float param_6, btVector3 * param_7)


/* HullLibrary::CleanupVertices(unsigned int, btVector3 const*, unsigned int, unsigned int&,
   btVector3*, float, btVector3&) */

bool __thiscall
HullLibrary::CleanupVertices
          (HullLibrary *this,uint param_1,btVector3 *param_2,uint param_3,uint *param_4,
          btVector3 *param_5,float param_6,btVector3 *param_7)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  if (param_1 != 0) {
    iVar6 = *(int *)(this + 0x24);
    if (iVar6 < 0) {
      lVar5 = *(long *)(this + 0x30);
      if (*(int *)(this + 0x28) < 0) {
        if ((lVar5 != 0) && (this[0x38] != (HullLibrary)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        lVar5 = 0;
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined4 *)(this + 0x28) = 0;
        this[0x38] = (HullLibrary)0x1;
      }
      memset((void *)(lVar5 + (long)iVar6 * 4),0,(long)iVar6 * -4);
    }
    uVar28 = NEON_fmov(0x3f800000,4);
    *(undefined4 *)(this + 0x24) = 0;
    fVar20 = 3.402823e+38;
    *(undefined4 *)(param_7 + 8) = 0x3f800000;
    pfVar7 = (float *)(param_2 + 8);
    *(undefined8 *)param_7 = uVar28;
    *param_4 = 0;
    fVar36 = fVar20;
    fVar24 = fVar20;
    uVar17 = param_1;
    do {
      pfVar1 = pfVar7 + -2;
      pfVar3 = pfVar7 + -1;
      fVar37 = *pfVar7;
      pfVar7 = (float *)((long)pfVar7 + (ulong)param_3);
      uVar17 = uVar17 - 1;
      fVar24 = (float)NEON_fminnm(*pfVar1,fVar24);
      fVar36 = (float)NEON_fminnm(*pfVar3,fVar36);
      fVar20 = (float)NEON_fminnm(fVar37,fVar20);
    } while (uVar17 != 0);
    fVar33 = *pfVar1 - fVar24;
    fVar29 = *pfVar3 - fVar36;
    fVar37 = fVar37 - fVar20;
    fVar25 = (float)NEON_fmadd(fVar33,0x3f000000,fVar24);
    fVar24 = (float)NEON_fmadd(fVar29,0x3f000000,fVar36);
    fVar36 = (float)NEON_fmadd(fVar37,0x3f000000,fVar20);
    if ((((param_1 < 3) || (fVar33 < 1e-06)) || (fVar29 < 1e-06)) || (fVar37 < 1e-06)) {
      fVar20 = fVar33;
      if ((fVar33 >= 3.402823e+38 || fVar33 == 1e-06) || fVar33 < 3.402823e+38 && fVar33 < 1e-06) {
        fVar20 = 3.402823e+38;
      }
      fVar21 = fVar29;
      if ((fVar29 >= fVar20 || fVar29 == 1e-06) || fVar29 < fVar20 && fVar29 < 1e-06) {
        fVar21 = fVar20;
      }
      fVar20 = fVar37;
      if ((fVar37 >= fVar21 || fVar37 == 1e-06) || fVar37 < fVar21 && fVar37 < 1e-06) {
        fVar20 = fVar21;
      }
      if (fVar20 == 3.402823e+38) {
        fVar21 = 0.01;
        fVar20 = fVar21;
        fVar33 = fVar21;
      }
      else {
        fVar20 = fVar20 * 0.05;
        fVar21 = fVar20;
        if (1e-06 <= fVar33) {
          fVar21 = fVar33;
        }
        fVar33 = fVar20;
        if (1e-06 <= fVar29) {
          fVar33 = fVar29;
        }
        if (1e-06 <= fVar37) {
          fVar20 = fVar37;
        }
      }
      fVar37 = fVar25 - fVar21;
      fVar21 = fVar21 + fVar25;
      fVar25 = fVar24 - fVar33;
      fVar33 = fVar33 + fVar24;
    }
    else {
      uVar8 = 0;
      uVar17 = 0;
      *(float *)param_7 = fVar33;
      *(float *)(param_7 + 4) = fVar29;
      *(float *)(param_7 + 8) = fVar37;
      fVar25 = fVar25 * (1.0 / fVar33);
      fVar24 = fVar24 * (1.0 / fVar29);
      fVar36 = fVar36 * (1.0 / fVar37);
      do {
        fVar26 = *(float *)param_2 * (1.0 / fVar33);
        fVar20 = *(float *)((long)param_2 + 4) * (1.0 / fVar29);
        fVar21 = *(float *)((long)param_2 + 8) * (1.0 / fVar37);
        iVar6 = (int)uVar8;
        if (iVar6 == 0) {
          uVar19 = 0;
LAB_00f9efd8:
          iVar18 = (int)uVar19;
          if (iVar18 == iVar6) goto LAB_00f9efe4;
        }
        else {
          uVar19 = 0;
          pfVar7 = (float *)(param_5 + 8);
          do {
            if ((ABS(pfVar7[-2] - fVar26) < param_6 && ABS(pfVar7[-1] - fVar20) < param_6) &&
                ABS(*pfVar7 - fVar21) < param_6) {
              fVar30 = fVar26 - fVar25;
              fVar27 = pfVar7[-2] - fVar25;
              fVar34 = fVar20 - fVar24;
              fVar35 = pfVar7[-1] - fVar24;
              fVar31 = fVar21 - fVar36;
              fVar32 = *pfVar7 - fVar36;
              fVar27 = fVar27 * fVar27 + fVar35 * fVar35 + fVar32 * fVar32;
              uVar9 = NEON_fcmgt(CONCAT44(fVar27,fVar30 * fVar30 + fVar34 * fVar34 + fVar31 * fVar31
                                         ),CONCAT44(fVar27,fVar27),4);
              if ((uVar9 & 1) != 0) {
                pfVar7[-2] = fVar26;
                pfVar7[-1] = fVar20;
                *pfVar7 = fVar21;
              }
              goto LAB_00f9efd8;
            }
            uVar19 = uVar19 + 1;
            pfVar7 = pfVar7 + 4;
          } while (uVar8 != uVar19);
LAB_00f9efe4:
          pfVar7 = (float *)(param_5 + uVar8 * 0x10);
          *pfVar7 = fVar26;
          pfVar7[1] = fVar20;
          pfVar7[2] = fVar21;
          *param_4 = iVar6 + 1;
          iVar18 = iVar6;
        }
        uVar10 = *(uint *)(this + 0x24);
        if (uVar10 == *(uint *)(this + 0x28)) {
          uVar2 = uVar10 << 1;
          if (uVar10 == 0) {
            uVar2 = 1;
          }
          if ((int)uVar10 < (int)uVar2) {
            if (uVar2 == 0) {
              uVar8 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              uVar8 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2,
                                 0x10);
              uVar10 = *(uint *)(this + 0x24);
            }
            uVar19 = *(ulong *)(this + 0x30);
            if ((int)uVar10 < 1) {
              if (uVar19 != 0) goto LAB_00f9f0ec;
            }
            else {
              uVar9 = (ulong)uVar10;
              if ((uVar10 < 8) || ((uVar8 < uVar19 + uVar9 * 4 && (uVar19 < uVar8 + uVar9 * 4)))) {
                uVar11 = 0;
              }
              else {
                uVar11 = uVar9 & 0xfffffff8;
                puVar14 = (undefined8 *)(uVar19 + 0x10);
                puVar15 = (undefined8 *)(uVar8 + 0x10);
                uVar16 = uVar11;
                do {
                  puVar4 = puVar14 + -1;
                  uVar28 = puVar14[-2];
                  uVar23 = puVar14[1];
                  uVar22 = *puVar14;
                  uVar16 = uVar16 - 8;
                  puVar14 = puVar14 + 4;
                  puVar15[-1] = *puVar4;
                  puVar15[-2] = uVar28;
                  puVar15[1] = uVar23;
                  *puVar15 = uVar22;
                  puVar15 = puVar15 + 4;
                } while (uVar16 != 0);
                if (uVar11 == uVar9) goto LAB_00f9f0ec;
              }
              lVar5 = uVar9 - uVar11;
              puVar12 = (undefined4 *)(uVar19 + uVar11 * 4);
              puVar13 = (undefined4 *)(uVar8 + uVar11 * 4);
              do {
                lVar5 = lVar5 + -1;
                *puVar13 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar13 = puVar13 + 1;
              } while (lVar5 != 0);
LAB_00f9f0ec:
              if (this[0x38] != (HullLibrary)0x0) {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
              }
            }
            uVar10 = *(uint *)(this + 0x24);
            *(ulong *)(this + 0x30) = uVar8;
            *(uint *)(this + 0x28) = uVar2;
            this[0x38] = (HullLibrary)0x1;
          }
        }
        param_2 = (btVector3 *)((long)param_2 + (ulong)param_3);
        uVar17 = uVar17 + 1;
        *(int *)(*(long *)(this + 0x30) + (long)(int)uVar10 * 4) = iVar18;
        *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
        uVar10 = *param_4;
        uVar8 = (ulong)uVar10;
      } while (uVar17 != param_1);
      fVar24 = 3.402823e+38;
      fVar36 = 3.402823e+38;
      fVar37 = -3.402823e+38;
      if (uVar10 == 0) {
        fVar24 = 3.402823e+38;
        fVar20 = 3.402823e+38;
        fVar29 = -3.402823e+38;
        fVar25 = fVar37;
      }
      else {
        pfVar7 = (float *)(param_5 + 8);
        fVar36 = fVar24;
        fVar20 = fVar24;
        do {
          fVar25 = pfVar7[-2];
          fVar29 = pfVar7[-1];
          fVar37 = *pfVar7;
          uVar8 = uVar8 - 1;
          fVar20 = (float)NEON_fminnm(fVar25,fVar20);
          fVar24 = (float)NEON_fminnm(fVar29,fVar24);
          fVar36 = (float)NEON_fminnm(fVar37,fVar36);
          pfVar7 = pfVar7 + 4;
        } while (uVar8 != 0);
      }
      fVar25 = fVar25 - fVar20;
      fVar29 = fVar29 - fVar24;
      fVar37 = fVar37 - fVar36;
      if (((1e-06 <= fVar25 && 1e-06 <= fVar29) && 1e-06 <= fVar37) && 2 < uVar10)
      goto LAB_00f9f368;
      fVar27 = (float)NEON_fmadd(fVar25,0x3f000000,fVar20);
      fVar26 = (float)NEON_fmadd(fVar29,0x3f000000,fVar24);
      fVar36 = (float)NEON_fmadd(fVar37,0x3f000000,fVar36);
      fVar24 = fVar25;
      if (3.402823e+38 <= fVar25 || fVar25 < 1e-06) {
        fVar24 = 3.402823e+38;
      }
      fVar33 = fVar29;
      if (fVar24 <= fVar29 || fVar29 < 1e-06) {
        fVar33 = fVar24;
      }
      fVar20 = fVar37;
      if (fVar33 <= fVar37 || fVar37 < 1e-06) {
        fVar20 = fVar33;
      }
      if (fVar20 == 3.402823e+38) {
        fVar33 = 0.01;
        fVar20 = fVar33;
        fVar21 = fVar33;
      }
      else {
        fVar20 = fVar20 * 0.05;
        fVar21 = fVar20;
        if (1e-06 <= fVar25) {
          fVar21 = fVar25;
        }
        fVar33 = fVar20;
        if (1e-06 <= fVar29) {
          fVar33 = fVar29;
        }
        if (1e-06 <= fVar37) {
          fVar20 = fVar37;
        }
      }
      fVar37 = fVar27 - fVar21;
      fVar21 = fVar21 + fVar27;
      fVar25 = fVar26 - fVar33;
      fVar33 = fVar33 + fVar26;
    }
    fVar24 = fVar36 - fVar20;
    fVar20 = fVar20 + fVar36;
    *(float *)param_5 = fVar37;
    *(float *)(param_5 + 4) = fVar25;
    *(float *)(param_5 + 0x10) = fVar21;
    *(float *)(param_5 + 0x14) = fVar25;
    *(float *)(param_5 + 0x20) = fVar21;
    *(float *)(param_5 + 0x24) = fVar33;
    *(float *)(param_5 + 8) = fVar24;
    *(float *)(param_5 + 0x18) = fVar24;
    *(float *)(param_5 + 0x28) = fVar24;
    *(float *)(param_5 + 0x30) = fVar37;
    *(float *)(param_5 + 0x34) = fVar33;
    *(float *)(param_5 + 0x38) = fVar24;
    *(float *)(param_5 + 0x40) = fVar37;
    *(float *)(param_5 + 0x44) = fVar25;
    *(float *)(param_5 + 0x48) = fVar20;
    *(float *)(param_5 + 0x50) = fVar21;
    *(float *)(param_5 + 0x54) = fVar25;
    *(float *)(param_5 + 0x58) = fVar20;
    *(float *)(param_5 + 0x60) = fVar21;
    *(float *)(param_5 + 100) = fVar33;
    *(float *)(param_5 + 0x68) = fVar20;
    *(float *)(param_5 + 0x70) = fVar37;
    *(float *)(param_5 + 0x74) = fVar33;
    *(float *)(param_5 + 0x78) = fVar20;
    *param_4 = 8;
  }
LAB_00f9f368:
  return param_1 != 0;
}


