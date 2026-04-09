// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMotorSound
// Entry Point: 008b566c
// Size: 464 bytes
// Signature: undefined __thiscall getMotorSound(LoopSynthesisGenerator * this, uint param_1, float * param_2, float * param_3)


/* LoopSynthesisGenerator::getMotorSound(unsigned int, float*, float*) */

void __thiscall
LoopSynthesisGenerator::getMotorSound
          (LoopSynthesisGenerator *this,uint param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar2 = (ulong)param_1;
  plVar10 = *(long **)(this + 8);
  if (*(float *)(this + 0x78) < 0.0 && plVar10 != (long *)0x0) {
    this[0x3c] = (LoopSynthesisGenerator)(*(int *)(this + 0x38) == 2);
    if (*(int *)(this + 0x38) == 2) goto LAB_008b56c4;
  }
  else {
    this[0x3c] = (LoopSynthesisGenerator)0x1;
LAB_008b56c4:
    plVar10 = *(long **)this;
    if (plVar10 == (long *)0x0) {
      memset(param_2,0,uVar2 << 2);
      goto LAB_008b5710;
    }
  }
  (**(code **)(*plVar10 + 0x40))(*(undefined4 *)(this + 0x70),plVar10);
  (**(code **)(*plVar10 + 0x20))(plVar10,uVar2,param_2);
LAB_008b5710:
  LoadSoundSimulation::setRpm(*(LoadSoundSimulation **)(this + 0x10),*(float *)(this + 0x70));
  LoadSoundSimulation::setLoadFactor(*(LoadSoundSimulation **)(this + 0x10),*(float *)(this + 0x78))
  ;
  LoadSoundSimulation::process(*(LoadSoundSimulation **)(this + 0x10),param_2,param_1);
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x40))(*(undefined4 *)(this + 0x70));
    (**(code **)(**(long **)(this + 0x18) + 0x20))(*(long **)(this + 0x18),uVar2,param_3);
    LoadSoundSimulation::setRpm(*(LoadSoundSimulation **)(this + 0x20),*(float *)(this + 0x70));
    LoadSoundSimulation::setLoadFactor
              (*(LoadSoundSimulation **)(this + 0x20),*(float *)(this + 0x78));
    LoadSoundSimulation::process(*(LoadSoundSimulation **)(this + 0x20),param_3,param_1);
    if (param_1 != 0) {
      uVar2 = (ulong)param_1;
      if ((param_1 < 8) || ((param_2 < param_3 + uVar2 && (param_3 < param_2 + uVar2)))) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar2 & 0xfffffff8;
        puVar6 = (undefined8 *)(param_2 + 4);
        puVar8 = (undefined8 *)(param_3 + 4);
        uVar9 = uVar4;
        do {
          uVar9 = uVar9 - 8;
          puVar1 = puVar8 + -1;
          uVar11 = puVar8[-2];
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar8 = puVar8 + 4;
          puVar6[-1] = CONCAT44((float)((ulong)puVar6[-1] >> 0x20) + (float)((ulong)*puVar1 >> 0x20)
                                ,(float)puVar6[-1] + (float)*puVar1);
          puVar6[-2] = CONCAT44((float)((ulong)puVar6[-2] >> 0x20) + (float)((ulong)uVar11 >> 0x20),
                                (float)puVar6[-2] + (float)uVar11);
          puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) + (float)((ulong)uVar13 >> 0x20),
                               (float)puVar6[1] + (float)uVar13);
          *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + (float)((ulong)uVar12 >> 0x20),
                             (float)*puVar6 + (float)uVar12);
          puVar6 = puVar6 + 4;
        } while (uVar9 != 0);
        if (uVar4 == uVar2) {
          return;
        }
      }
      lVar3 = uVar2 - uVar4;
      pfVar5 = param_2 + uVar4;
      pfVar7 = param_3 + uVar4;
      do {
        lVar3 = lVar3 + -1;
        *pfVar5 = *pfVar5 + *pfVar7;
        pfVar5 = pfVar5 + 1;
        pfVar7 = pfVar7 + 1;
      } while (lVar3 != 0);
    }
  }
  return;
}


