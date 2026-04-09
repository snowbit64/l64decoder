// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e554
// Entry Point: 0078e554
// Size: 44 bytes
// Signature: undefined FUN_0078e554(void)


void FUN_0078e554(uint *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  FontOverlayRenderer::setLineBounds(*(FontOverlayRenderer **)(lVar1 + 0xf8),*param_1,param_1[4]);
  return;
}


