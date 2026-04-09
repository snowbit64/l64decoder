// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderQueueItems
// Entry Point: 008d7e3c
// Size: 256 bytes
// Signature: undefined __cdecl getRenderQueueItems(RenderQueueItemAllocator * param_1, uint param_2, GeometryRenderInfo * param_3)


/* ParticleSystem::getRenderQueueItems(RenderQueueItemAllocator&, unsigned int, GeometryRenderInfo
   const&) const */

void ParticleSystem::getRenderQueueItems
               (RenderQueueItemAllocator *param_1,uint param_2,GeometryRenderInfo *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  RenderQueueItemSortKey *local_58;
  RenderQueueItem *pRStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = 0;
  uStack_40 = 0;
  if (*(int *)(*(long **)(param_1 + 0x1c0) + 4) != 0) {
    lVar6 = **(long **)(param_1 + 0x1c0);
    uVar3 = RenderQueueItemAllocator::allocate
                      ((RenderQueueItemAllocator *)(ulong)param_2,0,false,*(uint *)(param_1 + 0x38),
                       (UvDensitySet *)&local_48,&pRStack_50,&local_58);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x1c0);
      *(undefined8 *)(local_58 + 0x18) = **(undefined8 **)(lVar4 + 0x18);
      *(undefined8 *)(pRStack_50 + 0xb0) = 0;
      *(undefined8 *)(pRStack_50 + 0xb8) = 0;
      *(undefined8 *)(pRStack_50 + 0x78) = *(undefined8 *)(lVar6 + 0x48);
      uVar1 = *(undefined4 *)(lVar6 + 0x20);
      *(undefined4 *)(pRStack_50 + 0x6c) = 0;
      *(undefined4 *)(pRStack_50 + 100) = uVar1;
      uVar1 = *(undefined4 *)(lVar4 + 0x20);
      *(undefined4 *)(pRStack_50 + 0x74) = 0;
      *(undefined4 *)(pRStack_50 + 0x98) = uVar1;
      *(undefined8 *)(pRStack_50 + 0x80) = *(undefined8 *)(param_1 + 0x1b8);
      *(undefined8 *)(pRStack_50 + 0x38) = *(undefined8 *)(lVar6 + 0x38);
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x18);
      *(undefined8 *)(pRStack_50 + 0x30) = 0x200000002;
      *(undefined4 *)(pRStack_50 + 0xd8) = 0x800c0002;
      *(RenderQueueItemAllocator **)(pRStack_50 + 0xe0) = param_1 + 0x90;
      *(undefined8 *)(pRStack_50 + 0x40) = uVar5;
      RenderQueueItemAllocator::postAllocate();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


