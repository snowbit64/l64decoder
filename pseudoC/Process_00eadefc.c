// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00eadefc
// Size: 2548 bytes
// Signature: undefined __thiscall Process(ICHull * this, uint param_1, double param_2)


/* VHACD::ICHull::Process(unsigned int, double) */

byte __thiscall VHACD::ICHull::Process(ICHull *this,uint param_1,double param_2)

{
  ICHull *pIVar1;
  undefined8 *puVar2;
  TMMVertex TVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  TMMTriangle *pTVar7;
  TMMTriangle *pTVar8;
  ICHull *pIVar9;
  ulong uVar10;
  double *pdVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  double *pdVar15;
  double *pdVar16;
  long *plVar17;
  TMMTriangle *unaff_x20;
  long lVar18;
  ulong uVar19;
  TMMVertex *pTVar20;
  long lVar21;
  undefined8 *puVar22;
  ICHull *pIVar23;
  TMMVertex **ppTVar24;
  ulong uVar25;
  uint uVar26;
  undefined8 *puVar27;
  double dVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dStack_320;
  long lStack_318;
  double dStack_310;
  undefined *puStack_300;
  code *pcStack_2f8;
  undefined8 *puStack_2f0;
  ulong uStack_2e8;
  TMMTriangle *pTStack_2e0;
  ICHull *pIStack_2d8;
  TMMVertex **local_2c8;
  long lStack_2c0;
  ulong local_2b8;
  uint local_2ac;
  double local_2a8 [64];
  double *local_a8;
  ulong uStack_a0;
  ulong local_98;
  long local_90;
  
  lVar13 = tpidr_el0;
  local_90 = *(long *)(lVar13 + 0x28);
  local_2ac = 0;
  if ((param_1 < 3) || (*(ulong *)(this + 0x10) < 3)) {
    bVar5 = 4;
    goto LAB_00eadf50;
  }
  if (*(ulong *)(this + 0x10) != 3) {
    uVar19 = (ulong)param_1;
    if (this[0x698] != (ICHull)0x0) {
      uVar10 = *(ulong *)(this + 0x30);
      do {
        while (1 < uVar10) {
          unaff_x20 = *(TMMTriangle **)(this + 0x28);
          lVar18 = *(long *)(unaff_x20 + 0x40);
          lVar21 = *(long *)(unaff_x20 + 0x48);
          TMMTriangle::~TMMTriangle(unaff_x20);
          operator_delete(unaff_x20);
          uVar10 = *(long *)(this + 0x30) - 1;
          *(long *)(this + 0x28) = lVar18;
          *(ulong *)(this + 0x30) = uVar10;
          *(long *)(lVar18 + 0x48) = lVar21;
          *(long *)(lVar21 + 0x40) = lVar18;
        }
        while( true ) {
          if (uVar10 != 1) {
            uVar10 = *(ulong *)(this + 0x20);
            goto joined_r0x00eae098;
          }
          unaff_x20 = *(TMMTriangle **)(this + 0x28);
          if (unaff_x20 != (TMMTriangle *)0x0) break;
          uVar10 = 0;
          *(undefined8 *)(this + 0x28) = 0;
          *(undefined8 *)(this + 0x30) = 0;
        }
        TMMTriangle::~TMMTriangle(unaff_x20);
        operator_delete(unaff_x20);
        uVar10 = *(long *)(this + 0x30) - 1;
        *(undefined8 *)(this + 0x28) = 0;
        *(ulong *)(this + 0x30) = uVar10;
      } while( true );
    }
LAB_00eae120:
    if (*(long *)(this + 0x30) == 0) {
      iVar6 = DoubleTriangle();
      if (iVar6 != 0) {
        bVar5 = 1;
        goto LAB_00eadf50;
      }
      uVar26 = 3;
      local_2ac = 3;
      puVar22 = *(undefined8 **)(this + 8);
      TVar3 = *(TMMVertex *)((long)puVar22 + 0x31);
    }
    else {
      uVar26 = 0;
      puVar22 = *(undefined8 **)(this + 8);
      TVar3 = *(TMMVertex *)((long)puVar22 + 0x31);
    }
    if ((TVar3 == (TMMVertex)0x0) && (ppTVar24 = (TMMVertex **)(this + 8), uVar26 < param_1)) {
      do {
        puVar27 = (undefined8 *)0x0;
        dVar28 = param_2;
        if (uVar26 < 5) {
          dVar28 = 0.0;
        }
        unaff_x20 = (TMMTriangle *)puVar22[8];
        local_2a8[0] = 0.0;
        do {
          uVar10 = ComputePointVolume(this,local_2a8,false);
          if ((uVar10 & 1) == 0) {
            puVar22 = *(undefined8 **)(this + 8);
          }
          else {
            puVar22 = *(undefined8 **)(this + 8);
            puVar14 = puVar22;
            dVar32 = local_2a8[0];
            if (local_2a8[0] <= dVar28) {
              puVar14 = puVar27;
              dVar32 = dVar28;
            }
            dVar28 = dVar32;
            puVar27 = puVar14;
            if (*(long *)(this + 0x10) != 0) {
              puVar22 = (undefined8 *)puVar22[7];
              *(undefined8 **)(this + 8) = puVar22;
            }
          }
        } while (*(TMMVertex *)((long)puVar22 + 0x31) == (TMMVertex)0x0);
        puVar22 = *(undefined8 **)(unaff_x20 + 0x38);
        *(undefined8 **)(this + 8) = puVar22;
        if ((puVar27 == (undefined8 *)0x0) || (puVar27 == puVar22)) {
          if (puVar27 == (undefined8 *)0x0) break;
        }
        else {
          uVar29 = puVar22[1];
          uVar33 = *puVar22;
          uVar30 = puVar22[2];
          *puVar22 = *puVar27;
          puVar22[1] = puVar27[1];
          puVar22[2] = puVar27[2];
          puVar27[1] = uVar29;
          *puVar27 = uVar33;
          puVar27[2] = uVar30;
        }
        *(TMMVertex *)((long)puVar22 + 0x31) = (TMMVertex)0x1;
        uVar10 = ProcessPoint();
        if ((uVar10 & 1) != 0) {
          local_2ac = uVar26 + 1;
          CleanEdges();
          CleanTriangles();
          CleanVertices(this,&local_2ac);
          uVar10 = TMMesh::CheckConsistancy();
          lVar18 = *(long *)(this + 0x10);
          if ((uVar10 & 1) == 0) {
            if (lVar18 != 0) {
              pTVar20 = *ppTVar24;
              bVar5 = 3;
              goto LAB_00eae8a4;
            }
            bVar5 = 3;
            goto LAB_00eadf50;
          }
          if (lVar18 != 0) {
            *ppTVar24 = *(TMMVertex **)(*ppTVar24 + 0x38);
          }
        }
        puVar22 = (undefined8 *)*ppTVar24;
        if ((*(TMMVertex *)((long)puVar22 + 0x31) != (TMMVertex)0x0) ||
           (uVar26 = local_2ac, param_1 <= local_2ac)) break;
      } while( true );
    }
    if (*(TMMVertex *)((long)puVar22 + 0x31) == (TMMVertex)0x0) {
      uVar10 = *(ulong *)(this + 0x10);
      do {
        while (uVar10 < 2) {
          if (uVar10 == 1) {
            dVar28 = (double)TMMVertex::~TMMVertex((TMMVertex *)puVar22);
            puVar27 = puVar22;
            operator_delete(puVar22);
            pcStack_2f8 = FindMaxVolumePoint;
            lVar13 = tpidr_el0;
            lStack_318 = *(long *)(lVar13 + 0x28);
            dStack_320 = 0.0;
            lVar18 = *(long *)(puVar27[1] + 0x40);
            dStack_310 = param_2;
            puStack_300 = &stack0xffffffffffffffa0;
            puStack_2f0 = puVar22;
            uStack_2e8 = uVar19;
            pTStack_2e0 = unaff_x20;
            pIStack_2d8 = this;
            if (*(char *)(puVar27[1] + 0x31) == '\0') {
              puVar22 = (undefined8 *)0x0;
              do {
                uVar19 = ComputePointVolume((ICHull *)puVar27,&dStack_320,false);
                if ((uVar19 & 1) == 0) {
                  puVar14 = (undefined8 *)puVar27[1];
                }
                else {
                  puVar14 = (undefined8 *)puVar27[1];
                  puVar2 = puVar14;
                  dVar32 = dStack_320;
                  if (dStack_320 <= dVar28) {
                    puVar2 = puVar22;
                    dVar32 = dVar28;
                  }
                  dVar28 = dVar32;
                  puVar22 = puVar2;
                  if (puVar27[2] != 0) {
                    puVar14 = (undefined8 *)puVar14[7];
                    puVar27[1] = puVar14;
                  }
                }
              } while (*(char *)((long)puVar14 + 0x31) == '\0');
              bVar4 = puVar22 == (undefined8 *)0x0;
              puVar14 = *(undefined8 **)(lVar18 + 0x38);
              puVar27[1] = puVar14;
              if ((puVar22 != (undefined8 *)0x0) && (puVar22 != puVar14)) {
                uVar29 = puVar14[1];
                uVar33 = *puVar14;
                uVar30 = puVar14[2];
                *puVar14 = *puVar22;
                puVar14[1] = puVar22[1];
                puVar14[2] = puVar22[2];
                puVar22[1] = uVar29;
                *puVar22 = uVar33;
                puVar22[2] = uVar30;
              }
            }
            else {
              bVar4 = true;
              puVar27[1] = *(undefined8 *)(lVar18 + 0x38);
            }
            if (*(long *)(lVar13 + 0x28) == lStack_318) {
              return bVar4 ^ 1;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          uVar10 = 0;
          if (*(TMMVertex *)((long)puVar22 + 0x31) != (TMMVertex)0x0) goto LAB_00eae3f8;
        }
        unaff_x20 = (TMMTriangle *)puVar22[7];
        uVar19 = puVar22[8];
        TMMVertex::~TMMVertex((TMMVertex *)puVar22);
        operator_delete(puVar22);
        uVar10 = *(long *)(this + 0x10) - 1;
        *(TMMTriangle **)(this + 8) = unaff_x20;
        *(ulong *)(this + 0x10) = uVar10;
        *(ulong *)(unaff_x20 + 0x40) = uVar19;
        *(TMMTriangle **)(uVar19 + 0x38) = unaff_x20;
        puVar22 = *(undefined8 **)(this + 8);
      } while (*(TMMVertex *)((long)puVar22 + 0x31) == (TMMVertex)0x0);
    }
LAB_00eae3f8:
    if (this[0x698] != (ICHull)0x0) {
      lVar18 = *(long *)(this + 0x30);
      uVar19 = 0;
      uStack_a0 = 0;
      local_a8 = (double *)0x0;
      local_98 = 0x40;
      local_2c8 = (TMMVertex **)(this + 8);
      lStack_2c0 = lVar13;
      if (lVar18 != 0) {
        local_2b8 = 0x40;
        do {
          uVar10 = local_2b8;
          dVar28 = *(double *)(this + 0x28);
          if (((*(int *)(*(long *)((long)dVar28 + 0x20) + 0x18) == 0x7fffffff) ||
              (*(int *)(*(long *)((long)dVar28 + 0x28) + 0x18) == 0x7fffffff)) ||
             (*(int *)(*(long *)((long)dVar28 + 0x30) + 0x18) == 0x7fffffff)) {
            uVar25 = *(ulong *)(this + 0x670);
            uVar10 = *(ulong *)(this + 0x678);
            dVar32 = dVar28;
            if (uVar25 == uVar10) {
              uVar10 = uVar25 << 1;
              uVar12 = uVar25 << 4;
              if (uVar10 >> 0x3d != 0) {
                uVar12 = 0xffffffffffffffff;
              }
              pIVar9 = (ICHull *)operator_new__(uVar12);
              pIVar23 = *(ICHull **)(this + 0x668);
              pIVar1 = this + 0x468;
              if (uVar25 != 0x40) {
                pIVar1 = pIVar23;
              }
              memcpy(pIVar9,pIVar1,uVar25 << 3);
              if (pIVar23 != (ICHull *)0x0) {
                operator_delete__(pIVar23);
                uVar25 = *(ulong *)(this + 0x670);
                dVar32 = *(double *)(this + 0x28);
              }
              *(ICHull **)(this + 0x668) = pIVar9;
              *(ulong *)(this + 0x678) = uVar10;
            }
            else {
              pIVar9 = *(ICHull **)(this + 0x668);
            }
            pIVar1 = this + 0x468;
            if (uVar10 != 0x40) {
              pIVar1 = pIVar9;
            }
            *(ulong *)(this + 0x670) = uVar25 + 1;
            *(double *)(pIVar1 + uVar25 * 8) = dVar32;
            lVar13 = *(long *)(this + 0x28);
            plVar17 = (long *)(*(long *)((long)dVar28 + 8) + 8);
            if ((*plVar17 == lVar13) ||
               (plVar17 = (long *)(*(long *)((long)dVar28 + 8) + 0x10), *plVar17 == lVar13)) {
              *plVar17 = 0;
              lVar13 = *(long *)(this + 0x28);
              lVar21 = *(long *)((long)dVar28 + 0x10);
              plVar17 = (long *)(lVar21 + 8);
              if (*plVar17 != lVar13) goto LAB_00eae54c;
LAB_00eae574:
              *plVar17 = 0;
              lVar13 = *(long *)(this + 0x28);
              lVar21 = *(long *)((long)dVar28 + 0x18);
              plVar17 = (long *)(lVar21 + 8);
              if (*plVar17 == lVar13) goto LAB_00eae5a0;
LAB_00eae590:
              plVar17 = (long *)(lVar21 + 0x10);
              if (*plVar17 == lVar13) goto LAB_00eae5a0;
            }
            else {
              lVar21 = *(long *)((long)dVar28 + 0x10);
              plVar17 = (long *)(lVar21 + 8);
              if (*plVar17 == lVar13) goto LAB_00eae574;
LAB_00eae54c:
              plVar17 = (long *)(lVar21 + 0x10);
              if (*plVar17 == lVar13) goto LAB_00eae574;
              lVar21 = *(long *)((long)dVar28 + 0x18);
              plVar17 = (long *)(lVar21 + 8);
              if (*plVar17 != lVar13) goto LAB_00eae590;
LAB_00eae5a0:
              *plVar17 = 0;
            }
            lVar13 = *(long *)(this + 0x30);
          }
          else {
            uVar25 = local_2b8;
            pdVar11 = local_a8;
            uVar12 = local_98;
            if (uVar19 == local_2b8) {
              uVar25 = local_2b8 << 1;
              uVar12 = local_2b8 << 4;
              if (uVar25 >> 0x3d != 0) {
                uVar12 = 0xffffffffffffffff;
              }
              pdVar11 = (double *)operator_new__(uVar12);
              pdVar16 = local_a8;
              pdVar15 = local_2a8;
              if (uVar10 != 0x40) {
                pdVar15 = local_a8;
              }
              memcpy(pdVar11,pdVar15,uVar10 << 3);
              uVar12 = uVar25;
              if (pdVar16 != (double *)0x0) {
                operator_delete__(pdVar16);
                dVar28 = *(double *)(this + 0x28);
              }
            }
            local_98 = uVar12;
            local_a8 = pdVar11;
            pdVar11 = local_2a8;
            if (uVar25 != 0x40) {
              pdVar11 = local_a8;
            }
            uStack_a0 = uVar19 + 1;
            pdVar11[uVar19] = dVar28;
            lVar13 = *(long *)(this + 0x30);
            uVar19 = uVar19 + 1;
            local_2b8 = uVar25;
          }
          if (lVar13 != 0) {
            *(undefined8 *)(this + 0x28) = *(undefined8 *)(*(long *)(this + 0x28) + 0x40);
          }
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      lVar13 = *(long *)(this + 0x20);
      if (lVar13 != 0) {
        lVar18 = lVar13;
        do {
          lVar21 = *(long *)(this + 0x18);
          if ((*(ulong *)(lVar21 + 8) | *(ulong *)(lVar21 + 0x10)) == 0) {
            uVar10 = *(ulong *)(this + 0x240);
            uVar25 = *(ulong *)(this + 0x248);
            if (uVar10 == uVar25) {
              uVar25 = uVar10 << 1;
              uVar12 = uVar10 << 4;
              if (uVar25 >> 0x3d != 0) {
                uVar12 = 0xffffffffffffffff;
              }
              pIVar9 = (ICHull *)operator_new__(uVar12);
              pIVar23 = *(ICHull **)(this + 0x238);
              pIVar1 = this + 0x38;
              if (uVar10 != 0x40) {
                pIVar1 = pIVar23;
              }
              memcpy(pIVar9,pIVar1,uVar10 << 3);
              if (pIVar23 != (ICHull *)0x0) {
                operator_delete__(pIVar23);
                lVar21 = *(long *)(this + 0x18);
                lVar18 = *(long *)(this + 0x20);
                uVar10 = *(ulong *)(this + 0x240);
              }
              *(ICHull **)(this + 0x238) = pIVar9;
              *(ulong *)(this + 0x248) = uVar25;
            }
            else {
              pIVar9 = *(ICHull **)(this + 0x238);
            }
            pIVar1 = this + 0x38;
            if (uVar25 != 0x40) {
              pIVar1 = pIVar9;
            }
            *(ulong *)(this + 0x240) = uVar10 + 1;
            *(long *)(pIVar1 + uVar10 * 8) = lVar21;
          }
          if (lVar18 != 0) {
            *(undefined8 *)(this + 0x18) = *(undefined8 *)(*(long *)(this + 0x18) + 0x30);
          }
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      lVar13 = lStack_2c0;
      ppTVar24 = local_2c8;
      uVar10 = *(ulong *)(this + 0x10);
      uVar25 = uVar10;
      uVar12 = uVar10;
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        pTVar20 = *ppTVar24;
        if (*(int *)(pTVar20 + 0x18) == 0x7fffffff) {
          if (uVar25 < 2) {
            if (uVar25 == 1) {
              TMMVertex::~TMMVertex(pTVar20);
              operator_delete(pTVar20);
              uVar25 = *(long *)(this + 0x10) - 1;
              *(undefined8 *)(this + 8) = 0;
              *(ulong *)(this + 0x10) = uVar25;
              uVar12 = uVar25;
            }
            else {
              uVar25 = 0;
              uVar12 = 0;
            }
          }
          else {
            lVar18 = *(long *)(pTVar20 + 0x38);
            lVar21 = *(long *)(pTVar20 + 0x40);
            TMMVertex::~TMMVertex(pTVar20);
            operator_delete(pTVar20);
            uVar25 = *(long *)(this + 0x10) - 1;
            *(long *)(this + 8) = lVar18;
            *(ulong *)(this + 0x10) = uVar25;
            *(long *)(lVar18 + 0x40) = lVar21;
            *(long *)(lVar21 + 0x38) = lVar18;
            uVar12 = uVar25;
          }
        }
        else {
          pTVar20[0x31] = (TMMVertex)0x0;
          if (uVar12 != 0) {
            *ppTVar24 = *(TMMVertex **)(pTVar20 + 0x38);
          }
        }
      }
      CleanEdges();
      CleanTriangles();
      pdVar15 = local_a8;
      pdVar11 = local_2a8;
      if (local_98 != 0x40) {
        pdVar11 = local_a8;
      }
      if (uVar19 != 0) {
        lVar18 = *(long *)(this + 0x30);
        do {
          if (lVar18 == 0) {
            pTVar7 = (TMMTriangle *)operator_new(0x50);
            TMMTriangle::TMMTriangle(pTVar7);
            *(TMMTriangle **)(this + 0x28) = pTVar7;
            *(TMMTriangle **)(pTVar7 + 0x40) = pTVar7;
            *(TMMTriangle **)(pTVar7 + 0x48) = pTVar7;
          }
          else {
            lVar18 = *(long *)(this + 0x28);
            lVar21 = *(long *)(lVar18 + 0x40);
            pTVar7 = (TMMTriangle *)operator_new(0x50);
            TMMTriangle::TMMTriangle(pTVar7);
            *(TMMTriangle **)(this + 0x28) = pTVar7;
            *(long *)(pTVar7 + 0x40) = lVar21;
            *(long *)(pTVar7 + 0x48) = lVar18;
            *(TMMTriangle **)(lVar18 + 0x40) = pTVar7;
            *(undefined8 *)(lVar21 + 0x48) = *(undefined8 *)(this + 0x28);
            pTVar7 = *(TMMTriangle **)(this + 0x28);
          }
          uVar19 = uVar19 - 1;
          lVar18 = *(long *)(this + 0x30) + 1;
          *(long *)(this + 0x30) = lVar18;
          *(undefined8 *)(pTVar7 + 0x20) = *(undefined8 *)((long)*pdVar11 + 0x28);
          *(undefined8 *)(pTVar7 + 0x28) = *(undefined8 *)((long)*pdVar11 + 0x20);
          *(undefined8 *)(pTVar7 + 0x30) = *(undefined8 *)((long)*pdVar11 + 0x30);
          pdVar11 = pdVar11 + 1;
        } while (uVar19 != 0);
      }
      if (pdVar15 != (double *)0x0) {
        operator_delete__(pdVar15);
      }
    }
    bVar5 = 0;
    goto LAB_00eadf50;
  }
  this[0x698] = (ICHull)0x1;
  if (*(long *)(this + 0x30) == 0) {
    pTVar7 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar7);
    *(TMMTriangle **)(pTVar7 + 0x40) = pTVar7;
    *(TMMTriangle **)(pTVar7 + 0x48) = pTVar7;
    lVar18 = *(long *)(this + 0x30);
    *(TMMTriangle **)(this + 0x28) = pTVar7;
    *(long *)(this + 0x30) = lVar18 + 1;
    if (lVar18 != -1) goto LAB_00eae280;
LAB_00eadfd8:
    pTVar8 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar8);
    *(TMMTriangle **)(this + 0x28) = pTVar8;
    *(TMMTriangle **)(pTVar8 + 0x40) = pTVar8;
    *(TMMTriangle **)(pTVar8 + 0x48) = pTVar8;
  }
  else {
    lVar18 = *(long *)(this + 0x28);
    lVar21 = *(long *)(lVar18 + 0x40);
    pTVar7 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar7);
    *(TMMTriangle **)(this + 0x28) = pTVar7;
    *(long *)(pTVar7 + 0x40) = lVar21;
    *(long *)(pTVar7 + 0x48) = lVar18;
    *(TMMTriangle **)(lVar18 + 0x40) = pTVar7;
    *(undefined8 *)(lVar21 + 0x48) = *(undefined8 *)(this + 0x28);
    pTVar7 = *(TMMTriangle **)(this + 0x28);
    lVar18 = *(long *)(this + 0x30);
    *(long *)(this + 0x30) = lVar18 + 1;
    if (lVar18 == -1) goto LAB_00eadfd8;
LAB_00eae280:
    lVar18 = *(long *)(pTVar7 + 0x40);
    pTVar8 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar8);
    *(TMMTriangle **)(this + 0x28) = pTVar8;
    *(long *)(pTVar8 + 0x40) = lVar18;
    *(TMMTriangle **)(pTVar8 + 0x48) = pTVar7;
    *(TMMTriangle **)(pTVar7 + 0x40) = pTVar8;
    *(undefined8 *)(lVar18 + 0x48) = *(undefined8 *)(this + 0x28);
    pTVar8 = *(TMMTriangle **)(this + 0x28);
  }
  pdVar11 = *(double **)(this + 8);
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  pdVar15 = (double *)pdVar11[7];
  pdVar16 = (double *)pdVar15[7];
  dVar31 = *pdVar15 - *pdVar11;
  dVar34 = pdVar15[1] - pdVar11[1];
  dVar36 = pdVar16[1] - pdVar11[1];
  dVar35 = pdVar15[2] - pdVar11[2];
  dVar32 = pdVar16[2] - pdVar11[2];
  dVar37 = *pdVar16 - *pdVar11;
  dVar28 = (double)NEON_fmadd(dVar35,dVar37,dVar32 * -dVar31);
  dVar32 = (double)NEON_fmadd(dVar34,dVar32,dVar36 * -dVar35);
  *(double *)(this + 0x688) = dVar28;
  *(double *)(this + 0x680) = dVar32;
  dVar31 = (double)NEON_fmadd(dVar31,dVar36,dVar37 * -dVar34);
  uVar33 = NEON_fmadd(dVar32,dVar32,dVar28 * dVar28);
  dVar34 = (double)NEON_fmadd(dVar31,dVar31,uVar33);
  *(double *)(this + 0x690) = dVar31;
  dVar34 = SQRT(dVar34);
  if (dVar34 != 0.0) {
    *(double *)(this + 0x680) = dVar32 / dVar34;
    *(double *)(this + 0x688) = dVar28 / dVar34;
    *(double *)(this + 0x690) = dVar31 / dVar34;
  }
  bVar5 = 0;
  *(double **)(pTVar7 + 0x20) = pdVar11;
  *(double **)(pTVar7 + 0x28) = pdVar15;
  *(double **)(pTVar7 + 0x30) = pdVar16;
  *(double **)(pTVar8 + 0x20) = pdVar15;
  *(double **)(pTVar8 + 0x28) = pdVar11;
  *(double **)(pTVar8 + 0x30) = pdVar16;
LAB_00eadf50:
  if (*(long *)(lVar13 + 0x28) == local_90) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5);
joined_r0x00eae098:
  while (1 < uVar10) {
    unaff_x20 = *(TMMTriangle **)(this + 0x18);
    lVar18 = *(long *)((TMMEdge *)unaff_x20 + 0x30);
    lVar21 = *(long *)((TMMEdge *)unaff_x20 + 0x38);
    TMMEdge::~TMMEdge((TMMEdge *)unaff_x20);
    operator_delete(unaff_x20);
    uVar10 = *(long *)(this + 0x20) - 1;
    *(long *)(this + 0x18) = lVar18;
    *(ulong *)(this + 0x20) = uVar10;
    *(long *)(lVar18 + 0x38) = lVar21;
    *(long *)(lVar21 + 0x30) = lVar18;
  }
  while( true ) {
    if (uVar10 != 1) {
      this[0x698] = (ICHull)0x0;
      goto LAB_00eae120;
    }
    unaff_x20 = *(TMMTriangle **)(this + 0x18);
    if (unaff_x20 != (TMMTriangle *)0x0) break;
    uVar10 = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  TMMEdge::~TMMEdge((TMMEdge *)unaff_x20);
  operator_delete(unaff_x20);
  uVar10 = *(long *)(this + 0x20) - 1;
  *(undefined8 *)(this + 0x18) = 0;
  *(ulong *)(this + 0x20) = uVar10;
  goto joined_r0x00eae098;
  while( true ) {
    pTVar20 = *(TMMVertex **)(pTVar20 + 0x38);
    lVar18 = lVar18 + -1;
    *ppTVar24 = pTVar20;
    if (lVar18 == 0) break;
LAB_00eae8a4:
    if (*(int *)(pTVar20 + 0x18) == 0x7fffffff) {
      CircularList<VHACD::TMMVertex>::Delete();
      bVar5 = 3;
      break;
    }
  }
  goto LAB_00eadf50;
}


