// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4858
// Entry Point: 007b4858
// Size: 64 bytes
// Signature: undefined FUN_007b4858(void)


void FUN_007b4858(CharacterSet *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  
  param_2[0x40] = 0;
  param_2[0x42] = 4;
  lVar1 = CharacterSet::getClip(param_1,*param_2);
  if (lVar1 != 0) {
    uVar2 = Clip::getDuration();
    param_2[0x42] = 4;
    param_2[0x40] = uVar2;
  }
  return;
}


