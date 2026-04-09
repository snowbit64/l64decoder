// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPolygonRoundingMode
// Entry Point: 00766914
// Size: 456 bytes
// Signature: undefined __thiscall setPolygonRoundingMode(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::setPolygonRoundingMode(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::setPolygonRoundingMode(DensityMapModifierLua *this,MethodInvocation *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  basic_string *pbVar4;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x20) == 3) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00766a10 to 00766a1b has its CatchHandler @ 00766ae4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "DensityMapModifier: density map is configured for vertex operations; no rounding type options are available.\n"
                     );
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00766a58 to 00766a63 has its CatchHandler @ 00766ae0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "DensityMapModifier: vertex operations always use round-to-nearest mode.\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00766aa0 to 00766aab has its CatchHandler @ 00766adc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    ScriptSystemManager::getInstance();
    pbVar4 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::getCallerSite(pbVar4);
    pvVar1 = (void *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      pvVar1 = local_30;
    }
                    /* try { // try from 007669b0 to 007669c3 has its CatchHandler @ 00766afc */
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "DensityMapModifier: called from %s\n",pvVar1);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    *(undefined4 *)(this + 0x20) = *(undefined4 *)param_1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


