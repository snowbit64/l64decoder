// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: triangulate3d
// Entry Point: 00ec4488
// Size: 940 bytes
// Signature: undefined __thiscall triangulate3d(Triangulate * this, uint param_1, double * param_2, uint param_3, uint * param_4, bool param_5, double param_6)


/* FLOAT_MATH::Triangulate::triangulate3d(unsigned int, double const*, unsigned int, unsigned int&,
   bool, double) */

undefined8 __thiscall
FLOAT_MATH::Triangulate::triangulate3d
          (Triangulate *this,uint param_1,double *param_2,uint param_3,uint *param_4,bool param_5,
          double param_6)

{
  double *pdVar1;
  uint uVar2;
  long lVar3;
  double *__ptr;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  uint local_f4;
  undefined **local_f0 [8];
  void *local_b0;
  void *pvStack_a8;
  undefined8 uStack_a0;
  void *local_98;
  void *local_90;
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar15 = (ulong)param_1;
  free(*(void **)(this + 8));
  free(*(void **)(this + 0x10));
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __ptr = (double *)malloc(uVar15 * 0x18);
  if (param_5) {
    if (2 < param_1) {
      uVar6 = 0;
      pdVar9 = (double *)((long)param_2 + (ulong)param_3);
      pdVar8 = __ptr;
      pdVar10 = (double *)((long)param_2 + (ulong)((param_1 - 1) * param_3));
      pdVar11 = param_2;
      do {
        dVar22 = 0.0;
        pdVar1 = param_2;
        if ((int)uVar15 != 1) {
          pdVar1 = pdVar9;
        }
        dVar21 = 1.0;
        dVar23 = pdVar11[1] - pdVar10[1];
        dVar17 = *pdVar11;
        dVar25 = pdVar11[2] - pdVar10[2];
        dVar20 = 0.0;
        dVar24 = dVar17 - *pdVar10;
        uVar18 = NEON_fmadd(dVar24,dVar24,dVar23 * dVar23);
        dVar19 = (double)NEON_fmadd(dVar25,dVar25,uVar18);
        if (1.000000011686097e-07 < SQRT(dVar19)) {
          dVar22 = 1.0 / SQRT(dVar19);
          dVar21 = dVar24 * dVar22;
          dVar20 = dVar23 * dVar22;
          dVar22 = dVar25 * dVar22;
        }
        dVar19 = pdVar1[1] - pdVar11[1];
        dVar23 = pdVar1[2] - pdVar11[2];
        dVar24 = *pdVar1 - dVar17;
        uVar18 = NEON_fmadd(dVar24,dVar24,dVar19 * dVar19);
        dVar25 = (double)NEON_fmadd(dVar23,dVar23,uVar18);
        if (SQRT(dVar25) <= 1.000000011686097e-07) {
          uVar18 = NEON_fmadd(dVar21,0x3ff0000000000000,dVar20 * 0.0);
          dVar22 = (double)NEON_fmadd(dVar22,0,uVar18);
        }
        else {
          dVar25 = 1.0 / SQRT(dVar25);
          uVar18 = NEON_fmadd(dVar21,dVar24 * dVar25,dVar20 * dVar19 * dVar25);
          dVar22 = (double)NEON_fmadd(dVar22,dVar23 * dVar25,uVar18);
        }
        if (dVar22 < 1.0 - param_6) {
          *pdVar8 = dVar17;
          uVar6 = uVar6 + 1;
          pdVar8[1] = pdVar11[1];
          pdVar8[2] = pdVar11[2];
          pdVar8 = pdVar8 + 3;
        }
        pdVar9 = pdVar1 + 3;
        uVar2 = (int)uVar15 - 1;
        uVar15 = (ulong)uVar2;
        pdVar10 = pdVar11;
        pdVar11 = pdVar11 + 3;
      } while (uVar2 != 0);
      uVar15 = (ulong)uVar6;
      if (2 < uVar6) {
LAB_00ec4678:
        uVar6 = 0;
        local_70 = 0;
        pvStack_a8 = (void *)0x0;
        local_b0 = (void *)0x0;
        local_98 = (void *)0x0;
        uStack_a0 = 0;
        local_f0[0] = &PTR__CTriangulator_01014538;
        uStack_88 = 0;
        local_90 = (void *)0x0;
        local_78 = (void *)0x0;
        local_80 = (void *)0x0;
        do {
          pdVar9 = (double *)((long)__ptr + (ulong)uVar6);
          CTriangulator::addPoint((CTriangulator *)local_f0,*pdVar9,pdVar9[1],pdVar9[2]);
          uVar6 = uVar6 + param_3;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        lVar4 = CTriangulator::triangulate((CTriangulator *)local_f0,&local_f4,param_6);
        if (lVar4 != 0) {
          *param_4 = local_f4;
          puVar5 = (undefined8 *)malloc((ulong)local_f4 * 0x48);
          *(undefined8 **)(this + 0x10) = puVar5;
          if (local_f4 != 0) {
            uVar15 = 0;
            do {
              uVar16 = uVar15 & 0xffffffff;
              iVar7 = (int)uVar15;
              uVar15 = uVar15 + 3;
              puVar12 = (undefined8 *)((long)local_b0 + (ulong)*(uint *)(lVar4 + uVar16 * 4) * 0x18)
              ;
              uVar6 = *(uint *)(lVar4 + (ulong)(iVar7 + 2) * 4);
              puVar14 = (undefined8 *)
                        ((long)local_b0 + (ulong)*(uint *)(lVar4 + (ulong)(iVar7 + 1) * 4) * 0x18);
              *puVar5 = *puVar12;
              puVar5[1] = puVar12[1];
              puVar13 = (undefined8 *)((long)local_b0 + (ulong)uVar6 * 0x18);
              puVar5[2] = puVar12[2];
              puVar5[3] = *puVar14;
              puVar5[4] = puVar14[1];
              puVar5[5] = puVar14[2];
              puVar5[6] = *puVar13;
              puVar5[7] = puVar13[1];
              puVar5[8] = puVar13[2];
              puVar5 = puVar5 + 9;
            } while ((ulong)local_f4 * 3 != uVar15);
          }
        }
        local_f0[0] = &PTR__CTriangulator_01014538;
        if (local_80 != (void *)0x0) {
          local_78 = local_80;
          operator_delete(local_80);
        }
        if (local_98 != (void *)0x0) {
          local_90 = local_98;
          operator_delete(local_98);
        }
        if (local_b0 != (void *)0x0) {
          pvStack_a8 = local_b0;
          operator_delete(local_b0);
        }
        uVar18 = *(undefined8 *)(this + 0x10);
        free(__ptr);
        if (*(long *)(lVar3 + 0x28) == local_68) {
          return uVar18;
        }
        goto LAB_00ec47e0;
      }
    }
  }
  else if (param_1 != 0) {
    uVar6 = 0;
    pdVar9 = __ptr;
    uVar16 = uVar15;
    do {
      pdVar8 = (double *)((long)param_2 + (ulong)uVar6);
      uVar6 = uVar6 + param_3;
      uVar16 = uVar16 - 1;
      dVar22 = *pdVar8;
      dVar17 = pdVar8[2];
      pdVar9[1] = pdVar8[1];
      *pdVar9 = dVar22;
      pdVar9[2] = dVar17;
      pdVar9 = pdVar9 + 3;
    } while (uVar16 != 0);
    param_3 = 0x18;
    if (2 < param_1) goto LAB_00ec4678;
  }
  free(__ptr);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 0;
  }
LAB_00ec47e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


