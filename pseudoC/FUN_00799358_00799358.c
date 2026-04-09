// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799358
// Entry Point: 00799358
// Size: 44 bytes
// Signature: undefined FUN_00799358(void)


void FUN_00799358(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x260) = uVar2;
  return;
}


