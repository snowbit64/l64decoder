// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderDrawDataPoints
// Entry Point: 009fce5c
// Size: 84 bytes
// Signature: undefined __cdecl renderDrawDataPoints(DrawData * param_1, ICommandBuffer * param_2, RenderArgs * param_3)


/* DeferredDebugRenderer::renderDrawDataPoints(DeferredDebugRenderer::DrawData const&,
   ICommandBuffer*, RenderArgs const&) const */

void DeferredDebugRenderer::renderDrawDataPoints
               (DrawData *param_1,ICommandBuffer *param_2,RenderArgs *param_3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)param_2;
  uVar2 = (uint)((ulong)(*(long *)(param_2 + 8) - lVar1) >> 2);
  if (uVar2 < 0x2a) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009fceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_3 + 0x108))(param_3,lVar1,0x1c,lVar1 + 0xc,0x1c,0,(uVar2 / 0x2a) * 6);
  return;
}


