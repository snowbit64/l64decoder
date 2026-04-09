// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a94cc
// Entry Point: 007a94cc
// Size: 44 bytes
// Signature: undefined FUN_007a94cc(void)


void FUN_007a94cc(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = Camera::getNearClip();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  return;
}


