// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeConvexHull
// Entry Point: 00eb0904
// Size: 876 bytes
// Signature: undefined __cdecl ComputeConvexHull(double * param_1, ulong param_2)


/* VHACD::Mesh::ComputeConvexHull(double const*, unsigned long) */

void VHACD::Mesh::ComputeConvexHull(double *param_1,ulong param_2)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  long lVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  double *pdVar13;
  int iVar14;
  double dVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double *pdVar21;
  undefined8 uVar22;
  float fVar23;
  undefined auStack_d8 [4];
  undefined8 local_d4;
  void *local_c8;
  char local_c0;
  undefined8 local_b4;
  void *local_a8;
  char local_a0;
  ulong local_94;
  void *local_88;
  char local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  param_1[0xc1] = 0.0;
  param_1[0x124] = 0.0;
  local_d4 = 0;
  local_b4 = 0;
  local_94 = 0;
  local_c0 = '\x01';
  local_c8 = (void *)0x0;
  local_a0 = '\x01';
  local_a8 = (void *)0x0;
  local_80 = '\x01';
  local_88 = (void *)0x0;
  btConvexHullComputer::compute(auStack_d8,SUB81(param_2,0),1,0x18,-1.0,-1.0);
  if (0 < (int)local_d4) {
    lVar16 = 0;
    lVar17 = 0;
    dVar19 = param_1[0xc2];
    dVar20 = param_1[0xc1];
    iVar18 = (int)local_d4;
    do {
      uVar22 = *(undefined8 *)((long)local_c8 + lVar16);
      fVar23 = *(float *)((undefined8 *)((long)local_c8 + lVar16) + 1);
      if (dVar20 == dVar19) {
        dVar15 = (double)((long)dVar19 * 2);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = dVar15;
        uVar8 = (long)dVar19 * 0x30 | 8;
        if (SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
          uVar8 = 0xffffffffffffffff;
        }
        pdVar6 = (double *)operator_new__(uVar8);
        pdVar21 = (double *)param_1[0xc0];
        pdVar7 = param_1;
        if (dVar19 != 3.162020133383978e-322) {
          pdVar7 = pdVar21;
        }
        pdVar13 = pdVar6 + 1;
        *pdVar6 = dVar15;
        memcpy(pdVar13,pdVar7,(long)dVar19 * 0x18);
        dVar20 = dVar19;
        if (pdVar21 != (double *)0x0) {
          operator_delete__(pdVar21 + -1);
          dVar20 = param_1[0xc1];
          iVar18 = (int)local_d4;
        }
        param_1[0xc0] = (double)pdVar13;
        param_1[0xc2] = dVar15;
        dVar19 = dVar15;
      }
      else {
        pdVar13 = (double *)param_1[0xc0];
      }
      pdVar7 = param_1;
      if (dVar19 != 3.162020133383978e-322) {
        pdVar7 = pdVar13;
      }
      pdVar7 = pdVar7 + (long)dVar20 * 3;
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x10;
      param_1[0xc1] = (double)((long)dVar20 + 1);
      pdVar7[1] = (double)(float)((ulong)uVar22 >> 0x20);
      *pdVar7 = (double)(float)uVar22;
      pdVar7[2] = (double)fVar23;
      dVar20 = (double)((long)dVar20 + 1);
    } while (lVar17 < iVar18);
  }
  uVar8 = local_94 & 0xffffffff;
  if (0 < (int)local_94) {
    uVar12 = 0;
    do {
      lVar17 = (long)*(int *)((long)local_88 + uVar12 * 4);
      piVar10 = (int *)((long)local_a8 +
                       (long)*(int *)((long)local_a8 + lVar17 * 0xc + 4) * 0xc + lVar17 * 0xc);
      iVar18 = piVar10[2];
      piVar10 = piVar10 + (long)*piVar10 * 3;
      if (piVar10[2] != iVar18) {
        dVar20 = param_1[0x124];
        dVar19 = param_1[0x125];
        iVar5 = piVar10[2];
        iVar14 = *(int *)((long)local_a8 + lVar17 * 0xc + 8);
        do {
          iVar9 = iVar5;
          if (dVar20 == dVar19) {
            dVar15 = (double)((long)dVar19 * 2);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = dVar15;
            uVar1 = (long)dVar19 * 0x18 + 8;
            if (SUB168(auVar3 * ZEXT816(0xc),8) != 0 ||
                0xfffffffffffffff7 < (ulong)((long)dVar19 * 0x18)) {
              uVar1 = 0xffffffffffffffff;
            }
            pdVar7 = (double *)operator_new__(uVar1);
            pdVar6 = (double *)param_1[0x123];
            pdVar13 = pdVar7 + 1;
            *pdVar7 = dVar15;
            pdVar7 = param_1 + 0xc3;
            if (dVar19 != 3.162020133383978e-322) {
              pdVar7 = pdVar6;
            }
            memcpy(pdVar13,pdVar7,(long)dVar19 * 0xc);
            dVar20 = dVar19;
            if (pdVar6 != (double *)0x0) {
              operator_delete__(pdVar6 + -1);
              dVar20 = param_1[0x124];
            }
            param_1[0x123] = (double)pdVar13;
            param_1[0x125] = dVar15;
            dVar19 = dVar15;
          }
          else {
            pdVar13 = (double *)param_1[0x123];
          }
          pdVar7 = param_1 + 0xc3;
          if (dVar19 != 3.162020133383978e-322) {
            pdVar7 = pdVar13;
          }
          piVar11 = (int *)((long)pdVar7 + (long)dVar20 * 0xc);
          dVar20 = (double)((long)dVar20 + 1);
          param_1[0x124] = dVar20;
          *piVar11 = iVar18;
          piVar11[1] = iVar14;
          piVar11[2] = iVar9;
          piVar10 = piVar10 + (long)piVar10[1] * 3 + (long)piVar10[(long)piVar10[1] * 3] * 3;
          iVar5 = piVar10[2];
          iVar14 = iVar9;
        } while (piVar10[2] != iVar18);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar8);
  }
  if ((local_88 != (void *)0x0) && (local_80 != '\0')) {
    btAlignedFreeInternal(local_88);
  }
  local_88 = (void *)0x0;
  local_94 = 0;
  local_80 = 1;
  if ((local_a8 != (void *)0x0) && (local_a0 != '\0')) {
    btAlignedFreeInternal(local_a8);
  }
  local_a0 = 1;
  local_a8 = (void *)0x0;
  local_b4 = 0;
  if ((local_c8 != (void *)0x0) && (local_c0 != '\0')) {
    btAlignedFreeInternal(local_c8);
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


