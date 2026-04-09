// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078ea94
// Entry Point: 0078ea94
// Size: 40 bytes
// Signature: undefined FUN_0078ea94(void)


void FUN_0078ea94(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  FontOverlayRenderer::setDepthTestEnabled(*(FontOverlayRenderer **)(lVar1 + 0xf8),*(bool *)param_1)
  ;
  return;
}


