// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyDeletedTexture
// Entry Point: 006f7968
// Size: 24 bytes
// Signature: undefined __thiscall notifyDeletedTexture(TextureOverlayRenderer * this, ITextureObject * param_1, SharedRenderArgs * param_2)


/* TextureOverlayRenderer::notifyDeletedTexture(ITextureObject*, SharedRenderArgs const&) */

void __thiscall
TextureOverlayRenderer::notifyDeletedTexture
          (TextureOverlayRenderer *this,ITextureObject *param_1,SharedRenderArgs *param_2)

{
  if (*(ITextureObject **)(this + 0x488) != param_1) {
    return;
  }
  renderOverlays(this,param_2);
  return;
}


