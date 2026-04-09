// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e80e4
// Entry Point: 006e80e4
// Size: 56 bytes
// Signature: undefined FUN_006e80e4(void)


void FUN_006e80e4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  EngineManager::getInstance();
  lVar2 = EngineManager::getInputDevice();
  uVar1 = (undefined4)lVar2;
  if (lVar2 != 0) {
    uVar1 = AndroidInputDevice::getNumGamePads();
  }
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


