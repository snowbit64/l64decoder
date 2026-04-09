// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3f7c
// Entry Point: 007b3f7c
// Size: 52 bytes
// Signature: undefined FUN_007b3f7c(void)


void FUN_007b3f7c(long param_1,float *param_2)

{
  BaseTerrain::setLodBlendStartDynamic((BaseTerrain *)(param_1 + 0x170),*param_2);
  BaseTerrain::setLodBlendEndDynamic((BaseTerrain *)(param_1 + 0x170),param_2[4]);
  return;
}


