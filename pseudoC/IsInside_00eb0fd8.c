// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsInside
// Entry Point: 00eb0fd8
// Size: 284 bytes
// Signature: undefined __thiscall IsInside(Mesh * this, Vec3 * param_1)


/* VHACD::Mesh::IsInside(VHACD::Vec3<double> const&) const */

byte __thiscall VHACD::Mesh::IsInside(Mesh *this,Vec3 *param_1)

{
  Mesh *pMVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  bool bVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  
  bVar2 = 0;
  if ((*(long *)(this + 0x608) != 0) && (uVar4 = *(ulong *)(this + 0x920), uVar4 != 0)) {
    pMVar1 = this + 0x618;
    if (*(long *)(this + 0x928) != 0x40) {
      pMVar1 = *(Mesh **)(this + 0x918);
    }
    if (*(long *)(this + 0x610) != 0x40) {
      this = *(Mesh **)(this + 0x600);
    }
    if ((int)uVar4 < 1) {
      bVar6 = false;
    }
    else {
      dVar10 = *(double *)param_1;
      dVar11 = *(double *)(param_1 + 8);
      uVar3 = 0;
      dVar12 = *(double *)(param_1 + 0x10);
      piVar5 = (int *)(pMVar1 + 4);
      bVar6 = true;
      do {
        pdVar7 = (double *)(this + (long)*piVar5 * 0x18);
        pdVar9 = (double *)(this + (long)piVar5[2] * 0x18);
        pdVar8 = (double *)(this + (long)piVar5[-1] * 0x18);
        dVar15 = (double)NEON_fmadd(pdVar7[2] - dVar12,*pdVar9 - dVar10,
                                    (pdVar9[2] - dVar12) * -(*pdVar7 - dVar10));
        uVar14 = NEON_fmadd(pdVar7[1] - dVar11,pdVar9[2] - dVar12,
                            (pdVar9[1] - dVar11) * -(pdVar7[2] - dVar12));
        uVar13 = NEON_fmadd(*pdVar7 - dVar10,pdVar9[1] - dVar11,
                            (*pdVar9 - dVar10) * -(pdVar7[1] - dVar11));
        uVar14 = NEON_fmadd(*pdVar8 - dVar10,uVar14,(pdVar8[1] - dVar11) * dVar15);
        dVar15 = (double)NEON_fmadd(pdVar8[2] - dVar12,uVar13,uVar14);
        if (dVar15 < 0.0) break;
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 3;
        bVar6 = (long)uVar3 < (long)(int)uVar4;
      } while ((uVar4 & 0xffffffff) != uVar3);
    }
    bVar2 = bVar6 ^ 1;
  }
  return bVar2;
}


