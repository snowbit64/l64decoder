// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: maxExcess
// Entry Point: 00b62658
// Size: 112 bytes
// Signature: undefined __thiscall maxExcess(BoundingVolumeFactory * this, uchar * param_1, uchar * param_2, uint param_3, float * * param_4)


/* BoundingVolumeFactory::maxExcess(unsigned char const*, unsigned char const*, unsigned int, float
   const*&) const */

float __thiscall
BoundingVolumeFactory::maxExcess
          (BoundingVolumeFactory *this,uchar *param_1,uchar *param_2,uint param_3,float **param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  
  fVar3 = 0.0;
  if (param_1 < param_2) {
    pfVar1 = *(float **)(this + 0xd0);
    fVar2 = *(float *)(this + 0xd8);
    fVar4 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar3 = 0.0;
    fVar6 = pfVar1[2];
    do {
      uVar7 = NEON_fmadd(*(float *)param_1 - fVar4,*(float *)param_1 - fVar4,-fVar2);
      uVar7 = NEON_fmadd(*(float *)((long)param_1 + 4) - fVar5,*(float *)((long)param_1 + 4) - fVar5
                         ,uVar7);
      fVar8 = (float)NEON_fmadd(*(float *)((long)param_1 + 8) - fVar6,
                                *(float *)((long)param_1 + 8) - fVar6,uVar7);
      if (fVar3 < fVar8) {
        *param_4 = (float *)param_1;
        fVar3 = fVar8;
      }
      param_1 = (uchar *)((long)param_1 + (ulong)param_3);
    } while (param_1 < param_2);
  }
  return fVar3;
}


