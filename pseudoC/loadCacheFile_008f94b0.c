// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadCacheFile
// Entry Point: 008f94b0
// Size: 624 bytes
// Signature: undefined __thiscall loadCacheFile(TerrainPatchOccluderManager * this, char * param_1)


/* TerrainPatchOccluderManager::loadCacheFile(char const*) */

undefined4 __thiscall
TerrainPatchOccluderManager::loadCacheFile(TerrainPatchOccluderManager *this,char *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if (plVar3 == (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008f9654 to 008f965f has its CatchHandler @ 008f972c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Missing terrain occluder cache \'%s\'.\n",param_1);
  }
  else {
    iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,&local_3c,4);
    if (iVar2 == 4) {
      if ((local_3c & 0xfffffffe) == 2) {
        uVar4 = readCacheData(this,(File *)plVar3,local_3c);
        if ((uVar4 & 1) != 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
          uVar5 = 1;
          this[0x133] = (TerrainPatchOccluderManager)0x1;
          Event::post();
          goto LAB_008f95ec;
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 008f9634 to 008f963f has its CatchHandler @ 008f9720 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          goto LAB_008f96a8;
        }
        goto LAB_008f9590;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008f96e4 to 008f96ef has its CatchHandler @ 008f9724 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Unsupported terrain occluder cache version v%u \'%s\'.\n",
                        (ulong)local_3c,param_1);
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008f969c to 008f96a7 has its CatchHandler @ 008f9728 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
LAB_008f96a8:
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
LAB_008f9590:
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Failed to read terrain occluder cache \'%s\'.\n",param_1);
    }
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  uVar5 = 0;
LAB_008f95ec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


