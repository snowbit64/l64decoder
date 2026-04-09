// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfo
// Entry Point: 00b12b9c
// Size: 232 bytes
// Signature: undefined __thiscall getInfo(SoftAudioVoice * this, uint param_1)


/* SoftAudioVoice::getInfo(unsigned int) */

float __thiscall SoftAudioVoice::getInfo(SoftAudioVoice *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  
  iVar4 = (**(code **)(**(long **)(this + 0x1f0) + 0x18))();
  fVar7 = 0.0;
  if (param_1 < 4) {
    iVar1 = *(int *)(this + 0x10);
    uVar6 = *(int *)(this + 0x228) + *(int *)(this + 0x220) + *(int *)(this + 0xc) * iVar4;
    uVar2 = iVar1 * iVar4;
    switch(param_1) {
    case 1:
      if ((iVar1 != 0) && (uVar6 <= uVar2)) {
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x1e0));
        uVar5 = SoLoud::Soloud::getBackendSamplerate();
        fVar7 = (float)NEON_fmadd(fVar7 / (float)(uVar5 & 0xffffffff),*(undefined4 *)(this + 0x44),
                                  (float)(ulong)(uVar2 - uVar6));
      }
      break;
    case 2:
      if (iVar1 == 0) {
        return 0.0;
      }
      bVar3 = uVar2 < uVar6;
      uVar6 = uVar2 - uVar6;
      if (bVar3) {
        return 0.0;
      }
    case 0:
      fVar7 = (float)(ulong)uVar6;
      break;
    case 3:
      fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x1e0));
      uVar5 = SoLoud::Soloud::getBackendSamplerate();
      fVar7 = *(float *)(this + 0x44) * (fVar7 / (float)(uVar5 & 0xffffffff));
    }
  }
  return fVar7;
}


