// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008aad8c
// Size: 2452 bytes
// Signature: undefined print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoadSimulationRuntimeSettings::print() const */

void LoadSimulationRuntimeSettings::print(void)

{
  long lVar1;
  int iVar2;
  float *in_x0;
  undefined8 uVar3;
  Logger *pLVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab39c to 008ab3a3 has its CatchHandler @ 008ab794 */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab3a8 to 008ab3ab has its CatchHandler @ 008ab784 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "==== LoadSimulationRuntimeSettings ====\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab3ec to 008ab3f3 has its CatchHandler @ 008ab780 */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab3f8 to 008ab3fb has its CatchHandler @ 008ab770 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "distortion before EQ=%d\n",(ulong)*(byte *)(in_x0 + 2));
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab438 to 008ab43f has its CatchHandler @ 008ab76c */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab444 to 008ab447 has its CatchHandler @ 008ab768 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  fVar8 = log10f(*in_x0);
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)(fVar8 * 20.0),
                    "input gain dB=%.2f\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab484 to 008ab48b has its CatchHandler @ 008ab764 */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab490 to 008ab493 has its CatchHandler @ 008ab760 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  fVar8 = log10f(in_x0[1]);
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)(fVar8 * 20.0),
                    "output gain dB=%.2f\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab4d0 to 008ab4d7 has its CatchHandler @ 008ab75c */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab4dc to 008ab4df has its CatchHandler @ 008ab758 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"reverse phase=%d\n",
                    (ulong)*(byte *)((long)in_x0 + 9));
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab51c to 008ab523 has its CatchHandler @ 008ab754 */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab528 to 008ab52b has its CatchHandler @ 008ab750 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "== LFO general settings ==\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab568 to 008ab56f has its CatchHandler @ 008ab74c */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab574 to 008ab577 has its CatchHandler @ 008ab748 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  uVar6 = (ulong)(uint)in_x0[0xc];
  if ((uint)in_x0[0xc] < 5) {
    puVar5 = (undefined8 *)(&DAT_0107da80)[uVar6 * 3];
    if (((&LFOSettings::s_waveNames)[uVar6 * 0x18] & 1) == 0) {
      puVar5 = &DAT_0107da71 + uVar6 * 3;
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)in_x0[0xe],
                    (double)in_x0[0xf],(double)in_x0[0x10],
                    "waveform=%s harmonic=%d fadeStartRpm=%.2f fadeRpmEnd=%.2f fadeRpmMinScaleValue=%.2f\n"
                    ,puVar5,(ulong)(uint)in_x0[0xd]);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab5b4 to 008ab5bb has its CatchHandler @ 008ab744 */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab5c0 to 008ab5c3 has its CatchHandler @ 008ab740 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "== Distortion general settings ==\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab600 to 008ab607 has its CatchHandler @ 008ab73c */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab60c to 008ab60f has its CatchHandler @ 008ab738 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  fVar8 = in_x0[3];
  uVar3 = DistortionSettings::getTypeName((Type)in_x0[5]);
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar8,
                    "low band: max freq=%.2fHz type=%s\n",uVar3);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab64c to 008ab653 has its CatchHandler @ 008ab734 */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab658 to 008ab65b has its CatchHandler @ 008ab730 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  fVar8 = in_x0[4];
  uVar3 = DistortionSettings::getTypeName((Type)in_x0[7]);
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar8,
                    "mid band: max freq=%.2fHz type=%s\n",uVar3);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab698 to 008ab69f has its CatchHandler @ 008ab72c */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab6a4 to 008ab6a7 has its CatchHandler @ 008ab728 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  uVar3 = DistortionSettings::getTypeName((Type)in_x0[9]);
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"high band: type=%s\n",
                    uVar3);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008ab6e4 to 008ab6eb has its CatchHandler @ 008ab724 */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab6f0 to 008ab6f3 has its CatchHandler @ 008ab720 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "== Load points (numPoints=%d) ==\n",
                    (ulong)(*(long *)(in_x0 + 0x14) - *(long *)(in_x0 + 0x12)) >> 6);
  if (*(long *)(in_x0 + 0x14) != *(long *)(in_x0 + 0x12)) {
    uVar6 = 0;
    do {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008ab19c to 008ab1a3 has its CatchHandler @ 008ab7d8 */
        pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab1a8 to 008ab1ab has its CatchHandler @ 008ab7c8 */
        Logger::Logger(pLVar4);
        LogManager::getInstance()::singletonLogManager = pLVar4;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        (double)*(float *)(*(long *)(in_x0 + 0x12) + uVar6 * 0x40),
                        "load point=%.2f\n");
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008ab1e0 to 008ab1e7 has its CatchHandler @ 008ab7c4 */
        pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab1ec to 008ab1ef has its CatchHandler @ 008ab7c0 */
        Logger::Logger(pLVar4);
        LogManager::getInstance()::singletonLogManager = pLVar4;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"\tEQ:\n");
      lVar7 = *(long *)(in_x0 + 0x12) + uVar6 * 0x40;
      if (0 < (int)((ulong)(*(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10)) >> 2) * -0x55555555)
      {
        lVar7 = 0;
        do {
          BiquadResonantFilter::Settings::print();
          lVar7 = lVar7 + 1;
          lVar1 = *(long *)(in_x0 + 0x12) + uVar6 * 0x40;
        } while (lVar7 < (int)((ulong)(*(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10)) >> 2) *
                         -0x55555555);
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008ab224 to 008ab22b has its CatchHandler @ 008ab7bc */
        pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab230 to 008ab233 has its CatchHandler @ 008ab7b8 */
        Logger::Logger(pLVar4);
        LogManager::getInstance()::singletonLogManager = pLVar4;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004fddf9);
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008ab268 to 008ab26f has its CatchHandler @ 008ab7b4 */
        pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab274 to 008ab277 has its CatchHandler @ 008ab7b0 */
        Logger::Logger(pLVar4);
        LogManager::getInstance()::singletonLogManager = pLVar4;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      lVar7 = *(long *)(in_x0 + 0x12) + uVar6 * 0x40;
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        (double)*(float *)(lVar7 + 4),(double)*(float *)(lVar7 + 8),
                        "\tlfo: amplitudeDb=%.2f offsetDb=%.2f\n");
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008ab2ac to 008ab2b3 has its CatchHandler @ 008ab7ac */
        pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab2b8 to 008ab2bb has its CatchHandler @ 008ab7a8 */
        Logger::Logger(pLVar4);
        LogManager::getInstance()::singletonLogManager = pLVar4;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      lVar7 = *(long *)(in_x0 + 0x12) + uVar6 * 0x40;
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        (double)*(float *)(lVar7 + 0x28),(double)*(float *)(lVar7 + 0x2c),
                        (double)*(float *)(lVar7 + 0x30),"\tdistortion drive: %.2f %.2f %.2f\n");
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008ab2f0 to 008ab2f7 has its CatchHandler @ 008ab7a4 */
        pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab2fc to 008ab2ff has its CatchHandler @ 008ab7a0 */
        Logger::Logger(pLVar4);
        LogManager::getInstance()::singletonLogManager = pLVar4;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      lVar7 = *(long *)(in_x0 + 0x12) + uVar6 * 0x40;
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        (double)*(float *)(lVar7 + 0x34),(double)*(float *)(lVar7 + 0x38),
                        (double)*(float *)(lVar7 + 0x3c),"\twet=%.2f dry=%.2f gainDb=%.2f\n");
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 008ab334 to 008ab33b has its CatchHandler @ 008ab79c */
        pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab340 to 008ab343 has its CatchHandler @ 008ab798 */
        Logger::Logger(pLVar4);
        LogManager::getInstance()::singletonLogManager = pLVar4;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004fddf9);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(*(long *)(in_x0 + 0x14) - *(long *)(in_x0 + 0x12) >> 6));
  }
  return;
}


