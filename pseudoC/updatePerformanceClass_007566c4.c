// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updatePerformanceClass
// Entry Point: 007566c4
// Size: 204 bytes
// Signature: undefined updatePerformanceClass(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HardwareScalability::updatePerformanceClass() */

void HardwareScalability::updatePerformanceClass(void)

{
  HardwareSettings *pHVar1;
  long in_x0;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  *(undefined4 *)(in_x0 + 0x18) = 0;
  pHVar1 = (HardwareSettings *)(in_x0 + 0x20);
  uVar2 = getSettingsDistance((HardwareSettings *)s_mobileClassSettings,pHVar1);
  fVar4 = (float)NEON_fminnm(uVar2,0x7f7fffff);
  fVar3 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 200),pHVar1);
  if (fVar3 < fVar4) {
    *(undefined4 *)(in_x0 + 0x18) = 1;
    fVar4 = fVar3;
  }
  fVar3 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 400),pHVar1);
  if (fVar3 < fVar4) {
    *(undefined4 *)(in_x0 + 0x18) = 2;
    fVar4 = fVar3;
  }
  fVar3 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 600),pHVar1);
  if (fVar3 < fVar4) {
    *(undefined4 *)(in_x0 + 0x18) = 3;
    fVar4 = fVar3;
  }
  *(bool *)(in_x0 + 0x1c) = 0.0001 < fVar4;
  return;
}


