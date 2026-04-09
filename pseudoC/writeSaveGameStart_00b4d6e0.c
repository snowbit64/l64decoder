// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeSaveGameStart
// Entry Point: 00b4d6e0
// Size: 260 bytes
// Signature: undefined __cdecl writeSaveGameStart(uint param_1, char * param_2, uint param_3, _func_void_void_ptr_ErrorCode_char_ptr * param_4, void * param_5)


/* GenericSaveGameUtil::writeSaveGameStart(unsigned int, char const*, unsigned int, void (*)(void*,
   SaveGameUtilBase::ErrorCode, char const*), void*) */

void GenericSaveGameUtil::writeSaveGameStart
               (uint param_1,char *param_2,uint param_3,
               _func_void_void_ptr_ErrorCode_char_ptr *param_4,void *param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ErrorCode EVar4;
  char *pcVar5;
  undefined auVar6 [16];
  char acStack_248 [512];
  long local_48;
  
  uVar3 = (ulong)param_1;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (s_state == 0) {
    CloudDeviceManager::getInstance();
    CloudDeviceManager::getCloudDevice();
    uVar1 = DAT_0211c558;
    if ((s_saveGameDirectoryBase & 1) == 0) {
      uVar1 = 0x211c549;
    }
    FUN_00b4d19c(acStack_248,0x200,0x200,"%stempsavegame",uVar1);
    NativeFileUtil::deleteFolder(acStack_248,false);
    uVar3 = NativeFileUtil::createFolder(acStack_248);
    if ((uVar3 & 1) == 0) {
      param_2 = (char *)0x7;
    }
    else {
      param_2 = (char *)0x0;
      s_state = 4;
      s_saveGameId = param_1;
    }
    if (param_4 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4d7b8;
    EVar4 = (ErrorCode)param_2;
    pcVar5 = acStack_248;
  }
  else {
    if (param_4 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4d7b8;
    EVar4 = 0xb;
    pcVar5 = (char *)0x0;
  }
  auVar6 = (*param_4)(param_5,EVar4,pcVar5);
  param_2 = auVar6._8_8_;
  uVar3 = auVar6._0_8_;
LAB_00b4d7b8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,param_2);
}


