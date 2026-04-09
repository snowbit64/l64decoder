// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getedgedist
// Entry Point: 00f6ebdc
// Size: 240 bytes
// Signature: undefined __thiscall getedgedist(EPA * this, sFace * param_1, sSV * param_2, sSV * param_3, float * param_4)


/* gjkepa2_impl::EPA::getedgedist(gjkepa2_impl::EPA::sFace*, gjkepa2_impl::GJK::sSV*,
   gjkepa2_impl::GJK::sSV*, float&) */

bool __thiscall
gjkepa2_impl::EPA::getedgedist(EPA *this,sFace *param_1,sSV *param_2,sSV *param_3,float *param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  fVar4 = *(float *)(param_3 + 0x14);
  fVar2 = *(float *)(param_3 + 0x18);
  fVar6 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x18);
  fVar7 = *(float *)(param_3 + 0x10);
  fVar11 = *(float *)(param_2 + 0x10);
  fVar5 = fVar2 - fVar3;
  fVar9 = fVar4 - fVar6;
  fVar10 = fVar7 - fVar11;
  fVar12 = (float)NEON_fnmsub(*(float *)(param_1 + 8),fVar9,*(float *)(param_1 + 4) * fVar5);
  uVar15 = NEON_fnmsub(*(float *)param_1,fVar5,*(float *)(param_1 + 8) * fVar10);
  uVar1 = NEON_fnmsub(*(float *)(param_1 + 4),fVar10,*(float *)param_1 * fVar9);
  uVar15 = NEON_fmadd(uVar15,fVar6,fVar12 * fVar11);
  fVar12 = (float)NEON_fmadd(uVar1,fVar3,uVar15);
  if (fVar12 < 0.0) {
    uVar1 = NEON_fmadd(fVar9,fVar6,fVar10 * fVar11);
    fVar13 = (float)NEON_fmadd(fVar5,fVar3,uVar1);
    if (fVar13 <= 0.0) {
      uVar1 = NEON_fmadd(fVar9,fVar4,fVar10 * fVar7);
      fVar13 = (float)NEON_fmadd(fVar5,fVar2,uVar1);
      if (0.0 <= fVar13) {
        uVar14 = NEON_fmadd(fVar6,fVar4,fVar11 * fVar7);
        uVar15 = NEON_fmadd(fVar6,fVar6,fVar11 * fVar11);
        uVar1 = NEON_fmadd(fVar4,fVar4,fVar7 * fVar7);
        uVar8 = NEON_fmadd(fVar9,fVar9,fVar10 * fVar10);
        fVar6 = (float)NEON_fmadd(fVar3,fVar2,uVar14);
        uVar15 = NEON_fmadd(fVar3,fVar3,uVar15);
        uVar1 = NEON_fmadd(fVar2,fVar2,uVar1);
        fVar4 = (float)NEON_fmadd(fVar5,fVar5,uVar8);
        fVar3 = (float)NEON_fnmsub(uVar15,uVar1,fVar6 * fVar6);
        fVar2 = fVar3 / fVar4;
        if (fVar3 / fVar4 <= 0.0) {
          fVar2 = 0.0;
        }
      }
      else {
        uVar1 = NEON_fmadd(fVar4,fVar4,fVar7 * fVar7);
        fVar2 = (float)NEON_fmadd(fVar2,fVar2,uVar1);
      }
    }
    else {
      uVar1 = NEON_fmadd(fVar6,fVar6,fVar11 * fVar11);
      fVar2 = (float)NEON_fmadd(fVar3,fVar3,uVar1);
    }
    *param_4 = SQRT(fVar2);
  }
  return fVar12 < 0.0;
}


