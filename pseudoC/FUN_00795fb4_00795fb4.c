// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00795fb4
// Entry Point: 00795fb4
// Size: 76 bytes
// Signature: undefined FUN_00795fb4(void)


void FUN_00795fb4(uint *param_1)

{
  long lVar1;
  uint uVar2;
  
  if (*param_1 < 5) {
    uVar2 = param_1[4];
    EngineManager::getInstance();
    lVar1 = Renderer::getSharedRenderArgs();
    *(uint *)(lVar1 + (long)(int)*param_1 * 4 + 0x10) = uVar2;
  }
  return;
}


