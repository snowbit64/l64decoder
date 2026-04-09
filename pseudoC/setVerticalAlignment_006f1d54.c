// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVerticalAlignment
// Entry Point: 006f1d54
// Size: 8 bytes
// Signature: undefined __thiscall setVerticalAlignment(FontOverlayRenderer * this, VERTICAL_ALIGNMENT_TYPE param_1)


/* FontOverlayRenderer::setVerticalAlignment(FontOverlayRenderer::VERTICAL_ALIGNMENT_TYPE) */

void __thiscall
FontOverlayRenderer::setVerticalAlignment(FontOverlayRenderer *this,VERTICAL_ALIGNMENT_TYPE param_1)

{
  *(VERTICAL_ALIGNMENT_TYPE *)(this + 0x34) = param_1;
  return;
}


