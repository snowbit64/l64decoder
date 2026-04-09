// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078a25c
// Entry Point: 0078a25c
// Size: 384 bytes
// Signature: undefined FUN_0078a25c(void)


void FUN_0078a25c(int *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  Logger *this;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = *param_1;
  if (iVar2 - 0xbU < 5) {
    AudioDeviceManager::getInstance();
    plVar3 = (long *)AudioDeviceManager::getCurrentAudioDevice();
    if (plVar3 == (long *)0x0) goto LAB_0078a364;
    uStack_a8 = 0x3f6429073ea1e8a3;
    local_b0 = 0x3f8000003f800000;
    uStack_98 = 0x3f8000003f547ae1;
    local_a0 = 0x3fbeb8523f800000;
    uStack_88 = 0;
    local_90 = 0x3be560423d4cd078;
    uStack_78 = 0x3c343958;
    uStack_80 = 0x3fa1249e00000000;
    uStack_68 = 0x3e800000;
    local_70 = 0;
    uStack_58 = 0x459c40003f7e87d3;
    uStack_60 = 0x3e800000;
    local_50 = 0x437a0000;
    local_48 = 1;
    (**(code **)(*plVar3 + 0x68))(plVar3,iVar2,&local_b0);
    param_1[0x40] = (int)uStack_a8;
    param_1[0x42] = 4;
    param_1[0x44] = uStack_a8._4_4_;
    param_1[0x46] = 4;
    param_1[0x48] = (int)local_a0;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0078a398 to 0078a39f has its CatchHandler @ 0078a3ec */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 0078a3a4 to 0078a3a7 has its CatchHandler @ 0078a3dc */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning (getReverbGainPreset): Invalid reverb preset type\n");
    param_1[0x40] = 0;
    param_1[0x44] = 0;
    param_1[0x48] = 0;
    param_1[0x42] = 4;
    param_1[0x46] = 4;
  }
  param_1[0x4a] = 4;
LAB_0078a364:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


