// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isEqualFloat
// Entry Point: 008a7ee8
// Size: 28 bytes
// Signature: undefined __cdecl isEqualFloat(float param_1, float param_2)


/* AudioMathUtil::isEqualFloat(float, float) */

bool AudioMathUtil::isEqualFloat(float param_1,float param_2)

{
  return ABS(param_1 - param_2) <= 1e-06;
}


