// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLineBounds
// Entry Point: 006f1cf0
// Size: 16 bytes
// Signature: undefined __thiscall setLineBounds(FontOverlayRenderer * this, uint param_1, uint param_2)


/* FontOverlayRenderer::setLineBounds(unsigned int, unsigned int) */

void __thiscall
FontOverlayRenderer::setLineBounds(FontOverlayRenderer *this,uint param_1,uint param_2)

{
  if (param_2 == 0) {
    param_2 = 0xffffffff;
  }
  *(uint *)(this + 0x20) = param_1;
  *(uint *)(this + 0x24) = param_2;
  return;
}


