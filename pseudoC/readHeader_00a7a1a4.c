// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readHeader
// Entry Point: 00a7a1a4
// Size: 636 bytes
// Signature: undefined __cdecl readHeader(File * param_1, ORIGIN param_2, DDSHeader * param_3, DDSHeaderDX10 * param_4, ImageDesc * param_5, char * param_6)


/* DDSUtil::readHeader(File&, ImageDesc::ORIGIN, DDSUtil::DDSHeader&, DDSUtil::DDSHeaderDX10&,
   ImageDesc&, char const*) */

uint DDSUtil::readHeader(File *param_1,ORIGIN param_2,DDSHeader *param_3,DDSHeaderDX10 *param_4,
                        ImageDesc *param_5,char *param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_5c,4);
  if ((((iVar2 == 4) && (local_5c == 'D')) && (local_5b == 'D')) &&
     ((local_5a == 'S' && (local_59 == ' ')))) {
    iVar2 = (**(code **)(*(long *)param_1 + 0x28))(param_1,param_3,0x7c);
    if (iVar2 == 0x7c) {
      if (((((byte)param_3[0x4c] >> 2 & 1) == 0) || (*(int *)(param_3 + 0x50) != 0x30315844)) ||
         (iVar2 = (**(code **)(*(long *)param_1 + 0x28))(param_1,param_4,0x14), iVar2 == 0x14)) {
        uVar3 = buildDesc(param_3,param_4,param_2,param_5,param_6);
        goto LAB_00a7a2f4;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00a7a3e4 to 00a7a3ef has its CatchHandler @ 00a7a420 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar4 = "Error: Invalid dds header dx10 for file \'%s\'\n";
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00a7a39c to 00a7a3a7 has its CatchHandler @ 00a7a424 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar4 = "Error: Invalid dds header for file \'%s\'\n";
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00a7a354 to 00a7a35f has its CatchHandler @ 00a7a428 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar4 = "Error: Invalid dds banner for file \'%s\'\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar4,param_6);
  uVar3 = 0;
LAB_00a7a2f4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


