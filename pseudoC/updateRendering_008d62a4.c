// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 008d62a4
// Size: 8 bytes
// Signature: undefined __thiscall updateRendering(FoliageBendingSystem * this, float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* non-virtual thunk to FoliageBendingSystem::updateRendering(float, SharedRenderArgs const*,
   RenderStats&) */

void __thiscall
FoliageBendingSystem::updateRendering
          (FoliageBendingSystem *this,float param_1,SharedRenderArgs *param_2,RenderStats *param_3)

{
  updateRendering(param_1,(SharedRenderArgs *)(this + -0x20),(RenderStats *)param_2);
  return;
}


