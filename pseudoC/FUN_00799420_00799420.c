// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799420
// Entry Point: 00799420
// Size: 44 bytes
// Signature: undefined FUN_00799420(void)


void FUN_00799420(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x250) = uVar2;
  return;
}


