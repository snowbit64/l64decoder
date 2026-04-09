// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsInside
// Entry Point: 00d520e0
// Size: 408 bytes
// Signature: undefined __thiscall IsInside(ICHull * this, Vec3 * param_1, double param_2)


/* HACD::ICHull::IsInside(HACD::Vec3<double> const&, double) */

bool __thiscall HACD::ICHull::IsInside(ICHull *this,Vec3 *param_1,double param_2)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  
  dVar8 = *(double *)param_1;
  dVar9 = *(double *)(param_1 + 8);
  dVar10 = *(double *)(param_1 + 0x10);
  uVar4 = *(ulong *)(this + 0x60);
  if (this[0x100] != (ICHull)0x0) {
    if (uVar4 == 0) {
      return false;
    }
    lVar5 = *(long *)(this + 0x58);
    do {
      pdVar1 = *(double **)(lVar5 + 0x20);
      pdVar2 = *(double **)(lVar5 + 0x28);
      pdVar7 = *(double **)(lVar5 + 0x30);
      dVar11 = *pdVar1;
      dVar13 = pdVar1[1];
      dVar15 = pdVar1[2];
      uVar14 = NEON_fmadd(dVar8 - dVar11,*pdVar2 - dVar11,(dVar9 - dVar13) * (pdVar2[1] - dVar13));
      uVar12 = NEON_fmadd(dVar8 - dVar11,*pdVar7 - dVar11,(dVar9 - dVar13) * (pdVar7[1] - dVar13));
      dVar13 = (double)NEON_fmadd(dVar10 - dVar15,pdVar2[2] - dVar15,uVar14);
      dVar11 = (double)NEON_fmadd(dVar10 - dVar15,pdVar7[2] - dVar15,uVar12);
      bVar3 = ((0.0 <= dVar13 && dVar13 <= 1.0) && 0.0 <= dVar11) && dVar13 + dVar11 <= 1.0;
      if (bVar3) {
        return bVar3;
      }
      lVar5 = *(long *)(lVar5 + 0xd8);
      uVar4 = uVar4 - 1;
      *(long *)(this + 0x58) = lVar5;
    } while (uVar4 != 0);
    return bVar3;
  }
  if (uVar4 == 0) {
    return true;
  }
  uVar6 = 0;
  lVar5 = *(long *)(this + 0x58);
  bVar3 = true;
  do {
    pdVar1 = *(double **)(lVar5 + 0x28);
    pdVar2 = *(double **)(lVar5 + 0x30);
    pdVar7 = *(double **)(lVar5 + 0x20);
    dVar11 = (double)NEON_fmadd(pdVar1[2] - dVar10,*pdVar2 - dVar8,
                                (pdVar2[2] - dVar10) * -(*pdVar1 - dVar8));
    uVar14 = NEON_fmadd(pdVar1[1] - dVar9,pdVar2[2] - dVar10,
                        (pdVar2[1] - dVar9) * -(pdVar1[2] - dVar10));
    uVar12 = NEON_fmadd(*pdVar1 - dVar8,pdVar2[1] - dVar9,(*pdVar2 - dVar8) * -(pdVar1[1] - dVar9));
    uVar14 = NEON_fmadd(*pdVar7 - dVar8,uVar14,(pdVar7[1] - dVar9) * dVar11);
    dVar11 = (double)NEON_fmadd(pdVar7[2] - dVar10,uVar12,uVar14);
    if (dVar11 < param_2) break;
    uVar6 = uVar6 + 1;
    lVar5 = *(long *)(lVar5 + 0xd8);
    bVar3 = uVar6 < uVar4;
    *(long *)(this + 0x58) = lVar5;
  } while (uVar4 != uVar6);
  return (bool)(bVar3 ^ 1);
}


