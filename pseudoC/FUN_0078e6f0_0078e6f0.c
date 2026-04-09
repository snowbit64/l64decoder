// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e6f0
// Entry Point: 0078e6f0
// Size: 52 bytes
// Signature: undefined FUN_0078e6f0(void)


void FUN_0078e6f0(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  FontOverlayRenderer::setClipArea
            (*(FontOverlayRenderer **)(lVar1 + 0xf8),*param_1,param_1[4],param_1[8],param_1[0xc]);
  return;
}


