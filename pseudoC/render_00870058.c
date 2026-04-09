// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 00870058
// Size: 84 bytes
// Signature: undefined __thiscall render(VideoOverlay * this, SharedRenderArgs * param_1)


/* VideoOverlay::render(SharedRenderArgs const&) */

void __thiscall VideoOverlay::render(VideoOverlay *this,SharedRenderArgs *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(this + 0x78) != 0) {
    lVar1 = EngineManager::getInstance();
    lVar2 = *(long *)(this + 0x78);
    TextureOverlayRenderer::renderVideoOverlayImmediate
              (*(TextureOverlayRenderer **)(lVar1 + 0x100),*(ITextureObject **)(lVar2 + 0x10),
               *(ITextureObject **)(lVar2 + 0x18),*(ITextureObject **)(lVar2 + 0x20),
               *(ISamplerObject **)(lVar2 + 0x28),*(float *)(this + 0x28),*(float *)(this + 0x2c),
               *(float *)(this + 0x20),*(float *)(this + 0x24),param_1);
    return;
  }
  return;
}


