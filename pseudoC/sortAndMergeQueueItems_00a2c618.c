// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortAndMergeQueueItems
// Entry Point: 00a2c618
// Size: 24 bytes
// Signature: undefined __thiscall sortAndMergeQueueItems(RenderQueueItemAllocator * this, ICommandBuffer * param_1, IVertexBuffer * param_2, IStructBuffer * param_3, GeometryRenderInfo * param_4, uint param_5)


/* RenderQueueItemAllocator::sortAndMergeQueueItems(ICommandBuffer*, IVertexBuffer*, IStructBuffer*,
   GeometryRenderInfo const&, unsigned int) */

void __thiscall
RenderQueueItemAllocator::sortAndMergeQueueItems
          (RenderQueueItemAllocator *this,ICommandBuffer *param_1,IVertexBuffer *param_2,
          IStructBuffer *param_3,GeometryRenderInfo *param_4,uint param_5)

{
  if (**(long **)(this + 0x60) != (*(long **)(this + 0x60))[1]) {
    sortAndMergeDefaultPassQueueItems(this,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}


