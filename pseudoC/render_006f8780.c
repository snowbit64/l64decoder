// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006f8780
// Size: 232 bytes
// Signature: undefined __thiscall render(RenderOverlay * this, SharedRenderArgs * param_1)


/* RenderOverlay::render(SharedRenderArgs const&) */

void __thiscall RenderOverlay::render(RenderOverlay *this,SharedRenderArgs *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ITextureObject *pIVar4;
  ISamplerObject *pIVar5;
  TextureOverlayRenderer *this_00;
  
  allocateTextures(this,*(IRenderDevice **)param_1);
  RenderDeviceManager::getInstance();
  plVar2 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  lVar3 = (**(code **)(*plVar2 + 0x28))();
  bVar1 = *(bool *)(lVar3 + 0x9d);
  lVar3 = EngineManager::getInstance();
  this_00 = *(TextureOverlayRenderer **)(lVar3 + 0x100);
  pIVar4 = (ITextureObject *)(**(code **)(*(long *)this + 0x18))(this);
  pIVar5 = (ISamplerObject *)(**(code **)(*(long *)this + 0x20))(this);
  TextureOverlayRenderer::enqueueOverlay
            (this_00,pIVar4,pIVar5,0,*(float *)(this + 0x28),*(float *)(this + 0x2c),
             *(float *)(this + 0x20),*(float *)(this + 0x24),*(uint *)(this + 0x60),
             *(uint *)(this + 100),*(uint *)(this + 0x68),*(uint *)(this + 0x6c),
             *(float *)(this + 0x30),*(float *)(this + 0x34),*(float *)(this + 0x38),
             *(float *)(this + 0x3c),*(float *)(this + 0x40),*(float *)(this + 0x44),
             *(float *)(this + 0x48),*(float *)(this + 0x4c),*(float *)(this + 0x54),
             *(float *)(this + 0x58),*(float *)(this + 0x5c),0.0,bVar1,param_1);
  return;
}


