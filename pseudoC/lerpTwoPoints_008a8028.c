// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lerpTwoPoints
// Entry Point: 008a8028
// Size: 40 bytes
// Signature: undefined __cdecl lerpTwoPoints(float param_1, float param_2, float param_3, float param_4, float param_5)


/* AudioMathUtil::lerpTwoPoints(float, float, float, float, float) */

undefined4
AudioMathUtil::lerpTwoPoints(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  undefined4 uVar2;
  
  if (param_2 == param_3) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (param_1 - param_2) / (param_3 - param_2);
  }
  uVar2 = NEON_fmadd(fVar1,param_5 - param_4,param_4);
  return uVar2;
}


