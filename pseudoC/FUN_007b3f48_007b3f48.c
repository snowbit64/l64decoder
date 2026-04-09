// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3f48
// Entry Point: 007b3f48
// Size: 52 bytes
// Signature: undefined FUN_007b3f48(void)


void FUN_007b3f48(long param_1,float *param_2)

{
  BaseTerrain::setLodBlendStart((BaseTerrain *)(param_1 + 0x170),*param_2);
  BaseTerrain::setLodBlendEnd((BaseTerrain *)(param_1 + 0x170),param_2[4]);
  return;
}


