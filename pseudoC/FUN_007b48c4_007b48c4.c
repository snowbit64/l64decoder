// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b48c4
// Entry Point: 007b48c4
// Size: 48 bytes
// Signature: undefined FUN_007b48c4(void)


void FUN_007b48c4(CharacterSet *param_1,char **param_2)

{
  undefined4 uVar1;
  
  uVar1 = CharacterSet::getNamedClipIndex(param_1,*param_2);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  *(undefined4 *)(param_2 + 0x21) = 1;
  return;
}


