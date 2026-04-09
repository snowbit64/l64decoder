// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapVisualizationOverlay
// Entry Point: 008702d8
// Size: 112 bytes
// Signature: undefined __thiscall ~DensityMapVisualizationOverlay(DensityMapVisualizationOverlay * this)


/* DensityMapVisualizationOverlay::~DensityMapVisualizationOverlay() */

void __thiscall
DensityMapVisualizationOverlay::~DensityMapVisualizationOverlay
          (DensityMapVisualizationOverlay *this)

{
  *(undefined ***)this = &PTR__DensityMapVisualizationOverlay_00fdc118;
  *(undefined ***)(this + 0x78) = &PTR__DensityMapVisualizationOverlay_00fdc160;
                    /* try { // try from 00870300 to 00870317 has its CatchHandler @ 00870348 */
  reset();
  Overlay::notifyDeletedTexture((Overlay *)this,*(ITextureObject **)(this + 0x293d8));
  if (*(long **)(this + 0x293d8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x293d8) + 8))();
  }
  if (*(void **)(this + 0x293c8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x293c8));
  }
  Overlay::~Overlay((Overlay *)this);
  return;
}


