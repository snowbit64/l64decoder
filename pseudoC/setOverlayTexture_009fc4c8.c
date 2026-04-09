// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setOverlayTexture
// Entry Point: 009fc4c8
// Size: 240 bytes
// Signature: undefined __thiscall setOverlayTexture(DeferredDebugRenderer * this, ITextureObject * param_1, ISamplerObject * param_2)


/* DeferredDebugRenderer::setOverlayTexture(ITextureObject*, ISamplerObject*) */

void __thiscall
DeferredDebugRenderer::setOverlayTexture
          (DeferredDebugRenderer *this,ITextureObject *param_1,ISamplerObject *param_2)

{
  Texture *pTVar1;
  ResourceManager *this_00;
  ImageOverlay *this_01;
  
  if (*(long *)(this + 0x200) == 0) {
    pTVar1 = (Texture *)operator_new(0x78);
                    /* try { // try from 009fc518 to 009fc533 has its CatchHandler @ 009fc5c4 */
    Texture::Texture(pTVar1,"deferred_debug_overlay_texture",2,param_1,true,false);
    FUN_00f276d0(1,pTVar1 + 8);
    this_00 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::add(this_00,(Resource *)pTVar1,(ResourceDesc *)0x0,false);
    this_01 = (ImageOverlay *)operator_new(0x90);
                    /* try { // try from 009fc560 to 009fc59b has its CatchHandler @ 009fc5b8 */
    ImageOverlay::ImageOverlay
              (this_01,"deferred_debug_overlay",pTVar1,param_2,0.1,0.1,0.5,0.5,0.0,0.0,1.0,1.0);
    *(ImageOverlay **)(this + 0x200) = this_01;
  }
  else {
    pTVar1 = (Texture *)ImageOverlay::getTexture();
    Texture::setITextureObject(pTVar1,param_1,false);
    ImageOverlay::setISamplerObject(*(ImageOverlay **)(this + 0x200),param_2);
  }
  this[0x208] = (DeferredDebugRenderer)0x1;
  return;
}


