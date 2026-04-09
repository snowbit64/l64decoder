// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateRenderOverlays
// Entry Point: 006f7988
// Size: 96 bytes
// Signature: undefined __thiscall allocateRenderOverlays(TextureOverlayRenderer * this, IRenderDevice * param_1)


/* TextureOverlayRenderer::allocateRenderOverlays(IRenderDevice*) */

void __thiscall
TextureOverlayRenderer::allocateRenderOverlays(TextureOverlayRenderer *this,IRenderDevice *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x4f8);
  if (*(long *)(this + 0x500) != lVar1) {
    uVar2 = 0;
    do {
      RenderOverlay::allocateTextures(*(RenderOverlay **)(lVar1 + uVar2 * 8),param_1);
      uVar2 = (ulong)((int)uVar2 + 1);
      lVar1 = *(long *)(this + 0x4f8);
    } while (uVar2 < (ulong)(*(long *)(this + 0x500) - lVar1 >> 3));
  }
  return;
}


