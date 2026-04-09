// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNormalizedDeviceZCoordinate
// Entry Point: 00aa83a8
// Size: 24 bytes
// Signature: undefined __cdecl getNormalizedDeviceZCoordinate(float param_1, float * param_2)


/* RenderDeviceUtil::getNormalizedDeviceZCoordinate(float, float const*) */

float RenderDeviceUtil::getNormalizedDeviceZCoordinate(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fmsub(param_1,param_2[10],param_2[0xe]);
  fVar1 = (float)NEON_fmsub(param_1,param_2[0xb],param_2[0xf]);
  return fVar2 / fVar1;
}


