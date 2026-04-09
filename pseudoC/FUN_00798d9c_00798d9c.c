// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798d9c
// Entry Point: 00798d9c
// Size: 44 bytes
// Signature: undefined FUN_00798d9c(void)


void FUN_00798d9c(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x30) = uVar2;
  return;
}


