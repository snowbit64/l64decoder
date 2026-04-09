// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079944c
// Entry Point: 0079944c
// Size: 56 bytes
// Signature: undefined FUN_0079944c(void)


void FUN_0079944c(long param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x250);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


