// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputePointVolume
// Entry Point: 00d5139c
// Size: 848 bytes
// Signature: undefined __thiscall ComputePointVolume(ICHull * this, double * param_1, bool param_2)


/* HACD::ICHull::ComputePointVolume(double&, bool) */

undefined8 __thiscall HACD::ICHull::ComputePointVolume(ICHull *this,double *param_1,bool param_2)

{
  double *pdVar1;
  long *plVar2;
  void *__dest;
  byte bVar3;
  double *pdVar4;
  double *pdVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  void *__src;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  pdVar4 = *(double **)(this + 0x18);
  lVar12 = *(long *)(this + 0x58);
  dVar17 = *pdVar4;
  dVar18 = pdVar4[1];
  dVar19 = pdVar4[2];
  bVar3 = 0;
  *param_1 = 0.0;
  if (param_2) {
    lVar11 = lVar12;
    do {
      pdVar4 = *(double **)(lVar11 + 0x28);
      pdVar1 = *(double **)(lVar11 + 0x30);
      pdVar5 = *(double **)(lVar11 + 0x20);
      dVar16 = (double)NEON_fmadd(pdVar4[2] - dVar19,*pdVar1 - dVar17,
                                  (pdVar1[2] - dVar19) * -(*pdVar4 - dVar17));
      uVar14 = NEON_fmadd(pdVar4[1] - dVar18,pdVar1[2] - dVar19,
                          (pdVar1[1] - dVar18) * -(pdVar4[2] - dVar19));
      uVar13 = NEON_fmadd(*pdVar4 - dVar17,pdVar1[1] - dVar18,
                          (*pdVar1 - dVar17) * -(pdVar4[1] - dVar18));
      uVar14 = NEON_fmadd(*pdVar5 - dVar17,uVar14,(pdVar5[1] - dVar18) * dVar16);
      dVar16 = (double)NEON_fmadd(pdVar5[2] - dVar19,uVar13,uVar14);
      if (dVar16 < -1e-09) {
        dVar15 = *param_1;
        plVar6 = *(long **)(this + 0xd0);
        plVar2 = *(long **)(this + 0xd8);
        *(undefined *)(lVar11 + 0xd0) = 1;
        *param_1 = ABS(dVar16) + dVar15;
        if (plVar6 == plVar2) {
          __src = *(void **)(this + 200);
          uVar10 = (long)plVar6 - (long)__src;
          lVar9 = (long)uVar10 >> 3;
          uVar7 = lVar9 + 1;
          if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar7 <= (ulong)((long)uVar10 >> 2)) {
            uVar7 = (long)uVar10 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar10) {
            uVar7 = 0x1fffffffffffffff;
          }
          if (uVar7 == 0) {
            __dest = (void *)0x0;
            plVar6 = (long *)(lVar9 * 8);
            *plVar6 = lVar11;
          }
          else {
            if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            __dest = operator_new(uVar7 << 3);
            plVar6 = (long *)((long)__dest + lVar9 * 8);
            *plVar6 = lVar11;
          }
          if (0 < (long)uVar10) {
            memcpy(__dest,__src,uVar10);
          }
          *(void **)(this + 200) = __dest;
          *(long **)(this + 0xd0) = plVar6 + 1;
          *(void **)(this + 0xd8) = (void *)((long)__dest + uVar7 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
          bVar3 = 1;
        }
        else {
          bVar3 = 1;
          *plVar6 = lVar11;
          *(long **)(this + 0xd0) = plVar6 + 1;
        }
      }
      lVar11 = *(long *)(lVar11 + 0xd8);
    } while (lVar11 != lVar12);
  }
  else {
    dVar16 = 0.0;
    lVar11 = lVar12;
    do {
      pdVar4 = *(double **)(lVar11 + 0x28);
      pdVar1 = *(double **)(lVar11 + 0x30);
      pdVar5 = *(double **)(lVar11 + 0x20);
      dVar15 = (double)NEON_fmadd(pdVar4[2] - dVar19,*pdVar1 - dVar17,
                                  (pdVar1[2] - dVar19) * -(*pdVar4 - dVar17));
      uVar14 = NEON_fmadd(pdVar4[1] - dVar18,pdVar1[2] - dVar19,
                          (pdVar1[1] - dVar18) * -(pdVar4[2] - dVar19));
      uVar13 = NEON_fmadd(*pdVar4 - dVar17,pdVar1[1] - dVar18,
                          (*pdVar1 - dVar17) * -(pdVar4[1] - dVar18));
      uVar14 = NEON_fmadd(*pdVar5 - dVar17,uVar14,(pdVar5[1] - dVar18) * dVar15);
      dVar15 = (double)NEON_fmadd(pdVar5[2] - dVar19,uVar13,uVar14);
      if (dVar15 < -1e-09) {
        bVar3 = 1;
        dVar16 = ABS(dVar15) + dVar16;
        *param_1 = dVar16;
      }
      lVar11 = *(long *)(lVar11 + 0xd8);
    } while (lVar11 != lVar12);
  }
  lVar12 = *(long *)(this + 200);
  uVar7 = *(long *)(this + 0xd0) - lVar12 >> 3;
  if (uVar7 != *(ulong *)(this + 0x60)) {
    if ((bVar3 | (param_2 ^ 0xffU) & 1) != 0) {
      return 1;
    }
    goto LAB_00d51650;
  }
  if (*(long *)(this + 0xd0) - lVar12 != 0) {
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    if (uVar7 < 2) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar7 & 0xfffffffffffffffe;
      plVar6 = (long *)(lVar12 + 8);
      uVar10 = uVar8;
      do {
        plVar2 = plVar6 + -1;
        lVar11 = *plVar6;
        plVar6 = plVar6 + 2;
        uVar10 = uVar10 - 2;
        *(undefined *)(*plVar2 + 0xd0) = 0;
        *(undefined *)(lVar11 + 0xd0) = 0;
      } while (uVar10 != 0);
      if (uVar7 == uVar8) goto LAB_00d516ac;
    }
    lVar11 = uVar7 - uVar8;
    plVar6 = (long *)(lVar12 + uVar8 * 8);
    do {
      lVar11 = lVar11 + -1;
      *(undefined *)(*plVar6 + 0xd0) = 0;
      plVar6 = plVar6 + 1;
    } while (lVar11 != 0);
  }
LAB_00d516ac:
  if (!param_2) {
    return 1;
  }
LAB_00d51650:
  CircularList<HACD::TMMVertex>::Delete();
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(this + 200);
  return 0;
}


