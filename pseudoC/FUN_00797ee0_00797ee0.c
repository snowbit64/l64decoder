// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797ee0
// Entry Point: 00797ee0
// Size: 52 bytes
// Signature: undefined FUN_00797ee0(void)


void FUN_00797ee0(long param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = EngineManager::getInstance();
  fVar2 = *(float *)(lVar1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(int *)(param_1 + 0x100) = (int)fVar2;
  return;
}


