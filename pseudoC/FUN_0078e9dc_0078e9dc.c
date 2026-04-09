// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e9dc
// Entry Point: 0078e9dc
// Size: 60 bytes
// Signature: undefined FUN_0078e9dc(void)


void FUN_0078e9dc(uint *param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = EngineManager::getInstance();
  bVar1 = FontOverlayRenderer::getCanRenderUnicode(*(FontOverlayRenderer **)(lVar2 + 0xf8),*param_1)
  ;
  param_1[0x42] = 3;
  *(byte *)(param_1 + 0x40) = bVar1 & 1;
  return;
}


