// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeEdgeCost
// Entry Point: 00d489dc
// Size: 2700 bytes
// Signature: undefined __thiscall ComputeEdgeCost(HACD * this, ulong param_1)


/* HACD::HACD::ComputeEdgeCost(unsigned long) */

void __thiscall HACD::HACD::ComputeEdgeCost(HACD *this,ulong param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *****ppppplVar5;
  Vec3 *pVVar6;
  long lVar7;
  long ****pppplVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  double *pdVar12;
  long *plVar13;
  __less **pp_Var14;
  long lVar15;
  __less **pp_Var16;
  long lVar17;
  double *pdVar18;
  __less **pp_Var19;
  long lVar20;
  long ******pppppplVar21;
  __less *p_Var22;
  ulong uVar23;
  char *pcVar24;
  ulong uVar25;
  long *****ppppplVar26;
  long ******pppppplVar27;
  long ******pppppplVar28;
  long ******pppppplVar29;
  undefined8 *puVar30;
  long ******pppppplVar31;
  char cVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  double dVar37;
  long ****pppplVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  long local_138;
  __less **local_108;
  __tree_node *local_100;
  undefined8 local_f8;
  long ******local_f0;
  long ******local_e8;
  long local_e0;
  long ******local_d8;
  long ******local_d0;
  long local_c8;
  undefined8 local_b8;
  long ******local_b0;
  double local_a8;
  long local_a0;
  
  lVar1 = tpidr_el0;
  local_a0 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(this + 0x120);
  lVar20 = *(long *)(this + 0x138);
  lVar10 = lVar9 + param_1 * 0x30;
  plVar11 = (long *)(lVar10 + 8);
  lVar7 = *plVar11;
  plVar13 = (long *)(lVar10 + 0x10);
  local_138 = *plVar13;
  lVar17 = lVar20 + local_138 * 0x310;
  lVar15 = lVar20 + lVar7 * 0x310;
  lVar10 = lVar7;
  if ((ulong)(*(long *)(lVar15 + 0xb8) - *(long *)(lVar15 + 0xb0)) <
      (ulong)(*(long *)(lVar17 + 0xb8) - *(long *)(lVar17 + 0xb0))) {
    *plVar11 = local_138;
    *plVar13 = lVar7;
    lVar10 = local_138;
    local_138 = lVar7;
  }
  plVar11 = (long *)operator_new(0x110);
  ICHull::ICHull((ICHull *)plVar11,*(HeapManager **)(this + 400));
  lVar7 = lVar20 + lVar10 * 0x310;
  ICHull::operator=((ICHull *)plVar11,*(ICHull **)(lVar7 + 0x270));
  local_d0 = (long ******)0x0;
  local_c8 = 0;
  local_d8 = (long ******)&local_d0;
  if (*(long *)(lVar7 + 0x250) != 0) {
    uVar23 = 0;
    plVar13 = (long *)(lVar7 + 200);
    pppppplVar27 = (long ******)&local_d0;
    pppppplVar31 = (long ******)&local_d0;
    if (*(long *)(lVar7 + 600) != 0x10) {
      plVar13 = *(long **)(lVar7 + 0x248);
    }
LAB_00d48b58:
    do {
      ppppplVar26 = *pppppplVar31;
      while( true ) {
        if (ppppplVar26 == (long *****)0x0) {
          ppppplVar26 = (long *****)operator_new(0x40);
          pppplVar8 = (long ****)*plVar13;
          *(undefined2 *)(ppppplVar26 + 7) = 0;
          ppppplVar26[6] = (long ****)0x0;
          *ppppplVar26 = (long ****)0x0;
          ppppplVar26[1] = (long ****)0x0;
          ppppplVar26[4] = pppplVar8;
          ppppplVar26[5] = (long ****)0x0;
          ppppplVar26[2] = (long ****)pppppplVar27;
          *pppppplVar31 = ppppplVar26;
          ppppplVar5 = ppppplVar26;
          if ((long ******)*local_d8 != (long ******)0x0) {
            local_d8 = (long ******)*local_d8;
            ppppplVar5 = *pppppplVar31;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)local_d0,(__tree_node_base *)ppppplVar5);
          local_c8 = local_c8 + 1;
        }
        uVar23 = uVar23 + 1;
        pppplVar38 = (long ****)plVar13[1];
        pppplVar8 = (long ****)*plVar13;
        *(undefined2 *)(ppppplVar26 + 7) = *(undefined2 *)(plVar13 + 2);
        ppppplVar26[6] = pppplVar38;
        ppppplVar26[5] = pppplVar8;
        if (*(ulong *)(lVar7 + 0x250) <= uVar23) goto LAB_00d48c10;
        plVar13 = (long *)(lVar7 + 200);
        if (*(long *)(lVar7 + 600) != 0x10) {
          plVar13 = *(long **)(lVar7 + 0x248);
        }
        plVar13 = plVar13 + uVar23 * 3;
        pppppplVar27 = (long ******)&local_d0;
        pppppplVar31 = (long ******)&local_d0;
        if (local_d0 == (long ******)0x0) break;
        pppppplVar28 = local_d0;
        do {
          while (pppppplVar27 = pppppplVar28, (long)pppppplVar27[4] <= *plVar13) {
            if (*plVar13 <= (long)pppppplVar27[4]) goto LAB_00d48b58;
            pppppplVar31 = pppppplVar27 + 1;
            pppppplVar28 = (long ******)*pppppplVar31;
            if ((long ******)*pppppplVar31 == (long ******)0x0) goto LAB_00d48b58;
          }
          pppppplVar28 = (long ******)*pppppplVar27;
          pppppplVar31 = pppppplVar27;
        } while ((long ******)*pppppplVar27 != (long ******)0x0);
        ppppplVar26 = *pppppplVar27;
      }
    } while( true );
  }
LAB_00d48c10:
  lVar7 = lVar20 + local_138 * 0x310;
  if (*(long *)(lVar7 + 0x250) != 0) {
    uVar23 = 0;
    do {
      lVar15 = lVar7 + 200;
      if (*(long *)(lVar7 + 600) != 0x10) {
        lVar15 = *(long *)(lVar7 + 0x248);
      }
      puVar30 = (undefined8 *)(lVar15 + uVar23 * 0x18);
      pppplVar8 = (long ****)*puVar30;
      pppppplVar27 = (long ******)&local_d0;
      pppppplVar31 = local_d0;
      pppppplVar28 = (long ******)&local_d0;
      if (local_d0 == (long ******)0x0) {
        pcVar24 = (char *)(lVar15 + uVar23 * 0x18 + 0x11);
        cVar32 = *pcVar24;
LAB_00d48d40:
        pppppplVar29 = pppppplVar28;
        if (*pppppplVar29 == (long *****)0x0) goto LAB_00d48d78;
LAB_00d48d48:
        if (*pcVar24 == '\0') goto LAB_00d48dec;
      }
      else {
        do {
          pppppplVar21 = pppppplVar31;
          pppppplVar29 = pppppplVar27;
          ppppplVar26 = pppppplVar21[4];
          pppppplVar27 = pppppplVar29;
          if ((long)pppplVar8 <= (long)ppppplVar26) {
            pppppplVar27 = pppppplVar21;
          }
          pppppplVar31 = (long ******)pppppplVar21[(long)ppppplVar26 < (long)pppplVar8];
        } while ((long ******)pppppplVar21[(long)ppppplVar26 < (long)pppplVar8] != (long ******)0x0)
        ;
        if ((long *******)pppppplVar27 == &local_d0) {
LAB_00d48ce8:
          pcVar24 = (char *)(lVar15 + uVar23 * 0x18 + 0x11);
          cVar32 = *pcVar24;
          pppppplVar31 = local_d0;
          do {
            while (pppppplVar29 = pppppplVar31, pppppplVar27 = pppppplVar29,
                  (long)pppppplVar29[4] <= (long)pppplVar8) {
              if ((long)pppplVar8 <= (long)pppppplVar29[4]) goto LAB_00d48d40;
              pppppplVar28 = pppppplVar29 + 1;
              pppppplVar31 = (long ******)*pppppplVar28;
              if ((long ******)*pppppplVar28 == (long ******)0x0) goto LAB_00d48d40;
            }
            pppppplVar28 = pppppplVar29;
            pppppplVar31 = (long ******)*pppppplVar29;
          } while ((long ******)*pppppplVar29 != (long ******)0x0);
          if (*pppppplVar29 != (long *****)0x0) goto LAB_00d48d48;
LAB_00d48d78:
          ppppplVar26 = (long *****)operator_new(0x40);
          ppppplVar26[4] = pppplVar8;
          ppppplVar26[5] = pppplVar8;
          *(char *)((long)ppppplVar26 + 0x39) = cVar32;
          ppppplVar26[6] = (long ****)0x0;
          *(undefined *)(ppppplVar26 + 7) = 0;
          *(undefined4 *)((long)ppppplVar26 + 0x3a) = (undefined4)local_b8;
          *(undefined2 *)((long)ppppplVar26 + 0x3e) = local_b8._4_2_;
          *ppppplVar26 = (long ****)0x0;
          ppppplVar26[1] = (long ****)0x0;
          ppppplVar26[2] = (long ****)pppppplVar27;
          *pppppplVar29 = ppppplVar26;
          if ((long ******)*local_d8 != (long ******)0x0) {
            local_d8 = (long ******)*local_d8;
            ppppplVar26 = *pppppplVar29;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)local_d0,(__tree_node_base *)ppppplVar26);
          local_c8 = local_c8 + 1;
          if (*pcVar24 != '\0') goto LAB_00d48c6c;
LAB_00d48dec:
          pppplVar8 = (long ****)*puVar30;
          pVVar6 = (Vec3 *)(*(long *)(this + 0x18) + (long)pppplVar8 * 0x18);
        }
        else {
          if ((long)pppplVar8 <= (long)ppppplVar26) {
            pppppplVar29 = pppppplVar21;
          }
          if ((long)pppplVar8 < (long)pppppplVar29[4]) goto LAB_00d48ce8;
          if ((*(char *)((long)pppppplVar27 + 0x39) == '\0') ||
             (*(char *)(lVar15 + uVar23 * 0x18 + 0x11) != '\0')) goto LAB_00d48c6c;
          *(undefined *)((long)pppppplVar27 + 0x39) = 0;
          pVVar6 = (Vec3 *)(*(long *)(this + 0x18) + (long)pppplVar8 * 0x18);
        }
        ICHull::AddPoint((ICHull *)plVar11,pVVar6,(long)pppplVar8);
      }
LAB_00d48c6c:
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(ulong *)(lVar7 + 0x250));
  }
  plVar11[0x1c] = (long)&local_d8;
  iVar2 = ICHull::Process();
  while (iVar2 == 3) {
    plVar13 = (long *)operator_new(0x110);
    ICHull::ICHull((ICHull *)plVar13,*(HeapManager **)(this + 400));
    lVar7 = plVar11[3];
    uVar23 = plVar11[4];
    if (uVar23 != 0) {
      lVar7 = *(long *)(lVar7 + 0x38);
      plVar11[3] = lVar7;
    }
    lVar7 = *(long *)(lVar7 + 0x18);
    lVar15 = *(long *)(this + 0x18);
    dVar41 = *(double *)(this + 0xa8) * 0.0001;
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    pdVar12 = (double *)(lVar15 + lVar7 * 0x18);
    local_b8 = (long ******)(*pdVar12 + dVar41 * (double)(iVar2 % 10 + -5));
    local_b0 = (long ******)(pdVar12[1] + dVar41 * (double)(iVar3 % 10 + -5));
    local_a8 = pdVar12[2] + dVar41 * (double)(iVar4 % 10 + -5);
    ICHull::AddPoint((ICHull *)plVar13,(Vec3 *)&local_b8,lVar7);
    if (1 < uVar23) {
      lVar7 = uVar23 - 1;
      do {
        ICHull::AddPoint((ICHull *)plVar13,
                         (Vec3 *)(*(long *)(this + 0x18) + *(long *)(plVar11[3] + 0x18) * 0x18),
                         *(long *)(plVar11[3] + 0x18));
        if (plVar11[4] != 0) {
          plVar11[3] = *(long *)(plVar11[3] + 0x38);
        }
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    (**(code **)(*plVar11 + 8))(plVar11);
    iVar2 = ICHull::Process();
    plVar11 = plVar13;
  }
  dVar42 = *(double *)(lVar20 + lVar10 * 0x310 + 0x268) +
           *(double *)(lVar20 + local_138 * 0x310 + 0x268);
  dVar41 = (double)ICHull::ComputeArea();
  dVar33 = (double)ICHull::ComputeVolume();
  dVar43 = 0.0;
  dVar34 = ((dVar33 / (dVar41 * 0.5)) * -100.0) /
           (*(double *)(this + 0xa8) * *(double *)(this + 0xb0));
  dVar34 = 1.0 - dVar34 * dVar34;
  if (dVar34 <= 0.0) {
    dVar34 = 0.0;
  }
  dVar35 = 0.0;
  if (*(ICHull *)(plVar11 + 0x20) == (ICHull)0x0) {
    dVar35 = (double)Concavity(this,(ICHull *)plVar11,(map *)&local_d8);
  }
  dVar35 = SQRT(ABS(dVar41 * 0.5 - dVar42)) * dVar34 + dVar35;
  (**(code **)(*plVar11 + 8))(plVar11);
  dVar41 = *(double *)(this + 0x88);
  if (0.0 < dVar41) {
    local_b0 = (long ******)0x0;
    local_a8 = 0.0;
    lVar10 = lVar20 + lVar10 * 0x310;
    local_b8 = (long ******)&local_b0;
    uVar23 = *(ulong *)(lVar10 + 0x300);
    if (uVar23 != 0) {
      uVar25 = 0;
      pppppplVar27 = (long ******)&local_b0;
      lVar7 = lVar10 + 0x278;
      pppppplVar31 = (long ******)&local_b0;
      if (*(long *)(lVar10 + 0x308) != 0x10) {
        lVar7 = *(long *)(lVar10 + 0x2f8);
      }
LAB_00d490d4:
      do {
        ppppplVar26 = *pppppplVar31;
        while( true ) {
          if (ppppplVar26 == (long *****)0x0) {
            ppppplVar26 = (long *****)operator_new(0x28);
            pppplVar8 = *(long *****)(lVar7 + uVar25 * 8);
            *ppppplVar26 = (long ****)0x0;
            ppppplVar26[1] = (long ****)0x0;
            ppppplVar26[2] = (long ****)pppppplVar27;
            ppppplVar26[4] = pppplVar8;
            *pppppplVar31 = ppppplVar26;
            if ((long ******)*local_b8 != (long ******)0x0) {
              local_b8 = (long ******)*local_b8;
              ppppplVar26 = *pppppplVar31;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)local_b0,(__tree_node_base *)ppppplVar26);
            local_a8 = (double)((long)local_a8 + 1);
            uVar23 = *(ulong *)(lVar10 + 0x300);
          }
          uVar25 = uVar25 + 1;
          if (uVar23 <= uVar25) goto LAB_00d49164;
          lVar7 = lVar10 + 0x278;
          if (*(long *)(lVar10 + 0x308) != 0x10) {
            lVar7 = *(long *)(lVar10 + 0x2f8);
          }
          pppppplVar27 = (long ******)&local_b0;
          pppppplVar31 = (long ******)&local_b0;
          if (local_b0 == (long ******)0x0) break;
          ppppplVar26 = *(long ******)(lVar7 + uVar25 * 8);
          pppppplVar28 = local_b0;
          do {
            while (pppppplVar27 = pppppplVar28, pppppplVar27[4] <= ppppplVar26) {
              if (ppppplVar26 <= pppppplVar27[4]) goto LAB_00d490d4;
              pppppplVar31 = pppppplVar27 + 1;
              pppppplVar28 = (long ******)*pppppplVar31;
              if ((long ******)*pppppplVar31 == (long ******)0x0) goto LAB_00d490d4;
            }
            pppppplVar28 = (long ******)*pppppplVar27;
            pppppplVar31 = pppppplVar27;
          } while ((long ******)*pppppplVar27 != (long ******)0x0);
          ppppplVar26 = *pppppplVar27;
        }
      } while( true );
    }
LAB_00d49164:
    local_e8 = (long ******)0x0;
    local_e0 = 0;
    lVar20 = lVar20 + local_138 * 0x310;
    uVar23 = *(ulong *)(lVar20 + 0x300);
    local_f0 = (long ******)&local_e8;
    if (uVar23 != 0) {
      uVar25 = 0;
      pppppplVar27 = (long ******)&local_e8;
      pppppplVar31 = (long ******)&local_e8;
      lVar10 = lVar20 + 0x278;
      if (*(long *)(lVar20 + 0x308) != 0x10) {
        lVar10 = *(long *)(lVar20 + 0x2f8);
      }
LAB_00d4920c:
      do {
        ppppplVar26 = *pppppplVar31;
        while( true ) {
          if (ppppplVar26 == (long *****)0x0) {
            ppppplVar26 = (long *****)operator_new(0x28);
            pppplVar8 = *(long *****)(lVar10 + uVar25 * 8);
            *ppppplVar26 = (long ****)0x0;
            ppppplVar26[1] = (long ****)0x0;
            ppppplVar26[2] = (long ****)pppppplVar27;
            ppppplVar26[4] = pppplVar8;
            *pppppplVar31 = ppppplVar26;
            if ((long ******)*local_f0 != (long ******)0x0) {
              ppppplVar26 = *pppppplVar31;
              local_f0 = (long ******)*local_f0;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)local_e8,(__tree_node_base *)ppppplVar26);
            local_e0 = local_e0 + 1;
            uVar23 = *(ulong *)(lVar20 + 0x300);
          }
          uVar25 = uVar25 + 1;
          if (uVar23 <= uVar25) goto LAB_00d492a0;
          lVar10 = lVar20 + 0x278;
          if (*(long *)(lVar20 + 0x308) != 0x10) {
            lVar10 = *(long *)(lVar20 + 0x2f8);
          }
          pppppplVar27 = (long ******)&local_e8;
          pppppplVar31 = (long ******)&local_e8;
          if (local_e8 == (long ******)0x0) break;
          ppppplVar26 = *(long ******)(lVar10 + uVar25 * 8);
          pppppplVar28 = local_e8;
          do {
            while (pppppplVar27 = pppppplVar28, pppppplVar27[4] <= ppppplVar26) {
              if (ppppplVar26 <= pppppplVar27[4]) goto LAB_00d4920c;
              pppppplVar31 = pppppplVar27 + 1;
              pppppplVar28 = (long ******)*pppppplVar31;
              if ((long ******)*pppppplVar31 == (long ******)0x0) goto LAB_00d4920c;
            }
            pppppplVar28 = (long ******)*pppppplVar27;
            pppppplVar31 = pppppplVar27;
          } while ((long ******)*pppppplVar27 != (long ******)0x0);
          ppppplVar26 = *pppppplVar27;
        }
      } while( true );
    }
LAB_00d492a0:
    local_100 = (__tree_node *)0x0;
    local_f8 = 0;
    local_108 = (__less **)&local_100;
    std::__ndk1::
    __set_symmetric_difference<std::__ndk1::__less<unsigned_long_long,unsigned_long_long>&,std::__ndk1::__tree_const_iterator<unsigned_long_long,std::__ndk1::__tree_node<unsigned_long_long,void*>*,long>,std::__ndk1::__tree_const_iterator<unsigned_long_long,std::__ndk1::__tree_node<unsigned_long_long,void*>*,long>,std::__ndk1::insert_iterator<std::__ndk1::set<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>>>
              ((__tree_const_iterator)local_b8,(__tree_const_iterator)&local_b0,
               (__tree_const_iterator)local_f0,(__tree_const_iterator)&local_e8,
               (insert_iterator)&local_108,(__less *)&local_100);
    dVar43 = 0.0;
    if (local_108 != (__less **)&local_100) {
      pp_Var14 = local_108;
      do {
        pp_Var19 = (__less **)pp_Var14[1];
        if ((__less **)pp_Var14[1] == (__less **)0x0) {
          pp_Var19 = pp_Var14 + 2;
          pp_Var16 = (__less **)*pp_Var19;
          if ((__less **)*pp_Var16 != pp_Var14) {
            do {
              p_Var22 = *pp_Var19;
              pp_Var19 = (__less **)(p_Var22 + 0x10);
              pp_Var16 = (__less **)*pp_Var19;
            } while (*pp_Var16 != p_Var22);
          }
        }
        else {
          do {
            pp_Var16 = pp_Var19;
            pp_Var19 = (__less **)*pp_Var16;
          } while ((__less **)*pp_Var16 != (__less **)0x0);
        }
        pdVar18 = (double *)(*(long *)(this + 0x18) + ((ulong)pp_Var14[4] >> 0x20) * 0x18);
        pdVar12 = (double *)(*(long *)(this + 0x18) + ((ulong)pp_Var14[4] & 0xffffffff) * 0x18);
        uVar36 = NEON_fmadd(*pdVar18 - *pdVar12,*pdVar18 - *pdVar12,
                            (pdVar18[1] - pdVar12[1]) * (pdVar18[1] - pdVar12[1]));
        dVar41 = (double)NEON_fmadd(pdVar18[2] - pdVar12[2],pdVar18[2] - pdVar12[2],uVar36);
        dVar43 = dVar43 + SQRT(dVar41);
        pp_Var14 = pp_Var16;
      } while (pp_Var16 != (__less **)&local_100);
    }
    std::__ndk1::
    __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
    ::destroy((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
               *)&local_108,local_100);
    std::__ndk1::
    __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
    ::destroy((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
               *)&local_f0,(__tree_node *)local_e8);
    std::__ndk1::
    __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
    ::destroy((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
               *)&local_b8,(__tree_node *)local_b0);
    dVar41 = *(double *)(this + 0x88);
  }
  lVar9 = lVar9 + param_1 * 0x30;
  *(double *)(lVar9 + 0x18) = dVar35;
  dVar37 = pow(*(double *)(this + 0xa8),3.0);
  dVar39 = (double)NEON_ucvtf(local_c8);
  dVar40 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x60));
  uVar36 = NEON_fmadd((1.0 - dVar34) * dVar41,(dVar43 * dVar43) / (dVar42 * 12.5663706),dVar35);
  dVar41 = (double)NEON_fmadd(*(undefined8 *)(this + 0x90),dVar33 / dVar37,uVar36);
  *(double *)(lVar9 + 0x20) = dVar41 + (*(double *)(this + 0x98) * dVar39) / dVar40;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<long,HACD::DPoint>,std::__ndk1::__map_value_compare<long,std::__ndk1::__value_type<long,HACD::DPoint>,std::__ndk1::less<long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<long,HACD::DPoint>>>
  ::destroy((__tree<std::__ndk1::__value_type<long,HACD::DPoint>,std::__ndk1::__map_value_compare<long,std::__ndk1::__value_type<long,HACD::DPoint>,std::__ndk1::less<long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<long,HACD::DPoint>>>
             *)&local_d8,(__tree_node *)local_d0);
  if (*(long *)(lVar1 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


