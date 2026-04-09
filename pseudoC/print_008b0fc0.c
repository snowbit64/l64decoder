// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008b0fc0
// Size: 296 bytes
// Signature: undefined print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SteadyLoopRuntimeSettings::LoopData::print() const */

void SteadyLoopRuntimeSettings::LoopData::print(void)

{
  ulong uVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  byte *in_x0;
  Logger *this;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 008b10a8 to 008b10af has its CatchHandler @ 008b10f8 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 008b10b4 to 008b10b7 has its CatchHandler @ 008b10e8 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  pbVar4 = *(byte **)(in_x0 + 0x10);
  bVar5 = (*in_x0 & 1) != 0;
  fVar9 = *(float *)(in_x0 + 0x18);
  fVar10 = *(float *)(in_x0 + 0x1c);
  fVar8 = *(float *)(in_x0 + 0x20);
  uVar1 = (ulong)(*in_x0 >> 1);
  if (bVar5) {
    uVar1 = *(ulong *)(in_x0 + 8);
  }
  if (!bVar5) {
    pbVar4 = in_x0 + 1;
  }
  pbVar2 = &DAT_004e9d3b;
  if (uVar1 != 0) {
    pbVar2 = pbVar4;
  }
  pcVar3 = "ogg";
  if (*(int *)(in_x0 + 0x38) != 1) {
    pcVar3 = "16bit pcm";
  }
  fVar7 = log10f(*(float *)(in_x0 + 0x24));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar8,
                    (double)fVar9,(double)fVar10,
                    "filename=%s format=%s rpmRoot=%.2f rpmMin=%.2f rpmMax=%.2f gainDb=%d numSamples=%d bytes=%d\n"
                    ,pbVar2,pcVar3,(int)(fVar7 * 20.0),(ulong)*(uint *)(in_x0 + 0x40),
                    (ulong)*(uint *)(in_x0 + 0x3c));
  return;
}


