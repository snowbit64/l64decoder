// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e4a0
// Entry Point: 0078e4a0
// Size: 56 bytes
// Signature: undefined FUN_0078e4a0(void)


void FUN_0078e4a0(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  FontOverlayRenderer::xyprintf
            (*(FontOverlayRenderer **)(lVar1 + 0xf8),*param_1,param_1[4],param_1[8],0,
             *(char **)(param_1 + 0xc));
  return;
}


