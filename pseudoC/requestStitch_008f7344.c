// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestStitch
// Entry Point: 008f7344
// Size: 184 bytes
// Signature: undefined __thiscall requestStitch(TerrainPatchOccluderManager * this, GeoMipMappingTerrain * param_1, OccluderType param_2, uint param_3, uint param_4, uint param_5)


/* TerrainPatchOccluderManager::requestStitch(GeoMipMappingTerrain*,
   TerrainPatchOccluderManager::OccluderType, unsigned int, unsigned int, unsigned int) */

void __thiscall
TerrainPatchOccluderManager::requestStitch
          (TerrainPatchOccluderManager *this,GeoMipMappingTerrain *param_1,OccluderType param_2,
          uint param_3,uint param_4,uint param_5)

{
  GeoMipMappingTerrain **ppGVar1;
  long lVar2;
  GeoMipMappingTerrain **ppGVar3;
  GeoMipMappingTerrain *local_40;
  OccluderType local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  ppGVar3 = *(GeoMipMappingTerrain ***)(this + 0x158);
  ppGVar1 = *(GeoMipMappingTerrain ***)(this + 0x160);
  local_40 = param_1;
  local_38 = param_2;
  uStack_34 = param_3;
  local_30 = param_4;
  uStack_2c = param_5;
  if (ppGVar3 == ppGVar1) {
LAB_008f7378:
    if (ppGVar3 != ppGVar1) goto LAB_008f738c;
  }
  else {
    do {
      if ((((*ppGVar3 == param_1) && (*(OccluderType *)(ppGVar3 + 1) == param_2)) &&
          (*(uint *)((long)ppGVar3 + 0xc) == param_3)) &&
         ((*(uint *)(ppGVar3 + 2) == param_4 && (*(uint *)((long)ppGVar3 + 0x14) == param_5))))
      goto LAB_008f7378;
      ppGVar3 = ppGVar3 + 3;
    } while (ppGVar3 != ppGVar1);
  }
  FUN_008f7060(this + 0x158,&local_40);
LAB_008f738c:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


