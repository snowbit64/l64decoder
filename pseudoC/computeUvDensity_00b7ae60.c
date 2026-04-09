// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeUvDensity
// Entry Point: 00b7ae60
// Size: 300 bytes
// Signature: undefined __thiscall computeUvDensity(IndexedTriangleSet * this, uint param_1, uint param_2, uint param_3)


/* IndexedTriangleSet::computeUvDensity(unsigned int, unsigned int, unsigned int) const */

float __thiscall
IndexedTriangleSet::computeUvDensity
          (IndexedTriangleSet *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  
  fVar9 = 0.0;
  if ((*(long *)(this + (ulong)param_1 * 8 + 0x18) != 0) &&
     (uVar1 = param_3 + param_2, param_2 < uVar1)) {
    dVar10 = 0.0;
    dVar11 = 0.0;
    bVar2 = false;
    uVar5 = 0;
    fVar4 = 3.402823e+38;
    do {
      uVar6 = computeTriangleUvDensity(this,param_1,param_2);
      fVar7 = (float)NEON_fminnm(uVar6,0x3f800000);
      if (0.015625 <= fVar7) {
        uVar5 = uVar5 + 1;
        bVar2 = true;
        dVar8 = (double)fVar7 - dVar11;
        fVar3 = fVar7;
        if (fVar4 <= fVar7) {
          fVar3 = fVar4;
        }
        fVar4 = fVar3;
        dVar11 = dVar11 + dVar8 / (double)(ulong)uVar5;
        dVar10 = (double)NEON_fmadd(dVar8,(double)fVar7 - dVar11,dVar10);
      }
      param_2 = param_2 + 3;
    } while (param_2 < uVar1);
    if (bVar2) {
      dVar8 = dVar11 - SQRT(dVar10 / (double)(ulong)(uVar5 - 1));
      dVar10 = dVar11 * 0.75;
      if (dVar11 * 0.75 <= dVar8) {
        dVar10 = dVar8;
      }
      fVar9 = (float)dVar10;
      if (dVar10 <= (double)fVar4) {
        fVar9 = fVar4;
      }
    }
  }
  return fVar9;
}


