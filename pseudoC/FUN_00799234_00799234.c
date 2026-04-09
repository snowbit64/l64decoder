// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799234
// Entry Point: 00799234
// Size: 92 bytes
// Signature: undefined FUN_00799234(void)


void FUN_00799234(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *param_1 = *(undefined4 *)(lVar1 + 0x50);
  uVar2 = *(undefined4 *)(lVar1 + 0x54);
  param_1[2] = 4;
  param_1[6] = 4;
  param_1[10] = 4;
  param_1[4] = uVar2;
  uVar2 = *(undefined4 *)(lVar1 + 0x58);
  param_1[0xe] = 4;
  param_1[8] = uVar2;
  param_1[0xc] = *(undefined4 *)(lVar1 + 0x5c);
  return;
}


