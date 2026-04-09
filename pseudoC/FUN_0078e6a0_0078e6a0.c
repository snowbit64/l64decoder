// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e6a0
// Entry Point: 0078e6a0
// Size: 40 bytes
// Signature: undefined FUN_0078e6a0(void)


void FUN_0078e6a0(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  FontOverlayRenderer::setWidthScale(*(FontOverlayRenderer **)(lVar1 + 0xf8),*param_1);
  return;
}


