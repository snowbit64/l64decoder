// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007af81c
// Entry Point: 007af81c
// Size: 52 bytes
// Signature: undefined FUN_007af81c(void)


void FUN_007af81c(DensityMapUpdater *param_1,char **param_2)

{
  byte bVar1;
  
  bVar1 = DensityMapUpdater::loadStateFromFile(param_1,*param_2);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  return;
}


