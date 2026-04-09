// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWrapWidth
// Entry Point: 006f1d5c
// Size: 12 bytes
// Signature: undefined __thiscall setWrapWidth(FontOverlayRenderer * this, float param_1, bool param_2)


/* FontOverlayRenderer::setWrapWidth(float, bool) */

void __thiscall
FontOverlayRenderer::setWrapWidth(FontOverlayRenderer *this,float param_1,bool param_2)

{
  *(float *)(this + 0x38) = param_1;
  this[0x3c] = (FontOverlayRenderer)param_2;
  return;
}


