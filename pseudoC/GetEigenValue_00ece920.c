// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetEigenValue
// Entry Point: 00ece920
// Size: 20 bytes
// Signature: undefined __thiscall GetEigenValue(VoxelSet * this, AXIS param_1)


/* VHACD::VoxelSet::GetEigenValue(VHACD::AXIS) const */

undefined  [16] __thiscall VHACD::VoxelSet::GetEigenValue(VoxelSet *this,AXIS param_1)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(this + (ulong)param_1 * 8 + (ulong)param_1 * 0x18 + 0xab0);
  auVar1._8_8_ = 0;
  return auVar1;
}


