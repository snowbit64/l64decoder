// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtRandomPointInConvexPoly
// Entry Point: 00dce140
// Size: 352 bytes
// Signature: undefined __cdecl dtRandomPointInConvexPoly(float * param_1, int param_2, float * param_3, float param_4, float param_5, float * param_6)


/* dtRandomPointInConvexPoly(float const*, int, float*, float, float, float*) */

void dtRandomPointInConvexPoly
               (float *param_1,int param_2,float *param_3,float param_4,float param_5,float *param_6
               )

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (2 < param_2) {
    fVar6 = 0.0;
    lVar3 = 0;
    pfVar4 = param_3 + 2;
    do {
      iVar2 = (int)lVar3;
      lVar3 = lVar3 + 3;
      fVar7 = (float)NEON_fmadd(param_1[iVar2 + 6] - *param_1,(param_1 + (int)lVar3)[2] - param_1[2]
                                ,((param_1 + (iVar2 + 6))[2] - param_1[2]) *
                                 -(param_1[(int)lVar3] - *param_1));
      *pfVar4 = fVar7;
      fVar6 = fVar6 + fVar7;
      pfVar4 = pfVar4 + 1;
    } while ((ulong)(uint)param_2 + (ulong)(uint)param_2 * 2 + -6 != lVar3);
    if (2 < param_2) {
      fVar6 = fVar6 * param_4;
      pfVar4 = param_3 + 2;
      lVar3 = 6;
      fVar7 = 0.0;
      do {
        fVar8 = fVar7 + *pfVar4;
        if ((fVar7 <= fVar6) && (fVar6 < fVar8)) {
          fVar6 = (fVar6 - fVar7) / *pfVar4;
          goto LAB_00dce224;
        }
        lVar3 = lVar3 + 3;
        pfVar4 = pfVar4 + 1;
        fVar7 = fVar8;
      } while ((ulong)(uint)param_2 + (ulong)(uint)param_2 * 2 != lVar3);
    }
  }
  fVar6 = 0.0;
  lVar3 = 0;
LAB_00dce224:
  fVar7 = SQRT(param_5);
  pfVar4 = param_1 + (int)lVar3;
  pfVar1 = param_1 + ((int)lVar3 + -3);
  fVar9 = fVar7 * (1.0 - fVar6);
  fVar8 = 1.0 - fVar7;
  fVar7 = fVar7 * fVar6;
  uVar5 = NEON_fmadd(fVar8,*param_1,fVar9 * *pfVar1);
  fVar6 = (float)NEON_fmadd(fVar7,*pfVar4,uVar5);
  *param_6 = fVar6;
  uVar5 = NEON_fmadd(fVar8,param_1[1],fVar9 * pfVar1[1]);
  fVar6 = (float)NEON_fmadd(fVar7,pfVar4[1],uVar5);
  param_6[1] = fVar6;
  uVar5 = NEON_fmadd(fVar8,param_1[2],fVar9 * pfVar1[2]);
  fVar6 = (float)NEON_fmadd(fVar7,pfVar4[2],uVar5);
  param_6[2] = fVar6;
  return;
}


