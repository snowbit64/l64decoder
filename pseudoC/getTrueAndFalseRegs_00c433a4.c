// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTrueAndFalseRegs
// Entry Point: 00c433a4
// Size: 4512 bytes
// Signature: undefined __thiscall getTrueAndFalseRegs(IR_Section * this, set * param_1, set * param_2, uint param_3)


/* WARNING: Type propagation algorithm not settling */
/* IR_Section::getTrueAndFalseRegs(std::__ndk1::set<unsigned int, std::__ndk1::less<unsigned int>,
   std::__ndk1::allocator<unsigned int> >&, std::__ndk1::set<unsigned int,
   std::__ndk1::less<unsigned int>, std::__ndk1::allocator<unsigned int> >&, unsigned int) */

void __thiscall
IR_Section::getTrueAndFalseRegs(IR_Section *this,set *param_1,set *param_2,uint param_3)

{
  __tree_node_base **pp_Var1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  __tree_node_base **pp_Var15;
  __tree_node_base **pp_Var16;
  long lVar17;
  long *plVar18;
  __tree_node_base *p_Var19;
  int *piVar20;
  __tree_node_base **pp_Var21;
  long lVar22;
  __tree_node_base **pp_Var23;
  __tree_node_base **pp_Var24;
  __tree_node_base **pp_Var25;
  long lVar26;
  long lVar27;
  uint uVar28;
  __tree_node_base **pp_Var29;
  __tree_node_base **pp_Var30;
  __tree_node_base **pp_Var31;
  __tree_node_base **pp_Var32;
  __tree_node_base **pp_Var33;
  uint uVar34;
  __tree_node_base **pp_Var35;
  __tree_node_base **pp_Var36;
  
  uVar2 = param_3 + 1;
  plVar14 = (long *)(param_2 + 0x10);
  plVar13 = (long *)(param_1 + 0x10);
  lVar27 = *plVar13;
  pp_Var36 = (__tree_node_base **)(param_1 + 8);
  pp_Var25 = (__tree_node_base **)(param_2 + 8);
  lVar26 = *plVar14;
LAB_00c43444:
  piVar20 = *(int **)(*(long *)(this + 0x20) + (ulong)param_3 * 8);
  iVar3 = *piVar20;
  pp_Var30 = pp_Var36;
  pp_Var31 = pp_Var36;
  if (iVar3 - 0xa1U < 2) {
    uVar34 = piVar20[2];
    if ((int)uVar34 < 0) goto LAB_00c43424;
    pp_Var35 = (__tree_node_base **)*pp_Var36;
    pp_Var15 = pp_Var35;
    pp_Var32 = pp_Var36;
    if (pp_Var35 == (__tree_node_base **)0x0) {
LAB_00c434a0:
      pp_Var32 = pp_Var36;
    }
    else {
      do {
        bVar7 = *(uint *)((long)pp_Var15 + 0x1c) < uVar34;
        if (!bVar7) {
          pp_Var32 = pp_Var15;
        }
        pp_Var29 = pp_Var15 + bVar7;
        pp_Var15 = (__tree_node_base **)*pp_Var29;
      } while ((__tree_node_base **)*pp_Var29 != (__tree_node_base **)0x0);
      if ((pp_Var32 == pp_Var36) || (uVar34 < *(uint *)((long)pp_Var32 + 0x1c))) goto LAB_00c434a0;
    }
    pp_Var29 = (__tree_node_base **)*pp_Var25;
    pp_Var33 = pp_Var29;
    pp_Var15 = pp_Var25;
    if (pp_Var29 == (__tree_node_base **)0x0) {
LAB_00c434e0:
      pp_Var15 = pp_Var25;
    }
    else {
      do {
        bVar7 = *(uint *)((long)pp_Var33 + 0x1c) < uVar34;
        if (!bVar7) {
          pp_Var15 = pp_Var33;
        }
        pp_Var23 = pp_Var33 + bVar7;
        pp_Var33 = (__tree_node_base **)*pp_Var23;
      } while ((__tree_node_base **)*pp_Var23 != (__tree_node_base **)0x0);
      if ((pp_Var15 == pp_Var25) || (uVar34 < *(uint *)((long)pp_Var15 + 0x1c))) goto LAB_00c434e0;
    }
    uVar28 = piVar20[((uint)piVar20[1] >> 0x10) + 3];
    uVar4 = piVar20[(ulong)((uint)piVar20[1] >> 0x10) + 2];
    if ((int)uVar4 < 0) {
      cVar5 = *(char *)(*(long *)(*(long *)this + 0x80) + ((ulong)uVar4 & 0x7fffffff) * 0x18 + 8);
      bVar8 = cVar5 != '\x01';
      bVar7 = cVar5 != '\0';
      if ((int)uVar28 < 0) goto LAB_00c43840;
LAB_00c4358c:
      pp_Var33 = pp_Var36;
      pp_Var23 = pp_Var35;
      if (pp_Var35 == (__tree_node_base **)0x0) {
LAB_00c435c4:
        pp_Var33 = pp_Var36;
      }
      else {
        do {
          bVar9 = *(uint *)((long)pp_Var23 + 0x1c) < uVar28;
          if (!bVar9) {
            pp_Var33 = pp_Var23;
          }
          pp_Var16 = pp_Var23 + bVar9;
          pp_Var23 = (__tree_node_base **)*pp_Var16;
        } while ((__tree_node_base **)*pp_Var16 != (__tree_node_base **)0x0);
        if ((pp_Var33 == pp_Var36) || (uVar28 < *(uint *)((long)pp_Var33 + 0x1c)))
        goto LAB_00c435c4;
      }
      bVar9 = pp_Var33 != pp_Var36;
      pp_Var33 = pp_Var25;
      pp_Var23 = pp_Var29;
      if (pp_Var29 == (__tree_node_base **)0x0) {
LAB_00c43608:
        pp_Var33 = pp_Var25;
      }
      else {
        do {
          bVar10 = *(uint *)((long)pp_Var23 + 0x1c) < uVar28;
          if (!bVar10) {
            pp_Var33 = pp_Var23;
          }
          pp_Var16 = pp_Var23 + bVar10;
          pp_Var23 = (__tree_node_base **)*pp_Var16;
        } while ((__tree_node_base **)*pp_Var16 != (__tree_node_base **)0x0);
        if ((pp_Var33 == pp_Var25) || (uVar28 < *(uint *)((long)pp_Var33 + 0x1c)))
        goto LAB_00c43608;
      }
      bVar10 = pp_Var33 != pp_Var25;
    }
    else {
      pp_Var33 = pp_Var36;
      pp_Var23 = pp_Var35;
      if (pp_Var35 == (__tree_node_base **)0x0) {
LAB_00c43538:
        pp_Var33 = pp_Var36;
      }
      else {
        do {
          bVar7 = *(uint *)((long)pp_Var23 + 0x1c) < uVar4;
          if (!bVar7) {
            pp_Var33 = pp_Var23;
          }
          pp_Var16 = pp_Var23 + bVar7;
          pp_Var23 = (__tree_node_base **)*pp_Var16;
        } while ((__tree_node_base **)*pp_Var16 != (__tree_node_base **)0x0);
        if ((pp_Var33 == pp_Var36) || (uVar4 < *(uint *)((long)pp_Var33 + 0x1c))) goto LAB_00c43538;
      }
      bVar7 = pp_Var33 != pp_Var36;
      pp_Var33 = pp_Var25;
      pp_Var23 = pp_Var29;
      if (pp_Var29 == (__tree_node_base **)0x0) {
LAB_00c4357c:
        pp_Var33 = pp_Var25;
      }
      else {
        do {
          bVar8 = *(uint *)((long)pp_Var23 + 0x1c) < uVar4;
          if (!bVar8) {
            pp_Var33 = pp_Var23;
          }
          pp_Var16 = pp_Var23 + bVar8;
          pp_Var23 = (__tree_node_base **)*pp_Var16;
        } while ((__tree_node_base **)*pp_Var16 != (__tree_node_base **)0x0);
        if ((pp_Var33 == pp_Var25) || (uVar4 < *(uint *)((long)pp_Var33 + 0x1c))) goto LAB_00c4357c;
      }
      bVar8 = pp_Var33 != pp_Var25;
      if (-1 < (int)uVar28) goto LAB_00c4358c;
LAB_00c43840:
      cVar5 = *(char *)(*(long *)(*(long *)this + 0x80) + ((ulong)uVar28 & 0x7fffffff) * 0x18 + 8);
      bVar10 = cVar5 != '\x01';
      bVar9 = cVar5 != '\0';
    }
    if (iVar3 != 0xa1) {
      if (((bool)(bVar8 ^ 1U)) || (pp_Var33 = pp_Var25, pp_Var23 = pp_Var25, (bool)(bVar10 ^ 1U))) {
        pp_Var33 = pp_Var36;
        pp_Var29 = pp_Var36;
        if ((bool)(bVar7 | bVar9)) {
          while (pp_Var35 != (__tree_node_base **)0x0) {
            while (pp_Var29 = pp_Var35, uVar34 < *(uint *)((long)pp_Var29 + 0x1c)) {
              pp_Var35 = (__tree_node_base **)*pp_Var29;
              pp_Var33 = pp_Var29;
              if ((__tree_node_base **)*pp_Var29 == (__tree_node_base **)0x0) {
                p_Var19 = *pp_Var29;
                goto joined_r0x00c43dd4;
              }
            }
            if (uVar34 <= *(uint *)((long)pp_Var29 + 0x1c)) break;
            pp_Var35 = (__tree_node_base **)pp_Var29[1];
            pp_Var33 = pp_Var29 + 1;
          }
          p_Var19 = *pp_Var33;
joined_r0x00c43dd4:
          if (p_Var19 == (__tree_node_base *)0x0) {
            puVar12 = (undefined8 *)operator_new(0x20);
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = pp_Var29;
            *pp_Var33 = (__tree_node_base *)puVar12;
            plVar18 = *(long **)param_1;
            *(uint *)((long)puVar12 + 0x1c) = uVar34;
            lVar22 = *plVar18;
            plVar18 = plVar13;
            pp_Var35 = pp_Var36;
            plVar6 = (long *)param_1;
            goto joined_r0x00c43ba0;
          }
        }
      }
      else {
        while (pp_Var29 != (__tree_node_base **)0x0) {
          while (pp_Var23 = pp_Var29, uVar34 < *(uint *)((long)pp_Var23 + 0x1c)) {
            pp_Var29 = (__tree_node_base **)*pp_Var23;
            pp_Var33 = pp_Var23;
            if ((__tree_node_base **)*pp_Var23 == (__tree_node_base **)0x0) {
              p_Var19 = *pp_Var23;
              goto joined_r0x00c43af0;
            }
          }
          if (uVar34 <= *(uint *)((long)pp_Var23 + 0x1c)) break;
          pp_Var29 = (__tree_node_base **)pp_Var23[1];
          pp_Var33 = pp_Var23 + 1;
        }
        p_Var19 = *pp_Var33;
joined_r0x00c43af0:
        if (p_Var19 == (__tree_node_base *)0x0) {
          puVar12 = (undefined8 *)operator_new(0x20);
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = pp_Var23;
          *pp_Var33 = (__tree_node_base *)puVar12;
          plVar18 = *(long **)param_2;
          *(uint *)((long)puVar12 + 0x1c) = uVar34;
          lVar22 = *plVar18;
          plVar18 = plVar14;
          pp_Var35 = pp_Var25;
          plVar6 = (long *)param_2;
joined_r0x00c43ba0:
          if (lVar22 != 0) {
            *plVar6 = lVar22;
            puVar12 = (undefined8 *)*pp_Var33;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*pp_Var35,(__tree_node_base *)puVar12);
          *plVar18 = *plVar18 + 1;
        }
      }
      if (-1 < (int)uVar4) {
        if (pp_Var15 != pp_Var25) {
          pp_Var33 = (__tree_node_base **)*pp_Var25;
          pp_Var35 = pp_Var25;
          pp_Var29 = pp_Var25;
          while (pp_Var33 != (__tree_node_base **)0x0) {
            while (pp_Var29 = pp_Var33, uVar4 < *(uint *)((long)pp_Var29 + 0x1c)) {
              pp_Var35 = pp_Var29;
              pp_Var33 = (__tree_node_base **)*pp_Var29;
              if ((__tree_node_base **)*pp_Var29 == (__tree_node_base **)0x0) {
                p_Var19 = *pp_Var29;
                goto joined_r0x00c4425c;
              }
            }
            if (uVar4 <= *(uint *)((long)pp_Var29 + 0x1c)) break;
            pp_Var35 = pp_Var29 + 1;
            pp_Var33 = (__tree_node_base **)*pp_Var35;
          }
          p_Var19 = *pp_Var35;
joined_r0x00c4425c:
          if (p_Var19 == (__tree_node_base *)0x0) {
            puVar12 = (undefined8 *)operator_new(0x20);
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = pp_Var29;
            *pp_Var35 = (__tree_node_base *)puVar12;
            plVar18 = *(long **)param_2;
            *(uint *)((long)puVar12 + 0x1c) = uVar4;
            if (*plVar18 != 0) {
              *(long *)param_2 = *plVar18;
              puVar12 = (undefined8 *)*pp_Var35;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*pp_Var25,(__tree_node_base *)puVar12);
            *plVar14 = *plVar14 + 1;
          }
        }
        if (!(bool)(pp_Var32 == pp_Var36 | bVar10 ^ 1U)) {
          pp_Var33 = (__tree_node_base **)*pp_Var36;
          pp_Var35 = pp_Var36;
          pp_Var29 = pp_Var36;
          while (pp_Var33 != (__tree_node_base **)0x0) {
            while (pp_Var29 = pp_Var33, uVar4 < *(uint *)((long)pp_Var29 + 0x1c)) {
              pp_Var35 = pp_Var29;
              pp_Var33 = (__tree_node_base **)*pp_Var29;
              if ((__tree_node_base **)*pp_Var29 == (__tree_node_base **)0x0) {
                p_Var19 = *pp_Var29;
                goto joined_r0x00c442fc;
              }
            }
            if (uVar4 <= *(uint *)((long)pp_Var29 + 0x1c)) break;
            pp_Var35 = pp_Var29 + 1;
            pp_Var33 = (__tree_node_base **)*pp_Var35;
          }
          p_Var19 = *pp_Var35;
joined_r0x00c442fc:
          if (p_Var19 == (__tree_node_base *)0x0) {
            puVar12 = (undefined8 *)operator_new(0x20);
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = pp_Var29;
            *pp_Var35 = (__tree_node_base *)puVar12;
            plVar18 = *(long **)param_1;
            *(uint *)((long)puVar12 + 0x1c) = uVar4;
            if (*plVar18 != 0) {
              *(long *)param_1 = *plVar18;
              puVar12 = (undefined8 *)*pp_Var35;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*pp_Var36,(__tree_node_base *)puVar12);
            *plVar13 = *plVar13 + 1;
          }
        }
      }
      if (-1 < (int)uVar28) {
        if (pp_Var15 != pp_Var25) {
          pp_Var29 = (__tree_node_base **)*pp_Var25;
          pp_Var35 = pp_Var25;
          pp_Var15 = pp_Var25;
          while (pp_Var29 != (__tree_node_base **)0x0) {
            while (pp_Var15 = pp_Var29, uVar28 < *(uint *)((long)pp_Var15 + 0x1c)) {
              pp_Var35 = pp_Var15;
              pp_Var29 = (__tree_node_base **)*pp_Var15;
              if ((__tree_node_base **)*pp_Var15 == (__tree_node_base **)0x0) {
                p_Var19 = *pp_Var15;
                goto joined_r0x00c443ac;
              }
            }
            if (uVar28 <= *(uint *)((long)pp_Var15 + 0x1c)) break;
            pp_Var35 = pp_Var15 + 1;
            pp_Var29 = (__tree_node_base **)*pp_Var35;
          }
          p_Var19 = *pp_Var35;
joined_r0x00c443ac:
          if (p_Var19 == (__tree_node_base *)0x0) {
            puVar12 = (undefined8 *)operator_new(0x20);
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = pp_Var15;
            *pp_Var35 = (__tree_node_base *)puVar12;
            plVar18 = *(long **)param_2;
            *(uint *)((long)puVar12 + 0x1c) = uVar28;
            if (*plVar18 != 0) {
              *(long *)param_2 = *plVar18;
              puVar12 = (undefined8 *)*pp_Var35;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*pp_Var25,(__tree_node_base *)puVar12);
            *plVar14 = *plVar14 + 1;
          }
        }
        if (!(bool)(pp_Var32 == pp_Var36 | bVar8 ^ 1U)) {
          pp_Var32 = (__tree_node_base **)*pp_Var36;
          while (pp_Var32 != (__tree_node_base **)0x0) {
            while (pp_Var31 = pp_Var32, uVar28 < *(uint *)((long)pp_Var31 + 0x1c)) {
              pp_Var32 = (__tree_node_base **)*pp_Var31;
              pp_Var30 = pp_Var31;
              if ((__tree_node_base **)*pp_Var31 == (__tree_node_base **)0x0) goto LAB_00c444e0;
            }
            if (uVar28 <= *(uint *)((long)pp_Var31 + 0x1c)) break;
            pp_Var30 = pp_Var31 + 1;
            pp_Var32 = (__tree_node_base **)*pp_Var30;
          }
          goto LAB_00c44494;
        }
      }
      goto LAB_00c43424;
    }
    if (((bool)(bVar7 ^ 1U)) || ((bool)(bVar9 ^ 1U))) {
      pp_Var30 = pp_Var25;
      pp_Var31 = pp_Var25;
      if ((bool)(bVar8 | bVar10)) {
        while (pp_Var29 != (__tree_node_base **)0x0) {
          while (pp_Var31 = pp_Var29, uVar34 < *(uint *)((long)pp_Var31 + 0x1c)) {
            pp_Var29 = (__tree_node_base **)*pp_Var31;
            pp_Var30 = pp_Var31;
            if ((__tree_node_base **)*pp_Var31 == (__tree_node_base **)0x0) {
              p_Var19 = *pp_Var31;
              goto joined_r0x00c43dc4;
            }
          }
          if (uVar34 <= *(uint *)((long)pp_Var31 + 0x1c)) break;
          pp_Var29 = (__tree_node_base **)pp_Var31[1];
          pp_Var30 = pp_Var31 + 1;
        }
        p_Var19 = *pp_Var30;
joined_r0x00c43dc4:
        if (p_Var19 == (__tree_node_base *)0x0) {
          puVar12 = (undefined8 *)operator_new(0x20);
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = pp_Var31;
          *pp_Var30 = (__tree_node_base *)puVar12;
          plVar18 = *(long **)param_2;
          *(uint *)((long)puVar12 + 0x1c) = uVar34;
          lVar22 = *plVar18;
          plVar18 = plVar14;
          pp_Var31 = pp_Var25;
          plVar6 = (long *)param_2;
          goto joined_r0x00c43b48;
        }
      }
    }
    else {
      while (pp_Var35 != (__tree_node_base **)0x0) {
        while (pp_Var31 = pp_Var35, uVar34 < *(uint *)((long)pp_Var31 + 0x1c)) {
          pp_Var35 = (__tree_node_base **)*pp_Var31;
          pp_Var30 = pp_Var31;
          if ((__tree_node_base **)*pp_Var31 == (__tree_node_base **)0x0) {
            p_Var19 = *pp_Var31;
            goto joined_r0x00c43ae0;
          }
        }
        if (uVar34 <= *(uint *)((long)pp_Var31 + 0x1c)) break;
        pp_Var35 = (__tree_node_base **)pp_Var31[1];
        pp_Var30 = pp_Var31 + 1;
      }
      p_Var19 = *pp_Var30;
joined_r0x00c43ae0:
      if (p_Var19 == (__tree_node_base *)0x0) {
        puVar12 = (undefined8 *)operator_new(0x20);
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = pp_Var31;
        *pp_Var30 = (__tree_node_base *)puVar12;
        plVar18 = *(long **)param_1;
        *(uint *)((long)puVar12 + 0x1c) = uVar34;
        lVar22 = *plVar18;
        plVar18 = plVar13;
        pp_Var31 = pp_Var36;
        plVar6 = (long *)param_1;
joined_r0x00c43b48:
        if (lVar22 != 0) {
          *plVar6 = lVar22;
          puVar12 = (undefined8 *)*pp_Var30;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*pp_Var31,(__tree_node_base *)puVar12);
        *plVar18 = *plVar18 + 1;
      }
    }
    if (-1 < (int)uVar4) {
      if (pp_Var32 != pp_Var36) {
        pp_Var35 = (__tree_node_base **)*pp_Var36;
        pp_Var30 = pp_Var36;
        pp_Var31 = pp_Var36;
        while (pp_Var35 != (__tree_node_base **)0x0) {
          while (pp_Var31 = pp_Var35, uVar4 < *(uint *)((long)pp_Var31 + 0x1c)) {
            pp_Var30 = pp_Var31;
            pp_Var35 = (__tree_node_base **)*pp_Var31;
            if ((__tree_node_base **)*pp_Var31 == (__tree_node_base **)0x0) {
              p_Var19 = *pp_Var31;
              goto joined_r0x00c43eb8;
            }
          }
          if (uVar4 <= *(uint *)((long)pp_Var31 + 0x1c)) break;
          pp_Var30 = pp_Var31 + 1;
          pp_Var35 = (__tree_node_base **)*pp_Var30;
        }
        p_Var19 = *pp_Var30;
joined_r0x00c43eb8:
        if (p_Var19 == (__tree_node_base *)0x0) {
          puVar12 = (undefined8 *)operator_new(0x20);
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = pp_Var31;
          *pp_Var30 = (__tree_node_base *)puVar12;
          plVar18 = *(long **)param_1;
          *(uint *)((long)puVar12 + 0x1c) = uVar4;
          if (*plVar18 != 0) {
            *(long *)param_1 = *plVar18;
            puVar12 = (undefined8 *)*pp_Var30;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*pp_Var36,(__tree_node_base *)puVar12);
          *plVar13 = *plVar13 + 1;
        }
      }
      if (!(bool)(pp_Var15 == pp_Var25 | bVar9 ^ 1U)) {
        pp_Var35 = (__tree_node_base **)*pp_Var25;
        pp_Var30 = pp_Var25;
        pp_Var31 = pp_Var25;
        while (pp_Var35 != (__tree_node_base **)0x0) {
          while (pp_Var31 = pp_Var35, uVar4 < *(uint *)((long)pp_Var31 + 0x1c)) {
            pp_Var30 = pp_Var31;
            pp_Var35 = (__tree_node_base **)*pp_Var31;
            if ((__tree_node_base **)*pp_Var31 == (__tree_node_base **)0x0) {
              p_Var19 = *pp_Var31;
              goto joined_r0x00c43f50;
            }
          }
          if (uVar4 <= *(uint *)((long)pp_Var31 + 0x1c)) break;
          pp_Var30 = pp_Var31 + 1;
          pp_Var35 = (__tree_node_base **)*pp_Var30;
        }
        p_Var19 = *pp_Var30;
joined_r0x00c43f50:
        if (p_Var19 == (__tree_node_base *)0x0) {
          puVar12 = (undefined8 *)operator_new(0x20);
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = pp_Var31;
          *pp_Var30 = (__tree_node_base *)puVar12;
          plVar18 = *(long **)param_2;
          *(uint *)((long)puVar12 + 0x1c) = uVar4;
          if (*plVar18 != 0) {
            *(long *)param_2 = *plVar18;
            puVar12 = (undefined8 *)*pp_Var30;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*pp_Var25,(__tree_node_base *)puVar12);
          *plVar14 = *plVar14 + 1;
        }
      }
    }
    if ((int)uVar28 < 0) goto LAB_00c43424;
    if (pp_Var32 != pp_Var36) {
      pp_Var32 = (__tree_node_base **)*pp_Var36;
      pp_Var30 = pp_Var36;
      pp_Var31 = pp_Var36;
      while (pp_Var32 != (__tree_node_base **)0x0) {
        while (pp_Var31 = pp_Var32, uVar28 < *(uint *)((long)pp_Var31 + 0x1c)) {
          pp_Var30 = pp_Var31;
          pp_Var32 = (__tree_node_base **)*pp_Var31;
          if ((__tree_node_base **)*pp_Var31 == (__tree_node_base **)0x0) {
            p_Var19 = *pp_Var31;
            goto joined_r0x00c44000;
          }
        }
        if (uVar28 <= *(uint *)((long)pp_Var31 + 0x1c)) break;
        pp_Var30 = pp_Var31 + 1;
        pp_Var32 = (__tree_node_base **)*pp_Var30;
      }
      p_Var19 = *pp_Var30;
joined_r0x00c44000:
      if (p_Var19 == (__tree_node_base *)0x0) {
        puVar12 = (undefined8 *)operator_new(0x20);
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = pp_Var31;
        *pp_Var30 = (__tree_node_base *)puVar12;
        plVar18 = *(long **)param_1;
        *(uint *)((long)puVar12 + 0x1c) = uVar28;
        if (*plVar18 != 0) {
          *(long *)param_1 = *plVar18;
          puVar12 = (undefined8 *)*pp_Var30;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*pp_Var36,(__tree_node_base *)puVar12);
        *plVar13 = *plVar13 + 1;
      }
    }
    if ((bool)(pp_Var15 == pp_Var25 | bVar7 ^ 1U)) goto LAB_00c43424;
    pp_Var32 = (__tree_node_base **)*pp_Var25;
    pp_Var30 = pp_Var25;
    pp_Var31 = pp_Var25;
    while (pp_Var32 != (__tree_node_base **)0x0) {
      while (pp_Var31 = pp_Var32, uVar28 < *(uint *)((long)pp_Var31 + 0x1c)) {
        pp_Var32 = (__tree_node_base **)*pp_Var31;
        pp_Var30 = pp_Var31;
        if ((__tree_node_base **)*pp_Var31 == (__tree_node_base **)0x0) {
          p_Var19 = *pp_Var31;
          goto joined_r0x00c4412c;
        }
      }
      if (uVar28 <= *(uint *)((long)pp_Var31 + 0x1c)) break;
      pp_Var30 = pp_Var31 + 1;
      pp_Var32 = (__tree_node_base **)*pp_Var30;
    }
    p_Var19 = *pp_Var30;
joined_r0x00c4412c:
    if (p_Var19 != (__tree_node_base *)0x0) goto LAB_00c43424;
    puVar12 = (undefined8 *)operator_new(0x20);
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = pp_Var31;
    *pp_Var30 = (__tree_node_base *)puVar12;
    plVar18 = *(long **)param_2;
    *(uint *)((long)puVar12 + 0x1c) = uVar28;
    lVar22 = *plVar18;
    plVar18 = plVar14;
    pp_Var31 = pp_Var25;
    plVar6 = (long *)param_2;
    goto joined_r0x00c44114;
  }
  if ((iVar3 == 0x25) && (uVar34 = piVar20[2], -1 < (int)uVar34)) {
    pp_Var35 = (__tree_node_base **)*pp_Var36;
    pp_Var15 = pp_Var35;
    pp_Var32 = pp_Var36;
    if (pp_Var35 == (__tree_node_base **)0x0) {
LAB_00c436bc:
      pp_Var32 = pp_Var36;
    }
    else {
      do {
        bVar7 = *(uint *)((long)pp_Var15 + 0x1c) < uVar34;
        if (!bVar7) {
          pp_Var32 = pp_Var15;
        }
        pp_Var29 = pp_Var15 + bVar7;
        pp_Var15 = (__tree_node_base **)*pp_Var29;
      } while ((__tree_node_base **)*pp_Var29 != (__tree_node_base **)0x0);
      if ((pp_Var32 == pp_Var36) || (uVar34 < *(uint *)((long)pp_Var32 + 0x1c))) goto LAB_00c436bc;
    }
    pp_Var29 = (__tree_node_base **)*pp_Var25;
    pp_Var33 = pp_Var29;
    pp_Var15 = pp_Var25;
    if (pp_Var29 == (__tree_node_base **)0x0) {
LAB_00c436fc:
      pp_Var15 = pp_Var25;
    }
    else {
      do {
        bVar7 = *(uint *)((long)pp_Var33 + 0x1c) < uVar34;
        if (!bVar7) {
          pp_Var15 = pp_Var33;
        }
        pp_Var23 = pp_Var33 + bVar7;
        pp_Var33 = (__tree_node_base **)*pp_Var23;
      } while ((__tree_node_base **)*pp_Var23 != (__tree_node_base **)0x0);
      if ((pp_Var15 == pp_Var25) || (uVar34 < *(uint *)((long)pp_Var15 + 0x1c))) goto LAB_00c436fc;
    }
    uVar28 = *(uint *)((long)piVar20 + ((ulong)((uint)piVar20[1] >> 0xe) & 0x3fffc) + 8);
    pp_Var33 = pp_Var25;
    pp_Var23 = pp_Var25;
    if ((int)uVar28 < 0) {
      cVar5 = *(char *)(*(long *)(*(long *)this + 0x80) + ((ulong)uVar28 & 0x7fffffff) * 0x18 + 8);
      uVar11 = cVar5 != '\x01';
      if (cVar5 == '\0') goto LAB_00c43990;
joined_r0x00c437a0:
      while (pp_Var29 != (__tree_node_base **)0x0) {
        while (pp_Var23 = pp_Var29, uVar34 < *(uint *)((long)pp_Var23 + 0x1c)) {
          pp_Var33 = pp_Var23;
          pp_Var29 = (__tree_node_base **)*pp_Var23;
          if ((__tree_node_base **)*pp_Var23 == (__tree_node_base **)0x0) {
            p_Var19 = *pp_Var23;
            goto joined_r0x00c439e4;
          }
        }
        if (uVar34 <= *(uint *)((long)pp_Var23 + 0x1c)) break;
        pp_Var29 = (__tree_node_base **)pp_Var23[1];
        pp_Var33 = pp_Var23 + 1;
      }
      p_Var19 = *pp_Var33;
joined_r0x00c439e4:
      if (p_Var19 == (__tree_node_base *)0x0) {
        puVar12 = (undefined8 *)operator_new(0x20);
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = pp_Var23;
        *pp_Var33 = (__tree_node_base *)puVar12;
        plVar18 = *(long **)param_2;
        *(uint *)((long)puVar12 + 0x1c) = uVar34;
        if (*plVar18 != 0) {
          *(long *)param_2 = *plVar18;
          puVar12 = (undefined8 *)*pp_Var33;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*pp_Var25,(__tree_node_base *)puVar12);
        *plVar14 = *plVar14 + 1;
      }
      if ((bool)uVar11) {
        pp_Var35 = (__tree_node_base **)*pp_Var36;
joined_r0x00c43994:
        pp_Var29 = pp_Var36;
        if (pp_Var35 == (__tree_node_base **)0x0) {
          p_Var19 = *pp_Var36;
          pp_Var33 = pp_Var36;
        }
        else {
          do {
            while (pp_Var33 = pp_Var35, *(uint *)((long)pp_Var33 + 0x1c) <= uVar34) {
              if (uVar34 <= *(uint *)((long)pp_Var33 + 0x1c)) goto LAB_00c43afc;
              pp_Var29 = pp_Var33 + 1;
              pp_Var35 = (__tree_node_base **)*pp_Var29;
              if ((__tree_node_base **)*pp_Var29 == (__tree_node_base **)0x0) goto LAB_00c43afc;
            }
            pp_Var29 = pp_Var33;
            pp_Var35 = (__tree_node_base **)*pp_Var33;
          } while ((__tree_node_base **)*pp_Var33 != (__tree_node_base **)0x0);
LAB_00c43afc:
          p_Var19 = *pp_Var29;
        }
        if (p_Var19 == (__tree_node_base *)0x0) {
          puVar12 = (undefined8 *)operator_new(0x20);
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = pp_Var33;
          *pp_Var29 = (__tree_node_base *)puVar12;
          plVar18 = *(long **)param_1;
          *(uint *)((long)puVar12 + 0x1c) = uVar34;
          if (*plVar18 != 0) {
            *(long *)param_1 = *plVar18;
            puVar12 = (undefined8 *)*pp_Var29;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*pp_Var36,(__tree_node_base *)puVar12);
          *plVar13 = *plVar13 + 1;
        }
      }
    }
    else {
      pp_Var16 = pp_Var36;
      pp_Var21 = pp_Var35;
      if (pp_Var35 == (__tree_node_base **)0x0) {
LAB_00c43750:
        pp_Var16 = pp_Var36;
      }
      else {
        do {
          bVar7 = *(uint *)((long)pp_Var21 + 0x1c) < uVar28;
          if (!bVar7) {
            pp_Var16 = pp_Var21;
          }
          pp_Var24 = pp_Var21 + bVar7;
          pp_Var21 = (__tree_node_base **)*pp_Var24;
        } while ((__tree_node_base **)*pp_Var24 != (__tree_node_base **)0x0);
        if ((pp_Var16 == pp_Var36) || (uVar28 < *(uint *)((long)pp_Var16 + 0x1c)))
        goto LAB_00c43750;
      }
      pp_Var21 = pp_Var25;
      pp_Var24 = pp_Var29;
      if (pp_Var29 == (__tree_node_base **)0x0) {
LAB_00c4378c:
        pp_Var21 = pp_Var25;
      }
      else {
        do {
          bVar7 = *(uint *)((long)pp_Var24 + 0x1c) < uVar28;
          if (!bVar7) {
            pp_Var21 = pp_Var24;
          }
          pp_Var1 = pp_Var24 + bVar7;
          pp_Var24 = (__tree_node_base **)*pp_Var1;
        } while ((__tree_node_base **)*pp_Var1 != (__tree_node_base **)0x0);
        if ((pp_Var21 == pp_Var25) || (uVar28 < *(uint *)((long)pp_Var21 + 0x1c)))
        goto LAB_00c4378c;
      }
      uVar11 = pp_Var21 != pp_Var25;
      if (pp_Var16 != pp_Var36) goto joined_r0x00c437a0;
LAB_00c43990:
      if ((bool)uVar11) goto joined_r0x00c43994;
    }
    if ((int)uVar28 < 0) goto LAB_00c43424;
    if (pp_Var32 != pp_Var36) {
      pp_Var29 = (__tree_node_base **)*pp_Var25;
      pp_Var32 = pp_Var25;
      pp_Var35 = pp_Var25;
      while (pp_Var29 != (__tree_node_base **)0x0) {
        while (pp_Var35 = pp_Var29, uVar28 < *(uint *)((long)pp_Var35 + 0x1c)) {
          pp_Var32 = pp_Var35;
          pp_Var29 = (__tree_node_base **)*pp_Var35;
          if ((__tree_node_base **)*pp_Var35 == (__tree_node_base **)0x0) {
            p_Var19 = *pp_Var35;
            goto joined_r0x00c43ce4;
          }
        }
        if (uVar28 <= *(uint *)((long)pp_Var35 + 0x1c)) break;
        pp_Var32 = pp_Var35 + 1;
        pp_Var29 = (__tree_node_base **)*pp_Var32;
      }
      p_Var19 = *pp_Var32;
joined_r0x00c43ce4:
      if (p_Var19 == (__tree_node_base *)0x0) {
        puVar12 = (undefined8 *)operator_new(0x20);
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = pp_Var35;
        *pp_Var32 = (__tree_node_base *)puVar12;
        plVar18 = *(long **)param_2;
        *(uint *)((long)puVar12 + 0x1c) = uVar28;
        if (*plVar18 != 0) {
          *(long *)param_2 = *plVar18;
          puVar12 = (undefined8 *)*pp_Var32;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*pp_Var25,(__tree_node_base *)puVar12);
        *plVar14 = *plVar14 + 1;
      }
    }
    if (pp_Var15 == pp_Var25) goto LAB_00c43424;
    pp_Var32 = (__tree_node_base **)*pp_Var36;
    while (pp_Var32 != (__tree_node_base **)0x0) {
      while (pp_Var31 = pp_Var32, uVar28 < *(uint *)((long)pp_Var31 + 0x1c)) {
        pp_Var32 = (__tree_node_base **)*pp_Var31;
        pp_Var30 = pp_Var31;
        if ((__tree_node_base **)*pp_Var31 == (__tree_node_base **)0x0) goto LAB_00c444e0;
      }
      if (uVar28 <= *(uint *)((long)pp_Var31 + 0x1c)) break;
      pp_Var30 = pp_Var31 + 1;
      pp_Var32 = (__tree_node_base **)*pp_Var30;
    }
LAB_00c44494:
    if (*pp_Var30 != (__tree_node_base *)0x0) goto LAB_00c43424;
    goto LAB_00c4449c;
  }
  goto LAB_00c43424;
LAB_00c444e0:
  pp_Var30 = pp_Var31;
  if (*pp_Var31 == (__tree_node_base *)0x0) {
LAB_00c4449c:
    puVar12 = (undefined8 *)operator_new(0x20);
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = pp_Var31;
    *pp_Var30 = (__tree_node_base *)puVar12;
    plVar18 = *(long **)param_1;
    *(uint *)((long)puVar12 + 0x1c) = uVar28;
    lVar22 = *plVar18;
    plVar18 = plVar13;
    pp_Var31 = pp_Var36;
    plVar6 = (long *)param_1;
joined_r0x00c44114:
    if (lVar22 != 0) {
      *plVar6 = lVar22;
      puVar12 = (undefined8 *)*pp_Var30;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*pp_Var31,(__tree_node_base *)puVar12);
    *plVar18 = *plVar18 + 1;
  }
LAB_00c43424:
  lVar22 = lVar26;
  uVar34 = param_3;
  if (param_3 == 0) {
    lVar17 = *plVar13;
    lVar22 = *plVar14;
    bVar7 = lVar27 == lVar17;
    lVar27 = lVar17;
    uVar34 = uVar2;
    if ((bVar7) && (lVar26 == lVar22)) {
      return;
    }
  }
  param_3 = uVar34 - 1;
  lVar26 = lVar22;
  if (uVar34 == 0) {
    return;
  }
  goto LAB_00c43444;
}


