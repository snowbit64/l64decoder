// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAlignment
// Entry Point: 006f1d4c
// Size: 8 bytes
// Signature: undefined __thiscall setAlignment(FontOverlayRenderer * this, ALIGNMENT_TYPE param_1)


/* FontOverlayRenderer::setAlignment(FontOverlayRenderer::ALIGNMENT_TYPE) */

void __thiscall FontOverlayRenderer::setAlignment(FontOverlayRenderer *this,ALIGNMENT_TYPE param_1)

{
  *(ALIGNMENT_TYPE *)(this + 0x30) = param_1;
  return;
}


