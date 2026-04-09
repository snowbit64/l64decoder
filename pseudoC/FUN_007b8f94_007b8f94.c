// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8f94
// Entry Point: 007b8f94
// Size: 44 bytes
// Signature: undefined FUN_007b8f94(void)


void FUN_007b8f94(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = NavigationPath::getNumWaypoints();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


