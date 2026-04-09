// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestUpdate
// Entry Point: 008f6f44
// Size: 268 bytes
// Signature: undefined __thiscall requestUpdate(TerrainPatchOccluderManager * this, GeoMipMappingTerrain * param_1, uint param_2, uint param_3)


/* TerrainPatchOccluderManager::requestUpdate(GeoMipMappingTerrain*, unsigned int, unsigned int) */

void __thiscall
TerrainPatchOccluderManager::requestUpdate
          (TerrainPatchOccluderManager *this,GeoMipMappingTerrain *param_1,uint param_2,uint param_3
          )

{
  GeoMipMappingTerrain **ppGVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  GeoMipMappingTerrain **ppGVar6;
  uint uVar7;
  GeoMipMappingTerrain *local_70;
  undefined4 local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar7 = 0;
  this[0x188] = (TerrainPatchOccluderManager)0x1;
  uVar3 = param_2 >> (ulong)(*(uint *)(this + 0x100) & 0x1f);
  uVar4 = param_3 >> (ulong)(*(uint *)(this + 0x100) & 0x1f);
  uVar2 = *(uint *)(*(long *)(this + 0x68) + 0x268);
  do {
    ppGVar6 = *(GeoMipMappingTerrain ***)(this + 0x138);
    ppGVar1 = *(GeoMipMappingTerrain ***)(this + 0x140);
    local_68 = 0;
    local_70 = param_1;
    uStack_64 = uVar3;
    local_60 = uVar4;
    uStack_5c = uVar7;
    if (ppGVar6 == ppGVar1) {
LAB_008f6fcc:
      if (ppGVar6 == ppGVar1) goto LAB_008f6f9c;
    }
    else {
      do {
        if ((((*ppGVar6 == param_1) && (*(int *)(ppGVar6 + 1) == 0)) &&
            (uVar3 == *(uint *)((long)ppGVar6 + 0xc))) &&
           ((uVar4 == *(uint *)(ppGVar6 + 2) && (uVar7 == *(uint *)((long)ppGVar6 + 0x14)))))
        goto LAB_008f6fcc;
        ppGVar6 = ppGVar6 + 3;
      } while (ppGVar6 != ppGVar1);
LAB_008f6f9c:
      FUN_008f7060(this + 0x138,&local_70);
    }
    uVar7 = uVar7 + 1;
    if (uVar2 < uVar7) {
      if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


