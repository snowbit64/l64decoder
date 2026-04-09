// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6bd0
// Entry Point: 007b6bd0
// Size: 48 bytes
// Signature: undefined FUN_007b6bd0(void)


void FUN_007b6bd0(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = SoundPlayer::loaded();
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 & 1;
  return;
}


