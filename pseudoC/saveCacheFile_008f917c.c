// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveCacheFile
// Entry Point: 008f917c
// Size: 268 bytes
// Signature: undefined __thiscall saveCacheFile(TerrainPatchOccluderManager * this, char * param_1)


/* TerrainPatchOccluderManager::saveCacheFile(char const*) */

undefined4 __thiscall
TerrainPatchOccluderManager::saveCacheFile(TerrainPatchOccluderManager *this,char *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  while (((*(long *)(this + 0x138) != *(long *)(this + 0x140) || *(int *)(this + 0x150) != 0 ||
          (*(long *)(this + 0x158) != *(long *)(this + 0x160))) || (*(int *)(this + 0x170) != 0))) {
    ThreadUtil::usleep(1000);
    update();
  }
  plVar3 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar3 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    local_3c = 3;
    iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_3c,4);
    if ((iVar2 == 4) && (uVar4 = writeCacheData(this,(File *)plVar3), (uVar4 & 1) != 0)) {
      uVar5 = 1;
      this[0x188] = (TerrainPatchOccluderManager)0x0;
    }
    else {
      uVar5 = 0;
    }
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


