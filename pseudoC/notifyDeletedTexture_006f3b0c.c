// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyDeletedTexture
// Entry Point: 006f3b0c
// Size: 56 bytes
// Signature: undefined __thiscall notifyDeletedTexture(Overlay * this, ITextureObject * param_1)


/* Overlay::notifyDeletedTexture(ITextureObject*) */

void __thiscall Overlay::notifyDeletedTexture(Overlay *this,ITextureObject *param_1)

{
  long lVar1;
  SharedRenderArgs *pSVar2;
  TextureOverlayRenderer *this_00;
  
  lVar1 = EngineManager::getInstance();
  this_00 = *(TextureOverlayRenderer **)(lVar1 + 0x100);
  pSVar2 = (SharedRenderArgs *)Renderer::getSharedRenderArgs();
  TextureOverlayRenderer::notifyDeletedTexture(this_00,param_1,pSVar2);
  return;
}


