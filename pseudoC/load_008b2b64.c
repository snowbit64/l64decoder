// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 008b2b64
// Size: 236 bytes
// Signature: undefined __thiscall load(Sample * this, char * param_1, bool param_2, STREAM_QUEUE param_3)


/* Sample::load(char const*, bool, StreamManager::STREAM_QUEUE) */

undefined4 __thiscall Sample::load(Sample *this,char *param_1,bool param_2,STREAM_QUEUE param_3)

{
  int iVar1;
  ulong uVar2;
  StreamManager *this_00;
  Logger *this_01;
  
  if (this[0x30] == (Sample)0x0) {
    uVar2 = (**(code **)(*(long *)this + 0x80))(this,param_1,param_3);
    if ((uVar2 & 1) != 0) {
      this[0x31] = (Sample)param_2;
      this[0x30] = (Sample)0x1;
      this_00 = (StreamManager *)StreamManager::getInstance();
      StreamManager::addStreamable(this_00,(Streamable *)(this + 0x20),param_3);
      return 1;
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b2c10 to 008b2c17 has its CatchHandler @ 008b2c60 */
      this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b2c1c to 008b2c1f has its CatchHandler @ 008b2c50 */
      Logger::Logger(this_01);
      LogManager::getInstance()::singletonLogManager = this_01;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Sample file already loaded, unload before loading another file.\n");
  }
  return 0;
}


