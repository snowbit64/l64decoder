// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6c00
// Entry Point: 007b6c00
// Size: 48 bytes
// Signature: undefined FUN_007b6c00(void)


void FUN_007b6c00(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = SoundPlayer::showContentRatingWarning();
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 & 1;
  return;
}


