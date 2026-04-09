// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798dc8
// Entry Point: 00798dc8
// Size: 56 bytes
// Signature: undefined FUN_00798dc8(void)


void FUN_00798dc8(long param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x30);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


