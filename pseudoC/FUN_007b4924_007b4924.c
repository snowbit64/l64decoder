// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4924
// Entry Point: 007b4924
// Size: 48 bytes
// Signature: undefined FUN_007b4924(void)


void FUN_007b4924(CharacterSet *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = CharacterSet::getAssignedClip(param_1,*param_2);
  param_2[0x40] = uVar1;
  param_2[0x42] = 1;
  return;
}


