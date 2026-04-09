// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activateElementAt
// Entry Point: 00a4c170
// Size: 928 bytes
// Signature: undefined __thiscall activateElementAt(AudioSourceSample * this, uint param_1, IAudioDevice * param_2)


/* AudioSourceSample::activateElementAt(unsigned int, IAudioDevice&) */

void __thiscall
AudioSourceSample::activateElementAt(AudioSourceSample *this,uint param_1,IAudioDevice *param_2)

{
  uint *puVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  LoopSynthesisDataExchanger *pLVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  AudioSourceSample AVar10;
  long lVar11;
  long local_c0;
  AudioSourceSample local_b8;
  undefined local_b7;
  undefined8 local_b0;
  ulong local_a8;
  undefined4 local_a0;
  void *local_98;
  undefined4 local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)param_1 * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)param_1 * 0x38);
  }
  lVar11 = *(long *)(puVar1 + 10);
  if (lVar11 == 0) {
    uVar4 = (**(code **)(**(long **)(*(long *)(puVar1 + 8) + 0x48) + 0x10))();
    AVar10 = this[0x31];
    if ((AVar10 != (AudioSourceSample)0x0) &&
       (AVar10 = (AudioSourceSample)0x1, uVar4 < 6 && (1 << (ulong)(uVar4 & 0x1f) & 0x2aU) != 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00a4c48c to 00a4c497 has its CatchHandler @ 00a4c524 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      lVar11 = (long)puVar1 + 9;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        lVar11 = *(long *)(puVar1 + 6);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: 3D stereo audio files are not supported. Convert \'%s\' to mono.\n"
                        ,lVar11);
      AVar10 = this[0x31];
    }
    local_b0 = *(undefined8 *)(*(long *)(puVar1 + 8) + 0x48);
    local_a8 = CONCAT71((int7)(local_a8 >> 8),AVar10) & 0xffffffffffff00ff;
    uVar9 = (**(code **)(*(long *)param_2 + 0x38))(param_2,&local_b0);
    *(undefined8 *)(puVar1 + 0xc) = uVar9;
  }
  else {
    pLVar6 = (LoopSynthesisDataExchanger *)LoopSynthesisResource::getLoopSynthesisData();
    uVar7 = LoopSynthesisGenerator::load((LoopSynthesisGenerator *)(lVar11 + 0x10),pLVar6);
    if ((uVar7 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00a4c444 to 00a4c44f has its CatchHandler @ 00a4c528 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      lVar11 = (long)puVar1 + 9;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        lVar11 = *(long *)(puVar1 + 6);
      }
      lVar8 = LoopSynthesisResource::getLoopSynthesisData();
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: failed to load LoopSynthesisSample from file \'%s\' version %d.\n",
                         lVar11,(ulong)*(uint *)(lVar8 + 4));
    }
    else {
      *(LoopSynthesisGenerator **)(lVar11 + 0x98) = (LoopSynthesisGenerator *)(lVar11 + 0x10);
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uStack_70 = 0;
      local_b0 = CONCAT35(local_b0._5_3_,0x100000002);
      local_a8 = 0;
      local_68 = 0;
      local_60 = 0;
      local_a0 = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
                    /* try { // try from 00a4c228 to 00a4c237 has its CatchHandler @ 00a4c544 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_88);
      local_60 = lVar11 + 0x90;
      local_64 = 0x3f800000;
      local_b0 = CONCAT44(local_b0._4_4_,4);
                    /* try { // try from 00a4c250 to 00a4c283 has its CatchHandler @ 00a4c560 */
      uVar3 = LoopSynthesisGenerator::getFrequency();
      local_a8 = CONCAT44(1,uVar3);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_88);
      lVar8 = (**(code **)(*(long *)param_2 + 0x30))(param_2,&local_b0);
      *(long *)(lVar11 + 8) = lVar8;
      if (lVar8 == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 00a4c4d4 to 00a4c4df has its CatchHandler @ 00a4c510 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        lVar11 = (long)puVar1 + 9;
        if ((*(byte *)(puVar1 + 2) & 1) != 0) {
          lVar11 = *(long *)(puVar1 + 6);
        }
                    /* try { // try from 00a4c3cc to 00a4c3df has its CatchHandler @ 00a4c560 */
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: failed to createAudioBuffer(...) for file \'%s\'.\n",lVar11);
      }
      else {
        local_b7 = 0;
        local_b8 = this[0x31];
        local_c0 = lVar8;
                    /* try { // try from 00a4c2a4 to 00a4c2af has its CatchHandler @ 00a4c540 */
        uVar9 = (**(code **)(*(long *)param_2 + 0x38))(param_2,&local_c0);
        *(undefined8 *)(puVar1 + 0xc) = uVar9;
      }
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(long *)(puVar1 + 0xc) != 0);
}


