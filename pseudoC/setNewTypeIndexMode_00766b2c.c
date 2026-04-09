// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNewTypeIndexMode
// Entry Point: 00766b2c
// Size: 400 bytes
// Signature: undefined __thiscall setNewTypeIndexMode(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::setNewTypeIndexMode(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::setNewTypeIndexMode(DensityMapModifierLua *this,MethodInvocation *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  basic_string *pbVar4;
  undefined4 uVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = *(int *)param_1;
  if (iVar3 == 2) {
    *(undefined4 *)(this + 0x30) = 0;
  }
  else {
    if (iVar3 == 1) {
      uVar5 = 0xffffffff;
    }
    else {
      if (iVar3 != 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00766c38 to 00766c43 has its CatchHandler @ 00766cc0 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "DensityMapModifier: invalid new type index mode %u.\n",
                           (ulong)*(uint *)param_1);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00766c80 to 00766c8b has its CatchHandler @ 00766cbc */
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
                    /* try { // try from 00766be0 to 00766bf3 has its CatchHandler @ 00766cd8 */
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "DensityMapModifier: called from %s\n",pvVar1);
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        goto LAB_00766c04;
      }
      uVar5 = *(undefined4 *)(this + 0x34);
    }
    *(undefined4 *)(this + 0x30) = uVar5;
  }
LAB_00766c04:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


