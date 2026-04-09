// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e81dc
// Entry Point: 006e81dc
// Size: 72 bytes
// Signature: undefined FUN_006e81dc(void)


void FUN_006e81dc(uint *param_1)

{
  bool bVar1;
  long lVar2;
  
  EngineManager::getInstance();
  lVar2 = EngineManager::getInputDevice();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_1 < 0xc;
  }
  *(bool *)(param_1 + 0x40) = bVar1;
  param_1[0x42] = 3;
  return;
}


