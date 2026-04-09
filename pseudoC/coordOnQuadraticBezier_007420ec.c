// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: coordOnQuadraticBezier
// Entry Point: 007420ec
// Size: 52 bytes
// Signature: undefined __cdecl coordOnQuadraticBezier(float param_1, Vector2 * param_2, int param_3)


/* coordOnQuadraticBezier(float, Vector2 const*, int) */

undefined4 coordOnQuadraticBezier(float param_1,Vector2 *param_2,int param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  
  pfVar1 = (float *)(param_2 + (long)param_3 * 4);
  fVar3 = pfVar1[2];
  uVar2 = NEON_fmadd((1.0 - param_1) * (1.0 - param_1),*pfVar1 - fVar3,fVar3);
  uVar2 = NEON_fmadd(param_1 * param_1,pfVar1[4] - fVar3,uVar2);
  return uVar2;
}


