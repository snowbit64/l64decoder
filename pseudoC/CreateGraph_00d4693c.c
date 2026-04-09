// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateGraph
// Entry Point: 00d4693c
// Size: 3068 bytes
// Signature: undefined CreateGraph(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::HACD::CreateGraph() */

void HACD::HACD::CreateGraph(void)

{
  Graph *this;
  ulong uVar1;
  double *pdVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *p_Var7;
  bool bVar8;
  long in_x0;
  undefined8 extraout_x1;
  long lVar9;
  void **ppvVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *p_Var16;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  double *pdVar20;
  long **pplVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  long **pplVar25;
  long **pplVar26;
  long **pplVar27;
  long **pplVar28;
  void **ppvVar29;
  void **ppvVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *local_488;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *local_480;
  undefined8 local_478;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *local_470;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *local_468;
  undefined8 local_460;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  local_488 = (__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *)0x0;
  local_480 = (__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *)0x0;
  local_478 = 0;
  if (*(ulong *)(in_x0 + 0x60) != 0) {
    std::__ndk1::
    vector<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>,std::__ndk1::allocator<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>>>
    ::__append((vector<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>,std::__ndk1::allocator<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>>>
                *)&local_488,*(ulong *)(in_x0 + 0x60));
  }
  if (*(long *)(in_x0 + 0x58) != 0) {
    uVar23 = 0;
    do {
      p_Var16 = local_488;
      lVar9 = *(long *)(in_x0 + 0x10);
      lVar24 = *(long *)(lVar9 + uVar23 * 0x18);
      pplVar26 = (long **)(local_488 + lVar24 * 0x18 + 8);
      pplVar28 = (long **)*pplVar26;
      pplVar27 = pplVar26;
      if (pplVar28 == (long **)0x0) {
LAB_00d46a38:
        plVar12 = *pplVar26;
        pplVar21 = pplVar26;
      }
      else {
        pplVar26 = (long **)(local_488 + lVar24 * 0x18 + 8);
        do {
          while (pplVar21 = pplVar28, pplVar27 = pplVar21, (long)pplVar21[4] <= (long)uVar23) {
            if ((long)uVar23 <= (long)pplVar21[4]) goto LAB_00d46a38;
            pplVar26 = pplVar21 + 1;
            pplVar28 = (long **)*pplVar26;
            if ((long **)*pplVar26 == (long **)0x0) goto LAB_00d46a38;
          }
          pplVar26 = pplVar21;
          pplVar28 = (long **)*pplVar21;
        } while ((long **)*pplVar21 != (long **)0x0);
        plVar12 = *pplVar21;
      }
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)operator_new(0x28);
        plVar12[4] = uVar23;
        *plVar12 = 0;
        plVar12[1] = 0;
        plVar12[2] = (long)pplVar27;
        *pplVar21 = plVar12;
        plVar13 = (long *)**(long **)(p_Var16 + lVar24 * 0x18);
        if (plVar13 != (long *)0x0) {
          *(long **)(p_Var16 + lVar24 * 0x18) = plVar13;
          plVar12 = *pplVar21;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(p_Var16 + lVar24 * 0x18 + 8),(__tree_node_base *)plVar12);
        *(long *)(p_Var16 + lVar24 * 0x18 + 0x10) = *(long *)(p_Var16 + lVar24 * 0x18 + 0x10) + 1;
        lVar9 = *(long *)(in_x0 + 0x10);
        lVar24 = *(long *)(lVar9 + uVar23 * 0x18 + 8);
        pplVar27 = (long **)(local_488 + lVar24 * 0x18 + 8);
        pplVar26 = (long **)*pplVar27;
        if (pplVar26 != (long **)0x0) goto LAB_00d46a58;
LAB_00d46b98:
        pplVar28 = pplVar27;
        if (*pplVar27 != (long *)0x0) goto LAB_00d46aec;
LAB_00d46ba4:
        p_Var16 = local_488;
        plVar12 = (long *)operator_new(0x28);
        plVar12[4] = uVar23;
        *plVar12 = 0;
        plVar12[1] = 0;
        plVar12[2] = (long)pplVar28;
        *pplVar27 = plVar12;
        plVar13 = (long *)**(long **)(p_Var16 + lVar24 * 0x18);
        if (plVar13 != (long *)0x0) {
          *(long **)(p_Var16 + lVar24 * 0x18) = plVar13;
          plVar12 = *pplVar27;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(p_Var16 + lVar24 * 0x18 + 8),(__tree_node_base *)plVar12);
        *(long *)(p_Var16 + lVar24 * 0x18 + 0x10) = *(long *)(p_Var16 + lVar24 * 0x18 + 0x10) + 1;
        lVar9 = *(long *)(*(long *)(in_x0 + 0x10) + uVar23 * 0x18 + 0x10);
        pplVar27 = (long **)(local_488 + lVar9 * 0x18 + 8);
        pplVar26 = (long **)*pplVar27;
        if (pplVar26 != (long **)0x0) goto LAB_00d46b04;
LAB_00d46c20:
        plVar12 = *pplVar27;
        pplVar28 = pplVar27;
        p_Var16 = local_488;
      }
      else {
        lVar24 = *(long *)(lVar9 + uVar23 * 0x18 + 8);
        pplVar27 = (long **)(local_488 + lVar24 * 0x18 + 8);
        pplVar26 = (long **)*pplVar27;
        if (pplVar26 == (long **)0x0) goto LAB_00d46b98;
LAB_00d46a58:
        pplVar27 = (long **)(local_488 + lVar24 * 0x18 + 8);
        do {
          while (pplVar28 = pplVar26, (long)pplVar28[4] <= (long)uVar23) {
            if ((long)uVar23 <= (long)pplVar28[4]) goto LAB_00d46ae4;
            pplVar27 = pplVar28 + 1;
            pplVar26 = (long **)*pplVar27;
            if ((long **)*pplVar27 == (long **)0x0) goto LAB_00d46ae4;
          }
          pplVar27 = pplVar28;
          pplVar26 = (long **)*pplVar28;
        } while ((long **)*pplVar28 != (long **)0x0);
LAB_00d46ae4:
        if (*pplVar27 == (long *)0x0) goto LAB_00d46ba4;
LAB_00d46aec:
        lVar9 = *(long *)(lVar9 + uVar23 * 0x18 + 0x10);
        pplVar27 = (long **)(local_488 + lVar9 * 0x18 + 8);
        pplVar26 = (long **)*pplVar27;
        if (pplVar26 == (long **)0x0) goto LAB_00d46c20;
LAB_00d46b04:
        pplVar27 = (long **)(local_488 + lVar9 * 0x18 + 8);
        do {
          while (pplVar28 = pplVar26, (long)pplVar28[4] <= (long)uVar23) {
            if ((long)uVar23 <= (long)pplVar28[4]) goto LAB_00d46b4c;
            pplVar27 = pplVar28 + 1;
            pplVar26 = (long **)*pplVar27;
            if ((long **)*pplVar27 == (long **)0x0) goto LAB_00d46b4c;
          }
          pplVar27 = pplVar28;
          pplVar26 = (long **)*pplVar28;
        } while ((long **)*pplVar28 != (long **)0x0);
LAB_00d46b4c:
        plVar12 = *pplVar27;
        p_Var16 = local_488;
      }
      local_488 = p_Var16;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)operator_new(0x28);
        plVar12[4] = uVar23;
        *plVar12 = 0;
        plVar12[1] = 0;
        plVar12[2] = (long)pplVar28;
        *pplVar27 = plVar12;
        plVar13 = (long *)**(long **)(p_Var16 + lVar9 * 0x18);
        if (plVar13 != (long *)0x0) {
          *(long **)(p_Var16 + lVar9 * 0x18) = plVar13;
          plVar12 = *pplVar27;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(p_Var16 + lVar9 * 0x18 + 8),(__tree_node_base *)plVar12);
        *(long *)(p_Var16 + lVar9 * 0x18 + 0x10) = *(long *)(p_Var16 + lVar9 * 0x18 + 0x10) + 1;
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(ulong *)(in_x0 + 0x58));
  }
  this = (Graph *)(in_x0 + 0x100);
  Graph::Clear();
  Graph::Allocate(this,*(ulong *)(in_x0 + 0x58),*(ulong *)(in_x0 + 0x58) * 5);
  uVar23 = *(ulong *)(in_x0 + 0x60);
  if (uVar23 != 0) {
    uVar18 = 0;
    do {
      pplVar26 = (long **)((long)(local_488 + uVar18 * 0x18) + 8);
      pplVar27 = *(long ***)(local_488 + uVar18 * 0x18);
      if (pplVar27 != pplVar26) {
        do {
          plVar12 = pplVar27[4];
          lVar24 = *(long *)(in_x0 + 0x10);
          puVar14 = (ulong *)(lVar24 + (long)plVar12 * 0x18);
          uVar23 = *puVar14;
          uVar1 = puVar14[1];
          uVar19 = puVar14[2];
          pplVar28 = (long **)pplVar27[1];
          lVar9 = (uVar23 << 0x20) + uVar1;
          if (uVar23 <= uVar1) {
            lVar9 = (uVar1 << 0x20) + uVar23;
          }
          lVar15 = (uVar1 << 0x20) + uVar19;
          if (uVar1 <= uVar19) {
            lVar15 = (uVar19 << 0x20) + uVar1;
          }
          lVar3 = (uVar19 << 0x20) + uVar23;
          if (uVar19 <= uVar23) {
            lVar3 = uVar19 + (uVar23 << 0x20);
          }
          pplVar21 = pplVar28;
          if (pplVar28 == (long **)0x0) {
            pplVar21 = pplVar27 + 2;
            pplVar25 = (long **)*pplVar21;
            if ((long **)*pplVar25 != pplVar27) {
              do {
                plVar13 = *pplVar21;
                pplVar21 = (long **)(plVar13 + 2);
                pplVar25 = (long **)*pplVar21;
              } while (*pplVar25 != plVar13);
            }
          }
          else {
            do {
              pplVar25 = pplVar21;
              pplVar21 = (long **)*pplVar25;
            } while ((long **)*pplVar25 != (long **)0x0);
          }
          if (pplVar25 != pplVar26) {
            while( true ) {
              puVar14 = (ulong *)(lVar24 + (long)pplVar25[4] * 0x18);
              uVar23 = *puVar14;
              uVar1 = puVar14[1];
              uVar19 = puVar14[2];
              lVar24 = (uVar23 << 0x20) + uVar1;
              if (uVar23 <= uVar1) {
                lVar24 = (uVar1 << 0x20) + uVar23;
              }
              lVar4 = (uVar1 << 0x20) + uVar19;
              if (uVar1 <= uVar19) {
                lVar4 = (uVar19 << 0x20) + uVar1;
              }
              lVar5 = (uVar19 << 0x20) + uVar23;
              if (uVar19 <= uVar23) {
                lVar5 = uVar19 + (uVar23 << 0x20);
              }
              uVar11 = (uint)(lVar9 == lVar24);
              if (lVar9 == lVar4) {
                uVar11 = uVar11 + 1;
              }
              if (lVar9 == lVar5) {
                uVar11 = uVar11 + 1;
              }
              if (lVar15 == lVar24) {
                uVar11 = uVar11 + 1;
              }
              if (lVar15 == lVar4) {
                uVar11 = uVar11 + 1;
              }
              if (lVar15 == lVar5) {
                uVar11 = uVar11 + 1;
              }
              if (lVar3 == lVar24) {
                uVar11 = uVar11 + 1;
              }
              if (lVar3 == lVar4) {
                uVar11 = uVar11 + 1;
              }
              if (lVar3 == lVar5) {
                uVar11 = uVar11 + 1;
              }
              if (uVar11 == 1) {
                Graph::AddEdge(this,(long)plVar12,(long)pplVar25[4]);
              }
              pplVar28 = (long **)pplVar25[1];
              if ((long **)pplVar25[1] == (long **)0x0) {
                pplVar28 = pplVar25 + 2;
                bVar8 = (long **)**pplVar28 != pplVar25;
                pplVar25 = (long **)*pplVar28;
                if (bVar8) {
                  do {
                    plVar13 = *pplVar28;
                    pplVar28 = (long **)(plVar13 + 2);
                    pplVar25 = (long **)*pplVar28;
                  } while (*pplVar25 != plVar13);
                }
              }
              else {
                do {
                  pplVar25 = pplVar28;
                  pplVar28 = (long **)*pplVar25;
                } while (*pplVar25 != (long *)0x0);
              }
              if (pplVar25 == pplVar26) break;
              lVar24 = *(long *)(in_x0 + 0x10);
            }
            pplVar28 = (long **)pplVar27[1];
          }
          if (pplVar28 == (long **)0x0) {
            pplVar28 = pplVar27 + 2;
            pplVar21 = (long **)*pplVar28;
            if ((long **)*pplVar21 != pplVar27) {
              do {
                plVar12 = *pplVar28;
                pplVar28 = (long **)(plVar12 + 2);
                pplVar21 = (long **)*pplVar28;
              } while (*pplVar21 != plVar12);
            }
          }
          else {
            do {
              pplVar21 = pplVar28;
              pplVar28 = (long **)*pplVar21;
            } while ((long **)*pplVar21 != (long **)0x0);
          }
          pplVar27 = pplVar21;
        } while (pplVar21 != pplVar26);
        uVar23 = *(ulong *)(in_x0 + 0x60);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar23);
  }
  if (0.0 <= *(double *)(in_x0 + 0x78)) {
    Graph::ExtractCCs();
    if (*(long *)(in_x0 + 0x178) != 0) {
      FUN_00d47538(&local_470,extraout_x1,"nCC %lu\n",*(undefined8 *)(in_x0 + 0x108));
      (**(code **)(in_x0 + 0x178))(0,0,&local_470,*(undefined8 *)(in_x0 + 0x110));
    }
    if (1 < *(ulong *)(in_x0 + 0x108)) {
      local_470 = (__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *)0x0;
      local_468 = (__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *)0x0;
      local_460 = 0;
      std::__ndk1::
      vector<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>,std::__ndk1::allocator<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>>>
      ::__append((vector<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>,std::__ndk1::allocator<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>>>
                  *)&local_470,*(ulong *)(in_x0 + 0x108));
      if (*(long *)(in_x0 + 0x58) != 0) {
        uVar23 = 0;
        do {
          p_Var16 = local_470;
          lVar24 = *(long *)(*(long *)(in_x0 + 0x138) + uVar23 * 0x310 + 8);
          lVar9 = *(long *)(in_x0 + 0x10);
          plVar12 = (long *)(lVar9 + uVar23 * 0x18);
          pplVar28 = (long **)(local_470 + lVar24 * 0x18 + 8);
          pplVar27 = (long **)*pplVar28;
          pplVar26 = pplVar28;
          if (pplVar27 != (long **)0x0) {
            lVar15 = *plVar12;
            pplVar21 = pplVar27;
            pplVar26 = (long **)(local_470 + lVar24 * 0x18 + 8);
            do {
              while (pplVar28 = pplVar21, (long)pplVar28[4] <= lVar15) {
                if (lVar15 <= (long)pplVar28[4]) goto LAB_00d46ff4;
                pplVar26 = pplVar28 + 1;
                pplVar21 = (long **)*pplVar26;
                if ((long **)*pplVar26 == (long **)0x0) goto LAB_00d46ff4;
              }
              pplVar21 = (long **)*pplVar28;
              pplVar26 = pplVar28;
            } while ((long **)*pplVar28 != (long **)0x0);
          }
LAB_00d46ff4:
          if (*pplVar26 == (long *)0x0) {
            plVar13 = (long *)operator_new(0x28);
            lVar9 = *plVar12;
            *plVar13 = 0;
            plVar13[1] = 0;
            plVar13[2] = (long)pplVar28;
            plVar13[4] = lVar9;
            *pplVar26 = plVar13;
            plVar12 = (long *)**(long **)(p_Var16 + lVar24 * 0x18);
            if (plVar12 != (long *)0x0) {
              *(long **)(p_Var16 + lVar24 * 0x18) = plVar12;
              plVar13 = *pplVar26;
            }
            lVar15 = lVar24 * 0x18;
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(p_Var16 + lVar15 + 8),(__tree_node_base *)plVar13);
            *(long *)(p_Var16 + lVar15 + 0x10) = *(long *)(p_Var16 + lVar15 + 0x10) + 1;
            lVar9 = *(long *)(in_x0 + 0x10);
            pplVar27 = *(long ***)(local_470 + lVar15 + 8);
            plVar12 = (long *)(lVar9 + uVar23 * 0x18 + 8);
            p_Var16 = local_470 + lVar24 * 0x18;
            if (pplVar27 != (long **)0x0) goto LAB_00d4700c;
LAB_00d470d8:
            pplVar21 = (long **)(p_Var16 + 8);
            pplVar28 = pplVar21;
          }
          else {
            plVar12 = (long *)(lVar9 + uVar23 * 0x18 + 8);
            p_Var16 = local_470 + lVar24 * 0x18;
            if (pplVar27 == (long **)0x0) goto LAB_00d470d8;
LAB_00d4700c:
            pplVar26 = pplVar27;
            pplVar28 = (long **)(p_Var16 + 8);
            do {
              while (pplVar21 = pplVar26, (long)pplVar21[4] <= *plVar12) {
                if (*plVar12 <= (long)pplVar21[4]) goto LAB_00d470e0;
                pplVar28 = pplVar21 + 1;
                pplVar26 = (long **)*pplVar28;
                if ((long **)*pplVar28 == (long **)0x0) goto LAB_00d470e0;
              }
              pplVar26 = (long **)*pplVar21;
              pplVar28 = pplVar21;
            } while ((long **)*pplVar21 != (long **)0x0);
          }
LAB_00d470e0:
          p_Var16 = local_470;
          if (*pplVar28 == (long *)0x0) {
            plVar13 = (long *)operator_new(0x28);
            lVar9 = *plVar12;
            *plVar13 = 0;
            plVar13[1] = 0;
            plVar13[2] = (long)pplVar21;
            plVar13[4] = lVar9;
            *pplVar28 = plVar13;
            plVar12 = (long *)**(long **)(p_Var16 + lVar24 * 0x18);
            if (plVar12 != (long *)0x0) {
              *(long **)(p_Var16 + lVar24 * 0x18) = plVar12;
              plVar13 = *pplVar28;
            }
            lVar9 = lVar24 * 0x18;
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(p_Var16 + lVar9 + 8),(__tree_node_base *)plVar13);
            *(long *)(p_Var16 + lVar9 + 0x10) = *(long *)(p_Var16 + lVar9 + 0x10) + 1;
            pplVar27 = *(long ***)(local_470 + lVar9 + 8);
            plVar12 = (long *)(*(long *)(in_x0 + 0x10) + uVar23 * 0x18 + 0x10);
            if (pplVar27 != (long **)0x0) goto LAB_00d470f4;
LAB_00d471bc:
            pplVar28 = (long **)(local_470 + lVar24 * 0x18 + 8);
            pplVar26 = pplVar28;
          }
          else {
            plVar12 = (long *)(lVar9 + uVar23 * 0x18 + 0x10);
            if (pplVar27 == (long **)0x0) goto LAB_00d471bc;
LAB_00d470f4:
            pplVar26 = (long **)(local_470 + lVar24 * 0x18 + 8);
            do {
              while (pplVar28 = pplVar27, (long)pplVar28[4] <= *plVar12) {
                if (*plVar12 <= (long)pplVar28[4]) goto LAB_00d471cc;
                pplVar26 = pplVar28 + 1;
                pplVar27 = (long **)*pplVar26;
                if ((long **)*pplVar26 == (long **)0x0) goto LAB_00d471cc;
              }
              pplVar27 = (long **)*pplVar28;
              pplVar26 = pplVar28;
            } while ((long **)*pplVar28 != (long **)0x0);
          }
LAB_00d471cc:
          p_Var16 = local_470;
          if (*pplVar26 == (long *)0x0) {
            plVar13 = (long *)operator_new(0x28);
            lVar9 = *plVar12;
            *plVar13 = 0;
            plVar13[1] = 0;
            plVar13[2] = (long)pplVar28;
            plVar13[4] = lVar9;
            *pplVar26 = plVar13;
            plVar12 = (long *)**(long **)(p_Var16 + lVar24 * 0x18);
            if (plVar12 != (long *)0x0) {
              *(long **)(p_Var16 + lVar24 * 0x18) = plVar12;
              plVar13 = *pplVar26;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(p_Var16 + lVar24 * 0x18 + 8),
                       (__tree_node_base *)plVar13);
            *(long *)(p_Var16 + lVar24 * 0x18 + 0x10) =
                 *(long *)(p_Var16 + lVar24 * 0x18 + 0x10) + 1;
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < *(ulong *)(in_x0 + 0x58));
      }
      uVar23 = *(ulong *)(in_x0 + 0x108);
      if (uVar23 != 0) {
        uVar18 = 0;
        do {
          uVar1 = uVar18 + 1;
          if ((uVar1 < uVar23) &&
             (ppvVar29 = *(void ***)(local_470 + uVar18 * 0x18),
             ppvVar29 != (void **)((long)(local_470 + uVar18 * 0x18) + 8))) {
            ppvVar30 = (void **)(local_470 + uVar18 * 0x18 + 8);
            uVar19 = uVar1;
            if (ppvVar29 == ppvVar30) goto LAB_00d47448;
LAB_00d47264:
            pplVar26 = (long **)((long)(local_470 + uVar19 * 0x18) + 8);
            pplVar27 = *(long ***)(local_470 + uVar19 * 0x18);
            if (pplVar27 == pplVar26) goto LAB_00d473d0;
            do {
              plVar12 = (long *)0xffffffffffffffff;
              plVar13 = (long *)0xffffffffffffffff;
              dVar31 = 1.797693134862316e+308;
              pdVar2 = (double *)(*(long *)(in_x0 + 0x18) + (long)ppvVar29[4] * 0x18);
              do {
                pdVar20 = (double *)(*(long *)(in_x0 + 0x18) + (long)pplVar27[4] * 0x18);
                uVar32 = NEON_fmadd(*pdVar2 - *pdVar20,*pdVar2 - *pdVar20,
                                    (pdVar2[1] - pdVar20[1]) * (pdVar2[1] - pdVar20[1]));
                dVar33 = (double)NEON_fmadd(pdVar2[2] - pdVar20[2],pdVar2[2] - pdVar20[2],uVar32);
                dVar33 = SQRT(dVar33);
                if (dVar33 < dVar31) {
                  plVar12 = *(long **)(*(long *)(local_488 + (long)ppvVar29[4] * 0x18) + 0x20);
                  pplVar28 = *(long ***)(local_488 + (long)pplVar27[4] * 0x18);
                  while (dVar31 = dVar33,
                        pplVar28 != (long **)((long)(local_488 + (long)pplVar27[4] * 0x18) + 8)) {
                    plVar13 = pplVar28[4];
                    if (plVar13 != plVar12) goto LAB_00d4736c;
                    pplVar21 = (long **)pplVar28[1];
                    if (pplVar28[1] == (long *)0x0) {
                      pplVar21 = pplVar28 + 2;
                      bVar8 = (long **)**pplVar21 != pplVar28;
                      pplVar28 = (long **)*pplVar21;
                      if (bVar8) {
                        do {
                          plVar13 = *pplVar21;
                          pplVar21 = (long **)(plVar13 + 2);
                          pplVar28 = (long **)*pplVar21;
                        } while (*pplVar28 != plVar13);
                      }
                    }
                    else {
                      do {
                        pplVar28 = pplVar21;
                        pplVar21 = (long **)*pplVar28;
                      } while (*pplVar28 != (long *)0x0);
                    }
                  }
                  plVar13 = (long *)0xffffffffffffffff;
                }
LAB_00d4736c:
                pplVar28 = (long **)pplVar27[1];
                if ((long **)pplVar27[1] == (long **)0x0) {
                  pplVar28 = pplVar27 + 2;
                  pplVar21 = (long **)*pplVar28;
                  if ((long **)*pplVar21 != pplVar27) {
                    do {
                      plVar22 = *pplVar28;
                      pplVar28 = (long **)(plVar22 + 2);
                      pplVar21 = (long **)*pplVar28;
                    } while (*pplVar21 != plVar22);
                  }
                }
                else {
                  do {
                    pplVar21 = pplVar28;
                    pplVar28 = (long **)*pplVar21;
                  } while ((long **)*pplVar21 != (long **)0x0);
                }
                pplVar27 = pplVar21;
              } while (pplVar21 != pplVar26);
              if (((dVar31 <= *(double *)(in_x0 + 0x78)) && (-1 < (long)plVar12)) &&
                 (-1 < (long)plVar13)) {
                Graph::AddEdge(this,(long)plVar12,(long)plVar13);
              }
LAB_00d473d0:
              do {
                ppvVar10 = (void **)ppvVar29[1];
                if ((void **)ppvVar29[1] == (void **)0x0) {
                  ppvVar10 = ppvVar29 + 2;
                    /* WARNING: Load size is inaccurate */
                  bVar8 = **ppvVar10 != ppvVar29;
                  ppvVar29 = (void **)*ppvVar10;
                  if (bVar8) {
                    do {
                      pvVar17 = *ppvVar10;
                      ppvVar10 = (void **)((long)pvVar17 + 0x10);
                      ppvVar29 = (void **)*ppvVar10;
                    } while (*ppvVar29 != pvVar17);
                  }
                }
                else {
                  do {
                    ppvVar29 = ppvVar10;
                    ppvVar10 = (void **)*ppvVar29;
                  } while ((void **)*ppvVar29 != (void **)0x0);
                }
                if (ppvVar29 == ppvVar30) {
                  uVar23 = *(ulong *)(in_x0 + 0x108);
                  goto LAB_00d47448;
                }
                pplVar26 = (long **)((long)(local_470 + uVar19 * 0x18) + 8);
                pplVar27 = *(long ***)(local_470 + uVar19 * 0x18);
              } while (pplVar27 == pplVar26);
            } while( true );
          }
LAB_00d47220:
          uVar18 = uVar1;
        } while (uVar1 < uVar23);
      }
      p_Var7 = local_470;
      p_Var16 = local_468;
      if (local_470 != (__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *)0x0) {
        while (p_Var16 != p_Var7) {
          std::__ndk1::__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>::destroy
                    (p_Var16 + -0x18,*(__tree_node **)(p_Var16 + -0x10));
          p_Var16 = p_Var16 + -0x18;
        }
        local_468 = p_Var7;
        operator_delete(local_470);
      }
    }
  }
  p_Var7 = local_488;
  p_Var16 = local_480;
  if (local_488 != (__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *)0x0) {
    while (p_Var16 != p_Var7) {
      std::__ndk1::__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>::destroy
                (p_Var16 + -0x18,*(__tree_node **)(p_Var16 + -0x10));
      p_Var16 = p_Var16 + -0x18;
    }
    local_480 = p_Var7;
    operator_delete(local_488);
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while( true ) {
    ppvVar29 = *(void ***)(local_470 + uVar18 * 0x18);
    ppvVar30 = (void **)(local_470 + uVar18 * 0x18 + 8);
    if (ppvVar29 != ppvVar30) break;
LAB_00d47448:
    uVar19 = uVar19 + 1;
    if (uVar23 <= uVar19) goto LAB_00d47220;
  }
  goto LAB_00d47264;
}


