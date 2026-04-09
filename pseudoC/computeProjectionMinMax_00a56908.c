// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeProjectionMinMax
// Entry Point: 00a56908
// Size: 96 bytes
// Signature: undefined __thiscall computeProjectionMinMax(MergedShadowGroup * this, Vector3 * param_1, Vector3 * param_2, uint param_3, uint param_4, float * param_5, float * param_6)


/* LightSource::MergedShadowGroup::computeProjectionMinMax(Vector3 const&, Vector3 const*, unsigned
   int, unsigned int, float&, float&) const */

void __thiscall
LightSource::MergedShadowGroup::computeProjectionMinMax
          (MergedShadowGroup *this,Vector3 *param_1,Vector3 *param_2,uint param_3,uint param_4,
          float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  
  if (param_3 < param_4) {
    lVar4 = (ulong)param_4 - (ulong)param_3;
    pfVar3 = (float *)(param_2 + (ulong)param_3 * 0xc + 4);
    do {
      fVar6 = *pfVar3;
      pfVar2 = pfVar3 + 1;
      lVar4 = lVar4 + -1;
      pfVar1 = pfVar3 + -1;
      pfVar3 = pfVar3 + 3;
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,*pfVar1,*(float *)(param_1 + 4) * fVar6);
      uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),*pfVar2,uVar5);
      fVar6 = (float)NEON_fminnm(*param_5,uVar5);
      *param_5 = fVar6;
      *param_6 = *param_6;
    } while (lVar4 != 0);
  }
  return;
}


