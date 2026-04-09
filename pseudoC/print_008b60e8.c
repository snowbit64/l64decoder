// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008b60e8
// Size: 2268 bytes
// Signature: undefined print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::print() const */

void LoopSynthesisGenerator::print(void)

{
  int iVar1;
  long **in_x0;
  Logger *pLVar2;
  float fVar3;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b6478 to 008b647f has its CatchHandler @ 008b6a74 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b6484 to 008b6487 has its CatchHandler @ 008b6a64 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "================================================\n");
  if (*in_x0 != (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b66dc to 008b66e3 has its CatchHandler @ 008b6a1c */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b66e8 to 008b66eb has its CatchHandler @ 008b6a18 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "== Acceleration ramp ==\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b6728 to 008b672f has its CatchHandler @ 008b6a14 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b6734 to 008b6737 has its CatchHandler @ 008b6a04 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    fVar3 = (float)(**(code **)(**in_x0 + 0x28))();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar3,
                      "min rpm: %.2f\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b6774 to 008b677b has its CatchHandler @ 008b6a00 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b6780 to 008b6783 has its CatchHandler @ 008b69fc */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    fVar3 = (float)(**(code **)(**in_x0 + 0x30))();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar3,
                      "max rpm: %.2f\n");
  }
  if (in_x0[1] != (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b67c0 to 008b67c7 has its CatchHandler @ 008b69f8 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b67cc to 008b67cf has its CatchHandler @ 008b69f4 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "== Deceleration ramp ==\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b680c to 008b6813 has its CatchHandler @ 008b69f0 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b6818 to 008b681b has its CatchHandler @ 008b69ec */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    fVar3 = (float)(**(code **)(*in_x0[1] + 0x28))();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar3,
                      "min rpm: %.2f\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b6858 to 008b685f has its CatchHandler @ 008b69e8 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b6864 to 008b6867 has its CatchHandler @ 008b69e4 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    fVar3 = (float)(**(code **)(*in_x0[1] + 0x30))();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar3,
                      "max rpm: %.2f\n");
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b64c8 to 008b64cf has its CatchHandler @ 008b6a60 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b64d4 to 008b64d7 has its CatchHandler @ 008b6a50 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"== Start Sound ==\n");
  StaticSoundRuntimeSettings::print();
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b6514 to 008b651b has its CatchHandler @ 008b6a4c */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b6520 to 008b6523 has its CatchHandler @ 008b6a48 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)((long)in_x0 + 0x5c));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "start time fade: %dms\n",(ulong)(uint)(int)(fVar3 / 44.1));
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b6560 to 008b6567 has its CatchHandler @ 008b6a44 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b656c to 008b656f has its CatchHandler @ 008b6a40 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"start rpm fade: %d\n",
                    (ulong)(uint)(int)*(float *)(in_x0 + 0xd));
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b65ac to 008b65b3 has its CatchHandler @ 008b6a3c */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b65b8 to 008b65bb has its CatchHandler @ 008b6a38 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"== Stop Sound ==\n");
  StaticSoundRuntimeSettings::print();
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b65f8 to 008b65ff has its CatchHandler @ 008b6a34 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b6604 to 008b6607 has its CatchHandler @ 008b6a30 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(in_x0 + 0xc));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"stop time fade: %dms\n"
                    ,(ulong)(uint)(int)(fVar3 / 44.1));
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b6644 to 008b664b has its CatchHandler @ 008b6a2c */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b6650 to 008b6653 has its CatchHandler @ 008b6a28 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"equal power fade: %d\n"
                    ,(ulong)*(byte *)((long)in_x0 + 100));
  LoadSoundSimulation::print();
  if (in_x0[3] != (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b68a4 to 008b68ab has its CatchHandler @ 008b69e0 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b68b0 to 008b68b3 has its CatchHandler @ 008b69dc */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "====================== Exhaust ======================\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b68f0 to 008b68f7 has its CatchHandler @ 008b69d8 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b68fc to 008b68ff has its CatchHandler @ 008b69d4 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"num loops: %d\n",
                      (ulong)(uint)((int)((ulong)(((long *)in_x0[3][1])[1] - *(long *)in_x0[3][1])
                                         >> 3) * 0x38e38e39));
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b693c to 008b6943 has its CatchHandler @ 008b69d0 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b6948 to 008b694b has its CatchHandler @ 008b69cc */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    fVar3 = (float)(**(code **)(*in_x0[3] + 0x28))();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar3,
                      "min rpm: %.2f\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b6988 to 008b698f has its CatchHandler @ 008b69c8 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b6994 to 008b6997 has its CatchHandler @ 008b69c4 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    fVar3 = (float)(**(code **)(*in_x0[3] + 0x30))();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar3,
                      "max rpm: %.2f\n");
    if (in_x0[4] != (long *)0x0) {
      LoadSoundSimulation::print();
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b6690 to 008b6697 has its CatchHandler @ 008b6a24 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b669c to 008b669f has its CatchHandler @ 008b6a20 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "================================================\n");
  return;
}


