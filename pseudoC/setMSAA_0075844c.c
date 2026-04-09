// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMSAA
// Entry Point: 0075844c
// Size: 256 bytes
// Signature: undefined __thiscall setMSAA(HardwareScalability * this, uint param_1)


/* HardwareScalability::setMSAA(unsigned int) */

void __thiscall HardwareScalability::setMSAA(HardwareScalability *this,uint param_1)

{
  HardwareSettings *pHVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  if (*(uint *)(this + 0x7c) != param_1) {
    *(undefined4 *)(this + 0xdc) = 0;
    *(undefined4 *)(this + 0x84) = 5;
    if (*(int *)(this + 0x80) == 3) {
      *(undefined4 *)(this + 0x80) = 0;
    }
    *(uint *)(this + 0x7c) = param_1;
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


