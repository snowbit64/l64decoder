// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e5d0
// Entry Point: 0078e5d0
// Size: 40 bytes
// Signature: undefined FUN_0078e5d0(void)


void FUN_0078e5d0(VERTICAL_ALIGNMENT_TYPE *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  FontOverlayRenderer::setVerticalAlignment(*(FontOverlayRenderer **)(lVar1 + 0xf8),*param_1);
  return;
}


