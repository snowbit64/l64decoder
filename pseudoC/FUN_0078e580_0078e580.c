// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e580
// Entry Point: 0078e580
// Size: 40 bytes
// Signature: undefined FUN_0078e580(void)


void FUN_0078e580(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  FontOverlayRenderer::setBold(*(FontOverlayRenderer **)(lVar1 + 0xf8),*(bool *)param_1);
  return;
}


