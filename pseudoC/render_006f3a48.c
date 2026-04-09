// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006f3a48
// Size: 196 bytes
// Signature: undefined __thiscall render(Overlay * this, SharedRenderArgs * param_1)


/* Overlay::render(SharedRenderArgs const&) */

void __thiscall Overlay::render(Overlay *this,SharedRenderArgs *param_1)

{
  long lVar1;
  ITextureObject *pIVar2;
  ISamplerObject *pIVar3;
  TextureOverlayRenderer *this_00;
  
  lVar1 = EngineManager::getInstance();
  this_00 = *(TextureOverlayRenderer **)(lVar1 + 0x100);
  pIVar2 = (ITextureObject *)(**(code **)(*(long *)this + 0x18))(this);
  pIVar3 = (ISamplerObject *)(**(code **)(*(long *)this + 0x20))(this);
  TextureOverlayRenderer::enqueueOverlay
            (this_00,pIVar2,pIVar3,*(uint *)(this + 0x50),*(float *)(this + 0x28),
             *(float *)(this + 0x2c),*(float *)(this + 0x20),*(float *)(this + 0x24),
             *(uint *)(this + 0x60),*(uint *)(this + 100),*(uint *)(this + 0x68),
             *(uint *)(this + 0x6c),*(float *)(this + 0x30),*(float *)(this + 0x34),
             *(float *)(this + 0x38),*(float *)(this + 0x3c),*(float *)(this + 0x40),
             *(float *)(this + 0x44),*(float *)(this + 0x48),*(float *)(this + 0x4c),
             *(float *)(this + 0x54),*(float *)(this + 0x58),*(float *)(this + 0x5c),
             *(float *)(this + 0x70),false,param_1);
  return;
}


