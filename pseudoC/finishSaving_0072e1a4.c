// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishSaving
// Entry Point: 0072e1a4
// Size: 676 bytes
// Signature: undefined __thiscall finishSaving(VehicleNavigationMapGenerator * this, char * param_1, uchar * param_2, uint param_3)


/* VehicleNavigationMapGenerator::finishSaving(char const*, unsigned char*, unsigned int) */

bool __thiscall
VehicleNavigationMapGenerator::finishSaving
          (VehicleNavigationMapGenerator *this,char *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  char *__dest;
  char *pcVar8;
  uchar *local_58;
  uint local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar6 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar6 == (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 0072e37c to 0072e387 has its CatchHandler @ 0072e450 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Error: Failed to open file \'%s\' for writing.\n",param_1);
  }
  else {
    uVar7 = (**(code **)(*plVar6 + 0x10))();
    if ((uVar7 & 1) != 0) {
      local_4c = ZLIBCompressionUtil::getCompressionBufferSize(param_2,param_3);
      __dest = (char *)operator_new__((ulong)(local_4c + 0xc));
      pcVar8 = strncpy(__dest,COST_MAP_MARKER,4);
      local_58 = (uchar *)(pcVar8 + 0xc);
      *(undefined4 *)(pcVar8 + 4) = 1;
      *(uint *)(pcVar8 + 8) = param_3;
      ZLIBCompressionUtil::compress(param_2,param_3,&local_58,&local_4c,false);
      uVar1 = local_4c + 0xc;
      uVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,__dest,uVar1);
      operator_delete__(__dest);
      (**(code **)(*plVar6 + 8))(plVar6);
      bVar3 = uVar4 == uVar1;
      if (!bVar3) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 0072e40c to 0072e417 has its CatchHandler @ 0072e448 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "Error: Failed to write cost map data to file \'%s\'. Written %d vs %u bytes.\n"
                          ,param_1,(ulong)uVar4,(ulong)local_4c);
      }
      goto LAB_0072e340;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 0072e3c4 to 0072e3cf has its CatchHandler @ 0072e44c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Error: Failed to open file \'%s\' for writing.\n",param_1);
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  bVar3 = false;
LAB_0072e340:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


