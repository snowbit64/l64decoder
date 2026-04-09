// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: merge
// Entry Point: 00fa06a8
// Size: 2712 bytes
// Signature: undefined __thiscall merge(btConvexHullInternal * this, IntermediateHull * param_1, IntermediateHull * param_2)


/* btConvexHullInternal::merge(btConvexHullInternal::IntermediateHull&,
   btConvexHullInternal::IntermediateHull&) */

void __thiscall
btConvexHullInternal::merge
          (btConvexHullInternal *this,IntermediateHull *param_1,IntermediateHull *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  long **pplVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  long **pplVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  long **pplVar23;
  long lVar24;
  long **pplVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  long **pplVar32;
  ulong uVar33;
  long lVar34;
  long **pplVar35;
  long *plVar36;
  int iVar37;
  int iVar38;
  long *plVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long **local_148;
  long **local_140;
  long **local_120;
  long **local_118;
  long *local_110;
  long **local_108;
  long **local_100;
  long **local_f8;
  long **local_f0;
  long lStack_e8;
  long local_e0;
  long **local_d8;
  long lStack_d0;
  long local_c8;
  long *local_c0;
  long *local_b8;
  ulong local_b0;
  ulong local_a8;
  int local_a0;
  ulong local_98;
  ulong local_90;
  int local_88;
  ulong local_80;
  ulong uStack_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_2 + 8) != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      uVar42 = *(undefined8 *)param_2;
      uVar41 = *(undefined8 *)(param_2 + 0x18);
      uVar40 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar42;
      *(undefined8 *)(param_1 + 0x18) = uVar41;
      *(undefined8 *)(param_1 + 0x10) = uVar40;
    }
    else {
      local_c0 = (long *)0x0;
      local_b8 = (long *)0x0;
      *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + -1;
      uVar6 = mergeProjection(this,param_1,param_2,(Vertex **)&local_b8,(Vertex **)&local_c0);
      plVar39 = local_b8;
      plVar36 = local_c0;
      if ((uVar6 & 1) == 0) {
        iVar26 = *(int *)((long)local_c0 + 0x6c);
        iVar37 = *(int *)(local_c0 + 0xe);
        iVar31 = *(int *)(local_c0 + 0xd) + 1;
      }
      else {
        local_d8 = (long **)0x0;
        pplVar9 = (long **)local_b8[2];
        iVar37 = *(int *)(local_c0 + 0xd) - *(int *)(local_b8 + 0xd);
        iVar26 = *(int *)(local_c0 + 0xe) - *(int *)(local_b8 + 0xe);
        iVar31 = -iVar37;
        iVar38 = *(int *)((long)local_c0 + 0x6c) - *(int *)((long)local_b8 + 0x6c);
        lVar17 = -((long)iVar31 * (long)iVar26);
        lVar30 = (long)iVar31;
        lVar21 = (long)iVar26 * (long)iVar38;
        lVar24 = (long)iVar31 * (long)iVar37 - (long)iVar38 * (long)iVar38;
        lVar27 = (long)iVar38;
        pplVar32 = (long **)0x0;
        pplVar10 = pplVar9;
        if (pplVar9 != (long **)0x0) {
          do {
            plVar11 = pplVar10[3];
            lVar13 = (long)(*(int *)((long)plVar11 + 0x6c) - *(int *)((long)local_b8 + 0x6c));
            lVar34 = (long)(*(int *)(plVar11 + 0xd) - *(int *)(local_b8 + 0xd));
            if ((lVar13 * lVar30 + lVar27 * lVar34 == 0) &&
               (0 < lVar34 * lVar17 + lVar21 * lVar13 +
                    lVar24 * (*(int *)(plVar11 + 0xe) - *(int *)(local_b8 + 0xe)))) {
              if (pplVar32 == (long **)0x0) {
LAB_00fa0764:
                pplVar32 = pplVar10;
              }
              else if ((long **)*pplVar32 == pplVar10) {
                if ((long **)pplVar32[1] == pplVar10) {
                  plVar12 = pplVar32[3];
                  lVar13 = pplVar10[2][3];
                  iVar31 = *(int *)(plVar12 + 0xe) - *(int *)(lVar13 + 0x70);
                  iVar37 = *(int *)(plVar11 + 0xe) - *(int *)(lVar13 + 0x70);
                  if ((iVar31 * (*(int *)(plVar11 + 0xd) - *(int *)(lVar13 + 0x68)) +
                      iVar37 * (*(int *)(lVar13 + 0x68) - *(int *)(plVar12 + 0xd))) * lVar30 +
                      (iVar37 * (*(int *)((long)plVar12 + 0x6c) - *(int *)(lVar13 + 0x6c)) +
                      iVar31 * (*(int *)(lVar13 + 0x6c) - *(int *)((long)plVar11 + 0x6c))) * lVar27
                      < 1) goto LAB_00fa0764;
                }
              }
              else if ((long **)pplVar32[1] == pplVar10) goto LAB_00fa0764;
            }
            pplVar10 = (long **)*pplVar10;
            local_d8 = pplVar32;
          } while (pplVar10 != pplVar9);
        }
        pplVar9 = (long **)local_c0[2];
        pplVar10 = (long **)0x0;
        local_f0 = (long **)0x0;
        pplVar32 = pplVar9;
        if (pplVar9 != (long **)0x0) {
          do {
            plVar11 = pplVar32[3];
            lVar13 = (long)(*(int *)((long)plVar11 + 0x6c) - *(int *)((long)local_c0 + 0x6c));
            lVar34 = (long)(*(int *)(plVar11 + 0xd) - *(int *)(local_c0 + 0xd));
            if ((lVar13 * lVar30 + lVar27 * lVar34 == 0) &&
               (0 < lVar34 * lVar17 + lVar21 * lVar13 +
                    lVar24 * (*(int *)(plVar11 + 0xe) - *(int *)(local_c0 + 0xe)))) {
              if (pplVar10 != (long **)0x0) {
                if ((long **)*pplVar10 != pplVar32) goto LAB_00fa0880;
                if ((long **)pplVar10[1] == pplVar32) {
                  plVar12 = pplVar10[3];
                  lVar13 = pplVar32[2][3];
                  iVar31 = *(int *)(plVar12 + 0xe) - *(int *)(lVar13 + 0x70);
                  iVar37 = *(int *)(plVar11 + 0xe) - *(int *)(lVar13 + 0x70);
                  if ((iVar31 * (*(int *)(plVar11 + 0xd) - *(int *)(lVar13 + 0x68)) +
                      iVar37 * (*(int *)(lVar13 + 0x68) - *(int *)(plVar12 + 0xd))) * lVar30 +
                      (iVar37 * (*(int *)((long)plVar12 + 0x6c) - *(int *)(lVar13 + 0x6c)) +
                      iVar31 * (*(int *)(lVar13 + 0x6c) - *(int *)((long)plVar11 + 0x6c))) * lVar27
                      < 1) goto LAB_00fa0880;
                }
              }
              pplVar10 = pplVar32;
            }
LAB_00fa0880:
            pplVar32 = (long **)*pplVar32;
            local_f0 = pplVar10;
          } while (pplVar32 != pplVar9);
        }
        if (((ulong)local_d8 | (ulong)local_f0) != 0) {
          findEdgeForCoplanarFaces
                    (this,(Vertex *)local_b8,(Vertex *)local_c0,(Edge **)&local_d8,
                     (Edge **)&local_f0,(Vertex *)0x0,(Vertex *)0x0);
          if (local_d8 != (long **)0x0) {
            plVar39 = local_d8[3];
            local_b8 = plVar39;
          }
          if (local_f0 != (long **)0x0) {
            plVar36 = local_f0[3];
            local_c0 = plVar36;
          }
        }
        iVar26 = *(int *)((long)plVar36 + 0x6c);
        iVar31 = *(int *)(plVar36 + 0xd);
        iVar37 = *(int *)(plVar36 + 0xe) + 1;
      }
      pplVar10 = (long **)0x0;
      pplVar32 = (long **)0x0;
      bVar5 = true;
      local_120 = (long **)0x0;
      local_118 = (long **)0x0;
      local_148 = (long **)0x0;
      local_140 = (long **)0x0;
      local_110 = (long *)0x0;
      local_108 = (long **)0x0;
      plVar11 = plVar39;
      plVar12 = plVar36;
LAB_00fa09e0:
      iVar38 = iVar26 - *(int *)(plVar11 + 0xe);
      uVar6 = (long)*(int *)((long)plVar12 + 0x74) - (long)*(int *)(plVar11 + 0xe);
      lVar17 = (long)*(int *)((long)plVar12 + 0x6c) - (long)*(int *)(plVar11 + 0xe);
      uVar22 = (long)*(int *)(plVar12 + 0xd) - (long)*(int *)(plVar11 + 0xd);
      iVar2 = iVar31 - *(int *)(plVar11 + 0xd);
      iVar3 = iVar37 - *(int *)(plVar11 + 0xe);
      local_80 = uVar22 & 0xffffffff | lVar17 << 0x20;
      local_d8 = (long **)(long)((int)uVar6 * iVar38 - (int)lVar17 * iVar3);
      local_c8 = (long)((int)lVar17 * iVar2 - (int)uVar22 * iVar38);
      uStack_78 = uVar6 | 0xffffffff00000000;
      lStack_d0 = (long)((int)uVar22 * iVar3 - (int)uVar6 * iVar2);
      lStack_e8 = (long)local_d8 * uVar6 - local_c8 * uVar22;
      local_f0 = (long **)(local_c8 * lVar17 - lStack_d0 * uVar6);
      local_e0 = lStack_d0 * uVar22 - (long)local_d8 * lVar17;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      pplVar9 = (long **)findMaxAngle(this,false,(Vertex *)plVar11,(Point32 *)&local_80,
                                      (Point64 *)&local_d8,(Point64 *)&local_f0,
                                      (Rational64 *)&local_98);
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      pplVar7 = (long **)findMaxAngle(this,true,(Vertex *)plVar12,(Point32 *)&local_80,
                                      (Point64 *)&local_d8,(Point64 *)&local_f0,
                                      (Rational64 *)&local_b0);
      if (((ulong)pplVar9 | (ulong)pplVar7) == 0) goto LAB_00fa0f08;
      iVar38 = 1;
      pplVar25 = pplVar9;
      if (((pplVar9 == (long **)0x0) || (iVar38 = -1, pplVar7 == (long **)0x0)) ||
         (iVar38 = local_88 - local_a0, iVar38 != 0)) {
LAB_00fa0bb8:
        if (bVar5) goto LAB_00fa0bbc;
        if (-1 < iVar38) {
          if ((-1 < local_a0) || (local_a8 != 0)) goto LAB_00fa0bbc;
          goto LAB_00fa0c08;
        }
        if ((-1 < local_88) || (local_90 != 0)) goto LAB_00fa0bbc;
      }
      else {
        if (local_88 != 0) {
          uVar15 = (local_a8 & 0xffffffff) * (local_98 & 0xffffffff);
          uVar22 = (local_a8 >> 0x20) * (local_98 & 0xffffffff);
          uVar28 = (local_a8 & 0xffffffff) * (local_98 >> 0x20);
          uVar6 = (uVar22 & 0xffffffff) + (uVar28 & 0xffffffff);
          uVar29 = (local_b0 >> 0x20) * (local_90 & 0xffffffff);
          uVar33 = (local_b0 & 0xffffffff) * (local_90 >> 0x20);
          uVar28 = (local_a8 >> 0x20) * (local_98 >> 0x20) + (uVar22 >> 0x20) + (uVar28 >> 0x20) +
                   (uVar6 >> 0x20);
          uVar6 = uVar6 << 0x20;
          uVar1 = uVar15 + uVar6;
          uVar18 = (local_b0 & 0xffffffff) * (local_90 & 0xffffffff);
          uVar22 = (uVar29 & 0xffffffff) + (uVar33 & 0xffffffff);
          if (CARRY8(uVar15,uVar6)) {
            uVar28 = uVar28 + 1;
          }
          uVar6 = (local_b0 >> 0x20) * (local_90 >> 0x20) + (uVar29 >> 0x20) + (uVar33 >> 0x20) +
                  (uVar22 >> 0x20);
          uVar22 = uVar22 << 0x20;
          uVar15 = uVar18 + uVar22;
          if (CARRY8(uVar18,uVar22)) {
            uVar6 = uVar6 + 1;
          }
          if (uVar6 <= uVar28) {
            if (uVar6 <= uVar28 && uVar28 != uVar6) {
              uVar14 = 1;
            }
            else {
              if (uVar1 < uVar15) goto LAB_00fa0b8c;
              uVar14 = (uint)(uVar15 < uVar1);
            }
          }
          else {
LAB_00fa0b8c:
            uVar14 = 0xffffffff;
          }
          iVar38 = uVar14 * local_88;
          goto LAB_00fa0bb8;
        }
        iVar38 = 0;
LAB_00fa0bbc:
        pplVar8 = (long **)newEdgePair(this,(Vertex *)plVar11,(Vertex *)plVar12);
        pplVar35 = pplVar8;
        if (pplVar10 != (long **)0x0) {
          ((long *)pplVar10)[1] = (long)pplVar8;
          pplVar35 = pplVar32;
        }
        pplVar32 = pplVar35;
        pplVar35 = (long **)pplVar8[2];
        *pplVar8 = (long *)pplVar10;
        pplVar10 = pplVar35;
        if (local_118 != (long **)0x0) {
          *local_118 = (long *)pplVar35;
          pplVar10 = local_120;
        }
        local_120 = pplVar10;
        pplVar35[1] = (long *)local_118;
        pplVar10 = pplVar8;
        local_118 = pplVar35;
LAB_00fa0c08:
        local_100 = pplVar7;
        local_f8 = pplVar9;
        if (iVar38 == 0) {
          findEdgeForCoplanarFaces
                    (this,(Vertex *)local_b8,(Vertex *)local_c0,(Edge **)&local_f8,
                     (Edge **)&local_100,(Vertex *)0x0,(Vertex *)0x0);
        }
        else if (iVar38 < 0) goto LAB_00fa0d98;
        pplVar25 = local_f8;
        if (local_100 != (long **)0x0) {
          if (local_108 == (long **)0x0) {
            local_148 = pplVar7;
            if (local_118 != (long **)0x0) {
              local_108 = (long **)pplVar7[1];
              local_148 = local_120;
              goto LAB_00fa0d64;
            }
          }
          else {
            pplVar35 = (long **)*local_108;
            while (pplVar35 != pplVar7) {
              pplVar8 = (long **)*pplVar35;
              pplVar19 = (long **)pplVar35[2];
              if (pplVar8 == pplVar35) {
                pplVar23 = (long **)0x0;
              }
              else {
                pplVar8[1] = pplVar35[1];
                *pplVar35[1] = (long)pplVar8;
                pplVar23 = pplVar8;
              }
              pplVar19[3][2] = (long)pplVar23;
              pplVar23 = (long **)*pplVar19;
              if (pplVar23 == pplVar19) {
                pplVar23 = (long **)0x0;
              }
              else {
                pplVar23[1] = pplVar19[1];
                *pplVar19[1] = (long)pplVar23;
              }
              pplVar35[3][2] = (long)pplVar23;
              pplVar35[4] = (long *)0x0;
              pplVar35[1] = (long *)0x0;
              *pplVar35 = (long *)0x0;
              pplVar35[3] = (long *)0x0;
              pplVar35[2] = (long *)0x0;
              *pplVar35 = (long *)*(long *)(this + 0x50);
              *(long ***)(this + 0x50) = pplVar35;
              pplVar19[4] = (long *)0x0;
              pplVar19[1] = (long *)0x0;
              *pplVar19 = (long *)0x0;
              pplVar19[3] = (long *)0x0;
              pplVar19[2] = (long *)0x0;
              *pplVar19 = *(long **)(this + 0x50);
              *(long ***)(this + 0x50) = pplVar19;
              *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
              pplVar35 = pplVar8;
            }
            if (local_118 != (long **)0x0) {
LAB_00fa0d64:
              *local_108 = (long *)local_120;
              local_120[1] = (long *)local_108;
              local_120 = (long **)0x0;
              *local_118 = (long *)pplVar7;
              pplVar7[1] = (long *)local_118;
            }
          }
          local_118 = (long **)0x0;
          iVar31 = *(int *)(local_c0 + 0xd);
          iVar26 = *(int *)((long)local_c0 + 0x6c);
          iVar37 = *(int *)(local_c0 + 0xe);
          local_108 = (long **)local_100[2];
          local_c0 = local_100[3];
        }
      }
LAB_00fa0d98:
      local_f8 = pplVar25;
      if ((iVar38 < 1) && (local_f8 != (long **)0x0)) {
        if (local_110 == (long *)0x0) {
          local_140 = pplVar9;
          if (pplVar10 != (long **)0x0) {
            plVar11 = *pplVar9 + 1;
            *pplVar32 = *pplVar9;
            local_140 = pplVar32;
            goto LAB_00fa0e88;
          }
        }
        else {
          plVar11 = local_110 + 1;
          pplVar7 = (long **)*plVar11;
          while (pplVar7 != pplVar9) {
            pplVar25 = (long **)*pplVar7;
            pplVar35 = (long **)pplVar7[1];
            pplVar8 = (long **)pplVar7[2];
            if (pplVar25 == pplVar7) {
              pplVar25 = (long **)0x0;
            }
            else {
              pplVar25[1] = (long *)pplVar35;
              *pplVar7[1] = (long)pplVar25;
            }
            pplVar8[3][2] = (long)pplVar25;
            pplVar25 = (long **)*pplVar8;
            if (pplVar25 == pplVar8) {
              pplVar25 = (long **)0x0;
            }
            else {
              pplVar25[1] = pplVar8[1];
              *pplVar8[1] = (long)pplVar25;
            }
            pplVar7[3][2] = (long)pplVar25;
            pplVar7[4] = (long *)0x0;
            pplVar7[1] = (long *)0x0;
            *pplVar7 = (long *)0x0;
            pplVar7[3] = (long *)0x0;
            pplVar7[2] = (long *)0x0;
            *pplVar7 = *(long **)(this + 0x50);
            *(long ***)(this + 0x50) = pplVar7;
            pplVar8[4] = (long *)0x0;
            pplVar8[1] = (long *)0x0;
            *pplVar8 = (long *)0x0;
            pplVar8[3] = (long *)0x0;
            pplVar8[2] = (long *)0x0;
            *pplVar8 = *(long **)(this + 0x50);
            *(long ***)(this + 0x50) = pplVar8;
            *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
            pplVar7 = pplVar35;
          }
          if (pplVar10 != (long **)0x0) {
            *pplVar32 = local_110;
LAB_00fa0e88:
            *plVar11 = (long)pplVar32;
            pplVar32 = (long **)0x0;
            *pplVar9 = (long *)pplVar10;
            ((long *)pplVar10)[1] = (long)pplVar9;
          }
        }
        pplVar10 = (long **)0x0;
        local_110 = local_f8[2];
        iVar31 = *(int *)(local_b8 + 0xd);
        iVar26 = *(int *)((long)local_b8 + 0x6c);
        iVar37 = *(int *)(local_b8 + 0xe);
        local_b8 = local_f8[3];
      }
      if ((local_b8 != plVar39) || (local_c0 != plVar36)) {
        bVar5 = false;
        plVar11 = local_b8;
        plVar12 = local_c0;
        goto LAB_00fa09e0;
      }
      if (local_110 == (long *)0x0) {
        *pplVar32 = (long *)pplVar10;
        ((long *)pplVar10)[1] = (long)pplVar32;
        local_b8[2] = (long)pplVar10;
        if (local_108 == (long **)0x0) goto LAB_00fa10f8;
        goto LAB_00fa100c;
      }
      pplVar9 = (long **)local_110[1];
      while (pplVar9 != local_140) {
        pplVar7 = (long **)*pplVar9;
        pplVar25 = (long **)pplVar9[1];
        pplVar35 = (long **)pplVar9[2];
        if (pplVar7 == pplVar9) {
          pplVar7 = (long **)0x0;
        }
        else {
          pplVar7[1] = (long *)pplVar25;
          *pplVar9[1] = (long)pplVar7;
        }
        pplVar35[3][2] = (long)pplVar7;
        pplVar7 = (long **)*pplVar35;
        if (pplVar7 == pplVar35) {
          pplVar7 = (long **)0x0;
        }
        else {
          pplVar7[1] = pplVar35[1];
          *pplVar35[1] = (long)pplVar7;
        }
        pplVar9[3][2] = (long)pplVar7;
        pplVar9[4] = (long *)0x0;
        pplVar9[1] = (long *)0x0;
        *pplVar9 = (long *)0x0;
        pplVar9[3] = (long *)0x0;
        pplVar9[2] = (long *)0x0;
        *pplVar9 = *(long **)(this + 0x50);
        *(long ***)(this + 0x50) = pplVar9;
        pplVar35[4] = (long *)0x0;
        pplVar35[1] = (long *)0x0;
        *pplVar35 = (long *)0x0;
        pplVar35[3] = (long *)0x0;
        pplVar35[2] = (long *)0x0;
        *pplVar35 = *(long **)(this + 0x50);
        *(long ***)(this + 0x50) = pplVar35;
        *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
        pplVar9 = pplVar25;
      }
      if (pplVar10 != (long **)0x0) {
        *pplVar32 = local_110;
        local_110[1] = (long)pplVar32;
        *local_140 = (long *)pplVar10;
        ((long *)pplVar10)[1] = (long)local_140;
      }
      if (local_108 != (long **)0x0) {
LAB_00fa100c:
        pplVar10 = (long **)*local_108;
        while (pplVar10 != local_148) {
          pplVar32 = (long **)*pplVar10;
          puVar16 = pplVar10[2];
          if (pplVar32 == pplVar10) {
            pplVar9 = (long **)0x0;
          }
          else {
            pplVar32[1] = pplVar10[1];
            *pplVar10[1] = (long)pplVar32;
            pplVar9 = pplVar32;
          }
          *(long ***)(puVar16[3] + 0x10) = pplVar9;
          puVar20 = (undefined8 *)*puVar16;
          if (puVar20 == puVar16) {
            puVar20 = (undefined8 *)0x0;
          }
          else {
            puVar20[1] = puVar16[1];
            *(undefined8 **)puVar16[1] = puVar20;
          }
          *(undefined8 **)((long)pplVar10[3] + 0x10) = puVar20;
          pplVar10[4] = (long *)0x0;
          pplVar10[1] = (long *)0x0;
          *pplVar10 = (long *)0x0;
          pplVar10[3] = (long *)0x0;
          pplVar10[2] = (long *)0x0;
          *pplVar10 = (long *)*(long *)(this + 0x50);
          *(long ***)(this + 0x50) = pplVar10;
          puVar16[4] = 0;
          puVar16[1] = 0;
          *puVar16 = 0;
          puVar16[3] = 0;
          puVar16[2] = 0;
          *puVar16 = *(undefined8 *)(this + 0x50);
          *(undefined8 **)(this + 0x50) = puVar16;
          *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
          pplVar10 = pplVar32;
        }
        if (local_118 != (long **)0x0) {
          *local_108 = (long *)local_120;
          local_120[1] = (long *)local_108;
          *local_118 = (long *)local_148;
          local_148[1] = (long *)local_118;
        }
        goto LAB_00fa110c;
      }
LAB_00fa10f8:
      *local_118 = (long *)local_120;
      local_120[1] = (long *)local_118;
      local_c0[2] = (long)local_118;
    }
  }
LAB_00fa110c:
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00fa0f08:
  lVar17 = newEdgePair(this,(Vertex *)plVar11,(Vertex *)plVar12);
  *(long *)lVar17 = lVar17;
  *(long *)(lVar17 + 8) = lVar17;
  plVar11[2] = lVar17;
  lVar17 = *(long *)(lVar17 + 0x10);
  *(long *)lVar17 = lVar17;
  *(long *)(lVar17 + 8) = lVar17;
  plVar12[2] = lVar17;
  goto LAB_00fa110c;
}


