// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSharpness
// Entry Point: 00758c28
// Size: 244 bytes
// Signature: undefined __thiscall setSharpness(HardwareScalability * this, float param_1)


/* HardwareScalability::setSharpness(float) */

void __thiscall HardwareScalability::setSharpness(HardwareScalability *this,float param_1)

{
  HardwareSettings *pHVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar2 = (float)NEON_fmin(param_1,0x40000000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (1.192093e-07 < ABS(*(float *)(this + 0x98) - fVar2)) {
    *(float *)(this + 0x98) = fVar2;
    *(undefined4 *)(this + 0x18) = 0;
    pHVar1 = (HardwareSettings *)(this + 0x20);
    uVar3 = getSettingsDistance((HardwareSettings *)s_mobileClassSettings,pHVar1);
    fVar2 = (float)NEON_fminnm(uVar3,0x7f7fffff);
    fVar4 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 200),pHVar1);
    if (fVar4 < fVar2) {
      *(undefined4 *)(this + 0x18) = 1;
      fVar2 = fVar4;
    }
    fVar4 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 400),pHVar1);
    if (fVar4 < fVar2) {
      *(undefined4 *)(this + 0x18) = 2;
      fVar2 = fVar4;
    }
    fVar4 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 600),pHVar1);
    if (fVar4 < fVar2) {
      *(undefined4 *)(this + 0x18) = 3;
      fVar2 = fVar4;
    }
    this[0x1c] = (HardwareScalability)(0.0001 < fVar2);
  }
  return;
}


