// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLineHeight
// Entry Point: 006f24fc
// Size: 12 bytes
// Signature: undefined __thiscall getLineHeight(FontOverlayRenderer * this, float param_1)


/* FontOverlayRenderer::getLineHeight(float) const */

float __thiscall FontOverlayRenderer::getLineHeight(FontOverlayRenderer *this,float param_1)

{
  return *(float *)(this + 0x44) * param_1;
}


