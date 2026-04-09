// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initLuminance
// Entry Point: 00a3b2e8
// Size: 632 bytes
// Signature: undefined __thiscall initLuminance(ScreenSpaceProcessor * this, IRenderDevice * param_1, bool param_2)


/* ScreenSpaceProcessor::initLuminance(IRenderDevice*, bool) */

void __thiscall
ScreenSpaceProcessor::initLuminance(ScreenSpaceProcessor *this,IRenderDevice *param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined4 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  char *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long **)(this + 0x1a30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a30) + 8))();
  }
  *(undefined8 *)(this + 0x1a30) = 0;
  if (*(long **)(this + 0x1a38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a38) + 8))();
  }
  *(undefined8 *)(this + 0x1a38) = 0;
  if (*(long **)(this + 0x1a40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a40) + 8))();
  }
  *(undefined8 *)(this + 0x1a40) = 0;
  this[0x1b64] = (ScreenSpaceProcessor)param_2;
  if (param_2) {
LAB_00a3b454:
    uVar3 = 1;
  }
  else {
    local_68 = 0;
    local_50 = "Luminance Histogram Buffer";
    local_60 = 0x10000000004;
    local_58 = 0x2008;
    uVar3 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
    lVar4 = (**(code **)(*(long *)param_1 + 0x120))(param_1,uVar3,&local_68);
    *(long *)(this + 0x1a30) = lVar4;
    if (lVar4 == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00a3b4dc to 00a3b4e7 has its CatchHandler @ 00a3b564 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar5 = "Error: Cannot create Luminance Histogram Struct Buffer\n";
    }
    else {
      local_90 = &local_6c;
      local_78 = "Eye Adapted Exposure Buffer";
      local_6c = 0;
      local_80 = 0x2001;
      local_88 = 0x100000004;
      uVar3 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
      uVar3 = (**(code **)(*(long *)param_1 + 0x120))(param_1,uVar3,&local_90);
      *(undefined8 *)(this + 0x1a38) = uVar3;
      uVar3 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
      lVar4 = (**(code **)(*(long *)param_1 + 0x120))(param_1,uVar3,&local_90);
      *(long *)(this + 0x1a40) = lVar4;
      if ((lVar4 != 0) && (*(long *)(this + 0x1a38) != 0)) goto LAB_00a3b454;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00a3b524 to 00a3b52f has its CatchHandler @ 00a3b560 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar5 = "Error: Cannot create Exposure Struct Buffers\n";
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar5);
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


