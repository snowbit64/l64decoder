// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFoliageViewDistanceCoeff
// Entry Point: 00757758
// Size: 220 bytes
// Signature: undefined __thiscall setFoliageViewDistanceCoeff(HardwareScalability * this, float param_1)


/* HardwareScalability::setFoliageViewDistanceCoeff(float) */

void __thiscall
HardwareScalability::setFoliageViewDistanceCoeff(HardwareScalability *this,float param_1)

{
  HardwareSettings *pHVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(float *)(this + 0x34) != param_1) {
    *(float *)(this + 0x34) = param_1;
    *(float *)(this + 0x38) = param_1;
    *(undefined4 *)(this + 0x18) = 0;
    pHVar1 = (HardwareSettings *)(this + 0x20);
    uVar2 = getSettingsDistance((HardwareSettings *)s_mobileClassSettings,pHVar1);
    fVar4 = (float)NEON_fminnm(uVar2,0x7f7fffff);
    fVar3 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 200),pHVar1);
    if (fVar3 < fVar4) {
      *(undefined4 *)(this + 0x18) = 1;
      fVar4 = fVar3;
    }
    fVar3 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 400),pHVar1);
    if (fVar3 < fVar4) {
      *(undefined4 *)(this + 0x18) = 2;
      fVar4 = fVar3;
    }
    fVar3 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 600),pHVar1);
    if (fVar3 < fVar4) {
      *(undefined4 *)(this + 0x18) = 3;
      fVar4 = fVar3;
    }
    this[0x1c] = (HardwareScalability)(0.0001 < fVar4);
  }
  return;
}


