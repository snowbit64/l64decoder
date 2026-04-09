// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderQueueItems
// Entry Point: 008dca34
// Size: 260 bytes
// Signature: undefined __cdecl getRenderQueueItems(RenderQueueItemAllocator * param_1, uint param_2, GeometryRenderInfo * param_3)


/* Precipitation::getRenderQueueItems(RenderQueueItemAllocator&, unsigned int, GeometryRenderInfo
   const&) const */

void Precipitation::getRenderQueueItems
               (RenderQueueItemAllocator *param_1,uint param_2,GeometryRenderInfo *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  RenderQueueItemSortKey *local_58;
  RenderQueueItem *pRStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0xb0) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    uVar3 = RenderQueueItemAllocator::allocate
                      ((RenderQueueItemAllocator *)(ulong)param_2,0,true,*(uint *)(param_1 + 0x38),
                       (UvDensitySet *)&local_48,&pRStack_50,&local_58);
    if ((uVar3 & 1) != 0) {
      *(ulong *)(local_58 + 0x18) = (ulong)*(uint *)(param_1 + 0x28);
      *(undefined4 *)(pRStack_50 + 0x34) = 1;
      *(undefined8 *)(pRStack_50 + 0x38) = *(undefined8 *)(param_1 + 200);
      iVar1 = *(int *)(param_1 + 0xb0);
      *(undefined8 *)(pRStack_50 + 0x68) = 0;
      *(int *)(pRStack_50 + 0x70) = iVar1 << 2;
      *(undefined4 *)(pRStack_50 + 0x74) = 0;
      *(int *)(pRStack_50 + 100) = iVar1 * 6;
      *(undefined8 *)(pRStack_50 + 0x78) = *(undefined8 *)(param_1 + 0xd0);
      uVar4 = *(undefined8 *)(param_1 + 0xd8);
      *(undefined4 *)(pRStack_50 + 0x98) = 0;
      *(undefined8 *)(pRStack_50 + 0xb0) = 0;
      *(undefined8 *)(pRStack_50 + 0xb8) = 0;
      *(undefined2 *)(pRStack_50 + 0xd8) = 1;
      *(undefined8 *)(pRStack_50 + 0x80) = uVar4;
      *(undefined2 *)(pRStack_50 + 0xda) = 4;
      *(undefined4 *)(pRStack_50 + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
      *(undefined4 *)(pRStack_50 + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
      *(undefined4 *)(pRStack_50 + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
      *(undefined4 *)(pRStack_50 + 0xec) = *(undefined4 *)(param_1 + 0xec);
      RenderQueueItemAllocator::postAllocate();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


