// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00eacc8c
// Size: 2396 bytes
// Signature: undefined Process(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::ICHull::Process() */

void VHACD::ICHull::Process(void)

{
  long *plVar1;
  ICHull *pIVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ICHull *in_x0;
  undefined8 uVar7;
  TMMTriangle *pTVar8;
  TMMTriangle *pTVar9;
  ICHull *pIVar10;
  ulong uVar11;
  double *pdVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  double *pdVar16;
  long lVar17;
  double *pdVar18;
  long *plVar19;
  TMMEdge *pTVar20;
  TMMVertex *pTVar21;
  long lVar22;
  long *plVar23;
  ICHull *pIVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulong local_2a0;
  uint local_28c;
  long local_288 [64];
  long *local_88;
  ulong uStack_80;
  ulong local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_28c = 0;
  if (*(ulong *)(in_x0 + 0x10) < 3) {
    uVar7 = 4;
    goto LAB_00eacf88;
  }
  if (*(ulong *)(in_x0 + 0x10) != 3) {
    if (in_x0[0x698] != (ICHull)0x0) {
      uVar11 = *(ulong *)(in_x0 + 0x20);
      do {
        while (1 < uVar11) {
          pTVar20 = *(TMMEdge **)(in_x0 + 0x18);
          lVar22 = *(long *)(pTVar20 + 0x30);
          lVar25 = *(long *)(pTVar20 + 0x38);
          TMMEdge::~TMMEdge(pTVar20);
          operator_delete(pTVar20);
          uVar11 = *(long *)(in_x0 + 0x20) - 1;
          *(long *)(in_x0 + 0x18) = lVar22;
          *(ulong *)(in_x0 + 0x20) = uVar11;
          *(long *)(lVar22 + 0x38) = lVar25;
          *(long *)(lVar25 + 0x30) = lVar22;
        }
        while( true ) {
          if (uVar11 != 1) {
            uVar11 = *(ulong *)(in_x0 + 0x30);
            goto joined_r0x00eacddc;
          }
          pTVar20 = *(TMMEdge **)(in_x0 + 0x18);
          if (pTVar20 != (TMMEdge *)0x0) break;
          uVar11 = 0;
          *(undefined8 *)(in_x0 + 0x18) = 0;
          *(undefined8 *)(in_x0 + 0x20) = 0;
        }
        TMMEdge::~TMMEdge(pTVar20);
        operator_delete(pTVar20);
        uVar11 = *(long *)(in_x0 + 0x20) - 1;
        *(undefined8 *)(in_x0 + 0x18) = 0;
        *(ulong *)(in_x0 + 0x20) = uVar11;
      } while( true );
    }
    if (*(long *)(in_x0 + 0x30) == 0) {
LAB_00eace68:
      iVar6 = DoubleTriangle();
      if (iVar6 != 0) {
        uVar7 = 1;
        goto LAB_00eacf88;
      }
      local_28c = 3;
      lVar22 = *(long *)(in_x0 + 8);
      lVar25 = *(long *)(lVar22 + 0x40);
      cVar3 = *(char *)(lVar25 + 0x31);
    }
    else {
      lVar22 = *(long *)(in_x0 + 8);
      lVar25 = *(long *)(lVar22 + 0x40);
      cVar3 = *(char *)(lVar25 + 0x31);
    }
    if (cVar3 == '\0') {
      if (*(long *)(in_x0 + 0x10) == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      do {
        lVar22 = lVar25;
        *(long *)(in_x0 + 8) = lVar22;
        lVar25 = *(long *)(lVar22 + 0x40);
      } while (*(char *)(*(long *)(lVar22 + 0x40) + 0x31) == '\0');
    }
    plVar23 = (long *)(in_x0 + 0x30);
    pcVar13 = (char *)(lVar22 + 0x31);
    cVar3 = *pcVar13;
    while (cVar3 == '\0') {
      *pcVar13 = '\x01';
      uVar11 = ProcessPoint();
      if ((uVar11 & 1) != 0) {
        local_28c = local_28c + 1;
        CleanEdges();
        CleanTriangles();
        CleanVertices(in_x0,&local_28c);
        if (*(long *)(in_x0 + 0x10) != 0) {
          *(undefined8 *)(in_x0 + 8) = *(undefined8 *)(*(long *)(in_x0 + 8) + 0x38);
        }
        uVar11 = TMMesh::CheckConsistancy();
        if ((uVar11 & 1) == 0) {
          uVar11 = *(ulong *)(in_x0 + 0x10);
          if (uVar11 == 0) goto LAB_00ead5dc;
          pTVar21 = *(TMMVertex **)(in_x0 + 8);
          uVar7 = 3;
          uVar26 = uVar11;
          goto LAB_00ead558;
        }
      }
      pcVar13 = (char *)(*(long *)(in_x0 + 8) + 0x31);
      cVar3 = *pcVar13;
    }
    if (in_x0[0x698] == (ICHull)0x0) {
      uVar7 = 0;
    }
    else {
      lVar22 = *(long *)(in_x0 + 0x30);
      uVar11 = 0;
      uStack_80 = 0;
      local_88 = (long *)0x0;
      local_78 = 0x40;
      if (lVar22 != 0) {
        local_2a0 = 0x40;
        do {
          lVar25 = *(long *)(in_x0 + 0x28);
          if (((*(int *)(*(long *)(lVar25 + 0x20) + 0x18) == 0x7fffffff) ||
              (*(int *)(*(long *)(lVar25 + 0x28) + 0x18) == 0x7fffffff)) ||
             (*(int *)(*(long *)(lVar25 + 0x30) + 0x18) == 0x7fffffff)) {
            uVar27 = *(ulong *)(in_x0 + 0x670);
            uVar26 = *(ulong *)(in_x0 + 0x678);
            lVar15 = lVar25;
            if (uVar27 == uVar26) {
              uVar26 = uVar27 << 1;
              uVar14 = uVar27 << 4;
              if (uVar26 >> 0x3d != 0) {
                uVar14 = 0xffffffffffffffff;
              }
              pIVar10 = (ICHull *)operator_new__(uVar14);
              pIVar24 = *(ICHull **)(in_x0 + 0x668);
              pIVar2 = in_x0 + 0x468;
              if (uVar27 != 0x40) {
                pIVar2 = pIVar24;
              }
              memcpy(pIVar10,pIVar2,uVar27 << 3);
              if (pIVar24 != (ICHull *)0x0) {
                operator_delete__(pIVar24);
                uVar27 = *(ulong *)(in_x0 + 0x670);
                lVar15 = *(long *)(in_x0 + 0x28);
              }
              *(ICHull **)(in_x0 + 0x668) = pIVar10;
              *(ulong *)(in_x0 + 0x678) = uVar26;
            }
            else {
              pIVar10 = *(ICHull **)(in_x0 + 0x668);
            }
            pIVar2 = in_x0 + 0x468;
            if (uVar26 != 0x40) {
              pIVar2 = pIVar10;
            }
            *(ulong *)(in_x0 + 0x670) = uVar27 + 1;
            *(long *)(pIVar2 + uVar27 * 8) = lVar15;
            lVar15 = *(long *)(in_x0 + 0x28);
            plVar19 = (long *)(*(long *)(lVar25 + 8) + 8);
            if ((*plVar19 == lVar15) ||
               (plVar19 = (long *)(*(long *)(lVar25 + 8) + 0x10), *plVar19 == lVar15)) {
              *plVar19 = 0;
              lVar15 = *(long *)(in_x0 + 0x28);
              lVar17 = *(long *)(lVar25 + 0x10);
              plVar19 = (long *)(lVar17 + 8);
              if (*plVar19 != lVar15) goto LAB_00ead174;
LAB_00ead19c:
              *plVar19 = 0;
              lVar15 = *(long *)(in_x0 + 0x28);
              lVar25 = *(long *)(lVar25 + 0x18);
              plVar19 = (long *)(lVar25 + 8);
              if (*plVar19 == lVar15) goto LAB_00ead1c8;
LAB_00ead1b8:
              plVar19 = (long *)(lVar25 + 0x10);
              if (*plVar19 == lVar15) goto LAB_00ead1c8;
            }
            else {
              lVar17 = *(long *)(lVar25 + 0x10);
              plVar19 = (long *)(lVar17 + 8);
              if (*plVar19 == lVar15) goto LAB_00ead19c;
LAB_00ead174:
              plVar19 = (long *)(lVar17 + 0x10);
              if (*plVar19 == lVar15) goto LAB_00ead19c;
              lVar25 = *(long *)(lVar25 + 0x18);
              plVar19 = (long *)(lVar25 + 8);
              if (*plVar19 != lVar15) goto LAB_00ead1b8;
LAB_00ead1c8:
              *plVar19 = 0;
            }
            lVar25 = *plVar23;
          }
          else {
            uVar26 = local_2a0;
            plVar19 = local_88;
            uVar27 = local_78;
            if (uVar11 == local_2a0) {
              uVar26 = local_2a0 << 1;
              uVar27 = local_2a0 << 4;
              if (uVar26 >> 0x3d != 0) {
                uVar27 = 0xffffffffffffffff;
              }
              plVar19 = (long *)operator_new__(uVar27);
              plVar5 = local_88;
              plVar1 = local_288;
              if (local_2a0 != 0x40) {
                plVar1 = local_88;
              }
              memcpy(plVar19,plVar1,local_2a0 << 3);
              uVar27 = uVar26;
              if (plVar5 != (long *)0x0) {
                operator_delete__(plVar5);
                lVar25 = *(long *)(in_x0 + 0x28);
              }
            }
            local_78 = uVar27;
            local_88 = plVar19;
            plVar19 = local_288;
            if (uVar26 != 0x40) {
              plVar19 = local_88;
            }
            uStack_80 = uVar11 + 1;
            plVar19[uVar11] = lVar25;
            lVar25 = *plVar23;
            uVar11 = uVar11 + 1;
            local_2a0 = uVar26;
          }
          if (lVar25 != 0) {
            *(undefined8 *)(in_x0 + 0x28) = *(undefined8 *)(*(long *)(in_x0 + 0x28) + 0x40);
          }
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      lVar22 = *(long *)(in_x0 + 0x20);
      if (lVar22 != 0) {
        lVar25 = lVar22;
        do {
          lVar15 = *(long *)(in_x0 + 0x18);
          if ((*(ulong *)(lVar15 + 8) | *(ulong *)(lVar15 + 0x10)) == 0) {
            uVar26 = *(ulong *)(in_x0 + 0x240);
            uVar27 = *(ulong *)(in_x0 + 0x248);
            if (uVar26 == uVar27) {
              uVar27 = uVar26 << 1;
              uVar14 = uVar26 << 4;
              if (uVar27 >> 0x3d != 0) {
                uVar14 = 0xffffffffffffffff;
              }
              pIVar10 = (ICHull *)operator_new__(uVar14);
              pIVar24 = *(ICHull **)(in_x0 + 0x238);
              pIVar2 = in_x0 + 0x38;
              if (uVar26 != 0x40) {
                pIVar2 = pIVar24;
              }
              memcpy(pIVar10,pIVar2,uVar26 << 3);
              if (pIVar24 != (ICHull *)0x0) {
                operator_delete__(pIVar24);
                lVar15 = *(long *)(in_x0 + 0x18);
                lVar25 = *(long *)(in_x0 + 0x20);
                uVar26 = *(ulong *)(in_x0 + 0x240);
              }
              *(ICHull **)(in_x0 + 0x238) = pIVar10;
              *(ulong *)(in_x0 + 0x248) = uVar27;
            }
            else {
              pIVar10 = *(ICHull **)(in_x0 + 0x238);
            }
            pIVar2 = in_x0 + 0x38;
            if (uVar27 != 0x40) {
              pIVar2 = pIVar10;
            }
            *(ulong *)(in_x0 + 0x240) = uVar26 + 1;
            *(long *)(pIVar2 + uVar26 * 8) = lVar15;
          }
          if (lVar25 != 0) {
            *(undefined8 *)(in_x0 + 0x18) = *(undefined8 *)(*(long *)(in_x0 + 0x18) + 0x30);
          }
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      uVar26 = *(ulong *)(in_x0 + 0x10);
      uVar27 = uVar26;
      uVar14 = uVar26;
      for (; uVar26 != 0; uVar26 = uVar26 - 1) {
        pTVar21 = *(TMMVertex **)(in_x0 + 8);
        if (*(int *)(pTVar21 + 0x18) == 0x7fffffff) {
          if (uVar27 < 2) {
            if (uVar27 == 1) {
              TMMVertex::~TMMVertex(pTVar21);
              operator_delete(pTVar21);
              uVar27 = *(long *)(in_x0 + 0x10) - 1;
              *(undefined8 *)(in_x0 + 8) = 0;
              *(ulong *)(in_x0 + 0x10) = uVar27;
              uVar14 = uVar27;
            }
            else {
              uVar27 = 0;
              uVar14 = 0;
            }
          }
          else {
            lVar22 = *(long *)(pTVar21 + 0x38);
            lVar25 = *(long *)(pTVar21 + 0x40);
            TMMVertex::~TMMVertex(pTVar21);
            operator_delete(pTVar21);
            uVar27 = *(long *)(in_x0 + 0x10) - 1;
            *(long *)(in_x0 + 8) = lVar22;
            *(ulong *)(in_x0 + 0x10) = uVar27;
            *(long *)(lVar22 + 0x40) = lVar25;
            *(long *)(lVar25 + 0x38) = lVar22;
            uVar14 = uVar27;
          }
        }
        else {
          pTVar21[0x31] = (TMMVertex)0x0;
          if (uVar14 != 0) {
            *(undefined8 *)(in_x0 + 8) = *(undefined8 *)(pTVar21 + 0x38);
          }
        }
      }
      CleanEdges();
      CleanTriangles();
      plVar1 = local_88;
      plVar19 = local_288;
      if (local_78 != 0x40) {
        plVar19 = local_88;
      }
      if (uVar11 != 0) {
        lVar22 = *plVar23;
        do {
          if (lVar22 == 0) {
            pTVar8 = (TMMTriangle *)operator_new(0x50);
            TMMTriangle::TMMTriangle(pTVar8);
            *(TMMTriangle **)(in_x0 + 0x28) = pTVar8;
            *(TMMTriangle **)(pTVar8 + 0x40) = pTVar8;
            *(TMMTriangle **)(pTVar8 + 0x48) = pTVar8;
          }
          else {
            lVar22 = *(long *)(in_x0 + 0x28);
            lVar25 = *(long *)(lVar22 + 0x40);
            pTVar8 = (TMMTriangle *)operator_new(0x50);
            TMMTriangle::TMMTriangle(pTVar8);
            *(TMMTriangle **)(in_x0 + 0x28) = pTVar8;
            *(long *)(pTVar8 + 0x40) = lVar25;
            *(long *)(pTVar8 + 0x48) = lVar22;
            *(TMMTriangle **)(lVar22 + 0x40) = pTVar8;
            *(undefined8 *)(lVar25 + 0x48) = *(undefined8 *)(in_x0 + 0x28);
            pTVar8 = *(TMMTriangle **)(in_x0 + 0x28);
          }
          uVar11 = uVar11 - 1;
          lVar22 = *plVar23 + 1;
          *plVar23 = lVar22;
          *(undefined8 *)(pTVar8 + 0x20) = *(undefined8 *)(*plVar19 + 0x28);
          *(undefined8 *)(pTVar8 + 0x28) = *(undefined8 *)(*plVar19 + 0x20);
          *(undefined8 *)(pTVar8 + 0x30) = *(undefined8 *)(*plVar19 + 0x30);
          plVar19 = plVar19 + 1;
        } while (uVar11 != 0);
      }
      if (plVar1 != (long *)0x0) {
        operator_delete__(plVar1);
      }
      uVar7 = 0;
    }
    goto LAB_00eacf88;
  }
  in_x0[0x698] = (ICHull)0x1;
  if (*(long *)(in_x0 + 0x30) == 0) {
    pTVar8 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar8);
    *(TMMTriangle **)(pTVar8 + 0x40) = pTVar8;
    *(TMMTriangle **)(pTVar8 + 0x48) = pTVar8;
    lVar22 = *(long *)(in_x0 + 0x30);
    *(TMMTriangle **)(in_x0 + 0x28) = pTVar8;
    *(long *)(in_x0 + 0x30) = lVar22 + 1;
    if (lVar22 == -1) goto LAB_00eacd24;
LAB_00eacea0:
    lVar22 = *(long *)(pTVar8 + 0x40);
    pTVar9 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar9);
    *(TMMTriangle **)(in_x0 + 0x28) = pTVar9;
    *(long *)(pTVar9 + 0x40) = lVar22;
    *(TMMTriangle **)(pTVar9 + 0x48) = pTVar8;
    *(TMMTriangle **)(pTVar8 + 0x40) = pTVar9;
    *(undefined8 *)(lVar22 + 0x48) = *(undefined8 *)(in_x0 + 0x28);
    pTVar9 = *(TMMTriangle **)(in_x0 + 0x28);
  }
  else {
    lVar22 = *(long *)(in_x0 + 0x28);
    lVar25 = *(long *)(lVar22 + 0x40);
    pTVar8 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar8);
    *(TMMTriangle **)(in_x0 + 0x28) = pTVar8;
    *(long *)(pTVar8 + 0x40) = lVar25;
    *(long *)(pTVar8 + 0x48) = lVar22;
    *(TMMTriangle **)(lVar22 + 0x40) = pTVar8;
    *(undefined8 *)(lVar25 + 0x48) = *(undefined8 *)(in_x0 + 0x28);
    pTVar8 = *(TMMTriangle **)(in_x0 + 0x28);
    lVar22 = *(long *)(in_x0 + 0x30);
    *(long *)(in_x0 + 0x30) = lVar22 + 1;
    if (lVar22 != -1) goto LAB_00eacea0;
LAB_00eacd24:
    pTVar9 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar9);
    *(TMMTriangle **)(in_x0 + 0x28) = pTVar9;
    *(TMMTriangle **)(pTVar9 + 0x40) = pTVar9;
    *(TMMTriangle **)(pTVar9 + 0x48) = pTVar9;
  }
  pdVar16 = *(double **)(in_x0 + 8);
  *(long *)(in_x0 + 0x30) = *(long *)(in_x0 + 0x30) + 1;
  pdVar12 = (double *)pdVar16[7];
  pdVar18 = (double *)pdVar12[7];
  dVar29 = *pdVar12 - *pdVar16;
  dVar31 = pdVar12[1] - pdVar16[1];
  dVar33 = pdVar18[1] - pdVar16[1];
  dVar32 = pdVar12[2] - pdVar16[2];
  dVar30 = pdVar18[2] - pdVar16[2];
  dVar34 = *pdVar18 - *pdVar16;
  dVar28 = (double)NEON_fmadd(dVar32,dVar34,dVar30 * -dVar29);
  dVar30 = (double)NEON_fmadd(dVar31,dVar30,dVar33 * -dVar32);
  *(double *)(in_x0 + 0x688) = dVar28;
  *(double *)(in_x0 + 0x680) = dVar30;
  dVar29 = (double)NEON_fmadd(dVar29,dVar33,dVar34 * -dVar31);
  uVar7 = NEON_fmadd(dVar30,dVar30,dVar28 * dVar28);
  dVar31 = (double)NEON_fmadd(dVar29,dVar29,uVar7);
  *(double *)(in_x0 + 0x690) = dVar29;
  dVar31 = SQRT(dVar31);
  if (dVar31 != 0.0) {
    *(double *)(in_x0 + 0x680) = dVar30 / dVar31;
    *(double *)(in_x0 + 0x688) = dVar28 / dVar31;
    *(double *)(in_x0 + 0x690) = dVar29 / dVar31;
  }
  uVar7 = 0;
  *(double **)(pTVar8 + 0x20) = pdVar16;
  *(double **)(pTVar8 + 0x28) = pdVar12;
  *(double **)(pTVar8 + 0x30) = pdVar18;
  *(double **)(pTVar9 + 0x20) = pdVar12;
  *(double **)(pTVar9 + 0x28) = pdVar18;
  *(double **)(pTVar9 + 0x30) = pdVar18;
LAB_00eacf88:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
joined_r0x00eacddc:
  while (1 < uVar11) {
    pTVar8 = *(TMMTriangle **)(in_x0 + 0x28);
    lVar22 = *(long *)(pTVar8 + 0x40);
    lVar25 = *(long *)(pTVar8 + 0x48);
    TMMTriangle::~TMMTriangle(pTVar8);
    operator_delete(pTVar8);
    uVar11 = *(long *)(in_x0 + 0x30) - 1;
    *(long *)(in_x0 + 0x28) = lVar22;
    *(ulong *)(in_x0 + 0x30) = uVar11;
    *(long *)(lVar22 + 0x48) = lVar25;
    *(long *)(lVar25 + 0x40) = lVar22;
  }
  while( true ) {
    if (uVar11 != 1) {
      in_x0[0x698] = (ICHull)0x0;
      goto LAB_00eace68;
    }
    pTVar8 = *(TMMTriangle **)(in_x0 + 0x28);
    if (pTVar8 != (TMMTriangle *)0x0) break;
    uVar11 = 0;
    *(undefined8 *)(in_x0 + 0x28) = 0;
    *(undefined8 *)(in_x0 + 0x30) = 0;
  }
  TMMTriangle::~TMMTriangle(pTVar8);
  operator_delete(pTVar8);
  uVar11 = *(long *)(in_x0 + 0x30) - 1;
  *(undefined8 *)(in_x0 + 0x28) = 0;
  *(ulong *)(in_x0 + 0x30) = uVar11;
  goto joined_r0x00eacddc;
  while( true ) {
    pTVar21 = *(TMMVertex **)(pTVar21 + 0x38);
    uVar26 = uVar26 - 1;
    *(TMMVertex **)(in_x0 + 8) = pTVar21;
    if (uVar26 == 0) break;
LAB_00ead558:
    if (*(int *)(pTVar21 + 0x18) == 0x7fffffff) {
      if (uVar11 < 2) {
        if (uVar11 == 1) {
          TMMVertex::~TMMVertex(pTVar21);
          operator_delete(pTVar21);
          uVar7 = 3;
          *(undefined8 *)(in_x0 + 8) = 0;
          *(long *)(in_x0 + 0x10) = *(long *)(in_x0 + 0x10) + -1;
        }
        else {
LAB_00ead5dc:
          uVar7 = 3;
        }
      }
      else {
        lVar22 = *(long *)(pTVar21 + 0x38);
        lVar25 = *(long *)(pTVar21 + 0x40);
        TMMVertex::~TMMVertex(pTVar21);
        operator_delete(pTVar21);
        uVar7 = 3;
        *(long *)(in_x0 + 8) = lVar22;
        *(long *)(in_x0 + 0x10) = *(long *)(in_x0 + 0x10) + -1;
        *(long *)(lVar22 + 0x40) = lVar25;
        *(long *)(lVar25 + 0x38) = lVar22;
      }
      break;
    }
  }
  goto LAB_00eacf88;
}


