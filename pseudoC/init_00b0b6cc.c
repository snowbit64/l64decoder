// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b0b6cc
// Size: 812 bytes
// Signature: undefined __thiscall init(SoftAudioDevice * this, AudioDeviceDesc * param_1)


/* SoftAudioDevice::init(AudioDeviceDesc const&) */

bool __thiscall SoftAudioDevice::init(SoftAudioDevice *this,AudioDeviceDesc *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  Soloud *this_00;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  
  uVar2 = *(uint *)param_1;
  this_00 = (Soloud *)operator_new(0x224f8);
                    /* try { // try from 00b0b6fc to 00b0b6ff has its CatchHandler @ 00b0ba20 */
  SoLoud::Soloud::Soloud(this_00);
  *(Soloud **)(this + 8) = this_00;
  if (5 < uVar2 - 1) {
    uVar2 = 0;
  }
  uVar3 = AndroidSysUtil::getAudioSampleRate();
  iVar4 = SoLoud::Soloud::init((uint)*(undefined8 *)(this + 8),1,0,uVar3,0,uVar2);
  if (iVar4 == 0) {
    SoLoud::Soloud::setMaxActiveVoiceCount(*(Soloud **)(this + 8),0x100);
    iVar5 = SoLoud::Soloud::getBackendSpeakerConfig();
    if (iVar5 - 1U < 6) {
      pcVar9 = &DAT_005247fc + *(int *)(&DAT_005247fc + (long)(int)(iVar5 - 1U) * 4);
    }
    else {
      iVar5 = 2;
      pcVar9 = "Stereo";
    }
    *(int *)(this + 0x1bc4) = iVar5;
    uVar6 = SoLoud::Soloud::getBackendSamplerate();
    iVar5 = *(int *)(param_1 + 4);
    *(undefined4 *)(this + 0x1bc8) = uVar6;
    if (iVar5 == 0) {
      pcVar7 = (char *)SoLoud::Soloud::getBackendString();
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00b0b8a0 to 00b0b8ab has its CatchHandler @ 00b0ba08 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Audio System\n");
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00b0b8e8 to 00b0b8f3 has its CatchHandler @ 00b0ba04 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar1 = "Default";
      if (pcVar7 != (char *)0x0) {
        pcVar1 = pcVar7;
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "  Driver: SoftMixer %s %s\n",pcVar1,pcVar9);
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00b0b930 to 00b0b93b has its CatchHandler @ 00b0ba00 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Version: %d.%d\n"
                        ,0x7e2,0xb);
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00b0b978 to 00b0b983 has its CatchHandler @ 00b0b9fc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar8 = SoLoud::Soloud::getBackendSamplerate();
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Frequency: %u\n",
                        uVar8 & 0xffffffff);
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00b0b9c0 to 00b0b9cb has its CatchHandler @ 00b0b9f8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "  Max. active sources: %u\n",0x100);
    }
  }
  return iVar4 == 0;
}


