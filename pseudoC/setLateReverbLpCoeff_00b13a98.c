// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLateReverbLpCoeff
// Entry Point: 00b13a98
// Size: 352 bytes
// Signature: undefined __thiscall setLateReverbLpCoeff(FDNReverb * this, float param_1, float param_2, float param_3)


/* FDNReverb::setLateReverbLpCoeff(float, float, float) */

void __thiscall
FDNReverb::setLateReverbLpCoeff(FDNReverb *this,float param_1,float param_2,float param_3)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)this;
  fVar2 = cosf((param_3 * 6.283185) / fVar6);
  if (fVar2 <= 0.99) {
    lVar1 = 0;
    do {
      fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + lVar1 * 4 + 0x70));
      fVar4 = powf(0.001,fVar7 / (fVar6 * param_1));
      *(float *)(this + lVar1 + 0x114) = fVar4;
      if (param_2 < 1.0) {
        fVar7 = powf(0.001,fVar7 / (param_1 * param_2 * fVar6));
        fVar7 = (fVar7 / fVar4) * (fVar7 / fVar4);
        fVar4 = 0.0;
        if (fVar7 < 0.9999) {
          fVar4 = 1.0 - fVar7;
          fVar7 = (float)NEON_fmadd(fVar7,fVar2,0xbf800000);
          fVar7 = fVar7 + fVar7;
          fVar5 = (float)NEON_fmadd(fVar7,fVar7,fVar4 * fVar4 * -4.0);
          fVar4 = (-fVar7 - SQRT(fVar5)) / (fVar4 + fVar4);
        }
        uVar3 = NEON_fmin(fVar4,0x3f7ae148);
        *(undefined4 *)(this + lVar1 + 0x124) = uVar3;
      }
      lVar1 = lVar1 + 4;
    } while (lVar1 != 0x10);
  }
  return;
}


