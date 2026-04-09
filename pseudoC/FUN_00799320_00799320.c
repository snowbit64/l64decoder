// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799320
// Entry Point: 00799320
// Size: 56 bytes
// Signature: undefined FUN_00799320(void)


void FUN_00799320(long param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x254);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


