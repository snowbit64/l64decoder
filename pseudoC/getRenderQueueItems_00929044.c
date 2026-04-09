// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderQueueItems
// Entry Point: 00929044
// Size: 216 bytes
// Signature: undefined __thiscall getRenderQueueItems(DestructionGeometryShared * this, RenderQueueItemAllocator * param_1, uint param_2, GeometryRenderInfo * param_3, ulonglong param_4)


/* DestructionGeometryShared::getRenderQueueItems(RenderQueueItemAllocator&, unsigned int,
   GeometryRenderInfo const&, unsigned long long) const */

void __thiscall
DestructionGeometryShared::getRenderQueueItems
          (DestructionGeometryShared *this,RenderQueueItemAllocator *param_1,uint param_2,
          GeometryRenderInfo *param_3,ulonglong param_4)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  RenderQueueItemSortKey *local_68;
  RenderQueueItem *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  uVar3 = RenderQueueItemAllocator::allocate
                    (param_1,0,true,*(uint *)(this + 0x20),(UvDensitySet *)&local_58,&local_60,
                     &local_68);
  if ((uVar3 & 1) != 0) {
    *(ulonglong *)(local_68 + 0x18) = param_4 | 0x300000000;
    *(undefined4 *)(local_60 + 0x34) = 1;
    *(undefined8 *)(local_60 + 0x38) = *(undefined8 *)(this + 0x28);
    uVar2 = DestructionChunk::getNumIndices();
    *(undefined4 *)(local_60 + 100) = uVar2;
    *(undefined8 *)(local_60 + 0x68) = 0;
    *(undefined8 *)(local_60 + 0x70) = 0;
    *(undefined8 *)(local_60 + 0x78) = *(undefined8 *)(this + 0x30);
    uVar4 = *(undefined8 *)(this + 0x48);
    *(undefined4 *)(local_60 + 0x98) = 0;
    *(undefined8 *)(local_60 + 0xb0) = 0;
    *(undefined8 *)(local_60 + 0xb8) = 0;
    *(undefined8 *)(local_60 + 0x80) = uVar4;
    RenderQueueItemAllocator::postAllocate();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


