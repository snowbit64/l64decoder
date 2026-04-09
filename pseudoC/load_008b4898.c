// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 008b4898
// Size: 1084 bytes
// Signature: undefined __thiscall load(LoopSynthesisGenerator * this, LoopSynthesisDataExchanger * param_1)


/* WARNING: Removing unreachable block (ram,0x008b4998) */
/* LoopSynthesisGenerator::load(LoopSynthesisDataExchanger const&) */

undefined8 __thiscall
LoopSynthesisGenerator::load(LoopSynthesisGenerator *this,LoopSynthesisDataExchanger *param_1)

{
  long *plVar1;
  uint uVar2;
  LoopSynthesisGenerator LVar3;
  int iVar4;
  GranularSynthesisSoundGenerator *pGVar5;
  ulong uVar6;
  ulong uVar7;
  LoadSoundSimulation *pLVar8;
  StaticSoundGenerator *pSVar9;
  SteadyLoopSoundGenerator *pSVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar4 = *(int *)(param_1 + 8);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(this + 0x38) = iVar4;
  if (iVar4 == 2) {
    this[0x3c] = (LoopSynthesisGenerator)0x1;
    pSVar10 = (SteadyLoopSoundGenerator *)operator_new(0x70);
                    /* try { // try from 008b4920 to 008b4923 has its CatchHandler @ 008b4d14 */
    SteadyLoopSoundGenerator::SteadyLoopSoundGenerator(pSVar10);
    uVar6 = SteadyLoopRuntimeSettings::success();
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = SteadyLoopSoundGenerator::setSettings
                        (pSVar10,(SteadyLoopRuntimeSettings *)(param_1 + 0xe8));
      uVar6 = uVar6 & 0xffffffff;
    }
    *(SteadyLoopSoundGenerator **)this = pSVar10;
LAB_008b49b0:
    if ((uVar6 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 008b4c0c to 008b4c17 has its CatchHandler @ 008b4cdc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar11 = "Error: LoopSynthesisGenerator::load: No valid engine data.\n";
      goto LAB_008b4b0c;
    }
  }
  else {
    if (iVar4 != 1) {
      return 0;
    }
    pGVar5 = (GranularSynthesisSoundGenerator *)operator_new(0x38);
                    /* try { // try from 008b48e4 to 008b48e7 has its CatchHandler @ 008b4d20 */
    GranularSynthesisSoundGenerator::GranularSynthesisSoundGenerator(pGVar5);
    uVar6 = GranularSynthesisRuntimeSettings::checkGrains();
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = GranularSynthesisSoundGenerator::setSettings
                        (pGVar5,(GranularSynthesisRuntimeSettings *)(param_1 + 0x38));
      uVar6 = uVar6 & 0xffffffff;
    }
    uVar14 = *(undefined4 *)(param_1 + 0x80);
    *(GranularSynthesisSoundGenerator **)this = pGVar5;
    *(undefined4 *)(pGVar5 + 8) = uVar14;
    pGVar5 = (GranularSynthesisSoundGenerator *)operator_new(0x38);
                    /* try { // try from 008b4964 to 008b4967 has its CatchHandler @ 008b4d10 */
    GranularSynthesisSoundGenerator::GranularSynthesisSoundGenerator(pGVar5);
    uVar7 = GranularSynthesisRuntimeSettings::checkGrains();
    if ((uVar7 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = GranularSynthesisSoundGenerator::setSettings
                        (pGVar5,(GranularSynthesisRuntimeSettings *)(param_1 + 0x90));
      uVar7 = uVar7 & 0xffffffff;
    }
    uVar14 = *(undefined4 *)(param_1 + 0xd8);
    *(GranularSynthesisSoundGenerator **)(this + 8) = pGVar5;
    *(undefined4 *)(pGVar5 + 8) = uVar14;
    if ((uVar7 & 1) == 0) goto LAB_008b49b0;
  }
  pLVar8 = (LoadSoundSimulation *)operator_new(0x510);
                    /* try { // try from 008b49e0 to 008b49e3 has its CatchHandler @ 008b4d04 */
  LoadSoundSimulation::LoadSoundSimulation(pLVar8);
  *(LoadSoundSimulation **)(this + 0x10) = pLVar8;
  LoadSoundSimulation::setSettings(pLVar8,(LoadSimulationRuntimeSettings *)(param_1 + 0x180));
  pSVar9 = (StaticSoundGenerator *)operator_new(0x18);
                    /* try { // try from 008b4a00 to 008b4a03 has its CatchHandler @ 008b4d00 */
  StaticSoundGenerator::StaticSoundGenerator(pSVar9);
  *(StaticSoundGenerator **)(this + 0x28) = pSVar9;
  uVar6 = StaticSoundGenerator::setSettings(pSVar9,(StaticSoundRuntimeSettings *)(param_1 + 0x100));
  if ((uVar6 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008b4c54 to 008b4c5f has its CatchHandler @ 008b4cd8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar11 = "Error: LoopSynthesisGenerator::load: No valid start sound data.\n";
  }
  else {
    pSVar9 = (StaticSoundGenerator *)operator_new(0x18);
                    /* try { // try from 008b4a24 to 008b4a27 has its CatchHandler @ 008b4cfc */
    StaticSoundGenerator::StaticSoundGenerator(pSVar9);
    *(StaticSoundGenerator **)(this + 0x30) = pSVar9;
    uVar6 = StaticSoundGenerator::setSettings
                      (pSVar9,(StaticSoundRuntimeSettings *)(param_1 + 0x140));
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x1e0) != *(long *)(param_1 + 0x1e8)) {
        pSVar10 = (SteadyLoopSoundGenerator *)operator_new(0x70);
                    /* try { // try from 008b4a54 to 008b4a57 has its CatchHandler @ 008b4cf8 */
        SteadyLoopSoundGenerator::SteadyLoopSoundGenerator(pSVar10);
        *(SteadyLoopSoundGenerator **)(this + 0x18) = pSVar10;
        uVar6 = SteadyLoopSoundGenerator::setSettings
                          (pSVar10,(SteadyLoopRuntimeSettings *)(param_1 + 0x1e0));
        if ((uVar6 & 1) != 0) {
          pLVar8 = (LoadSoundSimulation *)operator_new(0x510);
                    /* try { // try from 008b4a78 to 008b4a7b has its CatchHandler @ 008b4cf4 */
          LoadSoundSimulation::LoadSoundSimulation(pLVar8);
          *(LoadSoundSimulation **)(this + 0x20) = pLVar8;
          LoadSoundSimulation::setSettings
                    (pLVar8,(LoadSimulationRuntimeSettings *)(param_1 + 0x1f8));
        }
      }
      setCrossfadeTimeStopMotorMs(this,*(uint *)(param_1 + 600));
      plVar13 = *(long **)this;
      plVar12 = *(long **)(this + 8);
      fVar16 = 0.0;
      LVar3 = this[0x3c];
      uVar14 = *(undefined4 *)(param_1 + 0x260);
      plVar1 = plVar12;
      if (LVar3 != (LoopSynthesisGenerator)0x0) {
        plVar1 = plVar13;
      }
      if (plVar1 == (long *)0x0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (float)(**(code **)(*plVar1 + 0x30))();
        plVar13 = *(long **)this;
        plVar12 = *(long **)(this + 8);
        LVar3 = this[0x3c];
      }
      fVar17 = (float)NEON_ucvtf(uVar14);
      if (LVar3 != (LoopSynthesisGenerator)0x0) {
        plVar12 = plVar13;
      }
      if (plVar12 != (long *)0x0) {
        fVar16 = (float)(**(code **)(*plVar12 + 0x28))();
      }
      uVar2 = *(uint *)(param_1 + 0x25c);
      if (fVar17 <= fVar15) {
        fVar15 = fVar17;
      }
      if (fVar16 <= fVar15) {
        fVar16 = fVar15;
      }
      *(float *)(this + 0x68) = fVar16;
      setCrossfadeTimeStartMotorMs(this,uVar2);
      plVar13 = *(long **)this;
      plVar12 = *(long **)(this + 8);
      fVar16 = 0.0;
      LVar3 = this[0x3c];
      plVar1 = plVar12;
      if (LVar3 != (LoopSynthesisGenerator)0x0) {
        plVar1 = plVar13;
      }
      this[100] = *(LoopSynthesisGenerator *)(param_1 + 0x264);
      if (plVar1 == (long *)0x0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (float)(**(code **)(*plVar1 + 0x30))();
        plVar13 = *(long **)this;
        plVar12 = *(long **)(this + 8);
        LVar3 = this[0x3c];
      }
      if (LVar3 != (LoopSynthesisGenerator)0x0) {
        plVar12 = plVar13;
      }
      if (plVar12 != (long *)0x0) {
        fVar16 = (float)(**(code **)(*plVar12 + 0x28))();
      }
      fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x268));
      *(float *)(this + 0x74) = ((fVar15 - fVar16) * 1000.0) / fVar17;
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008b4c9c to 008b4ca7 has its CatchHandler @ 008b4cd4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar11 = "Error: LoopSynthesisGenerator::load: No valid stop sound data.\n";
  }
LAB_008b4b0c:
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar11);
  return 0;
}


