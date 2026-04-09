// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b56c8
// Entry Point: 007b56c8
// Size: 44 bytes
// Signature: undefined FUN_007b56c8(void)


void FUN_007b56c8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = VideoOverlay::getCurrentTime();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  return;
}


