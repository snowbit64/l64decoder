// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeWeightedCovariance
// Entry Point: 00deac7c
// Size: 268 bytes
// Signature: undefined __thiscall ComputeWeightedCovariance(squish * this, int param_1, Vec3 * param_2, float * param_3)


/* squish::ComputeWeightedCovariance(int, squish::Vec3 const*, float const*) */

void __thiscall
squish::ComputeWeightedCovariance(squish *this,int param_1,Vec3 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *in_x8;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((int)this < 1) {
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar12 = 0.0;
    fVar10 = 0.0;
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  else {
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar12 = 0.0;
    uVar4 = (ulong)this & 0xffffffff;
    pfVar5 = (float *)((ulong)(uint)param_1 + 8);
    pfVar6 = (float *)param_2;
    do {
      fVar13 = *pfVar6;
      uVar4 = uVar4 - 1;
      fVar10 = fVar10 + fVar13;
      fVar7 = fVar7 + (float)*(undefined8 *)(pfVar5 + -2) * fVar13;
      fVar9 = fVar9 + (float)((ulong)*(undefined8 *)(pfVar5 + -2) >> 0x20) * fVar13;
      fVar12 = fVar12 + fVar13 * *pfVar5;
      pfVar5 = pfVar5 + 3;
      pfVar6 = pfVar6 + 1;
    } while (uVar4 != 0);
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  if ((int)this < 1) {
    return;
  }
  uVar4 = (ulong)this & 0xffffffff;
  fVar10 = 1.0 / fVar10;
  fVar11 = 0.0;
  uVar8 = 0;
  pfVar5 = (float *)((ulong)(uint)param_1 + 8);
  fVar13 = 0.0;
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = 0.0;
  do {
    fVar17 = fVar3;
    fVar16 = fVar2;
    fVar15 = fVar1;
    fVar14 = fVar13;
    fVar21 = *(float *)param_2;
    fVar18 = (float)*(undefined8 *)(pfVar5 + -2) - fVar7 * fVar10;
    fVar19 = (float)((ulong)*(undefined8 *)(pfVar5 + -2) >> 0x20) - fVar9 * fVar10;
    uVar4 = uVar4 - 1;
    fVar13 = *pfVar5 - fVar12 * fVar10;
    fVar20 = fVar19 * fVar21;
    fVar22 = fVar13 * fVar21;
    fVar11 = fVar11 + fVar22 * fVar19;
    uVar8 = NEON_fmadd(fVar13,fVar22,uVar8);
    param_2 = (Vec3 *)((long)param_2 + 4);
    pfVar5 = pfVar5 + 3;
    fVar13 = fVar14 + fVar18 * fVar21 * fVar18;
    fVar1 = fVar15 + fVar20 * fVar18;
    fVar2 = fVar16 + fVar22 * fVar18;
    fVar3 = fVar17 + fVar20 * fVar19;
  } while (uVar4 != 0);
  *(float *)(in_x8 + 2) = fVar11;
  *(undefined4 *)((long)in_x8 + 0x14) = uVar8;
  *in_x8 = CONCAT44(fVar15 + fVar20 * fVar18,fVar14 + fVar18 * fVar21 * fVar18);
  in_x8[1] = CONCAT44(fVar17 + fVar20 * fVar19,fVar16 + fVar22 * fVar18);
  return;
}


