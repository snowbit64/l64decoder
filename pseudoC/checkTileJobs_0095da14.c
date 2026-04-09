// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTileJobs
// Entry Point: 0095da14
// Size: 60 bytes
// Signature: undefined __cdecl checkTileJobs(ICommandBuffer * param_1)


/* MultiresTexture::checkTileJobs(ICommandBuffer*) */

void MultiresTexture::checkTileJobs(ICommandBuffer *param_1)

{
  uint uVar1;
  
  uVar1 = MultiresTextureGpuUpdater::checkTileJobs(*(ICommandBuffer **)(param_1 + 0x1b0));
  if (uVar1 != 0) {
    scanForTileUpdateJobs((MultiresTexture *)param_1,uVar1);
    return;
  }
  return;
}


