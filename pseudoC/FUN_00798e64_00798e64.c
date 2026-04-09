// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798e64
// Entry Point: 00798e64
// Size: 76 bytes
// Signature: undefined FUN_00798e64(void)


void FUN_00798e64(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x14) = uVar2;
  uVar2 = param_1[4];
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x10) = uVar2;
  return;
}


