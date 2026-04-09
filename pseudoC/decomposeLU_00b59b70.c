// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decomposeLU
// Entry Point: 00b59b70
// Size: 1192 bytes
// Signature: undefined __cdecl decomposeLU(uint param_1, float * param_2, float * param_3, float * param_4, uint * param_5)


/* MathUtil::decomposeLU(unsigned int, float const*, float*, float*, unsigned int*) */

undefined4
MathUtil::decomposeLU(uint param_1,float *param_2,float *param_3,float *param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  undefined4 local_74;
  
  if (param_2 != param_4) {
    memcpy(param_4,param_2,(ulong)(param_1 * param_1) << 2);
  }
  if (param_1 != 0) {
    uVar13 = 0;
    uVar11 = (ulong)param_1;
    do {
      fVar28 = 0.0;
      uVar15 = uVar13 & 0xffffffff;
      uVar9 = uVar11;
      do {
        pfVar5 = param_4 + uVar15;
        uVar15 = (ulong)((int)uVar15 + param_1);
        if (fVar28 < ABS(*pfVar5)) {
          fVar28 = ABS(*pfVar5);
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      param_3[uVar13] = 1.0 / fVar28;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar11);
    if (param_1 != 0) {
      iVar12 = 0;
      uVar13 = 0;
      iVar16 = 1;
      iVar21 = 1;
      local_74 = 1;
      uVar3 = param_1 - 2;
      do {
        uVar14 = (uint)uVar13;
        uVar7 = uVar14 * param_1;
        uVar4 = (param_1 - 2) - iVar12;
        if (uVar13 != 0) {
          uVar9 = 0;
          do {
            uVar8 = (uint)uVar9;
            fVar28 = param_4[uVar7 + uVar8];
            if (uVar9 != 0) {
              if (uVar9 < 8) {
                uVar15 = 0;
              }
              else {
                uVar15 = 0;
                uVar17 = (uint)(uVar9 - 1);
                if ((((param_1 == 1) && (CARRY4(uVar8,uVar17) == false)) && (uVar9 - 1 >> 0x20 == 0)
                    ) && (uVar17 <= ~uVar14)) {
                  uVar10 = uVar9 & 0xfffffffffffffff8;
                  uVar15 = uVar9 & 0x7ffffffffffffff8;
                  uVar20 = uVar9 & 0xffffffff;
                  uVar17 = uVar7;
                  do {
                    puVar1 = (undefined8 *)(param_4 + uVar20);
                    puVar2 = (undefined8 *)(param_4 + uVar17);
                    uVar10 = uVar10 - 8;
                    uVar20 = (ulong)((int)uVar20 + param_1 * 8);
                    uVar17 = uVar17 + 8;
                    fVar28 = fVar28 + (float)*puVar2 * -(float)*puVar1 +
                             (float)((ulong)*puVar2 >> 0x20) * -(float)((ulong)*puVar1 >> 0x20) +
                             (float)puVar2[1] * -(float)puVar1[1] +
                             (float)((ulong)puVar2[1] >> 0x20) * -(float)((ulong)puVar1[1] >> 0x20)
                             + (float)puVar2[2] * -(float)puVar1[2] +
                             (float)((ulong)puVar2[2] >> 0x20) * -(float)((ulong)puVar1[2] >> 0x20)
                             + (float)puVar2[3] * -(float)puVar1[3] +
                             (float)((ulong)puVar2[3] >> 0x20) * -(float)((ulong)puVar1[3] >> 0x20);
                  } while (uVar10 != 0);
                  if (uVar9 == uVar15) goto LAB_00b59c70;
                }
              }
              uVar17 = uVar8 + param_1 * (int)uVar15;
              do {
                iVar18 = (int)uVar15;
                uVar10 = (ulong)uVar17;
                uVar15 = uVar15 + 1;
                uVar17 = uVar17 + param_1;
                fVar28 = (float)NEON_fmsub(param_4[uVar10],param_4[uVar7 + iVar18],fVar28);
              } while (uVar9 != uVar15);
            }
LAB_00b59c70:
            uVar9 = uVar9 + 1;
            param_4[uVar7 + uVar8] = fVar28;
          } while (uVar9 != uVar13);
        }
        uVar8 = (uint)(uVar13 - 1);
        uVar22 = uVar13 - 1 >> 0x20;
        uVar15 = (ulong)uVar3 + 1 & 0x1fffffff8;
        fVar28 = 0.0;
        iVar18 = 0;
        uVar10 = 0;
        uVar20 = uVar13 & 0xfffffffffffffff8;
        uVar9 = uVar13;
        do {
          uVar17 = (uint)uVar9;
          fVar29 = param_4[uVar7 + uVar17];
          if (uVar13 != 0) {
            if ((uVar13 < 8) ||
               ((byte)(param_1 != 1 | CARRY4(iVar18 + uVar14,uVar8) | uVar22 != 0 |
                      CARRY4(uVar14,uVar8) | uVar22 != 0) != 0)) {
              uVar24 = 0;
            }
            else {
              uVar27 = uVar9 & 0xffffffff;
              uVar24 = uVar20;
              uVar25 = uVar7;
              do {
                puVar1 = (undefined8 *)(param_4 + uVar27);
                puVar2 = (undefined8 *)(param_4 + uVar25);
                uVar24 = uVar24 - 8;
                uVar27 = (ulong)((int)uVar27 + param_1 * 8);
                uVar25 = uVar25 + 8;
                fVar29 = fVar29 + (float)*puVar2 * -(float)*puVar1 +
                         (float)((ulong)*puVar2 >> 0x20) * -(float)((ulong)*puVar1 >> 0x20) +
                         (float)puVar2[1] * -(float)puVar1[1] +
                         (float)((ulong)puVar2[1] >> 0x20) * -(float)((ulong)puVar1[1] >> 0x20) +
                         (float)puVar2[2] * -(float)puVar1[2] +
                         (float)((ulong)puVar2[2] >> 0x20) * -(float)((ulong)puVar1[2] >> 0x20) +
                         (float)puVar2[3] * -(float)puVar1[3] +
                         (float)((ulong)puVar2[3] >> 0x20) * -(float)((ulong)puVar1[3] >> 0x20);
              } while (uVar24 != 0);
              uVar24 = uVar20;
              if (uVar13 == uVar20) goto LAB_00b59dbc;
            }
            uVar23 = uVar17 + param_1 * (int)uVar24;
            uVar25 = uVar7 + (int)uVar24;
            lVar26 = uVar13 - uVar24;
            do {
              uVar24 = (ulong)uVar23;
              uVar23 = uVar23 + param_1;
              uVar27 = (ulong)uVar25;
              uVar25 = uVar25 + 1;
              lVar26 = lVar26 + -1;
              fVar29 = (float)NEON_fmsub(param_4[uVar24],param_4[uVar27],fVar29);
            } while (lVar26 != 0);
          }
LAB_00b59dbc:
          param_4[uVar7 + uVar17] = fVar29;
          iVar18 = iVar18 + 1;
          fVar29 = ABS(fVar29) * param_3[uVar9];
          bVar6 = fVar28 <= fVar29;
          if (bVar6) {
            fVar28 = fVar29;
          }
          uVar25 = (uint)uVar10;
          if (bVar6) {
            uVar25 = uVar17;
          }
          uVar10 = (ulong)uVar25;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar11);
        if (uVar13 != uVar10) {
          iVar18 = 0;
          uVar9 = uVar11;
          do {
            uVar8 = uVar14 + iVar18;
            uVar17 = uVar25 + iVar18;
            iVar18 = iVar18 + param_1;
            uVar9 = uVar9 - 1;
            fVar28 = param_4[uVar17];
            param_4[uVar17] = param_4[uVar8];
            param_4[uVar8] = fVar28;
          } while (uVar9 != 0);
          param_3[uVar10] = param_3[uVar13];
        }
        param_5[uVar13] = uVar25;
        fVar28 = param_4[uVar7 + uVar14];
        if (fVar28 == 0.0) {
          local_74 = 0;
          fVar28 = 1e-20;
          param_4[uVar7 + uVar14] = 1e-20;
        }
        if ((uVar13 != param_1 - 1) && (uVar13 + 1 < uVar11)) {
          fVar28 = 1.0 / fVar28;
          iVar18 = iVar21;
          if ((6 < uVar4) && (!CARRY4(iVar12 + 1 + uVar7,uVar4))) {
            uVar9 = (ulong)uVar4 + 1 & 0x1fffffff8;
            uVar14 = iVar16 + uVar7;
            iVar18 = iVar21 + (int)uVar9;
            do {
              puVar1 = (undefined8 *)(param_4 + uVar14);
              uVar15 = uVar15 - 8;
              uVar14 = uVar14 + 8;
              puVar1[1] = CONCAT44(fVar28 * (float)((ulong)puVar1[1] >> 0x20),
                                   fVar28 * (float)puVar1[1]);
              *puVar1 = CONCAT44(fVar28 * (float)((ulong)*puVar1 >> 0x20),fVar28 * (float)*puVar1);
              puVar1[3] = CONCAT44((float)((ulong)puVar1[3] >> 0x20) * fVar28,
                                   (float)puVar1[3] * fVar28);
              puVar1[2] = CONCAT44((float)((ulong)puVar1[2] >> 0x20) * fVar28,
                                   (float)puVar1[2] * fVar28);
            } while (uVar15 != 0);
            if ((ulong)uVar4 + 1 == uVar9) goto LAB_00b59c40;
          }
          iVar19 = param_1 - iVar18;
          uVar7 = uVar7 + iVar18;
          do {
            iVar19 = iVar19 + -1;
            param_4[uVar7] = fVar28 * param_4[uVar7];
            uVar7 = uVar7 + 1;
          } while (iVar19 != 0);
        }
LAB_00b59c40:
        uVar13 = uVar13 + 1;
        iVar21 = iVar21 + 1;
        iVar12 = iVar12 + 1;
        uVar3 = uVar3 - 1;
        iVar16 = iVar16 + 1;
        if (uVar13 == uVar11) {
          return local_74;
        }
      } while( true );
    }
  }
  return 1;
}


