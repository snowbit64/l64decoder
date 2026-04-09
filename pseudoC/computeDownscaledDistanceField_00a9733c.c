// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeDownscaledDistanceField
// Entry Point: 00a9733c
// Size: 1180 bytes
// Signature: undefined __cdecl computeDownscaledDistanceField(float * param_1, float * param_2, uint param_3, uint param_4, uint param_5, float * param_6)


/* ImageUtil::computeDownscaledDistanceField(float const*, float const*, unsigned int, unsigned int,
   unsigned int, float*) */

void ImageUtil::computeDownscaledDistanceField
               (float *param_1,float *param_2,uint param_3,uint param_4,uint param_5,float *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint local_108;
  
  uVar17 = param_5 - 1;
  if (uVar17 == 0) {
    memcpy(param_6,param_2,(ulong)(param_4 * param_3) << 2);
    return;
  }
  if (param_5 <= param_4) {
    uVar18 = 0;
    if (param_5 != 0) {
      uVar18 = param_3 / param_5;
    }
    local_108 = 0;
    fVar40 = (float)(ulong)param_5;
    iVar27 = 0;
    uVar21 = (ulong)uVar17 + 1 & 0x1fffffff8;
    fVar33 = fVar40 * 0.5;
    uVar19 = 0;
    if (param_5 != 0) {
      uVar19 = param_4 / param_5;
    }
    uVar4 = param_5;
    uVar24 = 0;
    do {
      uVar3 = uVar24 + 1;
      uVar13 = uVar24 * param_5;
      uVar14 = uVar3 * param_5;
      iVar7 = iVar27;
      if (iVar27 < 5) {
        iVar7 = 4;
      }
      uVar8 = uVar13;
      if ((int)uVar13 < 5) {
        uVar8 = 4;
      }
      uVar9 = uVar14 + 4;
      if (param_4 <= uVar14 + 4) {
        uVar9 = param_4;
      }
      if (param_5 <= param_3) {
        uVar32 = 0;
        uVar26 = 0;
        fVar41 = (float)NEON_fmadd((float)uVar24,fVar40,fVar33);
        uVar22 = local_108;
        uVar5 = param_5;
        do {
          iVar20 = (int)uVar32;
          uVar32 = uVar32 + 1;
          uVar15 = iVar20 * param_5;
          uVar10 = uVar26;
          if ((int)uVar26 < 5) {
            uVar10 = 4;
          }
          uVar16 = (int)uVar32 * param_5;
          fVar34 = 0.0;
          uVar23 = (ulong)uVar26;
          uVar11 = uVar15;
          if ((int)uVar15 < 5) {
            uVar11 = 4;
          }
          uVar12 = uVar16 + 4;
          if (param_3 <= uVar16 + 4) {
            uVar12 = param_3;
          }
          if (uVar13 < uVar14) {
            fVar34 = 0.0;
            iVar25 = 0;
            uVar28 = local_108;
            uVar6 = uVar22;
            uVar29 = uVar13;
            do {
              if (uVar15 < uVar16) {
                uVar30 = uVar23;
                if ((6 < uVar17) &&
                   (uVar31 = uVar21, uVar2 = uVar6,
                   CARRY4(uVar24 * param_5 * param_3 + iVar20 * param_5 + iVar25 * param_3,uVar17)
                   == false)) {
                  do {
                    puVar1 = (undefined8 *)(param_1 + uVar2);
                    uVar31 = uVar31 - 8;
                    fVar34 = fVar34 + (float)*puVar1 + (float)((ulong)*puVar1 >> 0x20) +
                             (float)puVar1[1] + (float)((ulong)puVar1[1] >> 0x20) + (float)puVar1[2]
                             + (float)((ulong)puVar1[2] >> 0x20) + (float)puVar1[3] +
                             (float)((ulong)puVar1[3] >> 0x20);
                    uVar2 = uVar2 + 8;
                  } while (uVar31 != 0);
                  uVar30 = uVar21 + uVar23;
                  if ((ulong)uVar17 + 1 == uVar21) goto LAB_00a975ec;
                }
                do {
                  uVar2 = (int)uVar30 + 1;
                  fVar34 = fVar34 + param_1[uVar28 + (int)uVar30];
                  uVar30 = (ulong)uVar2;
                } while (uVar5 != uVar2);
              }
LAB_00a975ec:
              uVar29 = uVar29 + 1;
              iVar25 = iVar25 + 1;
              uVar6 = uVar6 + param_3;
              uVar28 = uVar28 + param_3;
            } while (uVar29 != uVar4);
          }
          fVar34 = fVar34 / (fVar40 * fVar40);
          uVar23 = MathUtil::isZero((double)fVar34,1e-09);
          fVar35 = 1.0;
          if ((uVar23 & 1) == 0) {
            fVar35 = -1.0;
          }
          if (0.0 < fVar34 && fVar34 < 1.0) {
            fVar34 = (float)NEON_fmadd(1.0 - fVar34,0x40000000,0xbf800000);
            fVar34 = fVar33 * fVar34;
          }
          else {
            fVar34 = fVar35 * 3.402823e+38;
            if (uVar8 - 4 < uVar9) {
              fVar36 = (float)NEON_fmadd((float)iVar20,fVar40,fVar33);
              uVar29 = uVar8 - 4;
              iVar25 = param_3 * (iVar7 + -4);
              do {
                if (uVar11 - 4 < uVar12) {
                  fVar37 = fVar41 - ((float)(ulong)uVar29 + 0.5);
                  uVar30 = (ulong)(uVar10 - 4);
                  do {
                    if ((((uVar30 < uVar15) || (uVar16 <= uVar30)) || (uVar29 < uVar13)) ||
                       (uVar14 <= uVar29)) {
                      fVar38 = fVar36 - ((float)(uVar30 & 0xffffffff) + 0.5);
                      fVar39 = param_2[(uint)(iVar25 + (int)uVar30)];
                      if ((uVar23 & 1) == 0) {
                        fVar39 = -param_2[(uint)(iVar25 + (int)uVar30)];
                      }
                      fVar38 = (float)NEON_fmadd(fVar38,fVar38,fVar37 * fVar37);
                      fVar39 = fVar35 * (SQRT(fVar38) + fVar39);
                      if ((uVar23 & 1) == 0) {
                        if (fVar34 < fVar39) goto LAB_00a9775c;
                      }
                      else if (fVar39 < fVar34) {
LAB_00a9775c:
                        fVar34 = fVar39;
                      }
                    }
                    uVar30 = uVar30 + 1;
                  } while (uVar30 < uVar12);
                }
                uVar29 = uVar29 + 1;
                iVar25 = iVar25 + param_3;
              } while (uVar29 < uVar9);
            }
          }
          uVar26 = uVar26 + param_5;
          uVar5 = uVar5 + param_5;
          uVar22 = uVar22 + param_5;
          param_6[uVar24 * uVar18 + iVar20] = fVar34 / fVar40;
        } while (uVar32 != uVar18);
      }
      uVar4 = uVar4 + param_5;
      local_108 = local_108 + param_5 * param_3;
      iVar27 = iVar27 + param_5;
      uVar24 = uVar3;
    } while (uVar3 != uVar19);
  }
  return;
}


