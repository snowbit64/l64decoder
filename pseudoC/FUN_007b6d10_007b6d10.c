// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6d10
// Entry Point: 007b6d10
// Size: 44 bytes
// Signature: undefined FUN_007b6d10(void)


void FUN_007b6d10(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = SoundPlayer::getNumItems();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


