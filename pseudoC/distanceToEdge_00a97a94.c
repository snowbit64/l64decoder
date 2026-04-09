// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: distanceToEdge
// Entry Point: 00a97a94
// Size: 212 bytes
// Signature: undefined __cdecl distanceToEdge(float param_1, float param_2, float param_3)


/* ImageUtil::distanceToEdge(float, float, float) */

float ImageUtil::distanceToEdge(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = ABS(param_1);
  fVar3 = ABS(param_2);
  if ((fVar2 <= 1e-05 || fVar3 < 1e-05) || fVar2 > 1e-05 && fVar3 == 1e-05) {
    return 0.5 - param_3;
  }
  fVar1 = (float)NEON_fmadd(param_1,param_1,param_2 * param_2);
  fVar2 = fVar2 * (1.0 / SQRT(fVar1));
  fVar3 = fVar3 * (1.0 / SQRT(fVar1));
  fVar1 = fVar3;
  if (fVar3 <= fVar2) {
    fVar1 = fVar2;
    fVar2 = fVar3;
  }
  fVar3 = (fVar2 * 0.5) / fVar1;
  if (fVar3 <= param_3) {
    if (1.0 - fVar3 <= param_3) {
      fVar2 = (float)NEON_fmadd(fVar1 + fVar2,0xbf000000,
                                SQRT((1.0 - param_3) * fVar2 * (fVar1 + fVar1)));
      return fVar2;
    }
    return (0.5 - param_3) * fVar1;
  }
  fVar2 = (float)NEON_fnmsub(fVar1 + fVar2,0x3f000000,SQRT(fVar2 * (fVar1 + fVar1) * param_3));
  return fVar2;
}


