// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: attenuateNatural
// Entry Point: 00e3adec
// Size: 108 bytes
// Signature: undefined __cdecl attenuateNatural(float param_1, float param_2, float param_3, float param_4)


/* SoLoud::attenuateNatural(float, float, float, float) */

float SoLoud::attenuateNatural(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  if (param_3 <= param_1) {
    param_1 = param_3;
  }
  fVar3 = (param_1 - param_2) / (param_3 - param_2);
  fVar1 = powf(10.0,fVar3 * -param_4);
  fVar2 = (float)NEON_fmadd(fVar3,0xc1480000,0x41480000);
  if (fVar3 <= 0.92) {
    fVar2 = 1.0;
  }
  return fVar1 * fVar2;
}


