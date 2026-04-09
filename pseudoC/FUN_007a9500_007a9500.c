// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9500
// Entry Point: 007a9500
// Size: 44 bytes
// Signature: undefined FUN_007a9500(void)


void FUN_007a9500(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = Camera::getFarClip();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  return;
}


