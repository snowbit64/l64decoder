// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6cdc
// Entry Point: 007b6cdc
// Size: 52 bytes
// Signature: undefined FUN_007b6cdc(void)


void FUN_007b6cdc(SoundPlayer *param_1,uint *param_2)

{
  byte bVar1;
  
  bVar1 = SoundPlayer::getIsChannelStreamed(param_1,*param_2);
  param_2[0x42] = 3;
  *(byte *)(param_2 + 0x40) = bVar1 & 1;
  return;
}


