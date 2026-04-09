// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTileJobs
// Entry Point: 00961864
// Size: 28 bytes
// Signature: undefined __cdecl checkTileJobs(ICommandBuffer * param_1)


/* MultiresTextureGpuUpdater::checkTileJobs(ICommandBuffer*) */

int MultiresTextureGpuUpdater::checkTileJobs(ICommandBuffer *param_1)

{
  return (int)((ulong)(*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120)) >> 3) * -0x42108421;
}


