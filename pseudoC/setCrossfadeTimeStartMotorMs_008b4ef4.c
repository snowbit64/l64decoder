// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCrossfadeTimeStartMotorMs
// Entry Point: 008b4ef4
// Size: 256 bytes
// Signature: undefined __thiscall setCrossfadeTimeStartMotorMs(LoopSynthesisGenerator * this, uint param_1)


/* LoopSynthesisGenerator::setCrossfadeTimeStartMotorMs(unsigned int) */

void __thiscall
LoopSynthesisGenerator::setCrossfadeTimeStartMotorMs(LoopSynthesisGenerator *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  Logger *this_00;
  uint uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x28);
  uVar3 = (param_1 * 0xac44) / 1000;
  *(uint *)(this + 0x5c) = uVar3;
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
                    /* try { // try from 008b4fb4 to 008b4fbb has its CatchHandler @ 008b5004 */
          this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b4fc0 to 008b4fc3 has its CatchHandler @ 008b4ff4 */
          Logger::Logger(this_00);
          LogManager::getInstance()::singletonLogManager = this_00;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "> Warning: setCrossfadeTimeStartMotorMs=%dms > %dms. Limit to the duration of the static sound.\n"
                          ,(ulong)param_1,(ulong)(uVar1 * 1000) / 0xac44);
        *(uint *)(this + 0x5c) = uVar1;
      }
    }
  }
  return;
}


