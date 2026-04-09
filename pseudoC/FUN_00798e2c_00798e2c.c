// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798e2c
// Entry Point: 00798e2c
// Size: 56 bytes
// Signature: undefined FUN_00798e2c(void)


void FUN_00798e2c(long param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x2c);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


