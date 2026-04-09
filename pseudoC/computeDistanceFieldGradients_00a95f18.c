// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeDistanceFieldGradients
// Entry Point: 00a95f18
// Size: 408 bytes
// Signature: undefined __cdecl computeDistanceFieldGradients(float * param_1, uint param_2, uint param_3, float * param_4, float * param_5)


/* ImageUtil::computeDistanceFieldGradients(float const*, unsigned int, unsigned int, float*,
   float*) */

void ImageUtil::computeDistanceFieldGradients
               (float *param_1,uint param_2,uint param_3,float *param_4,float *param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  size_t __n;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  __n = (ulong)param_2 * (ulong)param_3 * 4;
  memset(param_4,0,__n);
  memset(param_5,0,__n);
  if (1 < param_3 - 1) {
    uVar6 = (ulong)param_2;
    lVar5 = 0;
    uVar7 = (ulong)(param_2 << 1);
    uVar8 = 1;
    uVar9 = uVar6;
    do {
      if (1 < param_2 - 1) {
        lVar2 = 0;
        do {
          uVar1 = (int)uVar9 + (int)lVar2 + 1;
          if (0.0 < param_1[uVar1] && param_1[uVar1] < 1.0) {
            iVar3 = (int)(lVar5 + lVar2);
            iVar4 = (int)(uVar7 + lVar2);
            fVar10 = (-param_1[lVar5 + lVar2 & 0xffffffff] - param_1[uVar7 + lVar2 & 0xffffffff]) +
                     param_1[iVar3 + 2] + param_1[iVar4 + 2];
            uVar11 = NEON_fmadd(param_1[uVar9 + lVar2 & 0xffffffff],0xbfb504f3,fVar10);
            fVar12 = (float)NEON_fmadd(param_1[(int)(uVar9 + lVar2) + 2],0x3fb504f3,uVar11);
            param_4[uVar1] = fVar12;
            uVar11 = NEON_fmadd(param_1[iVar3 + 1],0xbfb504f3,fVar10);
            fVar12 = (float)NEON_fmadd(param_1[iVar4 + 1],0x3fb504f3,uVar11);
            param_5[uVar1] = fVar12;
            fVar10 = param_4[uVar1];
            fVar12 = (float)NEON_fmadd(fVar10,fVar10,fVar12 * fVar12);
            if (0.0 < fVar12) {
              param_4[uVar1] = fVar10 * (1.0 / SQRT(fVar12));
              param_5[uVar1] = (1.0 / SQRT(fVar12)) * param_5[uVar1];
            }
          }
          lVar2 = lVar2 + 1;
        } while ((ulong)(param_2 - 1) - 1 != lVar2);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + uVar6;
      lVar5 = lVar5 + uVar6;
      uVar7 = uVar7 + uVar6;
    } while (uVar8 != param_3 - 1);
  }
  return;
}


