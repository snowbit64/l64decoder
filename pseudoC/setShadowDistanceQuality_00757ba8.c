// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShadowDistanceQuality
// Entry Point: 00757ba8
// Size: 220 bytes
// Signature: undefined __thiscall setShadowDistanceQuality(HardwareScalability * this, SHADOW_DISTANCE_QUALITY param_1)


/* HardwareScalability::setShadowDistanceQuality(HardwareScalability::SHADOW_DISTANCE_QUALITY) */

void __thiscall
HardwareScalability::setShadowDistanceQuality
          (HardwareScalability *this,SHADOW_DISTANCE_QUALITY param_1)

{
  HardwareSettings *pHVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(SHADOW_DISTANCE_QUALITY *)(this + 0x4c) != param_1) {
    *(SHADOW_DISTANCE_QUALITY *)(this + 0x4c) = param_1;
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


