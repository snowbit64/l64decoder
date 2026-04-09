// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scaleImageBilinear
// Entry Point: 00a937d4
// Size: 868 bytes
// Signature: undefined __cdecl scaleImageBilinear(float * param_1, uint param_2, uint param_3, uint param_4, float * param_5, uint param_6, uint param_7, uint param_8)


/* ImageScale::scaleImageBilinear(float const*, unsigned int, unsigned int, unsigned int, float*,
   unsigned int, unsigned int, unsigned int) */

void ImageScale::scaleImageBilinear
               (float *param_1,uint param_2,uint param_3,uint param_4,float *param_5,uint param_6,
               uint param_7,uint param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  
  uVar6 = 0;
  if (param_6 != 0) {
    uVar6 = param_6 - param_7 * param_4;
  }
  if (param_8 != 0) {
    uVar16 = (ulong)param_4;
    uVar15 = 0;
    uVar18 = uVar16 & 0xfffffff8;
    fVar27 = ((float)(ulong)param_3 / (float)(ulong)param_8) * 0.5;
    do {
      fVar28 = fVar27 + -0.5;
      if (fVar27 + -0.5 <= 0.0) {
        fVar28 = 0.0;
      }
      iVar20 = (int)fVar28;
      uVar7 = param_3 - 1;
      if (iVar20 + 1U <= param_3 - 1) {
        uVar7 = iVar20 + 1;
      }
      if (param_7 != 0) {
        uVar19 = 0;
        fVar29 = (float)NEON_ucvtf((int)fVar28);
        fVar28 = fVar28 - fVar29;
        pfVar12 = param_5;
        fVar29 = ((float)(ulong)param_2 / (float)(ulong)param_7) * 0.5;
        do {
          fVar31 = fVar29 + -0.5;
          if (fVar29 + -0.5 <= 0.0) {
            fVar31 = 0.0;
          }
          iVar14 = (int)fVar31;
          uVar8 = param_2 - 1;
          if (iVar14 + 1U <= param_2 - 1) {
            uVar8 = iVar14 + 1;
          }
          param_5 = pfVar12;
          if (param_4 != 0) {
            uVar9 = (iVar20 * param_2 + iVar14) * param_4;
            uVar10 = (uVar8 + iVar20 * param_2) * param_4;
            fVar30 = (float)NEON_ucvtf((int)fVar31);
            uVar11 = (uVar7 * param_2 + iVar14) * param_4;
            uVar8 = (uVar8 + uVar7 * param_2) * param_4;
            fVar31 = fVar31 - fVar30;
            fVar30 = fVar28 * fVar31;
            fVar32 = fVar31 - fVar30;
            fVar33 = fVar28 - fVar30;
            fVar31 = fVar30 + ((1.0 - fVar31) - fVar28);
            if (param_4 < 8) {
LAB_00a93930:
              uVar22 = 0;
            }
            else {
              uVar17 = (uint)(uVar16 - 1);
              if ((((CARRY4(uVar9,uVar17) != false) || (uVar16 - 1 >> 0x20 != 0)) ||
                  (CARRY4(uVar10,uVar17) != false)) ||
                 ((CARRY4(uVar11,uVar17) != false || (CARRY4(uVar8,uVar17) != false))))
              goto LAB_00a93930;
              pfVar5 = pfVar12 + uVar16;
              if (((pfVar12 < param_1 + (ulong)param_4 + (ulong)uVar8 && param_1 + uVar8 < pfVar5)
                  || ((pfVar12 < param_1 + (ulong)param_4 + (ulong)uVar11 &&
                       param_1 + uVar11 < pfVar5 ||
                      (pfVar12 < param_1 + (ulong)param_4 + (ulong)uVar10 &&
                       param_1 + uVar10 < pfVar5)))) ||
                 (pfVar12 < param_1 + (ulong)param_4 + (ulong)uVar9 && param_1 + uVar9 < pfVar5))
              goto LAB_00a93930;
              param_5 = pfVar12 + uVar18;
              puVar13 = (undefined8 *)(pfVar12 + 4);
              uVar22 = uVar18;
              uVar21 = uVar8;
              uVar24 = uVar11;
              uVar17 = uVar10;
              uVar26 = uVar9;
              do {
                puVar1 = (undefined8 *)(param_1 + uVar17);
                uVar22 = uVar22 - 8;
                uVar17 = uVar17 + 8;
                uVar36 = *puVar1;
                uVar38 = puVar1[3];
                uVar37 = puVar1[2];
                puVar2 = (undefined8 *)(param_1 + uVar26);
                uVar26 = uVar26 + 8;
                uVar39 = *puVar2;
                uVar45 = puVar2[3];
                uVar42 = puVar2[2];
                puVar3 = (undefined8 *)(param_1 + uVar24);
                uVar24 = uVar24 + 8;
                uVar40 = *puVar3;
                uVar46 = puVar3[3];
                uVar43 = puVar3[2];
                puVar4 = (undefined8 *)(param_1 + uVar21);
                uVar21 = uVar21 + 8;
                uVar41 = *puVar4;
                uVar47 = puVar4[3];
                uVar44 = puVar4[2];
                puVar13[-1] = CONCAT44(fVar32 * (float)((ulong)puVar1[1] >> 0x20) +
                                       fVar31 * (float)((ulong)puVar2[1] >> 0x20) +
                                       fVar33 * (float)((ulong)puVar3[1] >> 0x20) +
                                       fVar30 * (float)((ulong)puVar4[1] >> 0x20),
                                       fVar32 * (float)puVar1[1] + fVar31 * (float)puVar2[1] +
                                       fVar33 * (float)puVar3[1] + fVar30 * (float)puVar4[1]);
                puVar13[-2] = CONCAT44(fVar32 * (float)((ulong)uVar36 >> 0x20) +
                                       fVar31 * (float)((ulong)uVar39 >> 0x20) +
                                       fVar33 * (float)((ulong)uVar40 >> 0x20) +
                                       fVar30 * (float)((ulong)uVar41 >> 0x20),
                                       fVar32 * (float)uVar36 + fVar31 * (float)uVar39 +
                                       fVar33 * (float)uVar40 + fVar30 * (float)uVar41);
                puVar13[1] = CONCAT44((float)((ulong)uVar38 >> 0x20) * fVar32 +
                                      fVar31 * (float)((ulong)uVar45 >> 0x20) +
                                      fVar33 * (float)((ulong)uVar46 >> 0x20) +
                                      fVar30 * (float)((ulong)uVar47 >> 0x20),
                                      (float)uVar38 * fVar32 + fVar31 * (float)uVar45 +
                                      fVar33 * (float)uVar46 + fVar30 * (float)uVar47);
                *puVar13 = CONCAT44((float)((ulong)uVar37 >> 0x20) * fVar32 +
                                    fVar31 * (float)((ulong)uVar42 >> 0x20) +
                                    fVar33 * (float)((ulong)uVar43 >> 0x20) +
                                    fVar30 * (float)((ulong)uVar44 >> 0x20),
                                    (float)uVar37 * fVar32 + fVar31 * (float)uVar42 +
                                    fVar33 * (float)uVar43 + fVar30 * (float)uVar44);
                puVar13 = puVar13 + 4;
              } while (uVar22 != 0);
              pfVar12 = param_5;
              uVar22 = uVar18;
              if (uVar18 == uVar16) goto LAB_00a938b4;
            }
            lVar25 = 0;
            iVar14 = (int)uVar22;
            param_5 = pfVar12;
            do {
              iVar23 = (int)lVar25;
              param_5 = param_5 + 1;
              uVar34 = NEON_fmadd(param_1[uVar9 + iVar14 + iVar23],fVar31,
                                  fVar32 * param_1[uVar10 + iVar14 + iVar23]);
              uVar34 = NEON_fmadd(param_1[uVar11 + iVar14 + iVar23],fVar33,uVar34);
              fVar35 = (float)NEON_fmadd(param_1[uVar8 + iVar14 + iVar23],fVar30,uVar34);
              pfVar12[lVar25] = fVar35;
              lVar25 = lVar25 + 1;
            } while (uVar16 - uVar22 != lVar25);
          }
LAB_00a938b4:
          fVar29 = (float)(ulong)param_2 / (float)(ulong)param_7 + fVar29;
          uVar19 = uVar19 + 1;
          pfVar12 = param_5;
        } while (uVar19 != param_7);
      }
      fVar27 = (float)(ulong)param_3 / (float)(ulong)param_8 + fVar27;
      uVar15 = uVar15 + 1;
      param_5 = param_5 + uVar6;
    } while (uVar15 != param_8);
  }
  return;
}


