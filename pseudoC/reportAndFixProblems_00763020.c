// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportAndFixProblems
// Entry Point: 00763020
// Size: 1100 bytes
// Signature: undefined __cdecl reportAndFixProblems(DensityMap * param_1, uint * param_2, uint * param_3, uint param_4, char * param_5)


/* DensityMapFilterLua::reportAndFixProblems(DensityMap*, unsigned int&, unsigned int&, unsigned
   int, char const*) */

void DensityMapFilterLua::reportAndFixProblems
               (DensityMap *param_1,uint *param_2,uint *param_3,uint param_4,char *param_5)

{
  DensityMap *pDVar1;
  void *pvVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  basic_string *pbVar8;
  uint uVar9;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar9 = *param_2;
  uVar4 = (**(code **)(*(long *)param_1 + 0x58))();
  if (uVar9 + param_4 < uVar4) {
    uVar9 = *param_2;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 007632c8 to 007632d3 has its CatchHandler @ 00763480 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar7 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
    pDVar1 = param_1 + 0x31;
    if (((byte)param_1[0x30] & 1) != 0) {
      pDVar1 = *(DensityMap **)(param_1 + 0x40);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "%s: firstChannel is beyond range for %u-channel DensityMap %s\n",param_5,
                       uVar7 & 0xffffffff,pDVar1);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00763310 to 0076331b has its CatchHandler @ 0076347c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "%s: firstChannel = %u, numChannels = %u, channelOffset = %u\n",param_5,
                       (ulong)*param_2,(ulong)*param_3,(ulong)param_4);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00763358 to 00763363 has its CatchHandler @ 00763478 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    ScriptSystemManager::getInstance();
    pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::getCallerSite(pbVar8);
    pvVar2 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar2 = local_60;
    }
                    /* try { // try from 00763130 to 00763147 has its CatchHandler @ 0076349c */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "%s: called from %s\n",param_5,pvVar2);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    iVar6 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
    uVar9 = iVar6 - param_4;
    *param_2 = uVar9;
  }
  uVar4 = *param_3;
  uVar5 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  if (uVar5 < uVar9 + param_4 + uVar4) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 007633a0 to 007633ab has its CatchHandler @ 00763474 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar7 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
    pDVar1 = param_1 + 0x31;
    if (((byte)param_1[0x30] & 1) != 0) {
      pDVar1 = *(DensityMap **)(param_1 + 0x40);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "%s: numChannels is beyond range for %u-channel DensityMap %s\n",param_5,
                       uVar7 & 0xffffffff,pDVar1);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 007633e8 to 007633f3 has its CatchHandler @ 00763470 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "%s: firstChannel = %u, numChannels = %u, channelOffset = %u\n",param_5,
                       (ulong)*param_2,(ulong)*param_3,(ulong)param_4);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00763430 to 0076343b has its CatchHandler @ 0076346c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    ScriptSystemManager::getInstance();
    pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::getCallerSite(pbVar8);
    pvVar2 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar2 = local_60;
    }
                    /* try { // try from 00763244 to 0076325b has its CatchHandler @ 00763498 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "%s: called from %s\n",param_5,pvVar2);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    iVar6 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
    *param_3 = iVar6 - (*param_2 + param_4);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


