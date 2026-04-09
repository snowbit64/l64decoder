// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e724
// Entry Point: 0078e724
// Size: 68 bytes
// Signature: undefined FUN_0078e724(void)


void FUN_0078e724(float *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = EngineManager::getInstance();
  fVar2 = (float)FontOverlayRenderer::getTextWidth
                           (*(FontOverlayRenderer **)(lVar1 + 0xf8),*param_1,false,0,
                            *(char **)(param_1 + 4));
  param_1[0x40] = fVar2;
  param_1[0x42] = 5.605194e-45;
  return;
}


