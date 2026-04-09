// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 00a6a844
// Size: 8 bytes
// Signature: undefined __thiscall updateRendering(FoliageTransformGroup * this, float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* non-virtual thunk to FoliageTransformGroup::updateRendering(float, SharedRenderArgs const*,
   RenderStats&) */

void __thiscall
FoliageTransformGroup::updateRendering
          (FoliageTransformGroup *this,float param_1,SharedRenderArgs *param_2,RenderStats *param_3)

{
  LocalGeometryTransformGroup::updateRendering
            ((LocalGeometryTransformGroup *)(this + -0x158),param_1,param_2,param_3);
  return;
}


