// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799124
// Entry Point: 00799124
// Size: 80 bytes
// Signature: undefined FUN_00799124(void)


void FUN_00799124(undefined4 *param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x60) = *param_1;
  *(undefined4 *)(lVar1 + 100) = param_1[4];
  *(undefined4 *)(lVar1 + 0x68) = param_1[8];
  lVar1 = EngineManager::getInstance();
  *(undefined *)(*(long *)(lVar1 + 0xb8) + 0xf06) = 1;
  return;
}


