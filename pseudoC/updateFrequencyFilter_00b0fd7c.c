// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateFrequencyFilter
// Entry Point: 00b0fd7c
// Size: 692 bytes
// Signature: undefined updateFrequencyFilter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::updateFrequencyFilter() */

void SoftAudioSource::updateFrequencyFilter(void)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long in_x0;
  ulong uVar7;
  char *pcVar8;
  BiquadResonantFilter *this;
  float fVar9;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  SoftAudioDevice::getGroupFrequencyFilter
            (*(SoftAudioDevice **)(in_x0 + 0xa8),*(uint *)(in_x0 + 0xd0),&local_4c,&local_50,
             &local_54,&local_58,&local_5c,&local_60);
  local_4c = *(float *)(in_x0 + 0xf0) * local_4c;
  local_50 = *(float *)(in_x0 + 0xf4) * local_50;
  if (0.0 < *(float *)(in_x0 + 0xf8)) {
    local_54 = *(float *)(in_x0 + 0xf8);
  }
  if (0.0 < *(float *)(in_x0 + 0xfc)) {
    local_58 = *(float *)(in_x0 + 0xfc);
  }
  if (0.0 < *(float *)(in_x0 + 0x100)) {
    local_5c = *(float *)(in_x0 + 0x100);
  }
  if (0.0 < *(float *)(in_x0 + 0x104)) {
    local_60 = *(float *)(in_x0 + 0x104);
  }
  bVar2 = local_4c < 1.0;
  bVar3 = local_50 < 1.0;
  if (bVar2 || bVar3) {
    if (local_4c < 1.0) {
      if (local_50 < 1.0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 00b0fff4 to 00b0ffff has its CatchHandler @ 00b10030 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar8 = "SoftAudioSource: Band Pass filter is currently not supported.\n";
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 00b0ffac to 00b0ffb7 has its CatchHandler @ 00b10034 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar8 = "SoftAudioSource: High Pass filter is currently not supported.\n";
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar8);
      goto LAB_00b0ff74;
    }
    this = *(BiquadResonantFilter **)(in_x0 + 0xc0);
    *(float *)(this + 0x18) = 1.0 - local_50;
    uVar7 = (**(code **)(**(long **)(in_x0 + 0xa8) + 0x28))();
    SoLoud::BiquadResonantFilter::setParams(this,1,(float)(uVar7 & 0xffffffff),local_58,local_60);
    iVar6 = *(int *)(in_x0 + 200);
  }
  else {
    fVar9 = *(float *)(*(long *)(in_x0 + 0xc0) + 0x18);
    *(undefined4 *)(*(long *)(in_x0 + 0xc0) + 0x18) = 0;
    if (fVar9 == 0.0) goto LAB_00b0ff74;
    iVar6 = *(int *)(in_x0 + 200);
  }
  if (iVar6 != 0) {
    SoLoud::Soloud::lockAudioMutex();
    uVar4 = SoLoud::Soloud::getVoiceFromHandle(*(Soloud **)(in_x0 + 0xb8),*(uint *)(in_x0 + 200));
    if (uVar4 != 0xffffffff) {
      uVar5 = SoftAudioDevice::getLowPassFilterSlot();
      SoLoud::Soloud::setVoiceFilterParameter
                ((uint)*(undefined8 *)(in_x0 + 0xb8),uVar4,uVar5,
                 *(float *)(*(long *)(in_x0 + 0xc0) + 0x18));
      if (bVar2 || bVar3) {
        SoLoud::Soloud::setVoiceFilterParameter
                  ((uint)*(undefined8 *)(in_x0 + 0xb8),uVar4,uVar5,local_58);
        SoLoud::Soloud::setVoiceFilterParameter
                  ((uint)*(undefined8 *)(in_x0 + 0xb8),uVar4,uVar5,local_60);
      }
    }
    SoLoud::Soloud::unlockAudioMutex();
  }
LAB_00b0ff74:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


