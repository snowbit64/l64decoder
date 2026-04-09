// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e86d8
// Entry Point: 006e86d8
// Size: 64 bytes
// Signature: undefined FUN_006e86d8(void)


void FUN_006e86d8(long param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = EngineManager::getInputDevice();
  if (lVar1 != 0) {
    AndroidInputDevice::setDigitalOutput
              ((uint)lVar1,*(uint *)(param_1 + 0x10),SUB41(*(undefined4 *)(param_1 + 0x20),0));
    return;
  }
  return;
}


