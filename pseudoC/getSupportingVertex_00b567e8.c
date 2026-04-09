// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSupportingVertex
// Entry Point: 00b567e8
// Size: 196 bytes
// Signature: undefined __thiscall getSupportingVertex(GJKDistance * this, Vector3 * param_1, float * param_2, uint param_3)


/* GJKDistance::getSupportingVertex(Vector3 const&, float*, unsigned int) */

float __thiscall
GJKDistance::getSupportingVertex(GJKDistance *this,Vector3 *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = *(float *)param_1;
  fVar5 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 8);
  fVar8 = 0.0;
  fVar9 = 0.0;
  uVar3 = NEON_fmadd(fVar10,fVar10,fVar5 * fVar5);
  fVar11 = (float)NEON_fmadd(fVar6,fVar6,uVar3);
  fVar4 = 0.0;
  fVar7 = 1.0;
  if (0.0001 <= fVar11) {
    fVar8 = 1.0 / SQRT(fVar11);
    fVar7 = fVar10 * fVar8;
    fVar9 = fVar5 * fVar8;
    fVar8 = fVar6 * fVar8;
  }
  if (param_3 != 0) {
    fVar4 = 0.0;
    uVar2 = 0;
    fVar5 = -3.402823e+38;
    do {
      pfVar1 = param_2 + (uVar2 & 0xffffffff);
      uVar3 = NEON_fmadd(fVar7,*pfVar1,fVar9 * pfVar1[1]);
      fVar6 = (float)NEON_fmadd(fVar8,pfVar1[2],uVar3);
      if (fVar5 < fVar6) {
        fVar5 = fVar6;
        fVar4 = *pfVar1;
      }
      uVar2 = uVar2 + 3;
    } while ((ulong)param_3 + (ulong)param_3 * 2 != uVar2);
  }
  return fVar4;
}


