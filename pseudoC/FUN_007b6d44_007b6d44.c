// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6d44
// Entry Point: 007b6d44
// Size: 60 bytes
// Signature: undefined FUN_007b6d44(void)


void FUN_007b6d44(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = SoundPlayer::getItemName();
  *(undefined8 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 6;
  *(ushort *)(param_2 + 0x10c) = *(ushort *)(param_2 + 0x10c) & 0xfffe;
  return;
}


