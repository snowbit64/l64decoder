// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792020
// Entry Point: 00792020
// Size: 52 bytes
// Signature: undefined FUN_00792020(void)


void FUN_00792020(long param_1)

{
  long lVar1;
  
  ScenegraphPhysicsContextManager::getInstance();
  lVar1 = ScenegraphPhysicsContextManager::getContext();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x74);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


