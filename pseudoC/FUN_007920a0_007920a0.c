// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007920a0
// Entry Point: 007920a0
// Size: 52 bytes
// Signature: undefined FUN_007920a0(void)


void FUN_007920a0(long param_1)

{
  long lVar1;
  
  ScenegraphPhysicsContextManager::getInstance();
  lVar1 = ScenegraphPhysicsContextManager::getContext();
  *(uint *)(param_1 + 0x100) = (uint)*(ushort *)(lVar1 + 0x84);
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


