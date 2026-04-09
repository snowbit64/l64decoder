// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b569c
// Entry Point: 007b569c
// Size: 44 bytes
// Signature: undefined FUN_007b569c(void)


void FUN_007b569c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = VideoOverlay::getDuration();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  return;
}


