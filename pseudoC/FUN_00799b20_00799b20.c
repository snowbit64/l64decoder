// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799b20
// Entry Point: 00799b20
// Size: 104 bytes
// Signature: undefined FUN_00799b20(void)


void FUN_00799b20(float *param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(float *)(lVar1 + 0x2c8) = *param_1 * param_1[8];
  *(float *)(lVar1 + 0x2cc) = param_1[4] * param_1[8];
  *(float *)(lVar1 + 0x290) = param_1[0xc] * param_1[0x14];
  *(float *)(lVar1 + 0x294) = param_1[0x10] * param_1[0x14];
  return;
}


