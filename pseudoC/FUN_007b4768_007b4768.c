// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4768
// Entry Point: 007b4768
// Size: 52 bytes
// Signature: undefined FUN_007b4768(void)


void FUN_007b4768(CharacterSet *param_1,uint *param_2)

{
  byte bVar1;
  
  bVar1 = CharacterSet::isVisible(param_1,*param_2);
  param_2[0x42] = 3;
  *(byte *)(param_2 + 0x40) = bVar1 & 1;
  return;
}


