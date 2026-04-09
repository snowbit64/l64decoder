// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeSaveGameFinish
// Entry Point: 00b4d7e4
// Size: 652 bytes
// Signature: undefined __cdecl writeSaveGameFinish(char * param_1, char * param_2, _func_void_void_ptr_ErrorCode_char_ptr * param_3, void * param_4)


/* GenericSaveGameUtil::writeSaveGameFinish(char const*, char const*, void (*)(void*,
   SaveGameUtilBase::ErrorCode, char const*), void*) */

void GenericSaveGameUtil::writeSaveGameFinish
               (char *param_1,char *param_2,_func_void_void_ptr_ErrorCode_char_ptr *param_3,
               void *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  size_t sVar8;
  ErrorCode EVar9;
  uint local_65c;
  uchar *local_658 [64];
  char acStack_458 [512];
  char acStack_258 [512];
  long local_58;
  
  uVar4 = s_saveGameId;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (s_state == 4) {
    CloudDeviceManager::getInstance();
    plVar6 = (long *)CloudDeviceManager::getCloudDevice();
    if (plVar6 == (long *)0x0) {
      uVar1 = DAT_0211c558;
      if ((s_saveGameDirectoryBase & 1) == 0) {
        uVar1 = 0x211c549;
      }
      FUN_00b4d19c(acStack_258,0x200,0x200,"%stempsavegame/%s",uVar1,META_FILENAME);
      sVar8 = strlen(param_1);
      uVar7 = NativeFileUtil::writeFile(acStack_258,(uchar *)param_1,(uint)sVar8);
      if ((uVar7 & 1) != 0) {
        uVar1 = DAT_0211c558;
        if ((s_saveGameDirectoryBase & 1) == 0) {
          uVar1 = 0x211c549;
        }
        FUN_00b4d19c(acStack_458,0x200,0x200,"%stempsavegame",uVar1);
        uVar1 = DAT_0211c558;
        if ((s_saveGameDirectoryBase & 1) == 0) {
          uVar1 = 0x211c549;
        }
        uVar2 = DAT_0211c570;
        if ((s_saveGameDirPostfix & 1) == 0) {
          uVar2 = 0x211c561;
        }
        FUN_00b4d19c(local_658,0x200,0x200,"%ssavegame%u%s",uVar1,uVar4,uVar2);
        NativeFileUtil::deleteFolder((char *)local_658,false);
        uVar7 = NativeFileUtil::moveFile(acStack_458,(char *)local_658,false);
        if ((uVar7 & 1) != 0) goto LAB_00b4da04;
      }
LAB_00b4da28:
      EVar9 = 7;
    }
    else {
      uVar1 = DAT_0211c558;
      if ((s_saveGameDirectoryBase & 1) == 0) {
        uVar1 = 0x211c549;
      }
      FUN_00b4d19c(acStack_258,0x200,0x200,"%stempsavegame",uVar1);
      local_658[0] = (uchar *)0x0;
      local_65c = 0;
      uVar7 = SaveGameArchiveUtil::createSaveGameArchive(acStack_258,local_658,&local_65c);
      if ((uVar7 & 1) == 0) goto LAB_00b4da28;
      NativeFileUtil::deleteFolder(acStack_258,false);
      FUN_00b4d19c(acStack_458,0x200,0x200,"%s_%u",CLOUD_FILE_NAME,uVar4);
      iVar5 = (**(code **)(*plVar6 + 0x50))
                        (plVar6,s_pCloudSession,acStack_458,local_658[0],local_65c,param_1);
      if (local_658[0] != (uchar *)0x0) {
        operator_delete__(local_658[0]);
      }
      if (iVar5 != 0) goto LAB_00b4da28;
LAB_00b4da04:
      setSaveGameData(uVar4,param_1,(char *)0x0,false);
      EVar9 = 0;
    }
    s_state = 0;
    if (param_3 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4da40;
    s_state = 0;
  }
  else {
    if (param_3 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4da40;
    EVar9 = 0xb;
  }
  (*param_3)(param_4,EVar9,(char *)0x0);
LAB_00b4da40:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


