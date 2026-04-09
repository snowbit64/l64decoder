// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007993bc
// Entry Point: 007993bc
// Size: 44 bytes
// Signature: undefined FUN_007993bc(void)


void FUN_007993bc(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x25c) = uVar2;
  return;
}


