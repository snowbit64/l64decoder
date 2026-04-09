// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeIdealLog2Width
// Entry Point: 00965510
// Size: 68 bytes
// Signature: undefined __cdecl computeIdealLog2Width(float param_1, TextureUsage * param_2)


/* TextureStreamingManager::computeIdealLog2Width(float, TextureUsage const&) */

float TextureStreamingManager::computeIdealLog2Width(float param_1,TextureUsage *param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmin(*(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc),0x4d800000);
  fVar1 = log2f(fVar1);
  return (fVar1 - param_1) * 0.5;
}


