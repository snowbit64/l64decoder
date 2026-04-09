// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008b0090
// Size: 456 bytes
// Signature: undefined print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSoundRuntimeSettings::print() const */

void StaticSoundRuntimeSettings::print(void)

{
  byte *pbVar1;
  char *pcVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  byte *in_x0;
  Logger *pLVar6;
  float fVar7;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 008b0180 to 008b0187 has its CatchHandler @ 008b0284 */
    pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b018c to 008b018f has its CatchHandler @ 008b0274 */
    Logger::Logger(pLVar6);
    LogManager::getInstance()::singletonLogManager = pLVar6;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "==== StaticSoundRuntimeSettings ====\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 008b01d0 to 008b01d7 has its CatchHandler @ 008b0270 */
    pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b01dc to 008b01df has its CatchHandler @ 008b0260 */
    Logger::Logger(pLVar6);
    LogManager::getInstance()::singletonLogManager = pLVar6;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  uVar3 = *(ulong *)(in_x0 + 8);
  pbVar4 = *(byte **)(in_x0 + 0x10);
  if ((*in_x0 & 1) == 0) {
    pbVar4 = in_x0 + 1;
    uVar3 = (ulong)(*in_x0 >> 1);
  }
  pbVar1 = &DAT_004e9d3b;
  if (uVar3 != 0) {
    pbVar1 = pbVar4;
  }
  pcVar2 = "ogg";
  if (*(int *)(in_x0 + 0x28) != 1) {
    pcVar2 = "16bit pcm";
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "filename=%s format=%s numSamples=%d bytes=%d\n",pbVar1,pcVar2,
                    (ulong)*(uint *)(in_x0 + 0x30),(ulong)*(uint *)(in_x0 + 0x2c));
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 008b021c to 008b0223 has its CatchHandler @ 008b025c */
    pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b0228 to 008b022b has its CatchHandler @ 008b0258 */
    Logger::Logger(pLVar6);
    LogManager::getInstance()::singletonLogManager = pLVar6;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  fVar7 = log10f(*(float *)(in_x0 + 0x38));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)(fVar7 * 20.0),
                    "gain dB=%.2f\n");
  return;
}


