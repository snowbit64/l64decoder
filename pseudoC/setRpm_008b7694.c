// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRpm
// Entry Point: 008b7694
// Size: 172 bytes
// Signature: undefined __thiscall setRpm(LoadSoundSimulation * this, float param_1)


/* LoadSoundSimulation::setRpm(float) */

void __thiscall LoadSoundSimulation::setRpm(LoadSoundSimulation *this,float param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0x3f800000;
  uVar3 = 0x3f800000;
  if (((0.0 < param_1) && (lVar1 = *(long *)this, uVar3 = uVar4, 0.0 <= *(float *)(lVar1 + 0x38)))
     && (0.0 <= *(float *)(lVar1 + 0x3c))) {
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x34));
    LowFrequencyOscillator::setRateHz
              ((LowFrequencyOscillator *)(this + 8),fVar2 * param_1 * 0.008333334);
    if (param_1 <= *(float *)(lVar1 + 0x38)) {
      uVar3 = *(undefined4 *)(lVar1 + 0x40);
    }
    else if (param_1 < *(float *)(lVar1 + 0x3c)) {
      uVar3 = AudioMathUtil::lerpTwoPoints
                        (param_1,*(float *)(lVar1 + 0x38),*(float *)(lVar1 + 0x3c),
                         *(float *)(lVar1 + 0x40),1.0);
    }
  }
  *(undefined4 *)(this + 0x420) = uVar3;
  return;
}


