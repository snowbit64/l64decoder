// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumChannelDescs
// Entry Point: 009601c8
// Size: 36 bytes
// Signature: undefined getNumChannelDescs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MultiresTextureGpuUpdater::getNumChannelDescs() */

int MultiresTextureGpuUpdater::getNumChannelDescs(void)

{
  long in_x0;
  
  return (int)((ulong)(*(long *)(in_x0 + 0x128) - *(long *)(in_x0 + 0x120)) >> 3) *
         *(int *)(in_x0 + 0x4c) * -0x42108421;
}


