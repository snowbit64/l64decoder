// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00b09270
// Size: 636 bytes
// Signature: undefined __cdecl load(char * param_1, FormatSupport * param_2, AudioBufferDesc * param_3)


/* AudioLoadUtil::load(char const*, IAudioDevice::FormatSupport const*, AudioBufferDesc&) */

undefined4 AudioLoadUtil::load(char *param_1,FormatSupport *param_2,AudioBufferDesc *param_3)

{
  long lVar1;
  FormatSupport *pFVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined4 uVar6;
  ulong local_68;
  undefined8 uStack_60;
  char *local_58;
  FormatSupport *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (FormatSupport *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (char *)0x0;
                    /* try { // try from 00b092a8 to 00b092b3 has its CatchHandler @ 00b0950c */
  uVar4 = getSpecificFilename(param_1,param_2,&local_50,(basic_string *)&local_68);
  pFVar2 = local_50;
  if (local_50 == (FormatSupport *)0x0) {
    pcVar5 = strrchr(param_1,0x2e);
    if (pcVar5 == (char *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00b09468 to 00b09473 has its CatchHandler @ 00b094f0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00b093b8 to 00b093cf has its CatchHandler @ 00b0950c */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Audio file \'%s\' has no file extension\n",param_1);
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00b09420 to 00b0942b has its CatchHandler @ 00b094f4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00b09334 to 00b0934b has its CatchHandler @ 00b0950c */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Audio file \'%s\' has no loader configured.\n",param_1);
    }
  }
  else {
    if (((uVar4 & 1) != 0) && (param_1 = (char *)((ulong)&local_68 | 1), (local_68 & 1) != 0)) {
      param_1 = local_58;
    }
    iVar3 = *(int *)(local_50 + 8);
                    /* try { // try from 00b092e0 to 00b0930f has its CatchHandler @ 00b09508 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(param_3 + 0x28));
    if (iVar3 == 4) {
      uVar4 = AudioLoaderCustom::load(param_1,param_3,7);
    }
    else if (iVar3 == 2) {
                    /* try { // try from 00b09350 to 00b093a3 has its CatchHandler @ 00b09508 */
      uVar4 = AudioLoaderWAV::load(param_1,param_3);
    }
    else {
      if (iVar3 != 1) goto LAB_00b093d0;
      uVar4 = AudioLoaderOGG::load(param_1,param_3,false);
    }
    if ((uVar4 & 1) != 0) {
      if (((byte)pFVar2[0xc] >> 1 & 1) != 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00b094b0 to 00b094bb has its CatchHandler @ 00b094ec */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning (performance): Raw audio format %s.\n",param_1);
      }
      uVar6 = 1;
      goto joined_r0x00b093d8;
    }
  }
LAB_00b093d0:
  uVar6 = 0;
joined_r0x00b093d8:
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


