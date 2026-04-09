// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeTriangleUvDensity
// Entry Point: 00b7af8c
// Size: 312 bytes
// Signature: undefined __thiscall computeTriangleUvDensity(IndexedTriangleSet * this, uint param_1, uint param_2)


/* IndexedTriangleSet::computeTriangleUvDensity(unsigned int, unsigned int) const */

float __thiscall
IndexedTriangleSet::computeTriangleUvDensity(IndexedTriangleSet *this,uint param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (*(uint *)(this + 8) < 0x10001) {
    lVar4 = *(long *)(this + 0x70);
    uVar5 = (uint)*(ushort *)(lVar4 + (ulong)param_2 * 2);
    uVar6 = (uint)*(ushort *)(lVar4 + (ulong)(param_2 + 1) * 2);
    uVar7 = (uint)*(ushort *)(lVar4 + (ulong)(param_2 + 2) * 2);
  }
  else {
    lVar4 = *(long *)(this + 0x70);
    uVar5 = *(uint *)(lVar4 + (ulong)param_2 * 4);
    uVar6 = *(uint *)(lVar4 + (ulong)(param_2 + 1) * 4);
    uVar7 = *(uint *)(lVar4 + (ulong)(param_2 + 2) * 4);
  }
  lVar4 = *(long *)(this + 0x10);
  pfVar1 = (float *)(lVar4 + (ulong)(uVar5 * 3) * 4);
  pfVar2 = (float *)(lVar4 + (ulong)(uVar6 * 3) * 4);
  pfVar3 = (float *)(lVar4 + (ulong)(uVar7 * 3) * 4);
  fVar11 = *pfVar2 - *pfVar1;
  fVar15 = pfVar2[2] - pfVar1[2];
  fVar14 = pfVar2[1] - pfVar1[1];
  fVar8 = *pfVar3 - *pfVar1;
  fVar12 = pfVar3[2] - pfVar1[2];
  fVar10 = pfVar3[1] - pfVar1[1];
  fVar16 = (float)NEON_fmadd(fVar15,fVar8,fVar12 * -fVar11);
  uVar13 = NEON_fmadd(fVar14,fVar12,fVar10 * -fVar15);
  uVar9 = NEON_fmadd(fVar11,fVar10,fVar8 * -fVar14);
  uVar13 = NEON_fmadd(uVar13,uVar13,fVar16 * fVar16);
  fVar10 = (float)NEON_fmadd(uVar9,uVar9,uVar13);
  fVar8 = 0.0;
  if (1e-06 <= SQRT(fVar10)) {
    lVar4 = *(long *)(this + (ulong)param_1 * 8 + 0x18);
    pfVar1 = (float *)(lVar4 + (ulong)(uVar5 * 2) * 4);
    pfVar2 = (float *)(lVar4 + (ulong)(uVar6 * 2) * 4);
    pfVar3 = (float *)(lVar4 + (ulong)(uVar7 * 2) * 4);
    fVar11 = *pfVar1;
    fVar8 = pfVar1[1];
    fVar8 = (float)NEON_fmadd(*pfVar2 - fVar11,pfVar3[1] - fVar8,
                              (*pfVar3 - fVar11) * -(pfVar2[1] - fVar8));
    fVar8 = SQRT(ABS(fVar8) / SQRT(fVar10));
  }
  return fVar8;
}


