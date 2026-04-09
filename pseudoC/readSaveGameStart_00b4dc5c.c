// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readSaveGameStart
// Entry Point: 00b4dc5c
// Size: 564 bytes
// Signature: undefined __cdecl readSaveGameStart(uint param_1, _func_void_void_ptr_ErrorCode_char_ptr * param_2, void * param_3)


/* GenericSaveGameUtil::readSaveGameStart(unsigned int, void (*)(void*, SaveGameUtilBase::ErrorCode,
   char const*), void*) */

void GenericSaveGameUtil::readSaveGameStart
               (uint param_1,_func_void_void_ptr_ErrorCode_char_ptr *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  uint *puVar6;
  ErrorCode EVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined auStack_458 [512];
  char acStack_258 [512];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (s_state == 0) {
    s_saveGameId = param_1;
    CloudDeviceManager::getInstance();
    plVar4 = (long *)CloudDeviceManager::getCloudDevice();
    if (plVar4 != (long *)0x0) {
      uVar1 = DAT_0211c558;
      if ((s_saveGameDirectoryBase & 1) == 0) {
        uVar1 = 0x211c549;
      }
      FUN_00b4d19c(acStack_258,0x200,0x200,"%stempsavegame",uVar1);
      uVar5 = NativeFileUtil::createFolder(acStack_258);
      if ((uVar5 & 1) != 0) {
        FUN_00b4d19c(auStack_458,0x200,0x200,"%s_%u",CLOUD_FILE_NAME,param_1);
        puVar6 = (uint *)operator_new(0x20);
        *puVar6 = param_1;
        *(_func_void_void_ptr_ErrorCode_char_ptr **)(puVar6 + 2) = param_2;
        *(void **)(puVar6 + 4) = param_3;
        *(undefined8 *)(puVar6 + 6) = 0;
        s_state = 2;
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,s_pCloudSession,auStack_458,&s_pReadFileOperation,puVar6);
        goto LAB_00b4dcb0;
      }
      if (param_2 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4dcb0;
      EVar7 = 9;
      goto LAB_00b4dca8;
    }
    if ((int)((ulong)(DAT_0211c588 - (long)s_saveGames) >> 3) == 0) {
LAB_00b4de7c:
      if (param_2 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4dcb0;
      EVar7 = 4;
      goto LAB_00b4dca8;
    }
    if (**s_saveGames != param_1) {
      uVar9 = (ulong)(DAT_0211c588 - (long)s_saveGames) >> 3 & 0xffffffff;
      uVar5 = 1;
      do {
        uVar10 = uVar5;
        if (uVar9 == uVar10) break;
        uVar5 = uVar10 + 1;
      } while (*s_saveGames[uVar10] != param_1);
      if (uVar9 <= uVar10) goto LAB_00b4de7c;
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
    s_state = 3;
    if (param_2 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4dcb0;
    pcVar8 = acStack_258;
    EVar7 = 0;
  }
  else {
    if (param_2 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4dcb0;
    EVar7 = 0xb;
LAB_00b4dca8:
    pcVar8 = (char *)0x0;
  }
  (*param_2)(param_3,EVar7,pcVar8);
LAB_00b4dcb0:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


