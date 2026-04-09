// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798800
// Entry Point: 00798800
// Size: 48 bytes
// Signature: undefined FUN_00798800(void)


void FUN_00798800(long param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x218);
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


