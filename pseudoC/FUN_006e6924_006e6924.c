// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6924
// Entry Point: 006e6924
// Size: 48 bytes
// Signature: undefined FUN_006e6924(void)


void FUN_006e6924(long param_1)

{
  undefined4 uVar1;
  
  EngineManager::getInstance();
  uVar1 = EngineManager::getScreenAspectRatio();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


