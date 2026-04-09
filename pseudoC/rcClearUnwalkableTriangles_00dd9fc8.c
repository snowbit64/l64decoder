// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcClearUnwalkableTriangles
// Entry Point: 00dd9fc8
// Size: 280 bytes
// Signature: undefined __cdecl rcClearUnwalkableTriangles(rcContext * param_1, float param_2, float * param_3, int param_4, int * param_5, int param_6, uchar * param_7)


/* rcClearUnwalkableTriangles(rcContext*, float, float const*, int, int const*, int, unsigned char*)
    */

void rcClearUnwalkableTriangles
               (rcContext *param_1,float param_2,float *param_3,int param_4,int *param_5,int param_6
               ,uchar *param_7)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar5 = (ulong)(uint)param_6;
  fVar6 = cosf((param_2 / 180.0) * 3.141593);
  if (0 < param_6) {
    piVar1 = param_5 + 2;
    do {
      pfVar2 = param_3 + (long)piVar1[-2] * 3;
      pfVar3 = param_3 + (long)*piVar1 * 3;
      pfVar4 = param_3 + (long)*piVar1 * 3;
      fVar11 = *pfVar3 - *pfVar2;
      fVar12 = pfVar3[1] - pfVar2[1];
      fVar13 = pfVar3[2] - pfVar2[2];
      fVar9 = pfVar4[1] - pfVar2[1];
      fVar10 = pfVar4[2] - pfVar2[2];
      fVar7 = *pfVar4 - *pfVar2;
      fVar8 = (float)NEON_fmadd(fVar13,fVar7,fVar10 * -fVar11);
      fVar10 = (float)NEON_fmadd(fVar12,fVar10,fVar9 * -fVar13);
      fVar7 = (float)NEON_fmadd(fVar11,fVar9,fVar7 * -fVar12);
      if (fVar8 * (1.0 / SQRT(fVar7 * fVar7 + fVar10 * fVar10 + fVar8 * fVar8)) <= fVar6) {
        *param_7 = '\0';
      }
      piVar1 = piVar1 + 3;
      param_7 = param_7 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}


