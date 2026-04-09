// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeParallelogramCoords
// Entry Point: 007661a4
// Size: 128 bytes
// Signature: undefined __cdecl decodeParallelogramCoords(MethodInvocation * param_1, float * param_2, float * param_3, float * param_4, float * param_5, float * param_6, float * param_7)


/* DensityMapModifierLua::decodeParallelogramCoords(MethodInvocation*, float&, float&, float&,
   float&, float&, float&) */

void DensityMapModifierLua::decodeParallelogramCoords
               (MethodInvocation *param_1,float *param_2,float *param_3,float *param_4,
               float *param_5,float *param_6,float *param_7)

{
  *param_2 = *(float *)param_1;
  *param_3 = *(float *)(param_1 + 0x10);
  *param_4 = *(float *)(param_1 + 0x20);
  *param_5 = *(float *)(param_1 + 0x30);
  *param_6 = *(float *)(param_1 + 0x40);
  *param_7 = *(float *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x60) != 0) {
    return;
  }
  *param_4 = *param_4 - *param_2;
  *param_5 = *param_5 - *param_3;
  *param_6 = *param_6 - *param_2;
  *param_7 = *param_7 - *param_3;
  return;
}


