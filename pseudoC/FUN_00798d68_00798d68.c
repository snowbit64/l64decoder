// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798d68
// Entry Point: 00798d68
// Size: 52 bytes
// Signature: undefined FUN_00798d68(void)


void FUN_00798d68(undefined *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  lVar1 = *(long *)(lVar1 + 0xb8);
  *(undefined *)(lVar1 + 0xf04) = *param_1;
  *(undefined *)(lVar1 + 0xf06) = 1;
  return;
}


