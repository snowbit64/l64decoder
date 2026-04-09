// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGroupFrequencyFilter
// Entry Point: 00b0d3e0
// Size: 300 bytes
// Signature: undefined __thiscall getGroupFrequencyFilter(SoftAudioDevice * this, uint param_1, float * param_2, float * param_3, float * param_4, float * param_5, float * param_6, float * param_7)


/* SoftAudioDevice::getGroupFrequencyFilter(unsigned int, float&, float&, float&, float&, float&,
   float&) const */

void __thiscall
SoftAudioDevice::getGroupFrequencyFilter
          (SoftAudioDevice *this,uint param_1,float *param_2,float *param_3,float *param_4,
          float *param_5,float *param_6,float *param_7)

{
  int iVar1;
  Logger *this_00;
  float fVar2;
  
  if (param_1 < 0x80) {
    *param_2 = *(float *)(this + (ulong)param_1 * 0x18 + 0xf60);
    *param_3 = *(float *)(this + (ulong)param_1 * 0x18 + 0xf64);
    *param_4 = *(float *)(this + (ulong)param_1 * 0x18 + 0xf68);
    *param_5 = *(float *)(this + (ulong)param_1 * 0x18 + 0xf6c);
    *param_6 = *(float *)(this + (ulong)param_1 * 0x18 + 0xf70);
    fVar2 = *(float *)(this + (ulong)param_1 * 0x18 + 0xf74);
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b0d4cc to 00b0d4d3 has its CatchHandler @ 00b0d51c */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b0d4d8 to 00b0d4db has its CatchHandler @ 00b0d50c */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "SoftAudioDevice groupId must be less than %u.",0x80);
    fVar2 = 2.0;
    *param_2 = 1.0;
    *param_3 = 1.0;
    *param_4 = 5000.0;
    *param_5 = 5000.0;
    *param_6 = 2.0;
  }
  *param_7 = fVar2;
  return;
}


