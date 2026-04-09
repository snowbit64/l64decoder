// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 0072f46c
// Size: 8 bytes
// Signature: undefined __thiscall updateRendering(VehicleNavigationMapGenerator * this, float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* non-virtual thunk to VehicleNavigationMapGenerator::updateRendering(float, SharedRenderArgs
   const*, RenderStats&) */

void __thiscall
VehicleNavigationMapGenerator::updateRendering
          (VehicleNavigationMapGenerator *this,float param_1,SharedRenderArgs *param_2,
          RenderStats *param_3)

{
  updateRendering(param_1,(SharedRenderArgs *)(this + -0x30),(RenderStats *)param_2);
  return;
}


