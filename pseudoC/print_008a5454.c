// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008a5454
// Size: 1044 bytes
// Signature: undefined print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GranularSynthesisRuntimeSettings::print() const */

void GranularSynthesisRuntimeSettings::print(void)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  Logger *pLVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008a5660 to 008a5667 has its CatchHandler @ 008a58c0 */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008a566c to 008a566f has its CatchHandler @ 008a58b0 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "==== GranularSynthesisRuntimeSettings ====\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008a56b0 to 008a56b7 has its CatchHandler @ 008a58ac */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008a56bc to 008a56bf has its CatchHandler @ 008a589c */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Ramp type=%d\n",
                    (ulong)*(uint *)(in_x0 + 0x10));
  lVar8 = *(long *)(in_x0 + 0x30);
  lVar2 = *(long *)(in_x0 + 0x38);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008a56fc to 008a5703 has its CatchHandler @ 008a5898 */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008a5708 to 008a570b has its CatchHandler @ 008a5894 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  uVar7 = lVar2 - lVar8;
  uVar6 = uVar7 >> 4;
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Num grains=%d\n",
                    uVar6 & 0xffffffff);
  if (0 < (int)uVar6) {
    lVar8 = 0;
    uVar5 = 0;
    do {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 008a5570 to 008a5577 has its CatchHandler @ 008a58d4 */
        pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008a557c to 008a557f has its CatchHandler @ 008a58c4 */
        Logger::Logger(pLVar4);
        LogManager::getInstance()::singletonLogManager = pLVar4;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar1 = (uint *)(*(long *)(in_x0 + 0x30) + lVar8);
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        (double)(float)puVar1[2],
                        "\tid=%d wavStartIndex=%d wavEndIndex=%d rpm=%.2f enable=%d\n",(ulong)uVar5,
                        (ulong)*puVar1,(ulong)puVar1[1],(ulong)*(byte *)(puVar1 + 3));
      uVar5 = uVar5 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((uVar7 >> 4 & 0xffffffff) * 0x10 - lVar8 != 0);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008a5748 to 008a574f has its CatchHandler @ 008a5890 */
      pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008a5754 to 008a5757 has its CatchHandler @ 008a588c */
      Logger::Logger(pLVar4);
      LogManager::getInstance()::singletonLogManager = pLVar4;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"window size=%d\n",
                      (ulong)*(uint *)(in_x0 + 8));
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008a5794 to 008a579b has its CatchHandler @ 008a5888 */
      pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008a57a0 to 008a57a3 has its CatchHandler @ 008a5884 */
      Logger::Logger(pLVar4);
      LogManager::getInstance()::singletonLogManager = pLVar4;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"crossfade size=%d\n",
                      (ulong)*(uint *)(in_x0 + 0xc));
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008a57e0 to 008a57e7 has its CatchHandler @ 008a5880 */
      pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008a57ec to 008a57ef has its CatchHandler @ 008a587c */
      Logger::Logger(pLVar4);
      LogManager::getInstance()::singletonLogManager = pLVar4;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "min/max grain size=%d %d\n",(ulong)*(uint *)(in_x0 + 0x50),
                      (ulong)*(uint *)(in_x0 + 0x54));
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008a582c to 008a5833 has its CatchHandler @ 008a5878 */
      pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008a5838 to 008a583b has its CatchHandler @ 008a5868 */
      Logger::Logger(pLVar4);
      LogManager::getInstance()::singletonLogManager = pLVar4;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)*(float *)(in_x0 + 0x48),(double)*(float *)(in_x0 + 0x4c),
                      "min/max RPM=%.2f %.2f\n");
  }
  return;
}


