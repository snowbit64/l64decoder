// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRenderTexture
// Entry Point: 006f1dac
// Size: 8 bytes
// Signature: undefined __thiscall setRenderTexture(FontOverlayRenderer * this, ITextureObject * param_1)


/* FontOverlayRenderer::setRenderTexture(ITextureObject*) */

void __thiscall
FontOverlayRenderer::setRenderTexture(FontOverlayRenderer *this,ITextureObject *param_1)

{
  *(ITextureObject **)(this + 1000) = param_1;
  return;
}


