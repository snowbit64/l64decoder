// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimplifyConvexHull
// Entry Point: 00ea8c84
// Size: 1188 bytes
// Signature: undefined __thiscall SimplifyConvexHull(VHACD * this, Mesh * param_1, ulong param_2, double param_3)


/* VHACD::VHACD::SimplifyConvexHull(VHACD::Mesh*, unsigned long, double) */

void __thiscall
VHACD::VHACD::SimplifyConvexHull(VHACD *this,Mesh *param_1,ulong param_2,double param_3)

{
  double *pdVar1;
  Mesh *pMVar2;
  Vec3 *pVVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  double *pdVar10;
  ulong uVar11;
  double *pdVar12;
  Mesh *pMVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double local_768;
  double dStack_760;
  double local_758;
  ICHull aIStack_750 [16];
  ulong local_740;
  ulong local_720;
  void *local_518;
  void *local_300;
  void *local_e8;
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  if (4 < param_2) {
    ICHull::ICHull(aIStack_750);
    plVar16 = *(long **)(this + 8);
    if (plVar16 == (long *)0x0) {
      pVVar3 = (Vec3 *)param_1;
      if (*(long *)(param_1 + 0x610) != 0x40) {
        pVVar3 = *(Vec3 **)(param_1 + 0x600);
      }
      ICHull::AddPoints(aIStack_750,pVVar3,*(ulong *)(param_1 + 0x608));
    }
    else {
      pdVar1 = (double *)param_1;
      if (*(long *)(param_1 + 0x610) != 0x40) {
        pdVar1 = *(double **)(param_1 + 0x600);
      }
      uVar18 = *(ulong *)(param_1 + 0x608) & 0xffffffff;
      uVar14 = (uint)*(ulong *)(param_1 + 0x608);
      dVar20 = *pdVar1;
      dVar23 = pdVar1[1];
      dVar21 = pdVar1[2];
      dVar27 = pdVar1[3];
      dVar29 = pdVar1[4];
      dVar25 = pdVar1[5];
      if (1 < uVar14) {
        dVar31 = dVar27;
        if (dVar20 <= dVar27) {
          dVar31 = dVar20;
        }
        dVar20 = dVar31;
        dVar31 = dVar29;
        if (dVar23 <= dVar29) {
          dVar31 = dVar23;
        }
        dVar23 = dVar31;
        dVar31 = dVar25;
        if (dVar21 <= dVar25) {
          dVar31 = dVar21;
        }
        dVar21 = dVar31;
        lVar15 = uVar18 - 2;
        if (lVar15 != 0) {
          pdVar10 = pdVar1 + 8;
          dVar31 = dVar20;
          dVar22 = dVar21;
          dVar24 = dVar23;
          dVar26 = dVar25;
          dVar28 = dVar27;
          dVar30 = dVar29;
          do {
            dVar27 = pdVar10[-2];
            dVar29 = pdVar10[-1];
            dVar25 = *pdVar10;
            dVar20 = dVar27;
            if (dVar31 <= dVar27) {
              dVar20 = dVar31;
            }
            dVar23 = dVar29;
            if (dVar24 <= dVar29) {
              dVar23 = dVar24;
            }
            dVar21 = dVar25;
            if (dVar22 <= dVar25) {
              dVar21 = dVar22;
            }
            if (dVar27 <= dVar28) {
              dVar27 = dVar28;
            }
            if (dVar29 <= dVar30) {
              dVar29 = dVar30;
            }
            if (dVar25 <= dVar26) {
              dVar25 = dVar26;
            }
            lVar15 = lVar15 + -1;
            pdVar10 = pdVar10 + 3;
            dVar31 = dVar20;
            dVar22 = dVar21;
            dVar24 = dVar23;
            dVar26 = dVar25;
            dVar28 = dVar27;
            dVar30 = dVar29;
          } while (lVar15 != 0);
        }
      }
      dVar31 = *(double *)(this + 0x2a0);
      puVar7 = (ulong *)operator_new__(uVar18 * 0x18 + 8);
      *puVar7 = uVar18;
      if (uVar14 != 0) {
        lVar15 = 0;
        uVar17 = 0;
        uVar19 = NEON_fmadd(dVar27 - dVar20,dVar27 - dVar20,(dVar29 - dVar23) * (dVar29 - dVar23));
        dVar20 = (double)NEON_fmadd(dVar25 - dVar21,dVar25 - dVar21,uVar19);
        dVar20 = SQRT(dVar20) * 0.01 * SQRT(dVar20) * 0.01;
        do {
          pdVar12 = (double *)(puVar7 + 1 + uVar17 * 3);
          pdVar10 = pdVar1 + lVar15 * 3;
          dVar21 = *pdVar10;
          *pdVar12 = dVar21;
          dVar23 = pdVar10[1];
          pdVar12[1] = dVar23;
          dVar25 = pdVar10[2];
          pdVar12[2] = dVar25;
          uVar8 = (**(code **)(*plVar16 + 0x10))(dVar31 * 4.0,plVar16,pdVar10,&local_768);
          if ((uVar8 & 1) != 0) {
            *pdVar12 = local_768;
            pdVar12[1] = dStack_760;
            pdVar12[2] = local_758;
            dVar21 = local_768;
            dVar23 = dStack_760;
            dVar25 = local_758;
          }
          if ((int)uVar17 == 0) {
            uVar17 = 1;
          }
          else {
            uVar19 = NEON_fmadd((double)puVar7[1] - dVar21,(double)puVar7[1] - dVar21,
                                ((double)puVar7[2] - dVar23) * ((double)puVar7[2] - dVar23));
            dVar27 = (double)NEON_fmadd((double)puVar7[3] - dVar25,(double)puVar7[3] - dVar25,uVar19
                                       );
            if (dVar20 <= dVar27) {
              pdVar10 = (double *)(puVar7 + 6);
              uVar8 = 1;
              do {
                uVar11 = uVar8;
                if (uVar17 == uVar11) break;
                uVar19 = NEON_fmadd(pdVar10[-2] - dVar21,pdVar10[-2] - dVar21,
                                    (pdVar10[-1] - dVar23) * (pdVar10[-1] - dVar23));
                dVar27 = (double)NEON_fmadd(*pdVar10 - dVar25,*pdVar10 - dVar25,uVar19);
                pdVar10 = pdVar10 + 3;
                uVar8 = uVar11 + 1;
              } while (dVar20 <= dVar27);
              uVar17 = (ulong)((int)uVar17 + (uVar11 < uVar17 ^ 1));
            }
          }
          if (lVar15 + 1U == uVar18) goto LAB_00ea8f50;
          lVar15 = lVar15 + 1;
          plVar16 = *(long **)(this + 8);
        } while( true );
      }
      uVar17 = 0;
LAB_00ea8f50:
      ICHull::AddPoints(aIStack_750,(Vec3 *)(puVar7 + 1),uVar17);
      operator_delete__(puVar7);
    }
    ICHull::Process(aIStack_750,(uint)param_2,param_3);
    uVar18 = *(ulong *)(param_1 + 0x610);
    if (uVar18 < local_740) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_740;
      uVar17 = local_740 * 0x18 + 8;
      if (SUB168(auVar4 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < local_740 * 0x18) {
        uVar17 = 0xffffffffffffffff;
      }
      puVar7 = (ulong *)operator_new__(uVar17);
      lVar15 = *(long *)(param_1 + 0x608);
      pMVar13 = *(Mesh **)(param_1 + 0x600);
      pMVar2 = param_1;
      if (uVar18 != 0x40) {
        pMVar2 = pMVar13;
      }
      *puVar7 = local_740;
      memcpy(puVar7 + 1,pMVar2,lVar15 * 0x18);
      if (pMVar13 != (Mesh *)0x0) {
        operator_delete__(pMVar13 + -8);
      }
      *(ulong **)(param_1 + 0x600) = puVar7 + 1;
      *(ulong *)(param_1 + 0x610) = local_740;
      uVar18 = local_740;
    }
    uVar17 = *(ulong *)(param_1 + 0x928);
    *(ulong *)(param_1 + 0x608) = local_740;
    if (uVar17 < local_720) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_720;
      uVar8 = local_720 * 0xc + 8;
      if (SUB168(auVar5 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < local_720 * 0xc) {
        uVar8 = 0xffffffffffffffff;
      }
      puVar9 = (ulong *)operator_new__(uVar8);
      lVar15 = *(long *)(param_1 + 0x920);
      pMVar13 = *(Mesh **)(param_1 + 0x918);
      pMVar2 = param_1 + 0x618;
      if (uVar17 != 0x40) {
        pMVar2 = pMVar13;
      }
      puVar7 = puVar9 + 1;
      *puVar9 = local_720;
      memcpy(puVar7,pMVar2,lVar15 * 0xc);
      if (pMVar13 != (Mesh *)0x0) {
        operator_delete__(pMVar13 + -8);
        uVar18 = *(ulong *)(param_1 + 0x610);
      }
      *(ulong **)(param_1 + 0x918) = puVar7;
      *(ulong *)(param_1 + 0x928) = local_720;
      uVar17 = local_720;
    }
    else {
      puVar7 = *(ulong **)(param_1 + 0x918);
    }
    *(ulong *)(param_1 + 0x920) = local_720;
    pVVar3 = (Vec3 *)param_1;
    if (uVar18 != 0x40) {
      pVVar3 = *(Vec3 **)(param_1 + 0x600);
    }
    puVar9 = (ulong *)(param_1 + 0x618);
    if (uVar17 != 0x40) {
      puVar9 = puVar7;
    }
    TMMesh::GetIFS((TMMesh *)aIStack_750,pVVar3,(Vec3 *)puVar9);
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
    }
    if (local_300 != (void *)0x0) {
      operator_delete__(local_300);
    }
    if (local_518 != (void *)0x0) {
      operator_delete__(local_518);
    }
    TMMesh::~TMMesh((TMMesh *)aIStack_750);
  }
  if (*(long *)(lVar6 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


