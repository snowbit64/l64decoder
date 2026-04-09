// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAudioDevice
// Entry Point: 00b07938
// Size: 388 bytes
// Signature: undefined __cdecl createAudioDevice(AUDIO_DEVICE_TYPE param_1, bool param_2, bool param_3, uint param_4)


/* AudioDeviceManager::createAudioDevice(AudioDeviceManager::AUDIO_DEVICE_TYPE, bool, bool, unsigned
   int) */

long * AudioDeviceManager::createAudioDevice
                 (AUDIO_DEVICE_TYPE param_1,bool param_2,bool param_3,uint param_4)

{
  AUDIO_DEVICE_TYPE AVar1;
  long lVar2;
  int iVar3;
  long *this;
  ulong uVar4;
  uint uVar5;
  long local_58;
  uint local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  AVar1 = s_bestDeviceType;
  if (param_1 != 2) {
    AVar1 = param_1;
  }
  if (AVar1 == 0) {
    this = (long *)operator_new(0x2368);
                    /* try { // try from 00b079a0 to 00b079a3 has its CatchHandler @ 00b07ad4 */
    SoftAudioDevice::SoftAudioDevice((SoftAudioDevice *)this);
  }
  else {
    this = (long *)operator_new(0x28);
                    /* try { // try from 00b0798c to 00b0798f has its CatchHandler @ 00b07ad8 */
    NullAudioDevice::NullAudioDevice((NullAudioDevice *)this);
  }
  local_58 = 0;
  if (param_2) {
    uVar5 = 1;
    if (param_3) {
      uVar5 = 2;
    }
    local_58 = (ulong)uVar5 << 0x20;
  }
                    /* try { // try from 00b079c8 to 00b07a0f has its CatchHandler @ 00b07af0 */
  local_50 = param_4;
  uVar4 = (**(code **)(*this + 0x10))(this,&local_58);
  if (((uVar4 & 1) == 0) || (uVar4 = (**(code **)(*this + 0x120))(this), (uVar4 & 1) != 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b07a80 to 00b07a8b has its CatchHandler @ 00b07abc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Failed to initialize sound system. Defaulting to NULL device.\n");
    (**(code **)(*this + 8))(this);
                    /* try { // try from 00b07a20 to 00b07a27 has its CatchHandler @ 00b07af0 */
    this = (long *)operator_new(0x28);
                    /* try { // try from 00b07a2c to 00b07a2f has its CatchHandler @ 00b07adc */
    NullAudioDevice::NullAudioDevice((NullAudioDevice *)this);
                    /* try { // try from 00b07a38 to 00b07a43 has its CatchHandler @ 00b07af0 */
    (**(code **)(*this + 0x10))(this,&local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


