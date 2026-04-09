// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTypeIndexCompareMode
// Entry Point: 00764500
// Size: 368 bytes
// Signature: undefined __thiscall setTypeIndexCompareMode(DensityMapFilterLua * this, MethodInvocation * param_1)


/* DensityMapFilterLua::setTypeIndexCompareMode(MethodInvocation*) */

void __thiscall
DensityMapFilterLua::setTypeIndexCompareMode(DensityMapFilterLua *this,MethodInvocation *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  basic_string *pbVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)param_1 < 3) {
    *(int *)(this + 0x10) = *(int *)param_1;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 007645ec to 007645f7 has its CatchHandler @ 00764674 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapFilter: invalid type compare mode %u.\n",(ulong)*(uint *)param_1);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00764634 to 0076463f has its CatchHandler @ 00764670 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    ScriptSystemManager::getInstance();
    pbVar4 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::getCallerSite(pbVar4);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
                    /* try { // try from 00764594 to 007645a7 has its CatchHandler @ 0076468c */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapFilter: called from %s\n",pvVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


