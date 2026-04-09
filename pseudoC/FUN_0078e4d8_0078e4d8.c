// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e4d8
// Entry Point: 0078e4d8
// Size: 72 bytes
// Signature: undefined FUN_0078e4d8(void)


void FUN_0078e4d8(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  FontOverlayRenderer::xyprintf3D
            (*(FontOverlayRenderer **)(lVar1 + 0xf8),*param_1,param_1[4],param_1[8],param_1[0xc],
             param_1[0x10],param_1[0x14],param_1[0x18],0,*(char **)(param_1 + 0x1c));
  return;
}


