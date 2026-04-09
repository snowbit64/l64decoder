// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6358
// Entry Point: 007b6358
// Size: 60 bytes
// Signature: undefined FUN_007b6358(void)


void FUN_007b6358(Sample *param_1,char **param_2)

{
  byte bVar1;
  
  bVar1 = Sample::load(param_1,*param_2,*(bool *)(param_2 + 2),1);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  return;
}


