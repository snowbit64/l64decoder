// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799044
// Entry Point: 00799044
// Size: 104 bytes
// Signature: undefined FUN_00799044(void)


void FUN_00799044(undefined4 *param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x3c) = *param_1;
  *(undefined4 *)(lVar1 + 0x40) = param_1[4];
  *(undefined4 *)(lVar1 + 0x44) = param_1[8];
  *(undefined4 *)(lVar1 + 0x48) = param_1[0xc];
  *(undefined4 *)(lVar1 + 0x4c) = param_1[0x10];
  *(undefined *)(lVar1 + 0x6c) = *(undefined *)(param_1 + 0x14);
  lVar1 = EngineManager::getInstance();
  *(undefined *)(*(long *)(lVar1 + 0xb8) + 0xf06) = 1;
  return;
}


