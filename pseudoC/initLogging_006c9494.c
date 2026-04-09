// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initLogging
// Entry Point: 006c9494
// Size: 1364 bytes
// Signature: undefined __thiscall initLogging(Application * this, ApplicationDesc * param_1)


/* WARNING: Type propagation algorithm not settling */
/* Application::initLogging(ApplicationDesc const&) */

void __thiscall Application::initLogging(Application *this,ApplicationDesc *param_1)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  char *__s;
  ulong uVar5;
  AsyncFileLogSink *this_00;
  size_t sVar6;
  size_t sVar7;
  basic_string_conflict *pbVar8;
  basic_string_conflict *pbVar9;
  basic_string_conflict *pbVar10;
  basic_string_conflict *pbVar11;
  char *pcVar12;
  uint uVar13;
  undefined8 local_110;
  size_t local_108;
  basic_string_conflict *local_100;
  ulong local_f8;
  undefined8 uStack_f0;
  char *local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  char *local_d0;
  basic_string_conflict *local_c8;
  basic_string_conflict *local_c0;
  undefined8 local_b8;
  byte local_a0 [16];
  char *local_90;
  basic_string local_88 [4];
  char *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(this + 0x168) = 0;
  __s = (char *)(**(code **)(**(long **)(this + 0x188) + 0x10))
                          (*(long **)(this + 0x188),"game.logging.file#filename",0);
  uVar5 = Properties::getBoolDefault
                    (*(Properties **)(this + 0x188),"game.logging.file#enable",false);
  bVar3 = Properties::getBoolDefault
                    (*(Properties **)(this + 0x188),"game.logging.file#filenameTimestamp",true);
  if ((uVar5 & 1) == 0) {
    if ((__s == (char *)0x0) || (this[0x1c1] == (Application)0x0)) goto LAB_006c98f0;
  }
  else if (__s == (char *)0x0) goto LAB_006c98f0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_88);
                    /* try { // try from 006c9540 to 006c9557 has its CatchHandler @ 006c9a64 */
  FUN_006cadd8(local_a0,local_88,"checkWriteAccess");
  pcVar12 = (char *)((ulong)local_a0 | 1);
  pcVar1 = pcVar12;
  if ((local_a0[0] & 1) != 0) {
    pcVar1 = local_90;
  }
                    /* try { // try from 006c956c to 006c9573 has its CatchHandler @ 006c9a5c */
  uVar5 = NativeFileUtil::createAllFolders(pcVar1,true);
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 006c9578 to 006c957f has its CatchHandler @ 006c9a3c */
    NativeFile::NativeFile((NativeFile *)&local_c8);
    pcVar1 = pcVar12;
    if ((local_a0[0] & 1) != 0) {
      pcVar1 = local_90;
    }
                    /* try { // try from 006c9590 to 006c95bf has its CatchHandler @ 006c9a4c */
    uVar5 = NativeFile::open((char *)&local_c8,(ACCESS_MODE)pcVar1,true);
    if ((uVar5 & 1) != 0) {
      NativeFile::close();
      if ((local_a0[0] & 1) != 0) {
        pcVar12 = local_90;
      }
      NativeFileUtil::deleteFile(pcVar12);
                    /* try { // try from 006c95c0 to 006c95cf has its CatchHandler @ 006c9a20 */
      FUN_006cadd8(&local_e0,local_88,__s);
                    /* try { // try from 006c95d0 to 006c95d7 has its CatchHandler @ 006c9a24 */
      this_00 = (AsyncFileLogSink *)operator_new(0xc0);
      pcVar1 = (char *)((ulong)&local_e0 | 1);
      if ((local_e0 & 1) != 0) {
        pcVar1 = local_d0;
      }
                    /* try { // try from 006c9600 to 006c9607 has its CatchHandler @ 006c9a10 */
      AsyncFileLogSink::AsyncFileLogSink
                (this_00,pcVar1,param_1[0x80] == (ApplicationDesc)0x0,(bool)(bVar3 & 1));
      *(AsyncFileLogSink **)(this + 0x168) = this_00;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 006c99ac to 006c99b7 has its CatchHandler @ 006c99e8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 006c962c to 006c962f has its CatchHandler @ 006c9a24 */
      Logger::addLogSink(LogManager::getInstance()::singletonLogManager,*(ILogSink **)(this + 0x168)
                        );
      if (((byte)local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
    }
    NativeFile::~NativeFile((NativeFile *)&local_c8);
  }
  local_c8 = (basic_string_conflict *)0x0;
  local_c0 = (basic_string_conflict *)0x0;
  local_b8 = 0;
  pcVar1 = (char *)((ulong)local_88 | 1);
  if (((byte)local_88[0]._0_1_ & 1) != 0) {
    pcVar1 = local_78;
  }
                    /* try { // try from 006c9668 to 006c9673 has its CatchHandler @ 006c9a44 */
  NativeFileUtil::getFiles(pcVar1,(vector *)&local_c8,false);
  FUN_006d23a0(local_c8,local_c0);
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = (char *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = (char *)0x0;
  sVar6 = strlen(__s);
  if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 006c9994 to 006c999b has its CatchHandler @ 006c9a7c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar6 < 0x17) {
    pbVar11 = (basic_string_conflict *)((ulong)&local_110 | 1);
    local_110 = CONCAT71(local_110._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_006c96e0;
  }
  else {
    uVar5 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 006c96c8 to 006c96cf has its CatchHandler @ 006c9a7c */
    pbVar11 = (basic_string_conflict *)operator_new(uVar5);
    local_110 = uVar5 | 1;
    local_108 = sVar6;
    local_100 = pbVar11;
LAB_006c96e0:
    memcpy(pbVar11,__s,sVar6);
  }
  pbVar11[sVar6] = (basic_string_conflict)0x0;
                    /* try { // try from 006c96f4 to 006c970f has its CatchHandler @ 006c9a80 */
  pbVar11 = (basic_string_conflict *)0x0;
  PathUtil::getFilename((basic_string *)&local_110,(basic_string *)&local_e0,false);
  PathUtil::getFileExtension((basic_string *)&local_110,(basic_string *)&local_f8);
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  pbVar10 = local_c0;
  if (local_c8 != local_c0) {
    uVar13 = 0;
    pbVar9 = local_c8;
    do {
      if (*(int *)(pbVar9 + 0x18) == 1) {
        pbVar8 = *(basic_string_conflict **)(pbVar9 + 0x10);
        if (((byte)*pbVar9 & 1) == 0) {
          pbVar8 = pbVar9 + 1;
        }
        pcVar1 = (char *)((ulong)&local_e0 | 1);
        if ((local_e0 & 1) != 0) {
          pcVar1 = local_d0;
        }
                    /* try { // try from 006c9798 to 006c97c7 has its CatchHandler @ 006c9aa8 */
        uVar5 = StringUtil::iStartsWith((char *)pbVar8,pcVar1);
        if ((uVar5 & 1) != 0) {
          pbVar8 = pbVar9 + 1;
          if (((byte)*pbVar9 & 1) != 0) {
            pbVar8 = *(basic_string_conflict **)(pbVar9 + 0x10);
          }
          pcVar1 = (char *)((ulong)&local_f8 | 1);
          if ((local_f8 & 1) != 0) {
            pcVar1 = local_e8;
          }
          uVar5 = StringUtil::iEndsWith((char *)pbVar8,pcVar1);
          if ((uVar5 & 1) != 0) {
            sVar7 = strlen(__s);
            sVar6 = (ulong)((byte)*pbVar9 >> 1);
            if (((byte)*pbVar9 & 1) != 0) {
              sVar6 = *(size_t *)(pbVar9 + 8);
            }
            if (sVar7 == sVar6) {
                    /* try { // try from 006c97f4 to 006c9807 has its CatchHandler @ 006c9a78 */
              pbVar11 = (basic_string_conflict *)0xffffffffffffffff;
              iVar4 = std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::compare((ulong)pbVar9,0,(char *)0xffffffffffffffff,(ulong)__s);
              if (iVar4 == 0) goto LAB_006c9760;
            }
            if (uVar13 < 3) {
              uVar13 = uVar13 + 1;
            }
            else {
                    /* try { // try from 006c9814 to 006c9823 has its CatchHandler @ 006c9a74 */
              std::__ndk1::operator+((__ndk1 *)local_88,pbVar9,pbVar11);
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar4 != 0)) {
                    /* try { // try from 006c9888 to 006c988f has its CatchHandler @ 006c99fc */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              pbVar11 = (basic_string_conflict *)((ulong)&local_110 | 1);
              if ((local_110 & 1) != 0) {
                pbVar11 = local_100;
              }
                    /* try { // try from 006c9844 to 006c9863 has its CatchHandler @ 006c9a90 */
              LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                                "Cleanup of deprecated log file: %s\n");
              pbVar8 = (basic_string_conflict *)((ulong)&local_110 | 1);
              if ((local_110 & 1) != 0) {
                pbVar8 = local_100;
              }
              NativeFileUtil::deleteFile((char *)pbVar8);
              if ((local_110 & 1) != 0) {
                operator_delete(local_100);
              }
            }
          }
        }
      }
LAB_006c9760:
      pbVar9 = pbVar9 + 0x30;
    } while (pbVar9 != pbVar10);
  }
  if ((local_f8 & 1) != 0) {
    operator_delete(local_e8);
  }
  pbVar11 = local_c8;
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
    pbVar11 = local_c8;
  }
  local_c8 = pbVar11;
  pbVar10 = local_c0;
  if (pbVar11 != (basic_string_conflict *)0x0) {
    while (pbVar9 = pbVar10, pbVar9 != pbVar11) {
      pbVar10 = pbVar9 + -0x30;
      if (((byte)*pbVar10 & 1) != 0) {
        operator_delete(*(void **)(pbVar9 + -0x20));
      }
    }
    local_c0 = pbVar11;
    operator_delete(local_c8);
  }
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0]._0_1_ & 1) != 0) {
    operator_delete(local_78);
  }
LAB_006c98f0:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


