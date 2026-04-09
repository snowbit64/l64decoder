// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799650
// Entry Point: 00799650
// Size: 60 bytes
// Signature: undefined FUN_00799650(void)


void FUN_00799650(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*param_1 != '\0') {
    uVar2 = 0x3f800000;
  }
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x2b0) = uVar2;
  return;
}


