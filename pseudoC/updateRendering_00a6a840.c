// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 00a6a840
// Size: 4 bytes
// Signature: undefined __cdecl updateRendering(float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* FoliageTransformGroup::updateRendering(float, SharedRenderArgs const*, RenderStats&) */

void FoliageTransformGroup::updateRendering
               (float param_1,SharedRenderArgs *param_2,RenderStats *param_3)

{
  RenderStats *in_x2;
  
  LocalGeometryTransformGroup::updateRendering
            ((LocalGeometryTransformGroup *)param_2,param_1,(SharedRenderArgs *)param_3,in_x2);
  return;
}


