// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readHeader
// Entry Point: 00a8f764
// Size: 464 bytes
// Signature: undefined __cdecl readHeader(File * param_1, GS2DHeader * param_2, char * param_3)


/* GS2DUtil::readHeader(File&, GS2DUtil::GS2DHeader&, char const*) */

void GS2DUtil::readHeader(File *param_1,GS2DHeader *param_2,char *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char local_88;
  char local_87;
  char local_86;
  char local_85;
  uint local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_88,0x50);
  if ((((iVar3 == 0x50) && (local_88 == *s_GS2DHeaderID)) && (local_87 == s_GS2DHeaderID[1])) &&
     ((local_86 == s_GS2DHeaderID[2] && (local_85 == s_GS2DHeaderID[3])))) {
    if (local_84 < 6) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00a8f8f8 to 00a8f903 has its CatchHandler @ 00a8f934 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Outdated gs2d file \'%s\'\n",param_3);
    }
    else {
      *(undefined8 *)(param_2 + 0x28) = uStack_58;
      *(undefined8 *)(param_2 + 0x20) = local_60;
      *(undefined8 *)(param_2 + 0x38) = uStack_48;
      *(undefined8 *)(param_2 + 0x30) = uStack_50;
      *(undefined8 *)(param_2 + 0x40) = local_40;
      *(undefined8 *)(param_2 + 8) = uStack_78;
      *(undefined8 *)param_2 = local_80;
      *(undefined8 *)(param_2 + 0x18) = uStack_68;
      *(undefined8 *)(param_2 + 0x10) = uStack_70;
    }
    bVar2 = 5 < local_84;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00a8f8b0 to 00a8f8bb has its CatchHandler @ 00a8f938 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid gs2d file \'%s\'\n",param_3);
    bVar2 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


