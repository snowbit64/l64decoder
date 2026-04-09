// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4828
// Entry Point: 007b4828
// Size: 48 bytes
// Signature: undefined FUN_007b4828(void)


void FUN_007b4828(CharacterSet *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = CharacterSet::getTime(param_1,*param_2);
  param_2[0x40] = uVar1;
  param_2[0x42] = 4;
  return;
}


