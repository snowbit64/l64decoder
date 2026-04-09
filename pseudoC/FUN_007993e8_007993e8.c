// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007993e8
// Entry Point: 007993e8
// Size: 56 bytes
// Signature: undefined FUN_007993e8(void)


void FUN_007993e8(long param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x25c);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


