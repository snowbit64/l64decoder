// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00791fec
// Entry Point: 00791fec
// Size: 52 bytes
// Signature: undefined FUN_00791fec(void)


void FUN_00791fec(long param_1)

{
  long lVar1;
  
  ScenegraphPhysicsContextManager::getInstance();
  lVar1 = ScenegraphPhysicsContextManager::getContext();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x6c);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


