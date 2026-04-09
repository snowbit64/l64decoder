// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 008c0084
// Size: 316 bytes
// Signature: undefined __thiscall play(StreamedSample * this, uint param_1)


/* StreamedSample::play(unsigned int) */

undefined8 __thiscall StreamedSample::play(StreamedSample *this,uint param_1)

{
  int iVar1;
  long *plVar2;
  Logger *pLVar3;
  char *pcVar4;
  
  if (this[0x28] == (StreamedSample)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager,param_1),
       iVar1 != 0)) {
                    /* try { // try from 008c0130 to 008c0137 has its CatchHandler @ 008c01d8 */
      pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 008c013c to 008c013f has its CatchHandler @ 008c01c8 */
      Logger::Logger(pLVar3);
      LogManager::getInstance()::singletonLogManager = pLVar3;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar4 = "Error: Can\'t play stream sample, no file loaded.\n";
  }
  else {
    plVar2 = *(long **)(this + 0x38);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(*(undefined4 *)(this + 0x2c),0x3f800000,0,0,plVar2,param_1,0);
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager,param_1),
       iVar1 != 0)) {
                    /* try { // try from 008c0180 to 008c0187 has its CatchHandler @ 008c01c4 */
      pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 008c018c to 008c018f has its CatchHandler @ 008c01c0 */
      Logger::Logger(pLVar3);
      LogManager::getInstance()::singletonLogManager = pLVar3;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar4 = "Error: streamed sampled play.\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar4);
  return 0;
}


