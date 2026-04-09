// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findEdgeForCoplanarFaces
// Entry Point: 00fa1140
// Size: 3208 bytes
// Signature: undefined __thiscall findEdgeForCoplanarFaces(btConvexHullInternal * this, Vertex * param_1, Vertex * param_2, Edge * * param_3, Edge * * param_4, Vertex * param_5, Vertex * param_6)


/* WARNING: Type propagation algorithm not settling */
/* btConvexHullInternal::findEdgeForCoplanarFaces(btConvexHullInternal::Vertex*,
   btConvexHullInternal::Vertex*, btConvexHullInternal::Edge*&, btConvexHullInternal::Edge*&,
   btConvexHullInternal::Vertex*, btConvexHullInternal::Vertex*) */

void __thiscall
btConvexHullInternal::findEdgeForCoplanarFaces
          (btConvexHullInternal *this,Vertex *param_1,Vertex *param_2,Edge **param_3,Edge **param_4,
          Vertex *param_5,Vertex *param_6)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  Vertex *pVVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  Edge *pEVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  long lVar37;
  int iVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  long *plVar44;
  long lVar45;
  long *plVar46;
  long *plVar47;
  int iVar48;
  long *plVar49;
  Vertex **ppVVar50;
  
  plVar49 = (long *)*param_3;
  plVar44 = (long *)*param_4;
  pVVar20 = param_1;
  if (plVar49 != (long *)0x0) {
    pVVar20 = (Vertex *)plVar49[3];
  }
  iVar34 = *(int *)(pVVar20 + 0x68);
  iVar19 = *(int *)(pVVar20 + 0x6c);
  iVar35 = *(int *)(pVVar20 + 0x70);
  pVVar20 = param_2;
  if (plVar44 != (long *)0x0) {
    pVVar20 = (Vertex *)plVar44[3];
  }
  plVar46 = plVar44;
  if (plVar49 != (long *)0x0) {
    plVar46 = plVar49;
  }
  iVar3 = *(int *)(param_1 + 0x68);
  iVar31 = *(int *)(param_1 + 0x70);
  lVar29 = plVar46[3];
  iVar5 = *(int *)(param_1 + 0x70);
  lVar11 = (long)*(int *)(param_2 + 0x68) - (long)iVar3;
  lVar39 = (long)*(int *)(param_2 + 0x70) - (long)iVar31;
  lVar25 = (long)*(int *)(param_2 + 0x70) - (long)iVar5;
  iVar7 = *(int *)(lVar29 + 0x6c) - iVar31;
  iVar8 = *(int *)(lVar29 + 0x68) - iVar3;
  iVar36 = *(int *)(lVar29 + 0x70) - iVar5;
  iVar10 = (int)lVar11;
  iVar24 = (int)lVar25;
  iVar38 = (int)lVar39;
  lVar21 = (long)(iVar8 * iVar38 - iVar7 * iVar10);
  lVar29 = (long)(iVar7 * iVar24 - iVar36 * iVar38);
  lVar23 = (long)(iVar36 * iVar10 - iVar8 * iVar24);
  lVar33 = lVar21 * lVar39 - lVar23 * lVar25;
  lVar25 = lVar29 * lVar25 - lVar21 * lVar11;
  iVar7 = *(int *)(pVVar20 + 0x68);
  iVar8 = *(int *)(pVVar20 + 0x6c);
  lVar39 = lVar23 * lVar11 - lVar29 * lVar39;
  iVar36 = *(int *)(pVVar20 + 0x70);
  lVar45 = lVar21 * iVar5 + lVar29 * iVar3 + lVar23 * iVar31;
  lVar11 = lVar33 * iVar34 + lVar25 * iVar19 + lVar39 * iVar35;
  plVar46 = plVar44;
  if ((plVar49 != (long *)0x0) && ((Vertex *)plVar49[3] != param_5)) {
    pEVar27 = *(Edge **)(plVar49[2] + 8);
    ppVVar50 = (Vertex **)(pEVar27 + 0x18);
    pVVar20 = *ppVVar50;
    lVar17 = (long)*(int *)(pVVar20 + 0x68);
    lVar18 = (long)*(int *)(pVVar20 + 0x70);
    lVar12 = (long)*(int *)(pVVar20 + 0x70);
    if (lVar45 <= lVar17 * lVar29 + lVar18 * lVar23 + lVar12 * lVar21) {
      iVar3 = *(int *)(this + 0xa0);
      do {
        if ((*(int *)(pEVar27 + 0x28) == iVar3) ||
           (lVar17 = lVar25 * lVar18 + lVar33 * lVar17 + lVar39 * lVar12, lVar17 <= lVar11)) break;
        *param_3 = pEVar27;
        pVVar20 = *ppVVar50;
        iVar34 = *(int *)(pVVar20 + 0x68);
        iVar19 = *(int *)(pVVar20 + 0x6c);
        iVar35 = *(int *)(pVVar20 + 0x70);
        lVar11 = lVar17;
        if (pVVar20 == param_5) break;
        pEVar27 = *(Edge **)(*(long *)(pEVar27 + 0x10) + 8);
        ppVVar50 = (Vertex **)(pEVar27 + 0x18);
        pVVar20 = *ppVVar50;
        lVar17 = (long)*(int *)(pVVar20 + 0x68);
        lVar18 = (long)*(int *)(pVVar20 + 0x70);
        lVar12 = (long)*(int *)(pVVar20 + 0x70);
      } while (lVar45 <= lVar18 * lVar23 + lVar17 * lVar29 + lVar12 * lVar21);
      plVar46 = (long *)*param_4;
    }
  }
  lVar17 = lVar25 * iVar8 + lVar33 * iVar7 + lVar39 * iVar36;
  if ((plVar46 != (long *)0x0) && ((Vertex *)plVar46[3] != param_6)) {
    ppVVar50 = (Vertex **)(*(long **)plVar46[2] + 3);
    pVVar20 = *ppVVar50;
    lVar18 = (long)*(int *)(pVVar20 + 0x68);
    lVar12 = (long)*(int *)(pVVar20 + 0x70);
    lVar37 = (long)*(int *)(pVVar20 + 0x70);
    if (lVar45 <= lVar12 * lVar23 + lVar18 * lVar29 + lVar37 * lVar21) {
      iVar3 = *(int *)(this + 0xa0);
      plVar47 = *(long **)plVar46[2];
      do {
        if ((*(int *)(plVar47 + 5) == iVar3) ||
           (lVar18 = lVar25 * lVar12 + lVar33 * lVar18 + lVar39 * lVar37, lVar18 <= lVar17)) break;
        *param_4 = (Edge *)plVar47;
        pVVar20 = *ppVVar50;
        iVar7 = *(int *)(pVVar20 + 0x68);
        iVar8 = *(int *)(pVVar20 + 0x6c);
        iVar36 = *(int *)(pVVar20 + 0x70);
        plVar46 = plVar47;
        lVar17 = lVar18;
        if (pVVar20 == param_6) break;
        ppVVar50 = (Vertex **)(*(long **)plVar47[2] + 3);
        pVVar20 = *ppVVar50;
        lVar18 = (long)*(int *)(pVVar20 + 0x68);
        lVar12 = (long)*(int *)(pVVar20 + 0x70);
        lVar37 = (long)*(int *)(pVVar20 + 0x70);
        plVar47 = *(long **)plVar47[2];
      } while (lVar45 <= lVar12 * lVar23 + lVar18 * lVar29 + lVar37 * lVar21);
    }
  }
  uVar43 = lVar17 - lVar11;
  if (0 < (long)uVar43) {
    iVar3 = *(int *)(this + 0xa0);
LAB_00fa1378:
    plVar44 = (long *)*param_3;
    uVar42 = uVar43;
    do {
      iVar31 = (iVar7 - iVar34) * iVar10 + (iVar8 - iVar19) * iVar38 + (iVar36 - iVar35) * iVar24;
      uVar13 = (ulong)iVar31;
      if (((plVar44 == (long *)0x0) || ((Vertex *)plVar44[3] == param_5)) ||
         (plVar46 = *(long **)(*plVar44 + 0x10), *(int *)(plVar46 + 5) <= iVar3)) goto LAB_00fa15d8;
      lVar11 = plVar46[3];
      iVar5 = *(int *)(lVar11 + 0x68);
      iVar2 = *(int *)(lVar11 + 0x6c);
      iVar4 = *(int *)(lVar11 + 0x70);
      iVar48 = (iVar5 - iVar34) * iVar10 + (iVar2 - iVar19) * iVar38 + (iVar4 - iVar35) * iVar24;
      lVar11 = lVar25 * (iVar2 - iVar19) + lVar33 * (iVar5 - iVar34) + lVar39 * (iVar4 - iVar35);
      uVar43 = (ulong)iVar48;
      if (lVar11 == 0) {
        if (-1 < iVar48) goto LAB_00fa15d8;
      }
      else {
        if (-1 < lVar11) goto LAB_00fa15d8;
        if (iVar48 < 1) {
          if (iVar48 < 0) {
            uVar43 = -uVar43;
            iVar48 = 1;
            goto joined_r0x00fa14c0;
          }
          uVar43 = 0;
          iVar48 = 0;
          bVar6 = true;
          if (0 < iVar31) goto LAB_00fa1474;
LAB_00fa149c:
          if (iVar31 < 0) {
            uVar9 = -uVar13;
            iVar32 = 1;
            iVar28 = -1;
          }
          else {
            iVar28 = 0;
            uVar9 = 0;
            iVar32 = 0;
          }
        }
        else {
          iVar48 = -1;
joined_r0x00fa14c0:
          bVar6 = false;
          if (iVar31 < 1) goto LAB_00fa149c;
LAB_00fa1474:
          iVar32 = -1;
          iVar28 = 1;
          uVar9 = uVar13;
        }
        if (-1 < (long)uVar42) {
          iVar32 = iVar28;
        }
        uVar1 = uVar42;
        if ((long)uVar42 < 1) {
          uVar1 = -uVar42 & (long)uVar42 >> 0x3f;
          iVar28 = iVar32;
        }
        iVar32 = iVar48 - iVar28;
        if (iVar48 == iVar28) {
          if (!bVar6) {
            uVar40 = uVar43 * (uVar1 >> 0x20);
            uVar14 = (uVar43 >> 0x20) * (uVar1 & 0xffffffff);
            uVar16 = (ulong)-lVar11 >> 0x20;
            uVar30 = uVar43 * (uVar1 & 0xffffffff);
            uVar15 = uVar14 + (uVar40 & 0xffffffff);
            uVar41 = -lVar11 & 0xffffffff;
            uVar22 = uVar9 * uVar16;
            uVar1 = (uVar43 >> 0x20) * (uVar1 >> 0x20) + (uVar40 >> 0x20) + (uVar14 >> 0x20) +
                    (uVar15 >> 0x20);
            uVar40 = (uVar9 >> 0x20) * uVar41;
            uVar15 = uVar15 << 0x20;
            uVar14 = uVar30 + uVar15;
            uVar41 = uVar9 * uVar41;
            uVar43 = uVar40 + (uVar22 & 0xffffffff);
            if (CARRY8(uVar30,uVar15)) {
              uVar1 = uVar1 + 1;
            }
            uVar15 = uVar43 << 0x20;
            uVar30 = uVar41 + uVar15;
            uVar43 = (uVar9 >> 0x20) * uVar16 + (uVar22 >> 0x20) + (uVar40 >> 0x20) +
                     (uVar43 >> 0x20);
            if (CARRY8(uVar41,uVar15)) {
              uVar43 = uVar43 + 1;
            }
            if (uVar43 <= uVar1) {
              if (uVar43 <= uVar1 && uVar1 != uVar43) {
                uVar26 = 1;
              }
              else if (uVar14 < uVar30) {
                uVar26 = 0xffffffff;
              }
              else {
                uVar26 = (uint)(uVar30 < uVar14);
              }
              iVar32 = uVar26 * iVar48;
              goto joined_r0x00fa15d4;
            }
            if (0 < iVar48) goto LAB_00fa15d8;
          }
        }
        else {
joined_r0x00fa15d4:
          if (iVar32 < 0) goto LAB_00fa15d8;
        }
      }
      bVar6 = plVar44 != plVar49;
      plVar44 = (long *)0x0;
      if (bVar6) {
        plVar44 = plVar46;
      }
      uVar42 = lVar25 * (iVar8 - iVar2) + lVar33 * (iVar7 - iVar5) + lVar39 * (iVar36 - iVar4);
      *param_3 = (Edge *)plVar44;
      iVar34 = iVar5;
      iVar19 = iVar2;
      iVar35 = iVar4;
    } while( true );
  }
  if (-1 < (long)uVar43) {
    return;
  }
  iVar3 = *(int *)(this + 0xa0);
  do {
    while( true ) {
      iVar31 = (iVar7 - iVar34) * iVar10 + (iVar8 - iVar19) * iVar38 + (iVar36 - iVar35) * iVar24;
      uVar42 = (ulong)iVar31;
      if (((plVar46 == (long *)0x0) || ((Vertex *)plVar46[3] == param_6)) ||
         (plVar49 = *(long **)(plVar46[1] + 0x10), *(int *)(plVar49 + 5) <= iVar3)) break;
      lVar11 = plVar49[3];
      iVar5 = *(int *)(lVar11 + 0x68);
      iVar2 = *(int *)(lVar11 + 0x6c);
      iVar4 = *(int *)(lVar11 + 0x70);
      iVar48 = (iVar5 - iVar7) * iVar10 + (iVar2 - iVar8) * iVar38 + (iVar4 - iVar36) * iVar24;
      lVar11 = lVar25 * (iVar2 - iVar8) + lVar33 * (iVar5 - iVar7) + lVar39 * (iVar4 - iVar36);
      uVar13 = (ulong)iVar48;
      if (lVar11 == 0) goto joined_r0x00fa1b4c;
      if (-1 < lVar11) break;
      if (iVar48 < 1) {
        if (iVar48 < 0) {
          bVar6 = false;
          uVar13 = -uVar13;
          iVar32 = 1;
        }
        else {
          uVar13 = 0;
          iVar32 = 0;
          bVar6 = true;
        }
      }
      else {
        bVar6 = false;
        iVar32 = -1;
      }
      if (iVar31 < 1) {
        if (iVar31 < 0) {
          uVar9 = -uVar42;
          iVar28 = 1;
          iVar48 = -1;
        }
        else {
          iVar48 = 0;
          uVar9 = 0;
          iVar28 = 0;
        }
      }
      else {
        iVar28 = -1;
        iVar48 = 1;
        uVar9 = uVar42;
      }
      if (-1 < (long)uVar43) {
        iVar28 = iVar48;
      }
      uVar1 = uVar43;
      if ((long)uVar43 < 1) {
        uVar1 = -uVar43 & (long)uVar43 >> 0x3f;
        iVar48 = iVar28;
      }
      iVar48 = iVar32 - iVar48;
      if (iVar48 == 0) {
        if (!bVar6) {
          uVar40 = uVar13 * (uVar1 >> 0x20);
          uVar14 = (uVar13 >> 0x20) * (uVar1 & 0xffffffff);
          uVar30 = (ulong)-lVar11 >> 0x20;
          uVar15 = uVar14 + (uVar40 & 0xffffffff);
          uVar41 = -lVar11 & 0xffffffff;
          uVar16 = uVar9 * uVar30;
          uVar14 = (uVar13 >> 0x20) * (uVar1 >> 0x20) + (uVar40 >> 0x20) + (uVar14 >> 0x20) +
                   (uVar15 >> 0x20);
          uVar22 = (uVar9 >> 0x20) * uVar41;
          uVar13 = uVar13 * (uVar1 & 0xffffffff);
          uVar41 = uVar9 * uVar41;
          uVar1 = uVar22 + (uVar16 & 0xffffffff);
          uVar15 = uVar15 << 0x20;
          uVar40 = uVar13 + uVar15;
          if (CARRY8(uVar13,uVar15)) {
            uVar14 = uVar14 + 1;
          }
          uVar13 = uVar1 << 0x20;
          uVar15 = uVar41 + uVar13;
          uVar9 = (uVar9 >> 0x20) * uVar30 + (uVar16 >> 0x20) + (uVar22 >> 0x20) + (uVar1 >> 0x20);
          if (CARRY8(uVar41,uVar13)) {
            uVar9 = uVar9 + 1;
          }
          if (uVar14 < uVar9) {
            uVar26 = 0xffffffff;
          }
          else if (uVar9 < uVar14) {
            uVar26 = 1;
          }
          else if (uVar40 < uVar15) {
            uVar26 = 0xffffffff;
          }
          else {
            uVar26 = (uint)(uVar15 < uVar40);
          }
          iVar48 = uVar26 * iVar32;
          goto joined_r0x00fa1b4c;
        }
      }
      else {
joined_r0x00fa1b4c:
        if (0 < iVar48) break;
      }
      bVar6 = plVar46 != plVar44;
      plVar46 = (long *)0x0;
      if (bVar6) {
        plVar46 = plVar49;
      }
      uVar43 = lVar25 * (iVar2 - iVar19) + lVar33 * (iVar5 - iVar34) + lVar39 * (iVar4 - iVar35);
      *param_4 = (Edge *)plVar46;
      iVar7 = iVar5;
      iVar8 = iVar2;
      iVar36 = iVar4;
    }
    pEVar27 = *param_3;
    if (pEVar27 == (Edge *)0x0) {
      return;
    }
    if (*(Vertex **)(pEVar27 + 0x18) == param_5) {
      return;
    }
    pEVar27 = *(Edge **)(*(long *)(pEVar27 + 0x10) + 8);
    if (*(int *)(pEVar27 + 0x28) <= iVar3) {
      return;
    }
    lVar11 = *(long *)(pEVar27 + 0x18);
    iVar34 = *(int *)(lVar11 + 0x68) - iVar34;
    iVar35 = *(int *)(lVar11 + 0x70) - iVar35;
    iVar19 = *(int *)(lVar11 + 0x6c) - iVar19;
    if (iVar34 * lVar29 + iVar19 * lVar23 + lVar21 * iVar35 != 0) {
      return;
    }
    uVar13 = lVar33 * (iVar7 - *(int *)(lVar11 + 0x68)) + lVar25 * (iVar8 - *(int *)(lVar11 + 0x6c))
             + lVar39 * (iVar36 - *(int *)(lVar11 + 0x70));
    if (-1 < (long)uVar13) {
      return;
    }
    iVar5 = iVar34 * iVar10 + iVar19 * iVar38 + iVar35 * iVar24;
    lVar11 = lVar25 * iVar19 + lVar33 * iVar34 + lVar39 * iVar35;
    uVar9 = (ulong)iVar5;
    if (lVar11 == 0) {
      if (iVar5 < 1) {
        return;
      }
    }
    else {
      if (-1 < lVar11) {
        return;
      }
      if (iVar5 < 1) {
        if (iVar5 < 0) {
          uVar9 = -uVar9;
          iVar34 = 1;
          goto joined_r0x00fa1c80;
        }
        uVar9 = 0;
        iVar34 = 0;
        bVar6 = true;
        if (0 < iVar31) goto LAB_00fa1c2c;
LAB_00fa1c5c:
        if (iVar31 < 0) {
          uVar42 = -uVar42;
          iVar19 = 1;
          iVar35 = -1;
        }
        else {
          iVar35 = 0;
          uVar42 = 0;
          iVar19 = 0;
        }
      }
      else {
        iVar34 = -1;
joined_r0x00fa1c80:
        bVar6 = false;
        if (iVar31 < 1) goto LAB_00fa1c5c;
LAB_00fa1c2c:
        iVar19 = -1;
        iVar35 = 1;
      }
      if (-1 < (long)uVar43) {
        iVar19 = iVar35;
      }
      if ((long)uVar43 < 1) {
        uVar43 = -uVar43 & (long)uVar43 >> 0x3f;
        iVar35 = iVar19;
      }
      iVar35 = iVar34 - iVar35;
      if (iVar35 == 0) {
        if (bVar6) {
          return;
        }
        uVar40 = uVar9 * (uVar43 >> 0x20);
        uVar15 = (uVar9 >> 0x20) * (uVar43 & 0xffffffff);
        uVar22 = (ulong)-lVar11 >> 0x20;
        uVar1 = uVar15 + (uVar40 & 0xffffffff);
        uVar16 = uVar9 * (uVar43 & 0xffffffff);
        uVar30 = -lVar11 & 0xffffffff;
        uVar14 = uVar42 * uVar22;
        uVar9 = (uVar9 >> 0x20) * (uVar43 >> 0x20) + (uVar40 >> 0x20) + (uVar15 >> 0x20) +
                (uVar1 >> 0x20);
        uVar40 = (uVar42 >> 0x20) * uVar30;
        uVar1 = uVar1 << 0x20;
        uVar15 = uVar16 + uVar1;
        uVar30 = uVar42 * uVar30;
        uVar43 = uVar40 + (uVar14 & 0xffffffff);
        if (CARRY8(uVar16,uVar1)) {
          uVar9 = uVar9 + 1;
        }
        uVar1 = uVar43 << 0x20;
        uVar16 = uVar30 + uVar1;
        uVar43 = (uVar42 >> 0x20) * uVar22 + (uVar14 >> 0x20) + (uVar40 >> 0x20) + (uVar43 >> 0x20);
        if (CARRY8(uVar30,uVar1)) {
          uVar43 = uVar43 + 1;
        }
        if (uVar9 < uVar43) {
LAB_00fa193c:
          uVar26 = 0xffffffff;
        }
        else if (uVar43 < uVar9) {
          uVar26 = 1;
        }
        else {
          if (uVar15 < uVar16) goto LAB_00fa193c;
          uVar26 = (uint)(uVar16 < uVar15);
        }
        iVar35 = uVar26 * iVar34;
      }
      if (-1 < iVar35) {
        return;
      }
    }
    *param_3 = pEVar27;
    lVar11 = *(long *)(pEVar27 + 0x18);
    iVar34 = *(int *)(lVar11 + 0x68);
    iVar19 = *(int *)(lVar11 + 0x6c);
    iVar35 = *(int *)(lVar11 + 0x70);
    plVar46 = (long *)*param_4;
    uVar43 = uVar13;
  } while( true );
LAB_00fa15d8:
  pEVar27 = *param_4;
  if (pEVar27 == (Edge *)0x0) {
    return;
  }
  if (*(Vertex **)(pEVar27 + 0x18) == param_6) {
    return;
  }
  pEVar27 = **(Edge ***)(pEVar27 + 0x10);
  if (*(int *)(pEVar27 + 0x28) <= iVar3) {
    return;
  }
  lVar11 = *(long *)(pEVar27 + 0x18);
  iVar7 = *(int *)(lVar11 + 0x68) - iVar7;
  iVar8 = *(int *)(lVar11 + 0x6c) - iVar8;
  iVar36 = *(int *)(lVar11 + 0x70) - iVar36;
  if (iVar7 * lVar29 + iVar8 * lVar23 + lVar21 * iVar36 != 0) {
    return;
  }
  uVar43 = lVar33 * (*(int *)(lVar11 + 0x68) - iVar34) + lVar25 * (*(int *)(lVar11 + 0x6c) - iVar19)
           + lVar39 * (*(int *)(lVar11 + 0x70) - iVar35);
  if ((long)uVar43 < 1) {
    return;
  }
  iVar5 = iVar7 * iVar10 + iVar8 * iVar38 + iVar36 * iVar24;
  lVar11 = lVar25 * iVar8 + lVar33 * iVar7 + lVar39 * iVar36;
  uVar9 = (ulong)iVar5;
  if (lVar11 == 0) {
    if (-1 < iVar5) {
      return;
    }
    goto LAB_00fa135c;
  }
  if (-1 < lVar11) {
    return;
  }
  if (iVar5 < 1) {
    if (iVar5 < 0) {
      uVar9 = -uVar9;
      iVar7 = 1;
      goto joined_r0x00fa1710;
    }
    uVar9 = 0;
    iVar7 = 0;
    bVar6 = true;
    if (0 < iVar31) goto LAB_00fa16c0;
LAB_00fa16ec:
    if (iVar31 < 0) {
      uVar13 = -uVar13;
      iVar8 = 1;
      iVar31 = -1;
    }
    else {
      iVar31 = 0;
      uVar13 = 0;
      iVar8 = 0;
    }
  }
  else {
    iVar7 = -1;
joined_r0x00fa1710:
    bVar6 = false;
    if (iVar31 < 1) goto LAB_00fa16ec;
LAB_00fa16c0:
    iVar8 = -1;
    iVar31 = 1;
  }
  if (-1 < (long)uVar42) {
    iVar8 = iVar31;
  }
  if ((long)uVar42 < 1) {
    uVar42 = -uVar42 & (long)uVar42 >> 0x3f;
    iVar31 = iVar8;
  }
  iVar31 = iVar7 - iVar31;
  if (iVar31 == 0) {
    if (bVar6) {
      return;
    }
    uVar40 = uVar9 * (uVar42 >> 0x20);
    uVar15 = (uVar9 >> 0x20) * (uVar42 & 0xffffffff);
    uVar22 = (ulong)-lVar11 >> 0x20;
    uVar16 = uVar9 * (uVar42 & 0xffffffff);
    uVar1 = uVar15 + (uVar40 & 0xffffffff);
    uVar30 = -lVar11 & 0xffffffff;
    uVar14 = uVar13 * uVar22;
    uVar9 = (uVar9 >> 0x20) * (uVar42 >> 0x20) + (uVar40 >> 0x20) + (uVar15 >> 0x20) +
            (uVar1 >> 0x20);
    uVar40 = (uVar13 >> 0x20) * uVar30;
    uVar1 = uVar1 << 0x20;
    uVar15 = uVar16 + uVar1;
    uVar30 = uVar13 * uVar30;
    uVar42 = uVar40 + (uVar14 & 0xffffffff);
    if (CARRY8(uVar16,uVar1)) {
      uVar9 = uVar9 + 1;
    }
    uVar1 = uVar42 << 0x20;
    uVar16 = uVar30 + uVar1;
    uVar42 = (uVar13 >> 0x20) * uVar22 + (uVar14 >> 0x20) + (uVar40 >> 0x20) + (uVar42 >> 0x20);
    if (CARRY8(uVar30,uVar1)) {
      uVar42 = uVar42 + 1;
    }
    if (uVar9 < uVar42) {
LAB_00fa1344:
      uVar26 = 0xffffffff;
    }
    else if (uVar42 < uVar9) {
      uVar26 = 1;
    }
    else {
      if (uVar15 < uVar16) goto LAB_00fa1344;
      uVar26 = (uint)(uVar16 < uVar15);
    }
    iVar31 = uVar26 * iVar7;
  }
  if (iVar31 < 1) {
    return;
  }
LAB_00fa135c:
  *param_4 = pEVar27;
  lVar11 = *(long *)(pEVar27 + 0x18);
  iVar7 = *(int *)(lVar11 + 0x68);
  iVar8 = *(int *)(lVar11 + 0x6c);
  iVar36 = *(int *)(lVar11 + 0x70);
  goto LAB_00fa1378;
}


