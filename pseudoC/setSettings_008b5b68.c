// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSettings
// Entry Point: 008b5b68
// Size: 908 bytes
// Signature: undefined __thiscall setSettings(LoopSynthesisGenerator * this, Mode param_1, GranularSynthesisRuntimeSettings * param_2, GranularSynthesisRuntimeSettings * param_3, SteadyLoopRuntimeSettings * param_4, StaticSoundRuntimeSettings * param_5, StaticSoundRuntimeSettings * param_6, LoadSimulationRuntimeSettings * param_7, LoadSimulationRuntimeSettings * param_8, SteadyLoopRuntimeSettings * param_9, FadeRuntimeSettings * param_10)


/* LoopSynthesisGenerator::setSettings(LoopSynthesisRuntimeSettings::Mode,
   GranularSynthesisRuntimeSettings const*, GranularSynthesisRuntimeSettings const*,
   SteadyLoopRuntimeSettings const*, StaticSoundRuntimeSettings const*, StaticSoundRuntimeSettings
   const*, LoadSimulationRuntimeSettings const*, LoadSimulationRuntimeSettings const*,
   SteadyLoopRuntimeSettings const*, LoopSynthesisRuntimeSettings::FadeRuntimeSettings const*) */

uint __thiscall
LoopSynthesisGenerator::setSettings
          (LoopSynthesisGenerator *this,Mode param_1,GranularSynthesisRuntimeSettings *param_2,
          GranularSynthesisRuntimeSettings *param_3,SteadyLoopRuntimeSettings *param_4,
          StaticSoundRuntimeSettings *param_5,StaticSoundRuntimeSettings *param_6,
          LoadSimulationRuntimeSettings *param_7,LoadSimulationRuntimeSettings *param_8,
          SteadyLoopRuntimeSettings *param_9,FadeRuntimeSettings *param_10)

{
  uint uVar1;
  LoopSynthesisGenerator LVar2;
  uint uVar3;
  SteadyLoopSoundGenerator *pSVar4;
  ulong uVar5;
  GranularSynthesisSoundGenerator *pGVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  StaticSoundGenerator *pSVar12;
  LoadSoundSimulation *pLVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  
  if (*(Mode *)(this + 0x38) != param_1) {
    *(Mode *)(this + 0x38) = param_1;
    if (*(long **)this != (long *)0x0) {
      (**(code **)(**(long **)this + 8))();
    }
    *(undefined8 *)this = 0;
  }
  if (param_1 == 1) {
    if (*(long *)this == 0) {
      pGVar6 = (GranularSynthesisSoundGenerator *)operator_new(0x38);
                    /* try { // try from 008b5c38 to 008b5c3b has its CatchHandler @ 008b5ef8 */
      GranularSynthesisSoundGenerator::GranularSynthesisSoundGenerator(pGVar6);
      *(GranularSynthesisSoundGenerator **)this = pGVar6;
    }
    uVar5 = GranularSynthesisRuntimeSettings::checkGrains();
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
      lVar8 = *(long *)(this + 8);
    }
    else {
      uVar5 = GranularSynthesisSoundGenerator::setSettings
                        (*(GranularSynthesisSoundGenerator **)this,param_2);
      uVar5 = uVar5 & 0xffffffff;
      lVar8 = *(long *)(this + 8);
    }
    if (lVar8 == 0) {
      pGVar6 = (GranularSynthesisSoundGenerator *)operator_new(0x38);
                    /* try { // try from 008b5c80 to 008b5c83 has its CatchHandler @ 008b5ef4 */
      GranularSynthesisSoundGenerator::GranularSynthesisSoundGenerator(pGVar6);
      *(GranularSynthesisSoundGenerator **)(this + 8) = pGVar6;
    }
    uVar7 = GranularSynthesisRuntimeSettings::checkGrains();
    if ((uVar7 & 1) == 0) {
joined_r0x008b5cb4:
      if ((uVar5 & 1) == 0) goto LAB_008b5cc8;
    }
    else {
      uVar3 = GranularSynthesisSoundGenerator::setSettings
                        (*(GranularSynthesisSoundGenerator **)(this + 8),param_3);
      if ((uVar5 & 1) == 0) {
        pSVar12 = *(StaticSoundGenerator **)(this + 0x28);
        goto joined_r0x008b5cc0;
      }
    }
    uVar3 = 1;
    pSVar12 = *(StaticSoundGenerator **)(this + 0x28);
  }
  else {
    if (param_1 == 2) {
      this[0x3c] = (LoopSynthesisGenerator)0x1;
      if (*(long *)this == 0) {
        pSVar4 = (SteadyLoopSoundGenerator *)operator_new(0x70);
                    /* try { // try from 008b5bfc to 008b5bff has its CatchHandler @ 008b5efc */
        SteadyLoopSoundGenerator::SteadyLoopSoundGenerator(pSVar4);
        *(SteadyLoopSoundGenerator **)this = pSVar4;
      }
      uVar5 = SteadyLoopRuntimeSettings::success();
      if ((uVar5 & 1) != 0) {
        uVar5 = SteadyLoopSoundGenerator::setSettings(*(SteadyLoopSoundGenerator **)this,param_4);
        goto joined_r0x008b5cb4;
      }
    }
LAB_008b5cc8:
    uVar3 = 0;
    pSVar12 = *(StaticSoundGenerator **)(this + 0x28);
  }
joined_r0x008b5cc0:
  if (pSVar12 == (StaticSoundGenerator *)0x0) {
    pSVar12 = (StaticSoundGenerator *)operator_new(0x18);
                    /* try { // try from 008b5ce0 to 008b5ce3 has its CatchHandler @ 008b5f10 */
    StaticSoundGenerator::StaticSoundGenerator(pSVar12);
    *(StaticSoundGenerator **)(this + 0x28) = pSVar12;
  }
  uVar5 = StaticSoundGenerator::setSettings(pSVar12,param_5);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
  pSVar12 = *(StaticSoundGenerator **)(this + 0x30);
  if (pSVar12 == (StaticSoundGenerator *)0x0) {
    pSVar12 = (StaticSoundGenerator *)operator_new(0x18);
                    /* try { // try from 008b5d14 to 008b5d17 has its CatchHandler @ 008b5f0c */
    StaticSoundGenerator::StaticSoundGenerator(pSVar12);
    *(StaticSoundGenerator **)(this + 0x30) = pSVar12;
  }
  uVar5 = StaticSoundGenerator::setSettings(pSVar12,param_6);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
    *(undefined8 *)(this + 0x30) = 0;
  }
  pLVar13 = *(LoadSoundSimulation **)(this + 0x10);
  if (pLVar13 == (LoadSoundSimulation *)0x0) {
    pLVar13 = (LoadSoundSimulation *)operator_new(0x510);
                    /* try { // try from 008b5d48 to 008b5d4b has its CatchHandler @ 008b5f08 */
    LoadSoundSimulation::LoadSoundSimulation(pLVar13);
    *(LoadSoundSimulation **)(this + 0x10) = pLVar13;
  }
  LoadSoundSimulation::setSettings(pLVar13,param_7);
  pSVar4 = *(SteadyLoopSoundGenerator **)(this + 0x18);
  if (pSVar4 == (SteadyLoopSoundGenerator *)0x0) {
    pSVar4 = (SteadyLoopSoundGenerator *)operator_new(0x70);
                    /* try { // try from 008b5d70 to 008b5d73 has its CatchHandler @ 008b5f04 */
    SteadyLoopSoundGenerator::SteadyLoopSoundGenerator(pSVar4);
    *(SteadyLoopSoundGenerator **)(this + 0x18) = pSVar4;
  }
  uVar5 = SteadyLoopSoundGenerator::setSettings(pSVar4,param_9);
  if ((uVar5 & 1) != 0) {
    pLVar13 = *(LoadSoundSimulation **)(this + 0x20);
    if (pLVar13 == (LoadSoundSimulation *)0x0) {
      pLVar13 = (LoadSoundSimulation *)operator_new(0x510);
                    /* try { // try from 008b5d9c to 008b5d9f has its CatchHandler @ 008b5f00 */
      LoadSoundSimulation::LoadSoundSimulation(pLVar13);
      *(LoadSoundSimulation **)(this + 0x20) = pLVar13;
    }
    LoadSoundSimulation::setSettings(pLVar13,param_8);
  }
  if ((uVar3 & 1) != 0) {
    setCrossfadeTimeStopMotorMs(this,*(uint *)param_10);
    plVar11 = *(long **)this;
    plVar9 = *(long **)(this + 8);
    fVar15 = 0.0;
    LVar2 = this[0x3c];
    uVar16 = *(undefined4 *)(param_10 + 8);
    plVar10 = plVar9;
    if (LVar2 != (LoopSynthesisGenerator)0x0) {
      plVar10 = plVar11;
    }
    if (plVar10 == (long *)0x0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)(**(code **)(*plVar10 + 0x30))();
      plVar11 = *(long **)this;
      plVar9 = *(long **)(this + 8);
      LVar2 = this[0x3c];
    }
    fVar17 = (float)NEON_ucvtf(uVar16);
    if (LVar2 != (LoopSynthesisGenerator)0x0) {
      plVar9 = plVar11;
    }
    if (plVar9 != (long *)0x0) {
      fVar15 = (float)(**(code **)(*plVar9 + 0x28))();
    }
    uVar1 = *(uint *)(param_10 + 4);
    if (fVar17 <= fVar14) {
      fVar14 = fVar17;
    }
    if (fVar15 <= fVar14) {
      fVar15 = fVar14;
    }
    *(float *)(this + 0x68) = fVar15;
    setCrossfadeTimeStartMotorMs(this,uVar1);
    uVar1 = *(uint *)(param_10 + 0x10);
    LVar2 = this[0x3c];
    fVar14 = 0.0;
    plVar9 = *(long **)this;
    plVar10 = *(long **)(this + 8);
    this[100] = *(LoopSynthesisGenerator *)(param_10 + 0xc);
    fVar15 = 3000.0;
    if (uVar1 != 0) {
      fVar15 = (float)(ulong)uVar1;
    }
    plVar11 = plVar10;
    if (LVar2 != (LoopSynthesisGenerator)0x0) {
      plVar11 = plVar9;
    }
    if (plVar11 == (long *)0x0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = (float)(**(code **)(*plVar11 + 0x30))();
      plVar9 = *(long **)this;
      plVar10 = *(long **)(this + 8);
      LVar2 = this[0x3c];
    }
    if (LVar2 != (LoopSynthesisGenerator)0x0) {
      plVar10 = plVar9;
    }
    if (plVar10 != (long *)0x0) {
      fVar14 = (float)(**(code **)(*plVar10 + 0x28))();
    }
    *(float *)(this + 0x74) = ((fVar17 - fVar14) * 1000.0) / fVar15;
  }
  return uVar3 & 1;
}


