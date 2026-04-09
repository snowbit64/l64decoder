// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cdbac
// Entry Point: 006cdbac
// Size: 1232 bytes
// Signature: undefined FUN_006cdbac(void)


void FUN_006cdbac(long *param_1)

{
  long lVar1;
  QUALCOMM_SGSR_QUALITY QVar2;
  int iVar3;
  long lVar5;
  Renderer *this;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  char *pcVar4;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_1;
  uVar7 = (param_1[1] - lVar5 >> 3) * -0x5555555555555555;
  if (uVar7 < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cde90 to 006cde9b has its CatchHandler @ 006ce084 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    lVar5 = EngineManager::getInstance();
    if (*(uint *)(lVar5 + 0x22c) < 5) {
      puVar6 = &DAT_00516b1c + *(int *)(&DAT_00516b1c + (long)(int)*(uint *)(lVar5 + 0x22c) * 4);
    }
    else {
      puVar6 = &DAT_0050a39f;
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Current SGSR quality %s\n",puVar6);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cded8 to 006cdee3 has its CatchHandler @ 006ce080 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "SGSR Quality Options: ");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cdf20 to 006ce003 has its CatchHandler @ 006ce088 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s,  ",
                      "Ultra Quality");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s,  ","Quality");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s,  ","Balanced");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s,  ","Performance")
    ;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006ce040 to 006ce04b has its CatchHandler @ 006ce07c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004fddf9);
    goto LAB_006cde3c;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (char *)0x0;
  if ((uVar7 & 0xfffffffe) == 0) {
LAB_006cdccc:
    pcVar4 = (char *)((ulong)&local_60 | 1);
  }
  else {
    lVar9 = 0;
    uVar7 = 1;
    do {
      lVar5 = lVar5 + lVar9;
      uVar8 = lVar5 + 0x19;
      if ((*(byte *)(lVar5 + 0x18) & 1) != 0) {
        uVar8 = *(ulong *)(lVar5 + 0x28);
      }
                    /* try { // try from 006cdc5c to 006cdc8b has its CatchHandler @ 006ce0a4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_60,uVar8);
      lVar5 = *param_1;
      uVar7 = uVar7 + 1;
      uVar8 = (ulong)(uint)((int)((ulong)(param_1[1] - lVar5) >> 3) * -0x55555555);
      if (uVar7 < uVar8) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_60);
        lVar5 = *param_1;
        uVar8 = (ulong)(uint)((int)((ulong)(param_1[1] - lVar5) >> 3) * -0x55555555);
      }
      lVar9 = lVar9 + 0x18;
    } while (uVar7 < uVar8);
    pcVar4 = local_50;
    if ((local_60 & 1) == 0) goto LAB_006cdccc;
  }
  QVar2 = HardwareScalability::getSGSRQualityFromString(pcVar4);
                    /* try { // try from 006cddcc to 006cde2b has its CatchHandler @ 006ce0a0 */
  lVar5 = EngineManager::getInstance();
  HardwareScalability::setDLSSQuality((HardwareScalability *)(lVar5 + 0x198),5);
  lVar5 = EngineManager::getInstance();
  HardwareScalability::setXeSSQuality((HardwareScalability *)(lVar5 + 0x198),4);
  lVar5 = EngineManager::getInstance();
  HardwareScalability::setFidelityFxSR20Quality((HardwareScalability *)(lVar5 + 0x198),0);
  lVar5 = EngineManager::getInstance();
  HardwareScalability::setFidelityFxSRQuality((HardwareScalability *)(lVar5 + 0x198),0);
  lVar5 = EngineManager::getInstance();
  HardwareScalability::setFidelityFxSRQuality((HardwareScalability *)(lVar5 + 0x198),0);
  lVar5 = EngineManager::getInstance();
  HardwareScalability::setSGSRQuality((HardwareScalability *)(lVar5 + 0x198),QVar2);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_006cde3c:
  lVar5 = EngineManager::getInstance();
  this = *(Renderer **)(lVar5 + 0xb8);
  this[0xf06] = (Renderer)0x1;
  Renderer::onSettingsChanged(this,*(float *)(this + 0x1ddc),*(float *)(this + 0x1de0));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


