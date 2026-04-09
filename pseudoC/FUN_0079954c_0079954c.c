// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079954c
// Entry Point: 0079954c
// Size: 44 bytes
// Signature: undefined FUN_0079954c(void)


void FUN_0079954c(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x2a0) = uVar2;
  return;
}


