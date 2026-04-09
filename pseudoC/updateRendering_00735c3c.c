// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 00735c3c
// Size: 8 bytes
// Signature: undefined __thiscall updateRendering(VehicleNavigationAgentEntity * this, float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* non-virtual thunk to VehicleNavigationAgentEntity::updateRendering(float, SharedRenderArgs
   const*, RenderStats&) */

void __thiscall
VehicleNavigationAgentEntity::updateRendering
          (VehicleNavigationAgentEntity *this,float param_1,SharedRenderArgs *param_2,
          RenderStats *param_3)

{
  updateRendering(param_1,(SharedRenderArgs *)(this + -0x20),(RenderStats *)param_2);
  return;
}


