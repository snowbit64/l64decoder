// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078a0b0
// Entry Point: 0078a0b0
// Size: 388 bytes
// Signature: undefined FUN_0078a0b0(void)


void FUN_0078a0b0(int *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  Logger *this;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = *param_1;
  if (iVar2 - 0xbU < 5) {
    AudioDeviceManager::getInstance();
    plVar3 = (long *)AudioDeviceManager::getCurrentAudioDevice();
    if (plVar3 != (long *)0x0) {
      local_40 = 0;
      local_48 = 0;
      local_50 = 0;
      local_58 = 0;
      (**(code **)(*plVar3 + 0x60))
                (0x3f800000,0x3f800000,param_1[4],param_1[8],param_1[0xc],param_1[0x10],
                 param_1[0x14],0x3f800000,plVar3,iVar2,&local_48,&local_58);
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0078a1f0 to 0078a1f7 has its CatchHandler @ 0078a244 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 0078a1fc to 0078a1ff has its CatchHandler @ 0078a234 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning (setReverbPreset): Invalid reverb preset type\n");
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


