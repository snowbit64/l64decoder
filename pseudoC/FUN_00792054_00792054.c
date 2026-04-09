// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792054
// Entry Point: 00792054
// Size: 76 bytes
// Signature: undefined FUN_00792054(void)


void FUN_00792054(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  ScenegraphPhysicsContextManager::getInstance();
  lVar1 = ScenegraphPhysicsContextManager::getContext();
  fVar3 = *(float *)(lVar1 + 0x60);
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x7c));
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(float *)(param_1 + 0x100) = fVar3 * fVar2 * 1000.0;
  return;
}


