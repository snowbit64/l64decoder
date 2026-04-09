// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decomposeQR
// Entry Point: 00b5a2e8
// Size: 1084 bytes
// Signature: undefined __cdecl decomposeQR(uint param_1, uint param_2, float * param_3, float * param_4, float * param_5)


/* MathUtil::decomposeQR(unsigned int, unsigned int, float const*, float*, float*) */

byte MathUtil::decomposeQR(uint param_1,uint param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar25 = (ulong)param_1;
  if (param_3 != param_4) {
    memcpy(param_4,param_3,(ulong)(param_2 * param_1) << 2);
  }
  if (param_2 == 0) {
    bVar11 = 1;
  }
  else {
    bVar11 = 1;
    uVar15 = 0;
    do {
      fVar27 = 0.0;
      if (uVar15 < uVar25) {
        iVar14 = (int)uVar15;
        uVar5 = (param_1 + 1) * iVar14;
        fVar27 = 0.0;
        iVar6 = iVar14 * param_1;
        uVar17 = uVar25;
        uVar3 = uVar5;
        do {
          if (fVar27 == 0.0) {
            fVar27 = ABS(param_4[uVar3]);
          }
          else {
            fVar29 = param_4[uVar3] / fVar27;
            fVar29 = (float)NEON_fmadd(fVar29,fVar29,0x3f800000);
            fVar27 = ABS(fVar27) * SQRT(fVar29);
          }
          uVar3 = uVar3 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar15 != uVar17);
        if (fVar27 != 0.0) {
          uVar3 = iVar6 + iVar14;
          fVar28 = param_4[uVar3];
          fVar29 = -fVar27;
          if (0.0 <= fVar28) {
            fVar29 = fVar27;
          }
          fVar27 = fVar29;
          if (uVar15 < uVar25) {
            uVar21 = uVar25 - uVar15;
            uVar17 = uVar15;
            if (((uVar21 < 8) || (CARRY4(uVar5,(uint)(~uVar15 + uVar25)))) ||
               (~uVar15 + uVar25 >> 0x20 != 0)) {
LAB_00b5a46c:
              lVar18 = uVar25 - uVar17;
              uVar20 = iVar6 + (int)uVar17;
              do {
                lVar18 = lVar18 + -1;
                param_4[uVar20] = param_4[uVar20] / fVar27;
                uVar20 = uVar20 + 1;
              } while (lVar18 != 0);
            }
            else {
              uVar23 = uVar21 & 0xfffffffffffffff8;
              uVar17 = uVar15 + uVar23;
              uVar13 = uVar23;
              uVar20 = uVar5;
              do {
                puVar1 = (undefined8 *)(param_4 + uVar20);
                uVar13 = uVar13 - 8;
                uVar20 = uVar20 + 8;
                puVar1[1] = CONCAT44((float)((ulong)puVar1[1] >> 0x20) / fVar27,
                                     (float)puVar1[1] / fVar27);
                *puVar1 = CONCAT44((float)((ulong)*puVar1 >> 0x20) / fVar27,(float)*puVar1 / fVar27)
                ;
                puVar1[3] = CONCAT44((float)((ulong)puVar1[3] >> 0x20) / fVar27,
                                     (float)puVar1[3] / fVar27);
                puVar1[2] = CONCAT44((float)((ulong)puVar1[2] >> 0x20) / fVar27,
                                     (float)puVar1[2] / fVar27);
              } while (uVar13 != 0);
              if (uVar21 != uVar23) goto LAB_00b5a46c;
            }
            fVar28 = param_4[uVar3];
          }
          uVar17 = uVar15 + 1;
          param_4[uVar3] = fVar28 + 1.0;
          if (uVar17 < param_2) {
            iVar8 = (int)uVar17 + -1;
            iVar24 = (int)uVar17 * param_1;
            uVar7 = (param_1 + 1) * iVar8;
            iVar8 = iVar24 + iVar8;
            uVar12 = (uint)(~uVar15 + uVar25);
            uVar23 = ~uVar15 + uVar25 >> 0x20;
            uVar21 = uVar25 - uVar15;
            uVar13 = uVar21 & 0xfffffffffffffff8;
            iVar22 = 0;
            bVar10 = CARRY4(uVar7,uVar12) | uVar23 != 0;
            uVar20 = iVar24 + iVar14;
            uVar17 = uVar17 & 0xffffffff;
            do {
              if (uVar15 < uVar25) {
                fVar29 = 0.0;
                uVar4 = iVar8 + iVar22 * param_1;
                uVar19 = uVar15;
                if ((uVar21 < 8) || ((byte)(bVar10 | CARRY4(uVar4,uVar12) | uVar23 != 0) != 0)) {
LAB_00b5a5f0:
                  uVar16 = iVar24 + (int)uVar19;
                  uVar26 = iVar6 + (int)uVar19;
                  lVar18 = uVar25 - uVar19;
                  do {
                    uVar19 = (ulong)uVar26;
                    uVar26 = uVar26 + 1;
                    uVar9 = (ulong)uVar16;
                    uVar16 = uVar16 + 1;
                    lVar18 = lVar18 + -1;
                    fVar29 = (float)NEON_fmadd(param_4[uVar19],param_4[uVar9],fVar29);
                  } while (lVar18 != 0);
                }
                else {
                  fVar29 = 0.0;
                  uVar19 = uVar13;
                  uVar26 = uVar5;
                  uVar16 = uVar20;
                  do {
                    puVar1 = (undefined8 *)(param_4 + uVar16);
                    puVar2 = (undefined8 *)(param_4 + uVar26);
                    uVar19 = uVar19 - 8;
                    uVar26 = uVar26 + 8;
                    uVar16 = uVar16 + 8;
                    fVar29 = fVar29 + (float)*puVar2 * (float)*puVar1 +
                             (float)((ulong)*puVar2 >> 0x20) * (float)((ulong)*puVar1 >> 0x20) +
                             (float)puVar2[1] * (float)puVar1[1] +
                             (float)((ulong)puVar2[1] >> 0x20) * (float)((ulong)puVar1[1] >> 0x20) +
                             (float)puVar2[2] * (float)puVar1[2] +
                             (float)((ulong)puVar2[2] >> 0x20) * (float)((ulong)puVar1[2] >> 0x20) +
                             (float)puVar2[3] * (float)puVar1[3] +
                             (float)((ulong)puVar2[3] >> 0x20) * (float)((ulong)puVar1[3] >> 0x20);
                  } while (uVar19 != 0);
                  uVar19 = uVar15 + uVar13;
                  if (uVar21 != uVar13) goto LAB_00b5a5f0;
                }
                if (uVar15 < uVar25) {
                  fVar29 = -fVar29 / param_4[uVar3];
                  uVar19 = uVar15;
                  if (((7 < uVar21) && ((byte)(CARRY4(uVar4,uVar12) | uVar23 != 0 | bVar10) == 0))
                     && ((param_4 + ((uVar25 + uVar7) - uVar15) <= param_4 + uVar4 ||
                         (param_4 + ((uVar25 + uVar4) - uVar15) <= param_4 + uVar7)))) {
                    iVar14 = 0;
                    uVar19 = uVar13;
                    do {
                      uVar4 = uVar5 + iVar14;
                      uVar26 = uVar20 + iVar14;
                      uVar19 = uVar19 - 8;
                      iVar14 = iVar14 + 8;
                      puVar1 = (undefined8 *)(param_4 + uVar4);
                      puVar2 = (undefined8 *)(param_4 + uVar26);
                      uVar30 = *puVar1;
                      uVar32 = puVar1[3];
                      uVar31 = puVar1[2];
                      puVar2[1] = CONCAT44((float)((ulong)puVar2[1] >> 0x20) +
                                           (float)((ulong)puVar1[1] >> 0x20) * fVar29,
                                           (float)puVar2[1] + (float)puVar1[1] * fVar29);
                      *puVar2 = CONCAT44((float)((ulong)*puVar2 >> 0x20) +
                                         (float)((ulong)uVar30 >> 0x20) * fVar29,
                                         (float)*puVar2 + (float)uVar30 * fVar29);
                      puVar2[3] = CONCAT44((float)((ulong)puVar2[3] >> 0x20) +
                                           (float)((ulong)uVar32 >> 0x20) * fVar29,
                                           (float)puVar2[3] + (float)uVar32 * fVar29);
                      puVar2[2] = CONCAT44((float)((ulong)puVar2[2] >> 0x20) +
                                           (float)((ulong)uVar31 >> 0x20) * fVar29,
                                           (float)puVar2[2] + (float)uVar31 * fVar29);
                    } while (uVar19 != 0);
                    uVar19 = uVar15 + uVar13;
                    if (uVar21 == uVar13) goto LAB_00b5a518;
                  }
                  lVar18 = uVar25 - uVar19;
                  do {
                    iVar14 = (int)uVar19;
                    uVar19 = (ulong)(iVar14 + 1);
                    lVar18 = lVar18 + -1;
                    fVar28 = (float)NEON_fmadd(fVar29,param_4[(uint)(iVar6 + iVar14)],
                                               param_4[(uint)(iVar24 + iVar14)]);
                    param_4[(uint)(iVar24 + iVar14)] = fVar28;
                  } while (lVar18 != 0);
                }
              }
LAB_00b5a518:
              uVar4 = (int)uVar17 + 1;
              uVar17 = (ulong)uVar4;
              iVar22 = iVar22 + 1;
              uVar20 = uVar20 + param_1;
              iVar24 = iVar24 + param_1;
            } while (uVar4 != param_2);
          }
        }
      }
      uVar17 = uVar15 + 1;
      param_5[uVar15] = -fVar27;
      bVar11 = fVar27 != 0.0 & bVar11;
      uVar15 = uVar17;
    } while (uVar17 != param_2);
  }
  return bVar11;
}


