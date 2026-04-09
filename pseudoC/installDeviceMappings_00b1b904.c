// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: installDeviceMappings
// Entry Point: 00b1b904
// Size: 1048 bytes
// Signature: undefined __thiscall installDeviceMappings(DeviceMappingManager * this, uchar * param_1, uint param_2)


/* DeviceMappingManager::installDeviceMappings(unsigned char const*, unsigned int) */

bool __thiscall
DeviceMappingManager::installDeviceMappings(DeviceMappingManager *this,uchar *param_1,uint param_2)

{
  basic_string_conflict *pbVar1;
  char *pcVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  uchar *puVar12;
  ulong uVar13;
  basic_string_conflict *pbVar14;
  basic_string_conflict *pbVar15;
  byte *pbVar16;
  byte local_81b8 [16];
  char *local_81a8;
  __ndk1 local_81a0 [16];
  char *local_8190;
  byte *local_8188;
  byte *local_8180;
  undefined8 local_8178;
  MemoryBufferedFile aMStack_8170 [32];
  ZIPFileArchive aZStack_8150 [32992];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  MemoryBufferedFile::MemoryBufferedFile(aMStack_8170,param_1,param_2,0,false);
                    /* try { // try from 00b1b948 to 00b1b95b has its CatchHandler @ 00b1bd6c */
  pbVar14 = (basic_string_conflict *)0x0;
  ZIPFileArchive::ZIPFileArchive(aZStack_8150,(File *)aMStack_8170,false,true);
                    /* try { // try from 00b1b95c to 00b1b963 has its CatchHandler @ 00b1bd7c */
  uVar10 = ZIPFileArchive::isInit();
  if ((uVar10 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0)) {
                    /* try { // try from 00b1bc98 to 00b1bca3 has its CatchHandler @ 00b1bd30 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00b1bb84 to 00b1bb97 has its CatchHandler @ 00b1bd7c */
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Warning: Corrupted input bindings zip file\n.");
    bVar6 = false;
  }
  else {
    local_8188 = (byte *)0x0;
    local_8180 = (byte *)0x0;
    local_8178 = 0;
                    /* try { // try from 00b1b970 to 00b1b97b has its CatchHandler @ 00b1bd64 */
    ZIPFileArchive::getAllFiles(aZStack_8150,(vector *)&local_8188);
    pbVar5 = local_8180;
    pbVar16 = local_8188;
    if (local_8188 == local_8180) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0))
      {
                    /* try { // try from 00b1bce0 to 00b1bceb has its CatchHandler @ 00b1bd1c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00b1bbd4 to 00b1bbe7 has its CatchHandler @ 00b1bd64 */
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "  Warning: Empty input bindings zip file\n.");
    }
    else {
                    /* try { // try from 00b1b98c to 00b1b99f has its CatchHandler @ 00b1bd58 */
      FUN_006cadd8(local_81a0,this + 0x30,"inputDevices/");
      pcVar2 = (char *)((ulong)local_81a0 | 1);
      if (((byte)local_81a0[0] & 1) != 0) {
        pcVar2 = local_8190;
      }
                    /* try { // try from 00b1b9bc to 00b1b9db has its CatchHandler @ 00b1bd60 */
      NativeFileUtil::deleteFolder(pcVar2,false);
      pcVar2 = (char *)((ulong)local_81a0 | 1);
      if (((byte)local_81a0[0] & 1) != 0) {
        pcVar2 = local_8190;
      }
      NativeFileUtil::createAllFolders(pcVar2,false);
      if (local_8180 != local_8188) {
        uVar10 = 0;
        do {
          if (*(int *)(local_8188 + uVar10 * 0x30 + 0x18) == 1) {
            pbVar15 = (basic_string_conflict *)(local_8188 + uVar10 * 0x30);
            pbVar1 = pbVar15 + 1;
            if (((byte)*pbVar15 & 1) != 0) {
              pbVar1 = *(basic_string_conflict **)(pbVar15 + 0x10);
            }
                    /* try { // try from 00b1ba50 to 00b1ba57 has its CatchHandler @ 00b1bda0 */
            plVar11 = (long *)ZIPFileArchive::openFile(aZStack_8150,(char *)pbVar1);
                    /* try { // try from 00b1ba68 to 00b1ba6f has its CatchHandler @ 00b1bd84 */
            if ((plVar11 != (long *)0x0) &&
               (uVar7 = (**(code **)(*plVar11 + 0x48))(plVar11), 0 < (int)uVar7)) {
                    /* try { // try from 00b1ba7c to 00b1ba8b has its CatchHandler @ 00b1bd78 */
              std::__ndk1::operator+(local_81a0,pbVar15,pbVar14);
                    /* try { // try from 00b1ba90 to 00b1ba93 has its CatchHandler @ 00b1bd74 */
              puVar12 = (uchar *)operator_new__((long)(int)uVar7);
                    /* try { // try from 00b1baa0 to 00b1bb0f has its CatchHandler @ 00b1bd88 */
              uVar8 = (**(code **)(*plVar11 + 0x28))(plVar11,puVar12,uVar7);
              if (uVar8 == uVar7) {
                pcVar2 = (char *)((ulong)local_81b8 | 1);
                if ((local_81b8[0] & 1) != 0) {
                  pcVar2 = local_81a8;
                }
                pbVar14 = (basic_string_conflict *)(ulong)uVar7;
                uVar13 = NativeFileUtil::writeFile(pcVar2,puVar12,uVar7);
                if ((uVar13 & 1) == 0) goto LAB_00b1badc;
              }
              else {
LAB_00b1badc:
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                   iVar9 != 0)) {
                    /* try { // try from 00b1bb3c to 00b1bb47 has its CatchHandler @ 00b1bd44 */
                  LogManager::LogManager
                            ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                pbVar14 = pbVar15 + 1;
                if (((byte)*pbVar15 & 1) != 0) {
                  pbVar14 = *(basic_string_conflict **)(pbVar15 + 0x10);
                }
                LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                  "  Warning: Failed to unzip file \'%s\' from input devices zip.\n"
                                 );
              }
              operator_delete__(puVar12);
              if ((local_81b8[0] & 1) != 0) {
                operator_delete(local_81a8);
              }
            }
          }
          uVar10 = (ulong)((int)uVar10 + 1);
          uVar13 = ((long)local_8180 - (long)local_8188 >> 4) * -0x5555555555555555;
        } while (uVar10 <= uVar13 && uVar13 - uVar10 != 0);
      }
      this[0x48] = (DeviceMappingManager)0x1;
      if (((byte)local_81a0[0] & 1) != 0) {
        operator_delete(local_8190);
      }
    }
    pbVar4 = local_8188;
    bVar6 = pbVar16 != pbVar5;
    pbVar16 = local_8180;
    if (local_8188 != (byte *)0x0) {
      while (pbVar5 = pbVar16, pbVar5 != pbVar4) {
        pbVar16 = pbVar5 + -0x30;
        if ((*pbVar16 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -0x20));
        }
      }
      local_8180 = pbVar4;
      operator_delete(local_8188);
    }
  }
  ZIPFileArchive::~ZIPFileArchive(aZStack_8150);
  MemoryBufferedFile::~MemoryBufferedFile(aMStack_8170);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


