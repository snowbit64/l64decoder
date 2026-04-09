// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDLSSQuality
// Entry Point: 0075873c
// Size: 256 bytes
// Signature: undefined __thiscall setDLSSQuality(HardwareScalability * this, DLSS_QUALITY param_1)


/* HardwareScalability::setDLSSQuality(HardwareScalability::DLSS_QUALITY) */

void __thiscall HardwareScalability::setDLSSQuality(HardwareScalability *this,DLSS_QUALITY param_1)

{
  HardwareSettings *pHVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(DLSS_QUALITY *)(this + 0x84) != param_1) {
    *(DLSS_QUALITY *)(this + 0x84) = param_1;
    if (param_1 != 5) {
      *(undefined4 *)(this + 0xdc) = 0;
      *(undefined8 *)(this + 0x7c) = 1;
      *(undefined8 *)(this + 0x90) = 4;
      *(undefined8 *)(this + 0x88) = 0;
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


