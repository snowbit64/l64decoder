// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeShadowResultsAtlasSize
// Entry Point: 00a41cf8
// Size: 20 bytes
// Signature: undefined __cdecl computeShadowResultsAtlasSize(uint param_1, uint param_2, uint * param_3, uint * param_4)


/* ShadowBufferRenderController::computeShadowResultsAtlasSize(unsigned int, unsigned int, unsigned
   int&, unsigned int&) */

void ShadowBufferRenderController::computeShadowResultsAtlasSize
               (uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  *param_3 = param_1 << 2;
  *param_4 = param_2 << 2;
  return;
}


