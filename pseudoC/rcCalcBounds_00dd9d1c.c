// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcCalcBounds
// Entry Point: 00dd9d1c
// Size: 192 bytes
// Signature: undefined __cdecl rcCalcBounds(float * param_1, int param_2, float * param_3, float * param_4)


/* rcCalcBounds(float const*, int, float*, float*) */

void rcCalcBounds(float *param_1,int param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  *param_4 = *param_1;
  param_4[1] = param_1[1];
  param_4[2] = param_1[2];
  if (1 < param_2) {
    lVar2 = (ulong)(uint)param_2 - 1;
    pfVar1 = param_1 + 5;
    do {
      fVar3 = *param_3;
      if (pfVar1[-2] <= *param_3) {
        fVar3 = pfVar1[-2];
      }
      *param_3 = fVar3;
      fVar3 = param_3[1];
      if (pfVar1[-1] <= param_3[1]) {
        fVar3 = pfVar1[-1];
      }
      param_3[1] = fVar3;
      fVar3 = param_3[2];
      if (*pfVar1 <= param_3[2]) {
        fVar3 = *pfVar1;
      }
      param_3[2] = fVar3;
      fVar3 = *param_4;
      if (*param_4 <= pfVar1[-2]) {
        fVar3 = pfVar1[-2];
      }
      *param_4 = fVar3;
      fVar3 = param_4[1];
      if (param_4[1] <= pfVar1[-1]) {
        fVar3 = pfVar1[-1];
      }
      param_4[1] = fVar3;
      fVar3 = param_4[2];
      if (param_4[2] <= *pfVar1) {
        fVar3 = *pfVar1;
      }
      lVar2 = lVar2 + -1;
      param_4[2] = fVar3;
      pfVar1 = pfVar1 + 3;
    } while (lVar2 != 0);
  }
  return;
}


