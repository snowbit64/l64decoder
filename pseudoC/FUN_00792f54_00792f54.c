// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792f54
// Entry Point: 00792f54
// Size: 48 bytes
// Signature: undefined FUN_00792f54(void)


void FUN_00792f54(long param_1)

{
  long lVar1;
  
  lVar1 = I3DManager::getInstance();
  *(int *)(param_1 + 0x100) = (int)*(undefined8 *)(lVar1 + 0x40);
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


