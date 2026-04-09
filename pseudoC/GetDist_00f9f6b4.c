// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetDist
// Entry Point: 00f9f6b4
// Size: 36 bytes
// Signature: undefined __cdecl GetDist(float param_1, float param_2, float param_3, float * param_4)


/* GetDist(float, float, float, float const*) */

undefined4 GetDist(float param_1,float param_2,float param_3,float *param_4)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(param_2 - param_4[1],param_2 - param_4[1],
                     (param_1 - *param_4) * (param_1 - *param_4));
  uVar1 = NEON_fmadd(param_3 - param_4[2],param_3 - param_4[2],uVar1);
  return uVar1;
}


