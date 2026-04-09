// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799174
// Entry Point: 00799174
// Size: 80 bytes
// Signature: undefined FUN_00799174(void)


void FUN_00799174(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *param_1 = *(undefined4 *)(lVar1 + 0x60);
  uVar2 = *(undefined4 *)(lVar1 + 100);
  param_1[2] = 4;
  param_1[6] = 4;
  param_1[10] = 4;
  param_1[4] = uVar2;
  param_1[8] = *(undefined4 *)(lVar1 + 0x68);
  return;
}


