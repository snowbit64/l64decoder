// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6c9c
// Entry Point: 007b6c9c
// Size: 64 bytes
// Signature: undefined FUN_007b6c9c(void)


void FUN_007b6c9c(SoundPlayer *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = SoundPlayer::getChannelName(param_1,*param_2);
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  param_2[0x42] = 6;
  *(ushort *)(param_2 + 0x43) = *(ushort *)(param_2 + 0x43) & 0xfffe;
  return;
}


