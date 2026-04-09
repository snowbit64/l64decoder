// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRequestDesc
// Entry Point: 008f7050
// Size: 16 bytes
// Signature: undefined __cdecl createRequestDesc(GeoMipMappingTerrain * param_1, OccluderType param_2, uint param_3, uint param_4, uint param_5)


/* TerrainPatchOccluderManager::createRequestDesc(GeoMipMappingTerrain*,
   TerrainPatchOccluderManager::OccluderType, unsigned int, unsigned int, unsigned int) */

void TerrainPatchOccluderManager::createRequestDesc
               (GeoMipMappingTerrain *param_1,OccluderType param_2,uint param_3,uint param_4,
               uint param_5)

{
  undefined4 in_w5;
  ulong *in_x8;
  
  *(uint *)(in_x8 + 2) = param_5;
  *(undefined4 *)((long)in_x8 + 0x14) = in_w5;
  *(uint *)(in_x8 + 1) = param_3;
  *(uint *)((long)in_x8 + 0xc) = param_4;
  *in_x8 = (ulong)param_2;
  return;
}


