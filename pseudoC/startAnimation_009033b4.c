// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startAnimation
// Entry Point: 009033b4
// Size: 856 bytes
// Signature: undefined __cdecl startAnimation(void * param_1, char * param_2, char * * param_3)


/* I3DAnimationSetsFactory::startAnimation(void*, char const*, char const**) */

void I3DAnimationSetsFactory::startAnimation(void *param_1,char *param_2,char **param_3)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  basic_string local_60 [4];
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = ExpatUtil::getAttr("externalAnimFile",param_3);
  if (lVar5 != 0) {
    *(undefined *)((long)param_1 + 0x2a0) = 1;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_60);
                    /* try { // try from 0090340c to 00903417 has its CatchHandler @ 00903738 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)local_60);
    pcVar1 = (char *)((ulong)local_60 | 1);
    if (((byte)local_60[0] & 1) != 0) {
      pcVar1 = local_50;
    }
                    /* try { // try from 0090342c to 0090346b has its CatchHandler @ 0090373c */
    plVar6 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,pcVar1,0,
                                      false);
    if (plVar6 == (long *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00903640 to 0090364b has its CatchHandler @ 00903714 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Failed to read animation file \'%s\' (file does not exist).\n",
                         lVar5);
    }
    else {
      uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if (((uVar7 & 1) == 0) || (lVar8 = (**(code **)(*plVar6 + 0x48))(plVar6), lVar8 < 1)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 009035f8 to 00903603 has its CatchHandler @ 00903718 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 00903520 to 00903563 has its CatchHandler @ 0090373c */
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Failed to read animation file \'%s\' (corrupted file).\n",lVar5);
      }
      else {
                    /* try { // try from 0090347c to 00903483 has its CatchHandler @ 0090372c */
        uVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
                    /* try { // try from 0090348c to 009034ab has its CatchHandler @ 00903734 */
        puVar9 = (uint *)operator_new__((ulong)uVar3);
        (**(code **)(*plVar6 + 0x28))(plVar6,puVar9,uVar3);
        uVar3 = *puVar9;
        if (((uVar3 & 0xfffffffc) == 4) && ((uVar3 & 0xfeffffff) != 0x2000000)) {
          if (uVar3 < 7) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar4 != 0)) {
                    /* try { // try from 009036d0 to 009036db has its CatchHandler @ 0090370c */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 009034e4 to 0090350b has its CatchHandler @ 00903730 */
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: Old animation file format version found \'%s\'.\n",lVar5);
          }
          AnimSerializationHelper::deserializeAnimation
                    ((map *)((long)param_1 + 0x130),uVar3,(uchar *)(puVar9 + 1));
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 != 0)) {
                    /* try { // try from 00903688 to 00903693 has its CatchHandler @ 00903710 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
                    /* try { // try from 009035ac to 009035c3 has its CatchHandler @ 00903730 */
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Unsupported animation file format version found \'%s\'.\n",
                             lVar5);
        }
        operator_delete__(puVar9);
      }
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


