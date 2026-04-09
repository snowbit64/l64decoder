// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlaps
// Entry Point: 0072825c
// Size: 256 bytes
// Signature: undefined __thiscall overlaps(OrientedBox * this, OrientedBox * param_1, float param_2)


/* OrientedBox::overlaps(OrientedBox const&, float) const */

bool __thiscall OrientedBox::overlaps(OrientedBox *this,OrientedBox *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 0xc);
  fVar9 = *(float *)(this + 8);
  fVar8 = *(float *)(this + 0xc);
  fVar10 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 4) - *(float *)(this + 4);
  fVar11 = *(float *)(this + 0x10);
  fVar4 = (float)NEON_fmadd(uVar3,fVar9,fVar8 * fVar2);
  fVar12 = (float)NEON_fmadd(uVar3,fVar8,fVar9 * -fVar2);
  fVar4 = ABS(fVar4);
  fVar5 = *(float *)param_1 - *(float *)this;
  fVar6 = *(float *)(param_1 + 0x14);
  fVar12 = ABS(fVar12);
  fVar13 = (float)NEON_fmadd(fVar12,fVar6,fVar4 * fVar10);
  fVar1 = *(float *)(this + 0x18) + *(float *)(param_1 + 0x18) + param_2;
  fVar14 = (float)NEON_fmadd(fVar9,fVar7,fVar5 * -fVar8);
  if (fVar1 + fVar11 + fVar13 < ABS(fVar14)) {
    return false;
  }
  fVar13 = *(float *)(this + 0x14);
  fVar14 = (float)NEON_fmadd(fVar12,fVar10,fVar4 * fVar6);
  fVar8 = (float)NEON_fmadd(fVar9,fVar5,fVar7 * fVar8);
  if (fVar1 + fVar14 + fVar13 < ABS(fVar8)) {
    return false;
  }
  fVar9 = (float)NEON_fmadd(fVar12,fVar13,fVar4 * fVar11);
  fVar8 = (float)NEON_fmadd(uVar3,fVar7,fVar5 * -fVar2);
  if (fVar1 + fVar10 + fVar9 < ABS(fVar8)) {
    return false;
  }
  fVar4 = (float)NEON_fmadd(fVar12,fVar11,fVar4 * fVar13);
  fVar2 = (float)NEON_fmadd(uVar3,fVar5,fVar7 * fVar2);
  return ABS(fVar2) <= fVar1 + fVar6 + fVar4;
}


