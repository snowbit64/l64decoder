// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lerp
// Entry Point: 008a7fac
// Size: 12 bytes
// Signature: undefined __cdecl lerp(float param_1, float param_2, float param_3)


/* AudioMathUtil::lerp(float, float, float) */

undefined4 AudioMathUtil::lerp(float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(param_3,param_2 - param_1,param_1);
  return uVar1;
}


