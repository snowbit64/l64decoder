// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveLU
// Entry Point: 00b5a018
// Size: 720 bytes
// Signature: undefined __cdecl solveLU(uint param_1, float * param_2, uint * param_3, float * param_4, float * param_5)


/* MathUtil::solveLU(unsigned int, float const*, unsigned int const*, float const*, float*) */

void MathUtil::solveLU(uint param_1,float *param_2,uint *param_3,float *param_4,float *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  float fVar18;
  
  if (param_5 != param_4) {
    memcpy(param_5,param_4,(ulong)param_1 << 2);
  }
  if (param_1 != 0) {
    uVar8 = 0;
    uVar11 = 0xffffffff;
    do {
      iVar9 = (int)uVar11;
      fVar18 = param_5[param_3[uVar8]];
      param_5[param_3[uVar8]] = param_5[uVar8];
      if (iVar9 == -1) {
        if (fVar18 == 0.0) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = uVar8 & 0xffffffff;
        }
      }
      else {
        uVar6 = uVar8 - uVar11;
        if (uVar11 <= uVar8 && uVar6 != 0) {
          iVar7 = (int)uVar8;
          uVar5 = uVar11;
          if (7 < uVar6) {
            if (((param_1 == 1) && (CARRY4(iVar9 + iVar7,(uint)(uVar8 + ~uVar11)) == false)) &&
               (uVar8 + ~uVar11 >> 0x20 == 0)) {
              uVar14 = uVar6 & 0xfffffffffffffff8;
              uVar15 = iVar7 + iVar9;
              uVar5 = uVar14 + uVar11;
              uVar3 = uVar14;
              puVar17 = (undefined8 *)(param_5 + uVar11 + 4);
              do {
                puVar1 = (undefined8 *)(param_2 + uVar15);
                uVar15 = uVar15 + param_1 * 8;
                uVar3 = uVar3 - 8;
                fVar18 = fVar18 + (float)puVar17[-2] * -(float)*puVar1 +
                         (float)((ulong)puVar17[-2] >> 0x20) * -(float)((ulong)*puVar1 >> 0x20) +
                         (float)puVar17[-1] * -(float)puVar1[1] +
                         (float)((ulong)puVar17[-1] >> 0x20) * -(float)((ulong)puVar1[1] >> 0x20) +
                         (float)*puVar17 * -(float)puVar1[2] +
                         (float)((ulong)*puVar17 >> 0x20) * -(float)((ulong)puVar1[2] >> 0x20) +
                         (float)puVar17[1] * -(float)puVar1[3] +
                         (float)((ulong)puVar17[1] >> 0x20) * -(float)((ulong)puVar1[3] >> 0x20);
                puVar17 = puVar17 + 4;
              } while (uVar3 != 0);
              if (uVar6 == uVar14) goto LAB_00b5a07c;
            }
          }
          uVar15 = iVar7 + param_1 * (int)uVar5;
          do {
            uVar6 = (ulong)uVar15;
            uVar15 = uVar15 + param_1;
            pfVar4 = param_5 + uVar5;
            uVar5 = uVar5 + 1;
            fVar18 = (float)NEON_fmsub(param_2[uVar6],*pfVar4,fVar18);
          } while (uVar8 != uVar5);
        }
      }
LAB_00b5a07c:
      param_5[uVar8] = fVar18;
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_1);
    uVar15 = param_1 - 1;
    if (-1 < (int)uVar15) {
      iVar9 = 0;
      uVar10 = (param_1 + param_1 * param_1) - 1;
      uVar12 = 0xffffffff;
      uVar13 = param_1;
      do {
        fVar18 = param_5[uVar15];
        uVar8 = (ulong)uVar15;
        if (uVar13 < param_1) {
          uVar16 = iVar9 - 1;
          uVar11 = (ulong)uVar13;
          if (((6 < uVar16) && (param_1 == 1)) && (uVar16 <= (iVar9 * -2 ^ 0xfffffffeU))) {
            uVar5 = (ulong)uVar16 + 1 & 0x1fffffff8;
            uVar6 = (ulong)uVar12 + 1 & 0x1fffffff8;
            uVar11 = uVar5 + uVar11;
            puVar17 = (undefined8 *)(param_5 + (ulong)uVar13 + 4);
            uVar2 = uVar10;
            do {
              puVar1 = (undefined8 *)(param_2 + uVar2);
              uVar2 = uVar2 + param_1 * 8;
              uVar6 = uVar6 - 8;
              fVar18 = fVar18 + (float)puVar17[-2] * -(float)*puVar1 +
                       (float)((ulong)puVar17[-2] >> 0x20) * -(float)((ulong)*puVar1 >> 0x20) +
                       (float)puVar17[-1] * -(float)puVar1[1] +
                       (float)((ulong)puVar17[-1] >> 0x20) * -(float)((ulong)puVar1[1] >> 0x20) +
                       (float)*puVar17 * -(float)puVar1[2] +
                       (float)((ulong)*puVar17 >> 0x20) * -(float)((ulong)puVar1[2] >> 0x20) +
                       (float)puVar17[1] * -(float)puVar1[3] +
                       (float)((ulong)puVar17[1] >> 0x20) * -(float)((ulong)puVar1[3] >> 0x20);
              puVar17 = puVar17 + 4;
            } while (uVar6 != 0);
            if ((ulong)uVar16 + 1 == uVar5) goto LAB_00b5a1c4;
          }
          uVar16 = uVar15 + param_1 * (int)uVar11;
          iVar7 = param_1 - (int)uVar11;
          pfVar4 = param_5 + uVar11;
          do {
            uVar11 = (ulong)uVar16;
            uVar16 = uVar16 + param_1;
            iVar7 = iVar7 + -1;
            fVar18 = (float)NEON_fmsub(param_2[uVar11],*pfVar4,fVar18);
            pfVar4 = pfVar4 + 1;
          } while (iVar7 != 0);
        }
LAB_00b5a1c4:
        uVar16 = uVar15 + uVar15 * param_1;
        uVar13 = uVar13 - 1;
        iVar9 = iVar9 + 1;
        uVar10 = uVar10 + ~param_1;
        uVar12 = uVar12 + 1;
        uVar15 = uVar15 - 1;
        param_5[uVar8] = fVar18 / param_2[uVar16];
      } while (-1 < (int)uVar15);
    }
  }
  return;
}


