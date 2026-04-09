// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079996c
// Entry Point: 0079996c
// Size: 44 bytes
// Signature: undefined FUN_0079996c(void)


void FUN_0079996c(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x2b4) = uVar2;
  return;
}


