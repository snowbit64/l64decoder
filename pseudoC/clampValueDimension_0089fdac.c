// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clampValueDimension
// Entry Point: 0089fdac
// Size: 96 bytes
// Signature: undefined __cdecl clampValueDimension(float param_1, float param_2, uint param_3, int * param_4, int * param_5)


/* TerrainDeformation::clampValueDimension(float, float, unsigned int, int&, int&) */

void TerrainDeformation::clampValueDimension
               (float param_1,float param_2,uint param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + param_2);
  *param_4 = (int)(param_1 - param_2);
  *param_5 = iVar1;
  if ((iVar1 < 1) || ((int)param_3 <= *param_4)) {
    *param_5 = 0;
    *param_4 = 0;
    return;
  }
  if (*param_4 < 0) {
    *param_4 = 0;
    iVar1 = *param_5;
  }
  if ((int)param_3 <= iVar1) {
    *param_5 = param_3;
    return;
  }
  return;
}


