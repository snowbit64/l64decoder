// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e98d0
// Entry Point: 006e98d0
// Size: 36 bytes
// Signature: undefined FUN_006e98d0(void)


void FUN_006e98d0(void)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = EngineManager::getCopyProtection();
  if (lVar1 != 0) {
    CopyProtection::removeActivation();
    return;
  }
  return;
}


