// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 00a76fc4
// Size: 8 bytes
// Signature: undefined __thiscall updateRendering(TerrainTransformGroup * this, float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* non-virtual thunk to TerrainTransformGroup::updateRendering(float, SharedRenderArgs const*,
   RenderStats&) */

void __thiscall
TerrainTransformGroup::updateRendering
          (TerrainTransformGroup *this,float param_1,SharedRenderArgs *param_2,RenderStats *param_3)

{
  updateRendering(param_1,(SharedRenderArgs *)(this + -0x158),(RenderStats *)param_2);
  return;
}


