// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007946fc
// Entry Point: 007946fc
// Size: 68 bytes
// Signature: undefined FUN_007946fc(void)


void FUN_007946fc(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getRootNode();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


