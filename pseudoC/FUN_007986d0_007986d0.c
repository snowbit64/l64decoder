// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007986d0
// Entry Point: 007986d0
// Size: 28 bytes
// Signature: undefined FUN_007986d0(void)


void FUN_007986d0(void)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::writeSettings((HardwareScalability *)(lVar1 + 0x198),true);
  return;
}


