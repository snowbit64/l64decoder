// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _snip
// Entry Point: 00eba57c
// Size: 292 bytes
// Signature: undefined __thiscall _snip(CTriangulator * this, int param_1, int param_2, int param_3, int param_4, int * param_5)


/* FLOAT_MATH::CTriangulator::_snip(int, int, int, int, int*) */

undefined8 __thiscall
FLOAT_MATH::CTriangulator::_snip
          (CTriangulator *this,int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  long lVar1;
  double *pdVar2;
  ulong uVar3;
  ulong uVar4;
  double *pdVar5;
  ulong uVar6;
  double *pdVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar1 = *(long *)(this + 0x58);
  pdVar5 = (double *)(lVar1 + (long)param_5[param_1] * 0x18);
  pdVar7 = (double *)(lVar1 + (long)param_5[param_2] * 0x18);
  pdVar2 = (double *)(lVar1 + (long)param_5[param_3] * 0x18);
  dVar11 = *pdVar5;
  dVar9 = pdVar5[1];
  dVar13 = *pdVar7;
  dVar10 = pdVar7[1];
  dVar12 = *pdVar2;
  dVar14 = pdVar2[1];
  dVar15 = (double)NEON_fmadd(dVar13 - dVar11,dVar14 - dVar9,(dVar12 - dVar11) * -(dVar10 - dVar9));
  if (dVar15 < *(double *)(this + 8)) {
    return 0;
  }
  if (0 < param_4) {
    uVar3 = (ulong)(uint)param_3;
    uVar4 = (ulong)(uint)param_2;
    uVar6 = (ulong)(uint)param_1;
    uVar8 = (ulong)(uint)param_4;
    do {
      if (((uVar3 != 0) && (uVar6 != 0)) && (uVar4 != 0)) {
        pdVar2 = (double *)(lVar1 + (long)*param_5 * 0x18);
        dVar15 = *pdVar2;
        dVar16 = pdVar2[1];
        dVar17 = (double)NEON_fmadd(dVar12 - dVar13,dVar16 - dVar10,
                                    (dVar15 - dVar13) * -(dVar14 - dVar10));
        if (((0.0 <= dVar17) &&
            (dVar17 = (double)NEON_fmadd(dVar11 - dVar12,dVar16 - dVar14,
                                         (dVar15 - dVar12) * -(dVar9 - dVar14)), 0.0 <= dVar17)) &&
           (dVar15 = (double)NEON_fmadd(dVar13 - dVar11,dVar16 - dVar9,
                                        (dVar15 - dVar11) * -(dVar10 - dVar9)), 0.0 <= dVar15)) {
          return 0;
        }
      }
      uVar6 = uVar6 - 1;
      param_5 = param_5 + 1;
      uVar4 = uVar4 - 1;
      uVar3 = uVar3 - 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return 1;
}


