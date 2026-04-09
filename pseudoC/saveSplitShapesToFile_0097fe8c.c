// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveSplitShapesToFile
// Entry Point: 0097fe8c
// Size: 248 bytes
// Signature: undefined __thiscall saveSplitShapesToFile(MeshSplitManager * this, char * param_1)


/* MeshSplitManager::saveSplitShapesToFile(char const*) */

bool __thiscall MeshSplitManager::saveSplitShapesToFile(MeshSplitManager *this,char *param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint local_44;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar4 == (long *)0x0) {
    bVar2 = false;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x10))();
    if ((uVar5 & 1) == 0) {
      bVar2 = false;
    }
    else {
      saveSplitShapesToMem(this,&local_40,&local_44);
      uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,local_40,local_44);
      bVar2 = uVar3 == local_44;
      if (local_40 != (char *)0x0) {
        operator_delete__(local_40);
      }
    }
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


