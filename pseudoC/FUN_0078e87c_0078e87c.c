// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e87c
// Entry Point: 0078e87c
// Size: 68 bytes
// Signature: undefined FUN_0078e87c(void)


void FUN_0078e87c(float *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = EngineManager::getInstance();
  fVar2 = (float)FontOverlayRenderer::getTextWidth
                           (*(FontOverlayRenderer **)(lVar1 + 0xf8),*param_1,true,0,
                            *(char **)(param_1 + 4));
  param_1[0x40] = fVar2;
  param_1[0x42] = 5.605194e-45;
  return;
}


