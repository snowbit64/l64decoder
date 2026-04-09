// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b56fc
// Entry Point: 007b56fc
// Size: 48 bytes
// Signature: undefined FUN_007b56fc(void)


void FUN_007b56fc(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = VideoOverlay::isPlaying();
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 & 1;
  return;
}


