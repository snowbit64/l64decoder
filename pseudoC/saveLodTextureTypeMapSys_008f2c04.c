// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveLodTextureTypeMapSys
// Entry Point: 008f2c04
// Size: 220 bytes
// Signature: undefined __cdecl saveLodTextureTypeMapSys(char * param_1, TerrainPixel * param_2, uint param_3)


/* TerrainLodTexture::saveLodTextureTypeMapSys(char const*, TerrainLodTexture::TerrainPixel*,
   unsigned int) */

void TerrainLodTexture::saveLodTextureTypeMapSys(char *param_1,TerrainPixel *param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  undefined8 local_48;
  uint local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == (TerrainPixel *)0x0) {
    bVar2 = false;
  }
  else {
    plVar3 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                      false);
    if (plVar3 != (long *)0x0) {
      local_48 = 0x110dcac66;
      local_40 = param_3;
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_48,0xc);
      (**(code **)(*plVar3 + 0x30))(plVar3,param_2,param_3 * param_3 * 2);
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    bVar2 = plVar3 != (long *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


