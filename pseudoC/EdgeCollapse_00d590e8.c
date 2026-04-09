// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EdgeCollapse
// Entry Point: 00d590e8
// Size: 1488 bytes
// Signature: undefined __thiscall EdgeCollapse(MeshDecimator * this, double * param_1)


/* HACD::MeshDecimator::EdgeCollapse(double&) */

void __thiscall HACD::MeshDecimator::EdgeCollapse(MeshDecimator *this,double *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *__dest;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long **pplVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  long local_140;
  undefined8 local_138;
  undefined local_118 [128];
  undefined *local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  pplVar20 = (long **)(this + 0x70);
  plVar7 = *pplVar20;
  lVar15 = *(long *)(this + 0x78);
  lVar9 = lVar15 - (long)plVar7;
  do {
    if (lVar9 == 0) {
      uVar5 = 0;
      if (*(long *)(lVar2 + 0x28) == local_80) {
        return;
      }
LAB_00d596a8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    lVar10 = *plVar7;
    dVar22 = (double)plVar7[1];
    if (0x10 < lVar9) {
      lVar11 = *(long *)(lVar15 + -0x10);
      lVar25 = plVar7[1];
      lVar16 = *plVar7;
      uVar13 = (lVar9 >> 4) - 1;
      plVar7[1] = *(long *)(lVar15 + -8);
      *plVar7 = lVar11;
      *(long *)(lVar15 + -8) = lVar25;
      *(long *)(lVar15 + -0x10) = lVar16;
      if (1 < uVar13) {
        plVar19 = plVar7 + 2;
        if ((uVar13 == 2) || ((double)plVar7[3] <= (double)plVar7[5])) {
          uVar17 = 1;
          dVar23 = (double)plVar7[1];
          if ((double)plVar7[3] <= dVar23) goto LAB_00d591bc;
        }
        else {
          plVar19 = plVar7 + 4;
          uVar17 = 2;
          dVar23 = (double)plVar7[1];
          if ((double)plVar7[5] <= dVar23) {
LAB_00d591bc:
            lVar15 = *plVar7;
            plVar12 = plVar7;
            do {
              plVar14 = plVar19;
              lVar11 = *plVar14;
              plVar12[1] = plVar14[1];
              *plVar12 = lVar11;
              if ((long)((lVar9 >> 4) - 3U >> 1) < (long)uVar17) break;
              uVar21 = uVar17 << 1 | 1;
              uVar18 = uVar17 * 2 + 2;
              plVar19 = plVar7 + uVar21 * 2;
              uVar17 = uVar21;
              if (((long)uVar18 < (long)uVar13) && ((double)plVar19[3] < (double)plVar19[1])) {
                plVar19 = plVar19 + 2;
                uVar17 = uVar18;
              }
              plVar12 = plVar14;
            } while ((double)plVar19[1] <= dVar23);
            *plVar14 = lVar15;
            plVar14[1] = (long)dVar23;
          }
        }
      }
    }
    lVar9 = *(long *)(this + 0x58);
    lVar15 = *(long *)(this + 0x78) + -0x10;
    *(long *)(this + 0x78) = lVar15;
    if ((*(char *)(lVar9 + lVar10 * 0x38 + 0x31) != '\0') &&
       (*(double *)(lVar9 + lVar10 * 0x38 + 0x10) == dVar22)) {
      plVar7 = (long *)(lVar9 + lVar10 * 0x38);
      lVar9 = *plVar7;
      lVar11 = plVar7[1];
      *param_1 = dVar22;
      EdgeCollapse(this,lVar9,lVar11);
      lVar16 = *(long *)(this + 0x58);
      local_98 = (undefined *)0x0;
      local_90 = 0;
      lVar15 = lVar16 + lVar10 * 0x38;
      puVar6 = (undefined8 *)(*(long *)(this + 8) + lVar9 * 0x18);
      *puVar6 = *(undefined8 *)(lVar15 + 0x18);
      puVar6[1] = *(undefined8 *)(lVar15 + 0x20);
      puVar6[2] = *(undefined8 *)(lVar15 + 0x28);
      lVar15 = *(long *)(this + 0x40);
      lVar11 = lVar15 + lVar11 * 0x188;
      lVar10 = lVar15 + lVar9 * 0x188;
      dVar22 = *(double *)(lVar11 + 0x130);
      dVar24 = *(double *)(lVar11 + 0x148);
      dVar23 = *(double *)(lVar11 + 0x140);
      dVar27 = *(double *)(lVar11 + 0x158);
      dVar26 = *(double *)(lVar11 + 0x150);
      dVar29 = *(double *)(lVar11 + 0x168);
      dVar28 = *(double *)(lVar11 + 0x160);
      *(double *)(lVar10 + 0x138) = *(double *)(lVar11 + 0x138) + *(double *)(lVar10 + 0x138);
      *(double *)(lVar10 + 0x130) = dVar22 + *(double *)(lVar10 + 0x130);
      *(double *)(lVar10 + 0x148) = dVar24 + *(double *)(lVar10 + 0x148);
      *(double *)(lVar10 + 0x140) = dVar23 + *(double *)(lVar10 + 0x140);
      dVar23 = *(double *)(lVar11 + 0x178);
      dVar22 = *(double *)(lVar11 + 0x170);
      local_88 = 0x10;
      *(double *)(lVar10 + 0x158) = dVar27 + *(double *)(lVar10 + 0x158);
      *(double *)(lVar10 + 0x150) = dVar26 + *(double *)(lVar10 + 0x150);
      *(double *)(lVar10 + 0x168) = dVar29 + *(double *)(lVar10 + 0x168);
      *(double *)(lVar10 + 0x160) = dVar28 + *(double *)(lVar10 + 0x160);
      *(double *)(lVar10 + 0x178) = dVar23 + *(double *)(lVar10 + 0x178);
      *(double *)(lVar10 + 0x170) = dVar22 + *(double *)(lVar10 + 0x170);
      if (*(long *)(lVar10 + 0x88) != 0) {
        uVar13 = 0;
        while( true ) {
          uVar18 = local_88;
          uVar17 = local_90;
          lVar15 = lVar15 + lVar9 * 0x188;
          if (*(long *)(lVar15 + 0x90) != 0x10) {
            lVar15 = *(long *)(lVar15 + 0x80);
          }
          lVar11 = *(long *)(lVar15 + uVar13 * 8);
          plVar7 = (long *)(lVar16 + lVar11 * 0x38);
          lVar15 = *plVar7;
          lVar10 = plVar7[1];
          puVar4 = local_98;
          uVar21 = local_88;
          if (local_90 == local_88) {
            uVar21 = local_88 << 1;
            uVar8 = local_88 << 4;
            if (uVar21 >> 0x3d != 0) {
              uVar8 = 0xffffffffffffffff;
            }
            puVar4 = (undefined *)operator_new__(uVar8);
            puVar3 = local_98;
            puVar1 = local_118;
            if (uVar18 != 0x10) {
              puVar1 = local_98;
            }
            memcpy(puVar4,puVar1,uVar18 << 3);
            if (puVar3 != (undefined *)0x0) {
              operator_delete__(puVar3);
              lVar16 = *(long *)(this + 0x58);
            }
          }
          local_88 = uVar21;
          local_98 = puVar4;
          local_90 = uVar17 + 1;
          puVar4 = local_118;
          if (local_88 != 0x10) {
            puVar4 = local_98;
          }
          lVar25 = lVar10;
          if (lVar15 != lVar9) {
            lVar25 = lVar15;
          }
          *(long *)(puVar4 + uVar17 * 8) = lVar25;
          local_138 = ComputeEdgeCost(this,lVar15,lVar10,(Vec3 *)(lVar16 + lVar11 * 0x38 + 0x18));
          *(undefined8 *)(*(long *)(this + 0x58) + lVar11 * 0x38 + 0x10) = local_138;
          local_140 = lVar11;
          FUN_00d58f78(pplVar20,&local_140);
          uVar17 = local_90;
          puVar4 = local_98;
          lVar15 = *(long *)(this + 0x40);
          uVar13 = uVar13 + 1;
          if (*(ulong *)(lVar15 + lVar9 * 0x188 + 0x88) <= uVar13) break;
          lVar16 = *(long *)(this + 0x58);
        }
        puVar1 = local_118;
        if (local_88 != 0x10) {
          puVar1 = local_98;
        }
        if (local_90 != 0) {
          uVar13 = 0;
          do {
            lVar10 = *(long *)(puVar1 + uVar13 * 8);
            if (*(long *)(lVar15 + lVar10 * 0x188 + 0x88) != 0) {
              uVar18 = 0;
              do {
                lVar15 = lVar15 + lVar10 * 0x188;
                if (*(long *)(lVar15 + 0x90) != 0x10) {
                  lVar15 = *(long *)(lVar15 + 0x80);
                }
                lVar16 = *(long *)(lVar15 + uVar18 * 8);
                plVar7 = (long *)(*(long *)(this + 0x58) + lVar16 * 0x38);
                lVar15 = *plVar7;
                lVar11 = plVar7[1];
                if (lVar15 != lVar9 && lVar11 != lVar9) {
                  lVar15 = ComputeEdgeCost(this,lVar15,lVar11,
                                           (Vec3 *)(*(long *)(this + 0x58) + lVar16 * 0x38 + 0x18));
                  *(long *)(*(long *)(this + 0x58) + lVar16 * 0x38 + 0x10) = lVar15;
                  plVar7 = *(long **)(this + 0x78);
                  if (plVar7 == *(long **)(this + 0x80)) {
                    plVar19 = *pplVar20;
                    uVar8 = (long)plVar7 - (long)plVar19;
                    uVar21 = ((long)uVar8 >> 4) + 1;
                    if (uVar21 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__vector_base_common<true>::__throw_length_error();
                    }
                    if (uVar21 <= (ulong)((long)uVar8 >> 3)) {
                      uVar21 = (long)uVar8 >> 3;
                    }
                    if (0x7fffffffffffffef < uVar8) {
                      uVar21 = 0xfffffffffffffff;
                    }
                    if (uVar21 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                    __dest = operator_new(uVar21 * 0x10);
                    plVar12 = (long *)((long)__dest + ((long)uVar8 >> 4) * 0x10);
                    *plVar12 = lVar16;
                    plVar12[1] = lVar15;
                    if (0 < (long)uVar8) {
                      memcpy(__dest,plVar19,uVar8);
                    }
                    plVar12 = plVar12 + 2;
                    *(void **)(this + 0x70) = __dest;
                    *(long **)(this + 0x78) = plVar12;
                    *(void **)(this + 0x80) = (void *)((long)__dest + uVar21 * 0x10);
                    if (plVar19 != (long *)0x0) {
                      operator_delete(plVar19);
                      plVar12 = *(long **)(this + 0x78);
                    }
                  }
                  else {
                    plVar12 = plVar7 + 2;
                    *plVar7 = lVar16;
                    plVar7[1] = lVar15;
                    *(long **)(this + 0x78) = plVar12;
                  }
                  plVar7 = *pplVar20;
                  if (0x10 < (long)plVar12 - (long)plVar7) {
                    dVar22 = (double)plVar12[-1];
                    uVar8 = ((ulong)((long)plVar12 - (long)plVar7) >> 4) - 2;
                    uVar21 = uVar8 >> 1;
                    if (dVar22 < (double)plVar7[(uVar8 & 0xfffffffffffffffe) + 1]) {
                      lVar15 = plVar12[-2];
                      plVar19 = plVar12 + -2;
                      do {
                        plVar12 = plVar7 + uVar21 * 2;
                        lVar11 = *plVar12;
                        plVar19[1] = plVar12[1];
                        *plVar19 = lVar11;
                        if (uVar21 == 0) break;
                        if (-1 < (long)(uVar21 - 1)) {
                          uVar21 = uVar21 - 1;
                        }
                        uVar21 = (long)uVar21 >> 1;
                        plVar19 = plVar12;
                      } while (dVar22 < (double)plVar7[uVar21 * 2 + 1]);
                      *plVar12 = lVar15;
                      plVar12[1] = (long)dVar22;
                    }
                  }
                }
                lVar15 = *(long *)(this + 0x40);
                uVar18 = uVar18 + 1;
              } while (uVar18 < *(ulong *)(lVar15 + lVar10 * 0x188 + 0x88));
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar17);
        }
        if (puVar4 != (undefined *)0x0) {
          operator_delete__(puVar4);
        }
      }
      uVar5 = 1;
      if (*(long *)(lVar2 + 0x28) == local_80) {
        return;
      }
      goto LAB_00d596a8;
    }
    plVar7 = *pplVar20;
    lVar9 = lVar15 - (long)plVar7;
  } while( true );
}


