// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderQueueItems
// Entry Point: 008e1078
// Size: 412 bytes
// Signature: undefined __cdecl getRenderQueueItems(RenderQueueItemAllocator * param_1, uint param_2, GeometryRenderInfo * param_3)


/* IndexedTriangleSetGeometry::getRenderQueueItems(RenderQueueItemAllocator&, unsigned int,
   GeometryRenderInfo const&) const */

void IndexedTriangleSetGeometry::getRenderQueueItems
               (RenderQueueItemAllocator *param_1,uint param_2,GeometryRenderInfo *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined (*pauVar8) [16];
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  RenderQueueItemSortKey *local_78;
  RenderQueueItem *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = IndexedTriangleSet::getNumSubsets();
  if ((uint)param_3 <= uVar4) {
    uVar4 = (uint)param_3;
  }
  if (uVar4 != 0) {
    uVar11 = 0;
    do {
      uVar3 = (uint)uVar11;
      uVar1 = *(uint *)(param_1 + 0x38);
      lVar6 = IndexedTriangleSet::getSubset(*(IndexedTriangleSet **)(param_1 + 0x48),uVar3);
      uVar7 = RenderQueueItemAllocator::allocate
                        ((RenderQueueItemAllocator *)(ulong)param_2,uVar3,true,uVar1,
                         (UvDensitySet *)(lVar6 + 0x10),&local_70,&local_78);
      if ((uVar7 & 1) != 0) {
        *(ulong *)(local_78 + 0x18) = (ulong)*(uint *)(param_1 + 0x28) | uVar11 << 0x20;
        pauVar8 = (undefined (*) [16])
                  IndexedTriangleSet::getSubset(*(IndexedTriangleSet **)(param_1 + 0x48),uVar3);
        plVar9 = *(long **)(param_1 + 0x128);
        *(long **)(local_70 + 0x80) = plVar9;
        iVar5 = (**(code **)(*plVar9 + 0x18))();
        *(int *)(local_70 + 0x34) = iVar5 + -1;
        if (iVar5 + -1 != 0) {
          uVar7 = 0;
          do {
            lVar6 = uVar7 * 8;
            uVar7 = uVar7 + 1;
            *(undefined8 *)(local_70 + lVar6 + 0x38) = *(undefined8 *)(param_1 + lVar6 + 0xa8);
          } while (uVar7 < *(uint *)(local_70 + 0x34));
        }
        auVar12 = *pauVar8;
        *(undefined4 *)(local_70 + 0x74) = 0;
        auVar13 = NEON_rev64(auVar12,4);
        auVar12 = NEON_ext(auVar13,auVar12,8,1);
        *(long *)(local_70 + 0x6c) = auVar12._8_8_;
        *(long *)(local_70 + 100) = auVar12._0_8_;
        uVar10 = *(undefined8 *)(param_1 + 0x150);
        *(undefined4 *)(local_70 + 0x98) = 0;
        *(undefined8 *)(local_70 + 0xb0) = 0;
        *(undefined8 *)(local_70 + 0xb8) = 0;
        *(undefined2 *)(local_70 + 0xd8) = 1;
        *(undefined8 *)(local_70 + 0x78) = uVar10;
        *(undefined2 *)(local_70 + 0xda) = 4;
        *(undefined4 *)(local_70 + 0xe0) = *(undefined4 *)(param_1 + 0x158);
        *(undefined4 *)(local_70 + 0xe4) = *(undefined4 *)(param_1 + 0x15c);
        *(undefined4 *)(local_70 + 0xe8) = *(undefined4 *)(param_1 + 0x160);
        *(undefined4 *)(local_70 + 0xec) = *(undefined4 *)(param_1 + 0x164);
        RenderQueueItemAllocator::postAllocate();
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


