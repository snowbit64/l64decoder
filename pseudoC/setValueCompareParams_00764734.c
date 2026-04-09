// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setValueCompareParams
// Entry Point: 00764734
// Size: 804 bytes
// Signature: undefined __thiscall setValueCompareParams(DensityMapFilterLua * this, MethodInvocation * param_1)


/* DensityMapFilterLua::setValueCompareParams(MethodInvocation*) */

void __thiscall
DensityMapFilterLua::setValueCompareParams(DensityMapFilterLua *this,MethodInvocation *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  basic_string *pbVar4;
  uint uVar5;
  int iVar6;
  DensityMapFilterLua DVar7;
  uint uVar8;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = *(uint *)param_1;
  if (uVar5 < 6) {
    DVar7 = (DensityMapFilterLua)0x0;
    uVar8 = 0x7fffffff;
    switch(uVar5) {
    case 1:
      uVar8 = *(uint *)(param_1 + 0x10);
      DVar7 = (DensityMapFilterLua)0x0;
      uVar5 = uVar8;
      break;
    case 2:
      uVar5 = *(int *)(param_1 + 0x10) + 1;
      goto LAB_007648c0;
    case 3:
      DVar7 = (DensityMapFilterLua)0x0;
      uVar5 = *(uint *)(param_1 + 0x10);
      uVar8 = 0x7fffffff;
      switch(*(undefined4 *)(param_1 + 0x28)) {
      case 1:
      case 2:
        uVar8 = *(uint *)(param_1 + 0x20);
        DVar7 = (DensityMapFilterLua)0x0;
        break;
      case 4:
        DVar7 = (DensityMapFilterLua)0x0;
        uVar8 = (uint)*(float *)(param_1 + 0x20);
        break;
      case 5:
        DVar7 = (DensityMapFilterLua)0x0;
        uVar8 = (uint)*(double *)(param_1 + 0x20);
      }
      break;
    case 4:
      uVar8 = *(uint *)(param_1 + 0x10);
      DVar7 = (DensityMapFilterLua)0x1;
      uVar5 = uVar8;
      break;
    case 5:
      uVar8 = 0x7fffffff;
      uVar5 = *(uint *)(param_1 + 0x10);
      DVar7 = (DensityMapFilterLua)0x1;
      switch(*(undefined4 *)(param_1 + 0x28)) {
      case 1:
      case 2:
        uVar8 = *(uint *)(param_1 + 0x20);
        DVar7 = (DensityMapFilterLua)0x1;
        break;
      case 4:
        DVar7 = (DensityMapFilterLua)0x1;
        uVar8 = (uint)*(float *)(param_1 + 0x20);
        break;
      case 5:
        DVar7 = (DensityMapFilterLua)0x1;
        uVar8 = (uint)*(double *)(param_1 + 0x20);
      }
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 007649d4 to 007649df has its CatchHandler @ 00764a5c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapFilter: invalid value compare mode %u.\n",(ulong)*(uint *)param_1)
    ;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00764a1c to 00764a27 has its CatchHandler @ 00764a58 */
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
                    /* try { // try from 00764894 to 007648a7 has its CatchHandler @ 00764a74 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapFilter: called from %s\n",pvVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar5 = 0;
LAB_007648c0:
    DVar7 = (DensityMapFilterLua)0x0;
    uVar8 = 0x7fffffff;
  }
  *(uint *)(this + 0x20) = uVar5;
  *(uint *)(this + 0x24) = uVar8;
  iVar3 = 0;
  this[0x28] = DVar7;
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
  case 2:
    iVar3 = *(int *)(param_1 + 0x30);
    break;
  case 4:
    iVar3 = (int)*(float *)(param_1 + 0x30);
    break;
  case 5:
    iVar3 = (int)*(double *)(param_1 + 0x30);
  }
  iVar6 = 0;
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 1:
  case 2:
    iVar6 = *(int *)(param_1 + 0x40);
    break;
  case 4:
    iVar6 = (int)*(float *)(param_1 + 0x40);
    break;
  case 5:
    iVar6 = (int)*(double *)(param_1 + 0x40);
  }
  *(int *)(this + 0x2c) = iVar3;
  *(int *)(this + 0x30) = iVar6;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


