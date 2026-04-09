// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCrossfadeTimeStopMotorMs
// Entry Point: 008b4d34
// Size: 256 bytes
// Signature: undefined __thiscall setCrossfadeTimeStopMotorMs(LoopSynthesisGenerator * this, uint param_1)


/* LoopSynthesisGenerator::setCrossfadeTimeStopMotorMs(unsigned int) */

void __thiscall
LoopSynthesisGenerator::setCrossfadeTimeStopMotorMs(LoopSynthesisGenerator *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  Logger *this_00;
  uint uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x30);
  uVar3 = (param_1 * 0xac44) / 1000;
  *(uint *)(this + 0x60) = uVar3;
  if (plVar4 != (long *)0x0) {
    uVar1 = *(uint *)(*plVar4 + 0x30);
    if (uVar1 == 0) {
      *(uint *)((long)plVar4 + 0x14) = uVar3;
    }
    else {
      *(undefined4 *)((long)plVar4 + 0x14) = 0;
      if (uVar1 < (param_1 * 0xac44) / 1000) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 008b4df4 to 008b4dfb has its CatchHandler @ 008b4e44 */
          this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b4e00 to 008b4e03 has its CatchHandler @ 008b4e34 */
          Logger::Logger(this_00);
          LogManager::getInstance()::singletonLogManager = this_00;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "> Warning: setCrossfadeTimeStopMotorMs=%dms > %dms. Limit to the duration of the static sound.\n"
                          ,(ulong)param_1,(ulong)(uVar1 * 1000) / 0xac44);
        *(uint *)(this + 0x60) = uVar1;
      }
    }
  }
  return;
}


