// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderQueueItems
// Entry Point: 00a6ac9c
// Size: 484 bytes
// Signature: undefined __cdecl getRenderQueueItems(RenderQueueItemAllocator * param_1, uint param_2, GeometryRenderInfo * param_3)


/* FoliageCellGeometry::getRenderQueueItems(RenderQueueItemAllocator&, unsigned int,
   GeometryRenderInfo const&) const */

void FoliageCellGeometry::getRenderQueueItems
               (RenderQueueItemAllocator *param_1,uint param_2,GeometryRenderInfo *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  RenderQueueItemSortKey *local_88;
  RenderQueueItem *pRStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_1 + 0xa8);
  local_78 = 0;
  uStack_70 = 0;
  if (uVar1 != 0) {
    uVar11 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0xa0) + uVar11 * 4);
      uVar10 = (ulong)uVar3;
      lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0x50);
      if (((*(float *)(lVar7 + uVar10 * 0x98 + 0x38) <= *(float *)(*(long *)(param_1 + 0x60) + 0x10)
           ) && (*(float *)(*(long *)(param_1 + 0x60) + 0xc) <=
                 *(float *)(lVar7 + uVar10 * 0x98 + 0x3c))) &&
         ((*(int *)((RenderQueueItemAllocator *)(ulong)param_2 + 0x28) != 0 ||
          (((byte)param_1[0xac] | *(byte *)(lVar7 + uVar10 * 0x98 + 0x40)) == 0)))) {
        lVar7 = lVar7 + uVar10 * 0x98;
        uVar10 = *(long *)(lVar7 + 0x80) - *(long *)(lVar7 + 0x78);
        if ((int)(uVar10 >> 2) != 0) {
          uVar6 = *(uint *)(lVar7 + 0x90);
          uVar10 = uVar10 >> 2 & 0xffffffff;
          do {
            lVar7 = *(long *)(param_1 + 0x70);
            piVar12 = (int *)(lVar7 + (ulong)uVar6 * 0x18 + 8);
            if ((*piVar12 != 0) &&
               (uVar5 = RenderQueueItemAllocator::allocate
                                  ((RenderQueueItemAllocator *)(ulong)param_2,uVar3,true,0,
                                   (UvDensitySet *)&local_78,&pRStack_80,&local_88),
               (uVar5 & 1) != 0)) {
              puVar8 = (undefined4 *)(lVar7 + (ulong)uVar6 * 0x18);
              lVar7 = *(long *)(puVar8 + 4);
              *(long *)(local_88 + 0x18) = lVar7;
              *(undefined8 *)(pRStack_80 + 0x30) = 1;
              uVar9 = *(undefined8 *)(lVar7 + 0x48);
              *(undefined4 *)(pRStack_80 + 0x74) = 0;
              *(undefined8 *)(pRStack_80 + 0x78) = uVar9;
              *(undefined8 *)(pRStack_80 + 0xb8) = *(undefined8 *)(param_1 + 0x68);
              uVar9 = *(undefined8 *)(lVar7 + 0x40);
              *(undefined8 *)(pRStack_80 + 0x80) = 0;
              *(undefined4 *)(pRStack_80 + 0x60) = 0;
              *(undefined8 *)(pRStack_80 + 0xb0) = uVar9;
              *(undefined4 *)(pRStack_80 + 100) = *(undefined4 *)(lVar7 + 0x20);
              *(undefined4 *)(pRStack_80 + 0xc4) = *puVar8;
              *(undefined4 *)(pRStack_80 + 0xc0) = *(undefined4 *)(lVar7 + 0xc);
              *(int *)(pRStack_80 + 200) = *piVar12;
              uVar2 = *(undefined4 *)(lVar7 + 0x24);
              *(undefined4 *)(pRStack_80 + 0x98) = 0;
              *(undefined8 *)(pRStack_80 + 0x68) = 0;
              *(undefined4 *)(pRStack_80 + 0x70) = 0;
              *(undefined4 *)(pRStack_80 + 0xcc) = uVar2;
              RenderQueueItemAllocator::postAllocate();
            }
            uVar6 = uVar6 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar1);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


