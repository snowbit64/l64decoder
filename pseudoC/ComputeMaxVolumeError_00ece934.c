// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeMaxVolumeError
// Entry Point: 00ece934
// Size: 20 bytes
// Signature: undefined ComputeMaxVolumeError(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::VoxelSet::ComputeMaxVolumeError() const */

undefined  [16] VHACD::VoxelSet::ComputeMaxVolumeError(void)

{
  long in_x0;
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)NEON_ucvtf(*(undefined8 *)(in_x0 + 0x990));
  auVar2._0_8_ = *(double *)(in_x0 + 0xa18) * dVar1;
  auVar2._8_8_ = 0;
  return auVar2;
}


