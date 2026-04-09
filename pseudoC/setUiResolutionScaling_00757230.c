// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUiResolutionScaling
// Entry Point: 00757230
// Size: 220 bytes
// Signature: undefined __thiscall setUiResolutionScaling(HardwareScalability * this, float param_1)


/* HardwareScalability::setUiResolutionScaling(float) */

void __thiscall HardwareScalability::setUiResolutionScaling(HardwareScalability *this,float param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(float *)(this + 0x20) != param_1) {
    pfVar1 = (float *)(this + 0x20);
    *pfVar1 = param_1;
    *(undefined4 *)(this + 0x18) = 0;
    uVar2 = getSettingsDistance((HardwareSettings *)s_mobileClassSettings,(HardwareSettings *)pfVar1
                               );
    fVar4 = (float)NEON_fminnm(uVar2,0x7f7fffff);
    fVar3 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 200),
                                       (HardwareSettings *)pfVar1);
    if (fVar3 < fVar4) {
      *(undefined4 *)(this + 0x18) = 1;
      fVar4 = fVar3;
    }
    fVar3 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 400),
                                       (HardwareSettings *)pfVar1);
    if (fVar3 < fVar4) {
      *(undefined4 *)(this + 0x18) = 2;
      fVar4 = fVar3;
    }
    fVar3 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 600),
                                       (HardwareSettings *)pfVar1);
    if (fVar3 < fVar4) {
      *(undefined4 *)(this + 0x18) = 3;
      fVar4 = fVar3;
    }
    this[0x1c] = (HardwareScalability)(0.0001 < fVar4);
  }
  return;
}


