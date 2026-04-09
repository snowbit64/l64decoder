// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isVectorEqual
// Entry Point: 0092940c
// Size: 116 bytes
// Signature: undefined __cdecl isVectorEqual(float * param_1, float * param_2)


/* DestructionGeometryShared::isVectorEqual(float*, float*) */

bool DestructionGeometryShared::isVectorEqual(float *param_1,float *param_2)

{
  if (0.0001 < ABS(*param_1 - *param_2)) {
    return false;
  }
  if (0.0001 < ABS(param_1[1] - param_2[1])) {
    return false;
  }
  return ABS(param_1[2] - param_2[2]) <= 0.0001;
}


