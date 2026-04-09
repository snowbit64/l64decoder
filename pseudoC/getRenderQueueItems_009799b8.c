// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderQueueItems
// Entry Point: 009799b8
// Size: 268 bytes
// Signature: undefined __cdecl getRenderQueueItems(RenderQueueItemAllocator * param_1, uint param_2, GeometryRenderInfo * param_3)


/* MeshSplitAttachmentGeometry::getRenderQueueItems(RenderQueueItemAllocator&, unsigned int,
   GeometryRenderInfo const&) const */

void MeshSplitAttachmentGeometry::getRenderQueueItems
               (RenderQueueItemAllocator *param_1,uint param_2,GeometryRenderInfo *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  RenderQueueItemSortKey *local_48;
  RenderQueueItem *pRStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = RenderQueueItemAllocator::allocate
                    ((RenderQueueItemAllocator *)(ulong)param_2,0,true,*(uint *)(param_1 + 0x38),
                     (UvDensitySet *)(param_1 + 0x80),&pRStack_40,&local_48);
  if ((uVar2 & 1) != 0) {
    *(ulong *)(local_48 + 0x18) = (ulong)*(uint *)(param_1 + 0x28);
    *(undefined4 *)(pRStack_40 + 0x34) = 1;
    *(undefined8 *)(pRStack_40 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x30);
    *(uint *)(pRStack_40 + 100) = (uint)*(ushort *)(param_1 + 0x78);
    *(undefined4 *)(pRStack_40 + 0x68) = 0;
    *(uint *)(pRStack_40 + 0x6c) = (uint)*(ushort *)(param_1 + 0x7a);
    *(uint *)(pRStack_40 + 0x70) = (uint)*(ushort *)(param_1 + 0x7c);
    *(undefined4 *)(pRStack_40 + 0x74) = 0;
    *(undefined8 *)(pRStack_40 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x38);
    *(undefined4 *)(pRStack_40 + 0x98) = 0;
    *(undefined2 *)(pRStack_40 + 0xd8) = 1;
    *(undefined8 *)(pRStack_40 + 0xb0) = 0;
    *(undefined8 *)(pRStack_40 + 0xb8) = 0;
    *(undefined8 *)(pRStack_40 + 0x80) = uVar3;
    *(undefined2 *)(pRStack_40 + 0xda) = 4;
    *(undefined4 *)(pRStack_40 + 0xe0) = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x44);
    *(undefined4 *)(pRStack_40 + 0xe4) = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x48);
    *(undefined4 *)(pRStack_40 + 0xe8) = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x4c);
    *(undefined4 *)(pRStack_40 + 0xec) = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x50);
    RenderQueueItemAllocator::postAllocate();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


