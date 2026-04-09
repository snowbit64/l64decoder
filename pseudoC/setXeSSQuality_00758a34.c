// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setXeSSQuality
// Entry Point: 00758a34
// Size: 252 bytes
// Signature: undefined __thiscall setXeSSQuality(HardwareScalability * this, XESS_QUALITY param_1)


/* HardwareScalability::setXeSSQuality(HardwareScalability::XESS_QUALITY) */

void __thiscall HardwareScalability::setXeSSQuality(HardwareScalability *this,XESS_QUALITY param_1)

{
  HardwareSettings *pHVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(XESS_QUALITY *)(this + 0x90) != param_1) {
    *(XESS_QUALITY *)(this + 0x90) = param_1;
    if (param_1 != 4) {
      *(undefined4 *)(this + 0x8c) = 0;
      *(undefined4 *)(this + 0xdc) = 0;
      *(undefined4 *)(this + 0x94) = 0;
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


