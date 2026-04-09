// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b2b00
// Entry Point: 007b2b00
// Size: 52 bytes
// Signature: undefined FUN_007b2b00(void)


void FUN_007b2b00(DensityMapHeightUpdater *param_1,char **param_2)

{
  byte bVar1;
  
  bVar1 = DensityMapHeightUpdater::saveStateToFile(param_1,*param_2);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  return;
}


