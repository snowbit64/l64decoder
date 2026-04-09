// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setClipArea
// Entry Point: 006f1d78
// Size: 44 bytes
// Signature: undefined __thiscall setClipArea(FontOverlayRenderer * this, float param_1, float param_2, float param_3, float param_4)


/* FontOverlayRenderer::setClipArea(float, float, float, float) */

void __thiscall
FontOverlayRenderer::setClipArea
          (FontOverlayRenderer *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = NEON_fmin(param_3,0x3f800000);
  uVar2 = NEON_fmin(param_4,0x3f800000);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(undefined4 *)(this + 0x50) = uVar1;
  *(float *)(this + 0x48) = param_1;
  *(float *)(this + 0x4c) = param_2;
  *(undefined4 *)(this + 0x54) = uVar2;
  return;
}


