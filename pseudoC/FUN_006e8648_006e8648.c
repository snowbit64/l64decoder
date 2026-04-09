// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8648
// Entry Point: 006e8648
// Size: 60 bytes
// Signature: undefined FUN_006e8648(void)


void FUN_006e8648(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  EngineManager::getInstance();
  lVar1 = EngineManager::getInputDevice();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = 0xffff;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


