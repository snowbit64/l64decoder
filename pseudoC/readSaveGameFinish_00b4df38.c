// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readSaveGameFinish
// Entry Point: 00b4df38
// Size: 232 bytes
// Signature: undefined __cdecl readSaveGameFinish(_func_void_void_ptr_ErrorCode_char_ptr * param_1, void * param_2)


/* GenericSaveGameUtil::readSaveGameFinish(void (*)(void*, SaveGameUtilBase::ErrorCode, char
   const*), void*) */

void GenericSaveGameUtil::readSaveGameFinish
               (_func_void_void_ptr_ErrorCode_char_ptr *param_1,void *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ErrorCode EVar4;
  char acStack_248 [512];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (s_state == 3) {
    CloudDeviceManager::getInstance();
    lVar3 = CloudDeviceManager::getCloudDevice();
    if (lVar3 != 0) {
      uVar1 = DAT_0211c558;
      if ((s_saveGameDirectoryBase & 1) == 0) {
        uVar1 = 0x211c549;
      }
      FUN_00b4d19c(acStack_248,0x200,0x200,"%stempsavegame",uVar1);
      NativeFileUtil::deleteFolder(acStack_248,false);
    }
    s_state = 0;
    s_pReadFileOperation = 0;
    if (param_1 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4dff4;
    EVar4 = 0;
  }
  else {
    if (param_1 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4dff4;
    EVar4 = 0xb;
  }
  (*param_1)(param_2,EVar4,(char *)0x0);
LAB_00b4dff4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


