// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setValarQuality
// Entry Point: 0075863c
// Size: 248 bytes
// Signature: undefined __thiscall setValarQuality(HardwareScalability * this, VALAR_SHADING_RATE_QUALITY param_1)


/* HardwareScalability::setValarQuality(HardwareScalability::VALAR_SHADING_RATE_QUALITY) */

void __thiscall
HardwareScalability::setValarQuality(HardwareScalability *this,VALAR_SHADING_RATE_QUALITY param_1)

{
  HardwareSettings *pHVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(VALAR_SHADING_RATE_QUALITY *)(this + 0xdc) != param_1) {
    *(VALAR_SHADING_RATE_QUALITY *)(this + 0xdc) = param_1;
    if (param_1 != 0) {
      *(undefined8 *)(this + 0x8c) = 0x400000000;
      *(undefined8 *)(this + 0x84) = 5;
      *(undefined8 *)(this + 0x7c) = 1;
    }
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


