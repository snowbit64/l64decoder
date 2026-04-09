// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e5a8
// Entry Point: 0078e5a8
// Size: 40 bytes
// Signature: undefined FUN_0078e5a8(void)


void FUN_0078e5a8(ALIGNMENT_TYPE *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  FontOverlayRenderer::setAlignment(*(FontOverlayRenderer **)(lVar1 + 0xf8),*param_1);
  return;
}


