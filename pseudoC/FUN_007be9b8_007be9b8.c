// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007be9b8
// Entry Point: 007be9b8
// Size: 64 bytes
// Signature: undefined FUN_007be9b8(void)


void FUN_007be9b8(undefined4 *param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x2d4) = *param_1;
  *(undefined4 *)(lVar1 + 0x2d8) = param_1[4];
  *(undefined4 *)(lVar1 + 0x2dc) = param_1[8];
  return;
}


