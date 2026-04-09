// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAllowsUnicode
// Entry Point: 00753538
// Size: 20 bytes
// Signature: undefined __thiscall getAllowsUnicode(FontImeCharacterFiler * this, uint param_1)


/* EngineManager::FontImeCharacterFiler::getAllowsUnicode(unsigned int) */

undefined8 __thiscall
EngineManager::FontImeCharacterFiler::getAllowsUnicode(FontImeCharacterFiler *this,uint param_1)

{
  undefined8 uVar1;
  
  if (*(FontOverlayRenderer **)(this + 8) != (FontOverlayRenderer *)0x0) {
    uVar1 = FontOverlayRenderer::getCanRenderUnicode(*(FontOverlayRenderer **)(this + 8),param_1);
    return uVar1;
  }
  return 1;
}


