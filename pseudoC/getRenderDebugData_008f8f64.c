// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderDebugData
// Entry Point: 008f8f64
// Size: 192 bytes
// Signature: undefined __thiscall getRenderDebugData(TerrainPatchOccluderManager * this, GeoMipMappingTerrainPatch * param_1, uint param_2)


/* TerrainPatchOccluderManager::getRenderDebugData(GeoMipMappingTerrainPatch const&, unsigned int)
    */

DebugRenderData * __thiscall
TerrainPatchOccluderManager::getRenderDebugData
          (TerrainPatchOccluderManager *this,GeoMipMappingTerrainPatch *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  DebugRenderData *pDVar6;
  DebugRenderData **ppDVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = GeoMipMappingTerrainPatch::getStartXPatch();
  uVar2 = *(uint *)(this + 0x100);
  uVar5 = GeoMipMappingTerrainPatch::getStartZPatch();
  uVar3 = param_2 >> 0x10;
  uVar1 = param_2 & 0xffff;
  lVar9 = *(long *)(this + 0x118);
  uVar8 = (ulong)((uVar4 >> (ulong)(uVar2 & 0x1f)) +
                 *(int *)(this + 0xf8) * (uVar5 >> (ulong)(*(uint *)(this + 0x100) & 0x1f)));
  ppDVar7 = (DebugRenderData **)
            (lVar9 + uVar8 * 0x380 + (ulong)uVar3 * 0x80 + (ulong)uVar1 * 0x20 + 0x10);
  pDVar6 = *ppDVar7;
  if (pDVar6 == (DebugRenderData *)0x0) {
    pDVar6 = (DebugRenderData *)operator_new(0x18);
    *(undefined8 *)(pDVar6 + 8) = 0;
    *ppDVar7 = pDVar6;
    createDebugRenderData
              (*(IndexedTriangleSet **)
                (lVar9 + uVar8 * 0x380 + (ulong)uVar3 * 0x80 + (ulong)uVar1 * 0x20 + 8),uVar3 != 0,
               uVar1,pDVar6);
    pDVar6 = *ppDVar7;
  }
  return pDVar6;
}


