// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e994
// Entry Point: 0078e994
// Size: 72 bytes
// Signature: undefined FUN_0078e994(void)


void FUN_0078e994(float *param_1)

{
  float fVar1;
  long lVar2;
  
  lVar2 = EngineManager::getInstance();
  fVar1 = (float)FontOverlayRenderer::getTextLineLength
                           (*(FontOverlayRenderer **)(lVar2 + 0xf8),*param_1,true,0,
                            *(char **)(param_1 + 4),param_1[8]);
  param_1[0x42] = 1.401298e-45;
  param_1[0x40] = fVar1;
  return;
}


