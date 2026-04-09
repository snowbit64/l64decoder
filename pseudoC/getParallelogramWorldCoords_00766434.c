// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getParallelogramWorldCoords
// Entry Point: 00766434
// Size: 484 bytes
// Signature: undefined __thiscall getParallelogramWorldCoords(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::getParallelogramWorldCoords(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::getParallelogramWorldCoords
          (DensityMapModifierLua *this,MethodInvocation *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  basic_string *pbVar4;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(BaseTerrain **)(this + 0x28) == (BaseTerrain *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00766594 to 0076659f has its CatchHandler @ 0076661c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapModifier: can\'t translate from world coords without a terrain object.\n"
                      );
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 007665dc to 007665e7 has its CatchHandler @ 00766618 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    ScriptSystemManager::getInstance();
    pbVar4 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::getCallerSite(pbVar4);
    uVar1 = (ulong)&local_50 | 1;
    if (((uint)local_50 & 1) != 0) {
      uVar1 = CONCAT44(fStack_3c,local_40);
    }
                    /* try { // try from 0076653c to 0076654f has its CatchHandler @ 00766634 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapModifier: called from %s\n",uVar1);
    if ((local_50._0_1_ & 1) != 0) {
      operator_delete((void *)CONCAT44(fStack_3c,local_40));
    }
  }
  else {
    DensityMapOperationShapes::localPointFromUV
              (*(BaseTerrain **)(this + 0x28),*(float *)(this + 8),*(float *)(this + 0xc),&local_50,
               &fStack_4c);
    DensityMapOperationShapes::localVectorFromUV
              (*(BaseTerrain **)(this + 0x28),*(float *)(this + 0x10),*(float *)(this + 0x14),
               &local_48,&fStack_44);
    DensityMapOperationShapes::localVectorFromUV
              (*(BaseTerrain **)(this + 0x28),*(float *)(this + 0x18),*(float *)(this + 0x1c),
               &local_40,&fStack_3c);
    *(float *)(param_1 + 0x100) = local_50;
    *(float *)(param_1 + 0x110) = fStack_4c;
    *(undefined4 *)(param_1 + 0x108) = 4;
    *(undefined4 *)(param_1 + 0x118) = 4;
    *(float *)(param_1 + 0x130) = fStack_44;
    *(float *)(param_1 + 0x120) = local_48;
    *(undefined4 *)(param_1 + 0x128) = 4;
    *(undefined4 *)(param_1 + 0x138) = 4;
    *(float *)(param_1 + 0x140) = local_40;
    *(undefined4 *)(param_1 + 0x148) = 4;
    *(float *)(param_1 + 0x150) = fStack_3c;
    *(undefined4 *)(param_1 + 0x158) = 4;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


