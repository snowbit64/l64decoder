// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveQR
// Entry Point: 00b5a724
// Size: 756 bytes
// Signature: undefined __cdecl solveQR(uint param_1, uint param_2, float * param_3, float * param_4, float * param_5, float * param_6)


/* MathUtil::solveQR(unsigned int, unsigned int, float const*, float const*, float const*, float*)
    */

void MathUtil::solveQR(uint param_1,uint param_2,float *param_3,float *param_4,float *param_5,
                      float *param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar18 = (ulong)param_1;
  if (param_6 != param_5) {
    memcpy(param_6,param_5,uVar18 << 2);
  }
  if (param_2 != 0) {
    iVar10 = 0;
    uVar11 = 0;
    uVar13 = 0;
    puVar15 = (undefined8 *)(param_6 + 4);
    uVar17 = uVar18;
    do {
      uVar14 = uVar18 - uVar13;
      if (uVar13 <= uVar18 && uVar14 != 0) {
        iVar12 = (int)uVar13;
        uVar3 = (param_1 + 1) * iVar12;
        fVar19 = 0.0;
        uVar4 = uVar17 & 0xfffffffffffffff8;
        uVar16 = ~uVar13 + uVar18;
        uVar7 = uVar13;
        if (((uVar14 < 8) || (CARRY4(uVar3,(uint)uVar16))) || (uVar16 >> 0x20 != 0)) {
LAB_00b5a7d8:
          uVar9 = iVar10 + (int)uVar7;
          lVar6 = uVar18 - uVar7;
          pfVar8 = param_6 + uVar7;
          do {
            uVar7 = (ulong)uVar9;
            uVar9 = uVar9 + 1;
            lVar6 = lVar6 + -1;
            fVar19 = (float)NEON_fmadd(param_3[uVar7],*pfVar8,fVar19);
            pfVar8 = pfVar8 + 1;
          } while (lVar6 != 0);
        }
        else {
          fVar19 = 0.0;
          puVar5 = puVar15;
          uVar7 = uVar4;
          uVar9 = uVar11;
          do {
            puVar2 = (undefined8 *)(param_3 + uVar9);
            uVar7 = uVar7 - 8;
            uVar9 = uVar9 + 8;
            fVar19 = fVar19 + (float)*puVar2 * (float)puVar5[-2] +
                     (float)((ulong)*puVar2 >> 0x20) * (float)((ulong)puVar5[-2] >> 0x20) +
                     (float)puVar2[1] * (float)puVar5[-1] +
                     (float)((ulong)puVar2[1] >> 0x20) * (float)((ulong)puVar5[-1] >> 0x20) +
                     (float)puVar2[2] * (float)*puVar5 +
                     (float)((ulong)puVar2[2] >> 0x20) * (float)((ulong)*puVar5 >> 0x20) +
                     (float)puVar2[3] * (float)puVar5[1] +
                     (float)((ulong)puVar2[3] >> 0x20) * (float)((ulong)puVar5[1] >> 0x20);
            puVar5 = puVar5 + 4;
          } while (uVar7 != 0);
          uVar7 = uVar13 + (uVar14 & 0xfffffffffffffff8);
          if (uVar14 != (uVar14 & 0xfffffffffffffff8)) goto LAB_00b5a7d8;
        }
        if (uVar13 < uVar18) {
          fVar19 = -fVar19 / param_3[iVar12 * param_1 + iVar12];
          uVar7 = uVar13;
          if (((7 < uVar14) && (!CARRY4(uVar3,(uint)uVar16))) &&
             ((uVar16 >> 0x20 == 0 &&
              ((param_3 + uVar14 + uVar3 <= param_6 + uVar13 ||
               (param_6 + param_1 <= param_3 + uVar3)))))) {
            uVar7 = uVar13 + (uVar14 & 0xfffffffffffffff8);
            puVar5 = puVar15;
            uVar3 = uVar11;
            do {
              puVar2 = (undefined8 *)(param_3 + uVar3);
              uVar4 = uVar4 - 8;
              uVar3 = uVar3 + 8;
              uVar21 = *puVar2;
              uVar23 = puVar2[3];
              uVar22 = puVar2[2];
              puVar5[-1] = CONCAT44((float)((ulong)puVar5[-1] >> 0x20) +
                                    (float)((ulong)puVar2[1] >> 0x20) * fVar19,
                                    (float)puVar5[-1] + (float)puVar2[1] * fVar19);
              puVar5[-2] = CONCAT44((float)((ulong)puVar5[-2] >> 0x20) +
                                    (float)((ulong)uVar21 >> 0x20) * fVar19,
                                    (float)puVar5[-2] + (float)uVar21 * fVar19);
              puVar5[1] = CONCAT44((float)((ulong)puVar5[1] >> 0x20) +
                                   (float)((ulong)uVar23 >> 0x20) * fVar19,
                                   (float)puVar5[1] + (float)uVar23 * fVar19);
              *puVar5 = CONCAT44((float)((ulong)*puVar5 >> 0x20) +
                                 (float)((ulong)uVar22 >> 0x20) * fVar19,
                                 (float)*puVar5 + (float)uVar22 * fVar19);
              puVar5 = puVar5 + 4;
            } while (uVar4 != 0);
            if (uVar14 == (uVar14 & 0xfffffffffffffff8)) goto LAB_00b5a794;
          }
          uVar3 = iVar10 + (int)uVar7;
          lVar6 = uVar18 - uVar7;
          pfVar8 = param_6 + uVar7;
          do {
            uVar14 = (ulong)uVar3;
            uVar3 = uVar3 + 1;
            lVar6 = lVar6 + -1;
            fVar20 = (float)NEON_fmadd(fVar19,param_3[uVar14],*pfVar8);
            *pfVar8 = fVar20;
            pfVar8 = pfVar8 + 1;
          } while (lVar6 != 0);
        }
      }
LAB_00b5a794:
      uVar13 = uVar13 + 1;
      uVar17 = uVar17 - 1;
      uVar11 = uVar11 + param_1 + 1;
      puVar15 = (undefined8 *)((long)puVar15 + 4);
      iVar10 = iVar10 + param_1;
    } while (uVar13 != param_2);
    if (0 < (int)param_2) {
      iVar10 = param_1 * (param_2 - 1);
      uVar18 = (ulong)param_2;
      uVar13 = (ulong)(param_2 - 1);
      do {
        uVar17 = uVar18 - 1;
        uVar14 = uVar17 & 0xffffffff;
        fVar19 = param_4[uVar14];
        fVar20 = param_6[uVar14];
        param_6[uVar14] = fVar20 / fVar19;
        if (uVar18 < 2) {
          return;
        }
        fVar19 = (float)NEON_fmsub(fVar20 / fVar19,param_3[(int)uVar17 * param_1],*param_6);
        *param_6 = fVar19;
        if (uVar13 - 1 != 0) {
          uVar16 = 1;
          do {
            uVar4 = uVar16 + 1;
            fVar19 = (float)NEON_fmsub(param_6[uVar14],param_3[(uint)(iVar10 + (int)uVar16)],
                                       param_6[uVar16]);
            param_6[uVar16] = fVar19;
            uVar16 = uVar4;
          } while (uVar13 != uVar4);
        }
        iVar10 = iVar10 - param_1;
        bVar1 = 1 < uVar18;
        uVar18 = uVar17;
        uVar13 = uVar13 - 1;
      } while (bVar1);
    }
  }
  return;
}


