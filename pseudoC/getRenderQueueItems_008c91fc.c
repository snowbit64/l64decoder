// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderQueueItems
// Entry Point: 008c91fc
// Size: 356 bytes
// Signature: undefined __cdecl getRenderQueueItems(RenderQueueItemAllocator * param_1, uint param_2, GeometryRenderInfo * param_3)


/* VertexBufferGeometry::getRenderQueueItems(RenderQueueItemAllocator&, unsigned int,
   GeometryRenderInfo const&) const */

void VertexBufferGeometry::getRenderQueueItems
               (RenderQueueItemAllocator *param_1,uint param_2,GeometryRenderInfo *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  RenderQueueItemSortKey *local_88;
  RenderQueueItem *pRStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = 0;
  uStack_70 = 0;
  uVar4 = (uint)((ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88)) >> 3);
  if ((uint)param_3 <= uVar4) {
    uVar4 = (uint)param_3;
  }
  if (uVar4 != 0) {
    uVar7 = 0;
    uVar6 = 0;
    do {
      uVar3 = RenderQueueItemAllocator::allocate
                        ((RenderQueueItemAllocator *)(ulong)param_2,(uint)uVar6,true,
                         *(uint *)(param_1 + 0x38),(UvDensitySet *)&local_78,&pRStack_80,&local_88);
      if ((uVar3 & 1) != 0) {
        *(ulong *)(local_88 + 0x18) = uVar7 | *(uint *)(param_1 + 0x28);
        *(undefined4 *)(pRStack_80 + 0x34) = 1;
        *(undefined8 *)(pRStack_80 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x88) + uVar6 * 8);
        uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x70) + uVar6 * 4);
        *(undefined8 *)(pRStack_80 + 0x68) = 0;
        *(undefined4 *)(pRStack_80 + 0x70) = 0;
        *(undefined4 *)(pRStack_80 + 100) = uVar1;
        uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x58) + uVar6 * 4);
        *(undefined8 *)(pRStack_80 + 0x78) = 0;
        *(undefined4 *)(pRStack_80 + 0x74) = uVar1;
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + uVar6 * 8);
        *(undefined4 *)(pRStack_80 + 0x98) = 0;
        *(undefined8 *)(pRStack_80 + 0xb0) = 0;
        *(undefined8 *)(pRStack_80 + 0xb8) = 0;
        *(undefined2 *)(pRStack_80 + 0xd8) = 1;
        *(undefined2 *)(pRStack_80 + 0xda) = 4;
        *(undefined8 *)(pRStack_80 + 0x80) = uVar5;
        *(undefined4 *)(pRStack_80 + 0xe0) = *(undefined4 *)(param_1 + 0xb8);
        *(undefined4 *)(pRStack_80 + 0xe4) = *(undefined4 *)(param_1 + 0xbc);
        *(undefined4 *)(pRStack_80 + 0xe8) = *(undefined4 *)(param_1 + 0xc0);
        *(undefined4 *)(pRStack_80 + 0xec) = *(undefined4 *)(param_1 + 0xc4);
        RenderQueueItemAllocator::postAllocate();
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 0x100000000;
    } while (uVar4 != uVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


