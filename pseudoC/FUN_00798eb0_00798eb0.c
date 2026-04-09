// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798eb0
// Entry Point: 00798eb0
// Size: 80 bytes
// Signature: undefined FUN_00798eb0(void)


void FUN_00798eb0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x14);
  *(undefined4 *)(param_1 + 0x108) = 4;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  uVar2 = *(undefined4 *)(lVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  return;
}


