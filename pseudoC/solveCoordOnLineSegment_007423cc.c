// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveCoordOnLineSegment
// Entry Point: 007423cc
// Size: 88 bytes
// Signature: undefined __cdecl solveCoordOnLineSegment(float * param_1, Vector2 * param_2, int param_3, float param_4, float param_5, float param_6)


/* solveCoordOnLineSegment(float&, Vector2 const*, int, float, float, float) */

bool solveCoordOnLineSegment
               (float *param_1,Vector2 *param_2,int param_3,float param_4,float param_5,
               float param_6)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)((long)(param_2 + (long)param_3 * 4) + 8);
  fVar1 = *(float *)(param_2 + (long)param_3 * 4);
  if (ABS(fVar2 - fVar1) < 0.0001) {
    return false;
  }
  fVar1 = (param_4 - fVar1) / (fVar2 - fVar1);
  *param_1 = fVar1;
  return param_5 < fVar1 && fVar1 < param_6;
}


