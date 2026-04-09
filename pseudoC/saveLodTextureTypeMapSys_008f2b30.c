// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveLodTextureTypeMapSys
// Entry Point: 008f2b30
// Size: 212 bytes
// Signature: undefined __thiscall saveLodTextureTypeMapSys(TerrainLodTexture * this, char * param_1)


/* TerrainLodTexture::saveLodTextureTypeMapSys(char const*) */

void __thiscall TerrainLodTexture::saveLodTextureTypeMapSys(TerrainLodTexture *this,char *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_48;
  int local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(this + 0x18);
  if (lVar5 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = *(int *)(this + 8);
    plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                      false);
    if (plVar4 != (long *)0x0) {
      local_48 = 0x110dcac66;
      local_40 = iVar1;
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_48,0xc);
      (**(code **)(*plVar4 + 0x30))(plVar4,lVar5,iVar1 * iVar1 * 2);
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    bVar3 = plVar4 != (long *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


