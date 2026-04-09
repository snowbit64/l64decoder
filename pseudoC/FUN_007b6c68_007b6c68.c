// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6c68
// Entry Point: 007b6c68
// Size: 44 bytes
// Signature: undefined FUN_007b6c68(void)


void FUN_007b6c68(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = SoundPlayer::getNumChannels();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


