// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyFile
// Entry Point: 00b32fb8
// Size: 620 bytes
// Signature: undefined __thiscall copyFile(FileManager * this, char * param_1, char * param_2, bool param_3)


/* FileManager::copyFile(char const*, char const*, bool) */

bool __thiscall FileManager::copyFile(FileManager *this,char *param_1,char *param_2,bool param_3)

{
  long **pplVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  long **pplVar11;
  undefined auStack_2068 [8192];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar7 = PathUtil::isAbsolutePath(param_2);
  if ((uVar7 & 1) != 0) {
    if ((param_2 != (char *)0x0) && (!param_3)) {
      Mutex::enterCriticalSection();
      uVar4 = PathUtil::isAbsolutePath(param_2);
      pplVar1 = *(long ***)(this + 8);
      if (*(long ***)this != pplVar1) {
        pplVar11 = *(long ***)this;
        do {
          pplVar10 = pplVar11 + 1;
          uVar7 = (**(code **)(**pplVar11 + 0x28))(*pplVar11,param_2,uVar4 & 1);
          if ((uVar7 & 1) != 0) goto LAB_00b33160;
          pplVar11 = pplVar10;
        } while (pplVar10 != pplVar1);
      }
      Mutex::leaveCriticalSection();
    }
    addHistoryEntry(this,param_1,0);
    Mutex::enterCriticalSection();
    uVar4 = PathUtil::isAbsolutePath(param_1);
    pplVar1 = *(long ***)(this + 8);
    if (*(long ***)this != pplVar1) {
      pplVar11 = *(long ***)this;
      do {
        pplVar10 = pplVar11 + 1;
        plVar8 = (long *)(**(code **)(**pplVar11 + 0x10))(*pplVar11,param_1,0,uVar4 & 1,0);
        if (plVar8 != (long *)0x0) {
          Mutex::leaveCriticalSection();
          uVar7 = (**(code **)(*plVar8 + 0x18))(plVar8);
          if ((uVar7 & 1) != 0) goto LAB_00b33148;
          addHistoryEntry(this,param_2,1);
          Mutex::enterCriticalSection();
          uVar4 = PathUtil::isAbsolutePath(param_2);
          pplVar1 = *(long ***)(this + 8);
          if (*(long ***)this == pplVar1) goto LAB_00b33140;
          pplVar11 = *(long ***)this;
          goto LAB_00b33114;
        }
        pplVar11 = pplVar10;
      } while (pplVar10 != pplVar1);
    }
LAB_00b33160:
    Mutex::leaveCriticalSection();
  }
  goto LAB_00b33164;
  while (iVar6 = (**(code **)(*plVar9 + 0x30))(plVar9,auStack_2068,iVar5), iVar6 == iVar5) {
LAB_00b331ac:
    iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8,auStack_2068,0x2000);
    bVar3 = iVar5 == 0;
    if (iVar5 < 1) goto LAB_00b331fc;
  }
  bVar3 = false;
LAB_00b331fc:
  (**(code **)(*plVar8 + 8))(plVar8);
  (**(code **)(*plVar9 + 8))(plVar9);
  goto LAB_00b33168;
  while (pplVar11 = pplVar10, pplVar10 != pplVar1) {
LAB_00b33114:
    pplVar10 = pplVar11 + 1;
    plVar9 = (long *)(**(code **)(**pplVar11 + 0x10))(*pplVar11,param_2,1,uVar4 & 1,0);
    if (plVar9 != (long *)0x0) {
      Mutex::leaveCriticalSection();
      goto LAB_00b331ac;
    }
  }
LAB_00b33140:
  Mutex::leaveCriticalSection();
LAB_00b33148:
  (**(code **)(*plVar8 + 8))(plVar8);
LAB_00b33164:
  bVar3 = false;
LAB_00b33168:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


