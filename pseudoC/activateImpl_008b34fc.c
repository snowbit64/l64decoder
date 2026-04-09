// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activateImpl
// Entry Point: 008b34fc
// Size: 320 bytes
// Signature: undefined __thiscall activateImpl(StaticSample * this, IAudioDevice * param_1)


/* StaticSample::activateImpl(IAudioDevice&) */

void __thiscall StaticSample::activateImpl(StaticSample *this,IAudioDevice *param_1)

{
  StaticSample *pSVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  Logger *this_00;
  undefined8 local_48;
  StaticSample local_40;
  undefined local_3f;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(**(long **)(*(long *)(this + 0x70) + 0x48) + 0x10))();
  local_40 = this[0x31];
  if ((local_40 != (StaticSample)0x0) &&
     (local_40 = (StaticSample)0x1, uVar3 < 6 && (1 << (ulong)(uVar3 & 0x1f) & 0x2aU) != 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008b35f8 to 008b35ff has its CatchHandler @ 008b364c */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b3604 to 008b3607 has its CatchHandler @ 008b363c */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pSVar1 = this + 0x81;
    if (((byte)this[0x80] & 1) != 0) {
      pSVar1 = *(StaticSample **)(this + 0x90);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: 3D stereo audio files are not supported. Convert \'%s\' to mono.\n",
                      pSVar1);
    local_40 = this[0x31];
  }
  local_3f = 0;
  local_48 = *(undefined8 *)(*(long *)(this + 0x70) + 0x48);
  uVar5 = (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_48);
  *(undefined8 *)(this + 0x78) = uVar5;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


