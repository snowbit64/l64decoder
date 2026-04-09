// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateSpeakerVolume
// Entry Point: 00e3b5d0
// Size: 128 bytes
// Signature: undefined __cdecl calculateSpeakerVolume(float param_1, float param_2, float param_3, float param_4)


/* SoLoud::Soloud::calculateSpeakerVolume(float, float, float, float) */

float SoLoud::Soloud::calculateSpeakerVolume
                (float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_fmin(param_4,0x3f800000);
  fVar2 = 0.5;
  if (0.5 <= param_4) {
    fVar2 = fVar1;
  }
  if (0.001 < param_3) {
    fVar1 = expf((param_2 / param_3) * -1.7);
    fVar2 = (float)NEON_fmsub(fVar2 + -0.5,fVar1,fVar2);
  }
  fVar2 = (float)NEON_fmadd(fVar2,param_1,0x3f800000);
  return fVar2 * 0.5;
}


