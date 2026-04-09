// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderQueueItems
// Entry Point: 008f193c
// Size: 288 bytes
// Signature: undefined __cdecl getRenderQueueItems(RenderQueueItemAllocator * param_1, uint param_2, GeometryRenderInfo * param_3)


/* GeoMipMappingTerrainPatch::getRenderQueueItems(RenderQueueItemAllocator&, unsigned int,
   GeometryRenderInfo const&) const */

void GeoMipMappingTerrainPatch::getRenderQueueItems
               (RenderQueueItemAllocator *param_1,uint param_2,GeometryRenderInfo *param_3)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  RenderQueueItemSortKey *local_68;
  RenderQueueItem *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined4 *)
           GeoMipMappingTerrain::getIndexData
                     (*(GeoMipMappingTerrain **)(param_1 + 0x70),*(uint *)(param_1 + 0x94));
  local_58 = 0;
  uStack_50 = 0;
  uVar3 = RenderQueueItemAllocator::allocate
                    ((RenderQueueItemAllocator *)(ulong)param_2,0,true,*(uint *)(param_1 + 0x38),
                     (UvDensitySet *)&local_58,&local_60,&local_68);
  if ((uVar3 & 1) != 0) {
    *(ulong *)(local_68 + 0x18) = (ulong)*(uint *)(param_1 + 0x28);
    *(undefined4 *)(local_60 + 0x34) = 1;
    uVar4 = GeoMipMappingTerrain::getVertexBuffer();
    *(undefined8 *)(local_60 + 0x38) = uVar4;
    uVar5 = *puVar2;
    *(undefined8 *)(local_60 + 0x68) = 0;
    *(undefined8 *)(local_60 + 0x70) = 0;
    *(undefined4 *)(local_60 + 100) = uVar5;
    *(undefined8 *)(local_60 + 0x78) = *(undefined8 *)(puVar2 + 2);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 600);
    *(undefined2 *)(local_60 + 0xd8) = 8;
    *(undefined4 *)(local_60 + 0x98) = 0;
    *(undefined8 *)(local_60 + 0xb0) = 0;
    *(undefined8 *)(local_60 + 0xb8) = 0;
    *(undefined8 *)(local_60 + 0x80) = uVar4;
    *(undefined2 *)(local_60 + 0xda) = 4;
    uVar5 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(local_60 + 0xe0) = uVar5;
    uVar5 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x84));
    *(undefined4 *)(local_60 + 0xe4) = uVar5;
    *(undefined4 *)(local_60 + 0xe8) = *(undefined4 *)(param_1 + 0x98);
    uVar5 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(local_60 + 0xec) = uVar5;
    RenderQueueItemAllocator::postAllocate();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


