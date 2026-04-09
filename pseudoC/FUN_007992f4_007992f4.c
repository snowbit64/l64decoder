// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007992f4
// Entry Point: 007992f4
// Size: 44 bytes
// Signature: undefined FUN_007992f4(void)


void FUN_007992f4(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x254) = uVar2;
  return;
}


