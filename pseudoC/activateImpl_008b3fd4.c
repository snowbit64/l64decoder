// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activateImpl
// Entry Point: 008b3fd4
// Size: 608 bytes
// Signature: undefined __thiscall activateImpl(LoopSynthesisSample * this, IAudioDevice * param_1)


/* LoopSynthesisSample::activateImpl(IAudioDevice&) */

void __thiscall LoopSynthesisSample::activateImpl(LoopSynthesisSample *this,IAudioDevice *param_1)

{
  LoopSynthesisSample *pLVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  LoopSynthesisDataExchanger *pLVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_b0;
  undefined local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  void *local_98;
  undefined4 local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  LoopSynthesisSample *local_60;
  long local_58;
  LoopSynthesisSample local_50;
  undefined local_4f;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pLVar5 = (LoopSynthesisDataExchanger *)LoopSynthesisResource::getLoopSynthesisData();
  uVar6 = LoopSynthesisGenerator::load((LoopSynthesisGenerator *)(this + 0x80),pLVar5);
  if ((uVar6 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008b41b0 to 008b41bb has its CatchHandler @ 008b4248 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pLVar1 = this + 0x121;
    if (((byte)this[0x120] & 1) != 0) {
      pLVar1 = *(LoopSynthesisSample **)(this + 0x130);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: failed to activate LoopSynthesisSample from file \'%s\'.\n",pLVar1);
  }
  else {
    *(LoopSynthesisGenerator **)(this + 0x108) = (LoopSynthesisGenerator *)(this + 0x80);
    local_88 = 0;
    uStack_80 = 0;
    local_b0 = 2;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_ac = 1;
    local_a8 = 0;
    local_68 = 0;
    local_60 = (LoopSynthesisSample *)0x0;
    local_a0 = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
                    /* try { // try from 008b4058 to 008b4067 has its CatchHandler @ 008b4264 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_88);
    local_60 = this + 0x100;
    local_64 = 0x3f800000;
    local_b0 = 4;
                    /* try { // try from 008b4080 to 008b40b3 has its CatchHandler @ 008b4280 */
    uVar3 = LoopSynthesisGenerator::getFrequency();
    local_a8 = CONCAT44(1,uVar3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_88);
    lVar7 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_b0);
    *(long *)(this + 0x78) = lVar7;
    if (lVar7 == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 008b41f8 to 008b4203 has its CatchHandler @ 008b4234 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pLVar1 = this + 0x121;
      if (((byte)this[0x120] & 1) != 0) {
        pLVar1 = *(LoopSynthesisSample **)(this + 0x130);
      }
                    /* try { // try from 008b4148 to 008b415b has its CatchHandler @ 008b4280 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: failed to createAudioBuffer(...) for file \'%s\'.\n",pLVar1);
    }
    else {
      local_4f = 0;
      local_50 = this[0x31];
                    /* try { // try from 008b40d4 to 008b40df has its CatchHandler @ 008b4260 */
      local_58 = lVar7;
      uVar8 = (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_58);
      *(undefined8 *)(this + 0x118) = uVar8;
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


