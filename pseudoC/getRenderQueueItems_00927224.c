// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderQueueItems
// Entry Point: 00927224
// Size: 440 bytes
// Signature: undefined __thiscall getRenderQueueItems(DestructionGeometry * this, RenderQueueItemAllocator * param_1, uint param_2, GeometryRenderInfo * param_3)


/* DestructionGeometry::getRenderQueueItems(RenderQueueItemAllocator&, unsigned int,
   GeometryRenderInfo const&) const */

void __thiscall
DestructionGeometry::getRenderQueueItems
          (DestructionGeometry *this,RenderQueueItemAllocator *param_1,uint param_2,
          GeometryRenderInfo *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  RenderQueueItemSortKey *local_58;
  RenderQueueItem *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = 0;
  uStack_40 = 0;
  if (this[0x78] == (DestructionGeometry)0x0) {
    (**(code **)(**(long **)(this + 0x70) + 0x20))
              (*(long **)(this + 0x70),param_1,param_2,param_3,*(undefined4 *)(this + 0x28));
  }
  else {
    if ((*(int *)(this + 0xcc) != 0) &&
       (uVar3 = RenderQueueItemAllocator::allocate
                          (param_1,0,true,*(uint *)(this + 0x38),(UvDensitySet *)&local_48,&local_50
                           ,&local_58), (uVar3 & 1) != 0)) {
      *(ulong *)(local_58 + 0x18) = (ulong)*(uint *)(this + 0x28) | 0x100000000;
      *(undefined4 *)(local_50 + 0x34) = 1;
      *(undefined8 *)(local_50 + 0x38) = *(undefined8 *)(this + 0xb0);
      uVar1 = *(undefined4 *)(this + 0xcc);
      *(undefined8 *)(local_50 + 0x68) = 0;
      *(undefined8 *)(local_50 + 0x70) = 0;
      *(undefined4 *)(local_50 + 100) = uVar1;
      *(undefined8 *)(local_50 + 0x78) = *(undefined8 *)(this + 0xb8);
      uVar4 = DestructionGeometryShared::getVertexDeclaration();
      *(undefined8 *)(local_50 + 0x80) = uVar4;
      *(undefined4 *)(local_50 + 0x98) = 0;
      *(undefined8 *)(local_50 + 0xb0) = 0;
      *(undefined8 *)(local_50 + 0xb8) = 0;
      *(undefined4 *)(local_50 + 0xd8) = 0x40001;
      DestructionGeometryShared::getPositionOffsetAndScale
                (*(DestructionGeometryShared **)(this + 0x70),(float *)(local_50 + 0xe0),
                 (float *)(local_50 + 0xec));
      RenderQueueItemAllocator::postAllocate();
    }
    if ((*(int *)(this + 0x90) != 0) &&
       (uVar3 = RenderQueueItemAllocator::allocate
                          (param_1,0,true,*(uint *)(this + 0x38),(UvDensitySet *)&local_48,&local_50
                           ,&local_58), (uVar3 & 1) != 0)) {
      *(ulong *)(local_58 + 0x18) = (ulong)*(uint *)(this + 0x28) | 0x200000000;
      *(undefined4 *)(local_50 + 0x34) = 1;
      uVar4 = DestructionGeometryShared::getStartLevelVertexBuffer();
      *(undefined8 *)(local_50 + 0x38) = uVar4;
      uVar1 = *(undefined4 *)(this + 0x90);
      *(undefined8 *)(local_50 + 0x68) = 0;
      *(undefined8 *)(local_50 + 0x70) = 0;
      *(undefined4 *)(local_50 + 100) = uVar1;
      *(undefined8 *)(local_50 + 0x78) = *(undefined8 *)(this + 0x88);
      uVar4 = DestructionGeometryShared::getVertexDeclaration();
      *(undefined8 *)(local_50 + 0x80) = uVar4;
      *(undefined4 *)(local_50 + 0x98) = 0;
      *(undefined8 *)(local_50 + 0xb0) = 0;
      *(undefined8 *)(local_50 + 0xb8) = 0;
      *(undefined4 *)(local_50 + 0xd8) = 0x40001;
      DestructionGeometryShared::getPositionOffsetAndScale
                (*(DestructionGeometryShared **)(this + 0x70),(float *)(local_50 + 0xe0),
                 (float *)(local_50 + 0xec));
      RenderQueueItemAllocator::postAllocate();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


