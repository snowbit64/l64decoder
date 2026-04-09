// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputePointVolume
// Entry Point: 00eaea00
// Size: 800 bytes
// Signature: undefined __thiscall ComputePointVolume(ICHull * this, double * param_1, bool param_2)


/* VHACD::ICHull::ComputePointVolume(double&, bool) */

undefined8 __thiscall VHACD::ICHull::ComputePointVolume(ICHull *this,double *param_1,bool param_2)

{
  long lVar1;
  ICHull *pIVar2;
  double *pdVar3;
  ICHull *pIVar4;
  byte bVar5;
  double *pdVar6;
  ulong uVar7;
  double *pdVar8;
  long lVar9;
  ulong uVar10;
  TMMVertex *pTVar11;
  ICHull *pIVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  pdVar6 = *(double **)(this + 8);
  lVar13 = *(long *)(this + 0x28);
  dVar20 = *pdVar6;
  dVar21 = pdVar6[1];
  dVar22 = pdVar6[2];
  bVar5 = 0;
  *param_1 = 0.0;
  if (param_2) {
    lVar14 = lVar13;
    do {
      pdVar6 = *(double **)(lVar14 + 0x28);
      pdVar3 = *(double **)(lVar14 + 0x30);
      pdVar8 = *(double **)(lVar14 + 0x20);
      dVar19 = (double)NEON_fmadd(pdVar6[2] - dVar22,*pdVar3 - dVar20,
                                  (pdVar3[2] - dVar22) * -(*pdVar6 - dVar20));
      uVar17 = NEON_fmadd(pdVar6[1] - dVar21,pdVar3[2] - dVar22,
                          (pdVar3[1] - dVar21) * -(pdVar6[2] - dVar22));
      uVar16 = NEON_fmadd(*pdVar6 - dVar20,pdVar3[1] - dVar21,
                          (*pdVar3 - dVar20) * -(pdVar6[1] - dVar21));
      uVar17 = NEON_fmadd(*pdVar8 - dVar20,uVar17,(pdVar8[1] - dVar21) * dVar19);
      dVar19 = (double)NEON_fmadd(pdVar8[2] - dVar22,uVar16,uVar17);
      if (dVar19 < -1e-15) {
        dVar18 = *param_1;
        uVar15 = *(ulong *)(this + 0x670);
        *(undefined *)(lVar14 + 0x38) = 1;
        uVar10 = *(ulong *)(this + 0x678);
        *param_1 = ABS(dVar19) + dVar18;
        if (uVar15 == uVar10) {
          uVar10 = uVar15 << 1;
          uVar7 = uVar15 << 4;
          if (uVar10 >> 0x3d != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          pIVar4 = (ICHull *)operator_new__(uVar7);
          pIVar12 = *(ICHull **)(this + 0x668);
          pIVar2 = this + 0x468;
          if (uVar15 != 0x40) {
            pIVar2 = pIVar12;
          }
          memcpy(pIVar4,pIVar2,uVar15 << 3);
          if (pIVar12 != (ICHull *)0x0) {
            operator_delete__(pIVar12);
            uVar15 = *(ulong *)(this + 0x670);
          }
          *(ICHull **)(this + 0x668) = pIVar4;
          *(ulong *)(this + 0x678) = uVar10;
        }
        else {
          pIVar4 = *(ICHull **)(this + 0x668);
        }
        bVar5 = 1;
        pIVar2 = this + 0x468;
        if (uVar10 != 0x40) {
          pIVar2 = pIVar4;
        }
        *(ulong *)(this + 0x670) = uVar15 + 1;
        *(long *)(pIVar2 + uVar15 * 8) = lVar14;
      }
      lVar14 = *(long *)(lVar14 + 0x40);
    } while (lVar14 != lVar13);
  }
  else {
    dVar19 = 0.0;
    lVar14 = lVar13;
    do {
      pdVar6 = *(double **)(lVar14 + 0x28);
      pdVar3 = *(double **)(lVar14 + 0x30);
      pdVar8 = *(double **)(lVar14 + 0x20);
      dVar18 = (double)NEON_fmadd(pdVar6[2] - dVar22,*pdVar3 - dVar20,
                                  (pdVar3[2] - dVar22) * -(*pdVar6 - dVar20));
      uVar17 = NEON_fmadd(pdVar6[1] - dVar21,pdVar3[2] - dVar22,
                          (pdVar3[1] - dVar21) * -(pdVar6[2] - dVar22));
      uVar16 = NEON_fmadd(*pdVar6 - dVar20,pdVar3[1] - dVar21,
                          (*pdVar3 - dVar20) * -(pdVar6[1] - dVar21));
      uVar17 = NEON_fmadd(*pdVar8 - dVar20,uVar17,(pdVar8[1] - dVar21) * dVar18);
      dVar18 = (double)NEON_fmadd(pdVar8[2] - dVar22,uVar16,uVar17);
      if (dVar18 < -1e-15) {
        bVar5 = 1;
        dVar19 = ABS(dVar18) + dVar19;
        *param_1 = dVar19;
      }
      lVar14 = *(long *)(lVar14 + 0x40);
    } while (lVar14 != lVar13);
  }
  lVar13 = *(long *)(this + 0x670);
  if (lVar13 == *(long *)(this + 0x30)) {
    if (lVar13 != 0) {
      lVar14 = 0;
      lVar9 = *(long *)(this + 0x678);
      do {
        pIVar4 = this + 0x468;
        if (lVar9 != 0x40) {
          pIVar4 = *(ICHull **)(this + 0x668);
        }
        lVar1 = lVar14 * 8;
        lVar14 = lVar14 + 1;
        *(undefined *)(*(long *)(pIVar4 + lVar1) + 0x38) = 0;
      } while (lVar13 != lVar14);
    }
    if (param_2) {
LAB_00eaec80:
      if (*(ulong *)(this + 0x10) < 2) {
        if (*(ulong *)(this + 0x10) == 1) {
          pTVar11 = *(TMMVertex **)(this + 8);
          if (pTVar11 == (TMMVertex *)0x0) {
            lVar13 = 0;
          }
          else {
            TMMVertex::~TMMVertex(pTVar11);
            operator_delete(pTVar11);
            lVar13 = *(long *)(this + 0x10) + -1;
          }
          *(undefined8 *)(this + 8) = 0;
          *(long *)(this + 0x10) = lVar13;
        }
      }
      else {
        pTVar11 = *(TMMVertex **)(this + 8);
        lVar13 = *(long *)(pTVar11 + 0x38);
        lVar14 = *(long *)(pTVar11 + 0x40);
        TMMVertex::~TMMVertex(pTVar11);
        operator_delete(pTVar11);
        *(long *)(this + 8) = lVar13;
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
        *(long *)(lVar13 + 0x40) = lVar14;
        *(long *)(lVar14 + 0x38) = lVar13;
      }
      *(undefined8 *)(this + 0x670) = 0;
      return 0;
    }
  }
  else if ((bVar5 | (param_2 ^ 0xffU) & 1) == 0) goto LAB_00eaec80;
  return 1;
}


