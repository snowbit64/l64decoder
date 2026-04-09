// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSwizzle
// Entry Point: 006f8044
// Size: 20 bytes
// Signature: undefined __thiscall setSwizzle(TextureOverlayRenderer * this, Swizzle param_1, Swizzle param_2, Swizzle param_3, Swizzle param_4)


/* TextureOverlayRenderer::setSwizzle(TextureOverlayRenderer::Swizzle,
   TextureOverlayRenderer::Swizzle, TextureOverlayRenderer::Swizzle,
   TextureOverlayRenderer::Swizzle) */

void __thiscall
TextureOverlayRenderer::setSwizzle
          (TextureOverlayRenderer *this,Swizzle param_1,Swizzle param_2,Swizzle param_3,
          Swizzle param_4)

{
  *(Swizzle *)(this + 0x49c) = param_1 | param_2 << 3 | param_3 << 6 | param_4 << 9;
  return;
}


