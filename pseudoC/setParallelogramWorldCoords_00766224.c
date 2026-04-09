// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParallelogramWorldCoords
// Entry Point: 00766224
// Size: 472 bytes
// Signature: undefined __thiscall setParallelogramWorldCoords(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::setParallelogramWorldCoords(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::setParallelogramWorldCoords
          (DensityMapModifierLua *this,MethodInvocation *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  basic_string *pbVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(BaseTerrain **)(this + 0x28) == (BaseTerrain *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00766378 to 00766383 has its CatchHandler @ 00766400 */
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
                    /* try { // try from 007663c0 to 007663cb has its CatchHandler @ 007663fc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    ScriptSystemManager::getInstance();
    pbVar4 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::getCallerSite(pbVar4);
    pvVar1 = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pvVar1 = local_50;
    }
                    /* try { // try from 0076631c to 0076632f has its CatchHandler @ 00766418 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapModifier: called from %s\n",pvVar1);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    fVar5 = *(float *)param_1;
    fVar6 = *(float *)(param_1 + 0x10);
    fVar9 = *(float *)(param_1 + 0x20);
    fVar10 = *(float *)(param_1 + 0x30);
    fVar7 = *(float *)(param_1 + 0x40);
    fVar8 = *(float *)(param_1 + 0x50);
    if (*(int *)(param_1 + 0x60) == 0) {
      fVar9 = fVar9 - fVar5;
      fVar10 = fVar10 - fVar6;
      fVar7 = fVar7 - fVar5;
      fVar8 = fVar8 - fVar6;
    }
    DensityMapOperationShapes::localPointToUV
              (*(BaseTerrain **)(this + 0x28),fVar5,fVar6,(float *)(this + 8),(float *)(this + 0xc))
    ;
    DensityMapOperationShapes::localVectorToUV
              (*(BaseTerrain **)(this + 0x28),fVar9,fVar10,(float *)(this + 0x10),
               (float *)(this + 0x14));
    DensityMapOperationShapes::localVectorToUV
              (*(BaseTerrain **)(this + 0x28),fVar7,fVar8,(float *)(this + 0x18),
               (float *)(this + 0x1c));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


