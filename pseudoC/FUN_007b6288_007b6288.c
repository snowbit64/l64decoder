// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6288
// Entry Point: 007b6288
// Size: 56 bytes
// Signature: undefined FUN_007b6288(void)


void FUN_007b6288(char *param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = StreamedSample::load(param_1,SUB81(*param_2,0));
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  return;
}


