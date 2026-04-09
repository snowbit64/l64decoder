// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e85c8
// Entry Point: 006e85c8
// Size: 64 bytes
// Signature: undefined FUN_006e85c8(void)


void FUN_006e85c8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  EngineManager::getInstance();
  lVar1 = EngineManager::getInputDevice();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x13cc);
  }
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


