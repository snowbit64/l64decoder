// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RenderOverlay
// Entry Point: 006f8298
// Size: 340 bytes
// Signature: undefined __thiscall ~RenderOverlay(RenderOverlay * this)


/* RenderOverlay::~RenderOverlay() */

void __thiscall RenderOverlay::~RenderOverlay(RenderOverlay *this)

{
  RenderOverlay **__dest;
  size_t __n;
  long lVar1;
  long lVar2;
  AtmosphereRenderController *this_00;
  ScreenSpaceProcessor *this_01;
  long lVar3;
  ulong uVar4;
  
  *(undefined ***)this = &PTR__RenderOverlay_00fd9850;
  *(undefined ***)(this + 0x78) = &PTR__RenderOverlay_00fd9898;
                    /* try { // try from 006f82d0 to 006f82d3 has its CatchHandler @ 006f83ec */
  Overlay::notifyDeletedTexture((Overlay *)this,*(ITextureObject **)(this + 0x88));
  if (this[0xeb] != (RenderOverlay)0x0) {
    lVar3 = *(long *)(this + 0xa8);
    this[0xeb] = (RenderOverlay)0x0;
    lVar2 = *(long *)(lVar3 + 0x500);
    lVar1 = *(long *)(lVar3 + 0x4f8);
    if (lVar2 != lVar1) {
      uVar4 = 0;
      do {
        __dest = (RenderOverlay **)(lVar1 + uVar4 * 8);
        if (*__dest == this) {
          __n = lVar2 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
            lVar1 = *(long *)(lVar3 + 0x4f8);
          }
          lVar2 = (long)__dest + __n;
          *(long *)(lVar3 + 0x500) = lVar2;
        }
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (uVar4 < (ulong)(lVar2 - lVar1 >> 3));
    }
  }
  if (*(long **)(this + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x90) + 8))();
  }
  if (this[0xe8] == (RenderOverlay)0x0) {
    if (*(long **)(this + 0x88) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x88) + 8))();
    }
    if (*(long **)(this + 0x98) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x98) + 8))();
    }
  }
  this_00 = *(AtmosphereRenderController **)(this + 0xe0);
  if (this_00 != (AtmosphereRenderController *)0x0) {
    AtmosphereRenderController::~AtmosphereRenderController(this_00);
    operator_delete(this_00);
  }
  this_01 = *(ScreenSpaceProcessor **)(this + 0xd8);
  if (this_01 != (ScreenSpaceProcessor *)0x0) {
    ScreenSpaceProcessor::~ScreenSpaceProcessor(this_01);
    operator_delete(this_01);
  }
  if (*(ScenegraphNode **)(this + 0xa0) != (ScenegraphNode *)0x0) {
                    /* try { // try from 006f83c0 to 006f83d3 has its CatchHandler @ 006f83ec */
    ScenegraphNode::removeWorldTransformationDirtyListener
              (*(ScenegraphNode **)(this + 0xa0),(WorldTransformationDirtyListener *)(this + 0x78));
  }
  EngineManager::getInstance();
  Renderer::decrementRenderOverlayCount();
  Overlay::~Overlay((Overlay *)this);
  return;
}


