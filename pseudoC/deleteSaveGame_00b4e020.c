// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteSaveGame
// Entry Point: 00b4e020
// Size: 604 bytes
// Signature: undefined __cdecl deleteSaveGame(uint param_1, _func_void_void_ptr_ErrorCode_char_ptr * param_2, void * param_3)


/* GenericSaveGameUtil::deleteSaveGame(unsigned int, void (*)(void*, SaveGameUtilBase::ErrorCode,
   char const*), void*) */

void GenericSaveGameUtil::deleteSaveGame
               (uint param_1,_func_void_void_ptr_ErrorCode_char_ptr *param_2,void *param_3)

{
  uint **__dest;
  undefined8 uVar1;
  undefined8 uVar2;
  size_t __n;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  ErrorCode EVar8;
  uint *puVar9;
  ulong uVar10;
  undefined auStack_25c [4];
  char acStack_258 [512];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (s_state == 0) {
    CloudDeviceManager::getInstance();
    plVar6 = (long *)CloudDeviceManager::getCloudDevice();
    if (plVar6 == (long *)0x0) {
      if ((int)((ulong)(DAT_0211c588 - (long)s_saveGames) >> 3) == 0) {
LAB_00b4e238:
        EVar8 = 4;
      }
      else {
        if (**s_saveGames == param_1) {
          uVar10 = 0;
        }
        else {
          uVar7 = (ulong)(DAT_0211c588 - (long)s_saveGames) >> 3 & 0xffffffff;
          uVar10 = 0;
          do {
            if (uVar7 - 1 == uVar10) goto LAB_00b4e238;
            lVar4 = uVar10 + 1;
            uVar10 = uVar10 + 1;
          } while (*s_saveGames[lVar4] != param_1);
          if (uVar7 <= uVar10) goto LAB_00b4e238;
        }
        uVar1 = DAT_0211c558;
        if ((s_saveGameDirectoryBase & 1) == 0) {
          uVar1 = 0x211c549;
        }
        uVar2 = DAT_0211c570;
        if ((s_saveGameDirPostfix & 1) == 0) {
          uVar2 = 0x211c561;
        }
        FUN_00b4d19c(acStack_258,0x200,0x200,"%ssavegame%u%s",uVar1,param_1,uVar2);
        uVar7 = NativeFileUtil::deleteFolder(acStack_258,false);
        puVar9 = s_saveGames[uVar10];
        if (puVar9 != (uint *)0x0) {
          if (*(void **)(puVar9 + 2) != (void *)0x0) {
            operator_delete__(*(void **)(puVar9 + 2));
          }
          if (*(void **)(puVar9 + 4) != (void *)0x0) {
            operator_delete__(*(void **)(puVar9 + 4));
          }
          operator_delete(puVar9);
        }
        __dest = s_saveGames + uVar10;
        __n = DAT_0211c588 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        DAT_0211c588 = (long)__dest + __n;
        EVar8 = 0;
        if ((uVar7 & 1) == 0) {
          EVar8 = 7;
        }
      }
    }
    else {
      FUN_00b4d19c(acStack_258,0x200,0x200,"%s_%u",CLOUD_FILE_NAME,param_1);
      iVar5 = (**(code **)(*plVar6 + 0x50))
                        (plVar6,s_pCloudSession,acStack_258,auStack_25c,0,&DAT_0050a39f);
      if (iVar5 == 0) {
        setSaveGameData(param_1,"",(char *)0x0,false);
        EVar8 = 0;
      }
      else {
        EVar8 = 7;
      }
    }
    if (param_2 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4e24c;
  }
  else {
    if (param_2 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4e24c;
    EVar8 = 0xb;
  }
  (*param_2)(param_3,EVar8,(char *)0x0);
LAB_00b4e24c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


