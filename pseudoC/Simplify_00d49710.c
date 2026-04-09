// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Simplify
// Entry Point: 00d49710
// Size: 4744 bytes
// Signature: undefined Simplify(void)


/* WARNING: Removing unreachable block (ram,0x00d4a4f8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::HACD::Simplify() */

void HACD::HACD::Simplify(void)

{
  long **pplVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong **ppuVar5;
  void **ppvVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  long lVar9;
  __less **pp_Var10;
  long ********pppppppplVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  HACD *in_x0;
  ulong *puVar16;
  void *__dest;
  void *pvVar17;
  Vec3 *pVVar18;
  long *plVar19;
  long *plVar20;
  long ******pppppplVar21;
  long lVar22;
  long ********pppppppplVar23;
  __less **pp_Var24;
  long lVar25;
  long *plVar26;
  long ********pppppppplVar27;
  double *pdVar28;
  __less **pp_Var29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long ********pppppppplVar34;
  long *plVar35;
  long lVar36;
  undefined8 *puVar37;
  ulong uVar38;
  long *******ppppppplVar39;
  ulong *puVar40;
  void *pvVar41;
  long ********pppppppplVar42;
  void *pvVar43;
  ulong uVar44;
  __less *p_Var45;
  char cVar46;
  size_t __n;
  char *pcVar47;
  ulong *puVar48;
  long lVar49;
  double dVar50;
  double dVar51;
  long ******pppppplVar52;
  long *******ppppppplVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double local_980;
  __less **local_910;
  __tree_node *local_908;
  undefined8 local_900;
  long ********local_8f8;
  long ********local_8f0;
  long local_8e8;
  long ********local_8c8;
  long ********local_8c0;
  ulong local_8b8;
  undefined8 local_4c8;
  long ********local_4c0;
  double local_4b8;
  undefined auStack_4b0 [1024];
  long local_b0;
  
  lVar9 = tpidr_el0;
  local_b0 = *(long *)(lVar9 + 0x28);
  if (*(long *)(in_x0 + 0x158) == *(long *)(in_x0 + 0x160)) {
    dVar55 = 0.0;
    dVar56 = 0.0;
LAB_00d4a724:
    pvVar43 = *(void **)(in_x0 + 0xe0);
    uVar30 = *(ulong *)(in_x0 + 0x110);
    *(void **)(in_x0 + 0xe8) = pvVar43;
    *(ulong *)(in_x0 + 0x68) = uVar30;
    if ((ulong)(*(long *)(in_x0 + 0xf0) - (long)pvVar43 >> 3) < uVar30) {
      if (uVar30 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar17 = operator_new(uVar30 * 8);
      *(void **)(in_x0 + 0xe0) = pvVar17;
      *(void **)(in_x0 + 0xe8) = pvVar17;
      *(void **)(in_x0 + 0xf0) = (void *)((long)pvVar17 + uVar30 * 8);
      if (pvVar43 != (void *)0x0) {
        operator_delete(pvVar43);
      }
    }
    lVar25 = *(long *)(in_x0 + 0x138);
    if (*(long *)(in_x0 + 0x140) != lVar25) {
      lVar36 = 0;
      lVar32 = 0x268;
      do {
        if (*(char *)(lVar25 + lVar32 + -0x1c0) == '\0') {
          if (*(long *)(in_x0 + 0x178) != 0) {
            FUN_00d47538(((double *)(lVar25 + lVar32))[-1],
                         (*(double *)(lVar25 + lVar32) * 100.0) / *(double *)(in_x0 + 0xc0),
                         &local_8c8);
            (**(code **)(in_x0 + 0x178))(0,0,&local_8c8,*(undefined8 *)(in_x0 + 0x68));
          }
          plVar26 = *(long **)(in_x0 + 0xe8);
          if (plVar26 < *(long **)(in_x0 + 0xf0)) {
            *plVar26 = lVar36;
            *(long **)(in_x0 + 0xe8) = plVar26 + 1;
          }
          else {
            pvVar43 = *(void **)(in_x0 + 0xe0);
            __n = (long)plVar26 - (long)pvVar43;
            lVar25 = (long)__n >> 3;
            uVar30 = lVar25 + 1;
            if (uVar30 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar31 = (long)*(long **)(in_x0 + 0xf0) - (long)pvVar43;
            uVar44 = (long)uVar31 >> 2;
            if (uVar30 <= uVar44) {
              uVar30 = uVar44;
            }
            if (0x7ffffffffffffff7 < uVar31) {
              uVar30 = 0x1fffffffffffffff;
            }
            if (uVar30 == 0) {
              pvVar17 = (void *)0x0;
              plVar26 = (long *)(lVar25 * 8);
              *plVar26 = lVar36;
            }
            else {
              if (uVar30 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              pvVar17 = operator_new(uVar30 << 3);
              plVar26 = (long *)((long)pvVar17 + lVar25 * 8);
              *plVar26 = lVar36;
            }
            if (0 < (long)__n) {
              memcpy(pvVar17,pvVar43,__n);
            }
            *(void **)(in_x0 + 0xe0) = pvVar17;
            *(long **)(in_x0 + 0xe8) = plVar26 + 1;
            *(void **)(in_x0 + 0xf0) = (void *)((long)pvVar17 + uVar30 * 8);
            if (pvVar43 != (void *)0x0) {
              operator_delete(pvVar43);
            }
          }
        }
        lVar25 = *(long *)(in_x0 + 0x138);
        lVar36 = lVar36 + 1;
        lVar32 = lVar32 + 0x310;
      } while (lVar36 != (*(long *)(in_x0 + 0x140) - lVar25 >> 4) * 0x7d6343eb1a1f58d1);
    }
    if (*(long *)(in_x0 + 0x178) != 0) {
      FUN_00d47538(dVar55,auStack_4b0);
      (**(code **)(in_x0 + 0x178))(dVar56,dVar55,auStack_4b0,*(undefined8 *)(in_x0 + 0x110));
    }
    if (*(long *)(lVar9 + 0x28) == local_b0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pplVar1 = (long **)(in_x0 + 0x158);
  dVar57 = -1.0;
  dVar50 = (*(double *)(in_x0 + 0xc0) * *(double *)(in_x0 + 0xb8)) / 100.0;
  local_980 = 0.01;
  dVar59 = 0.0;
  dVar51 = 1.0;
LAB_00d497f4:
  dVar55 = (double)NEON_ucvtf(*(undefined8 *)(in_x0 + 0x58));
  dVar56 = 100.0 - ((double)(unkuint9)*(ulong *)(in_x0 + 0x110) * 100.0) / dVar55;
  dVar58 = dVar51;
  if (dVar51 < ABS(dVar56 - dVar57) && *(long *)(in_x0 + 0x178) != 0) {
    FUN_00d47538(dVar56,dVar59,auStack_4b0);
    (**(code **)(in_x0 + 0x178))(dVar56,dVar59,auStack_4b0,*(undefined8 *)(in_x0 + 0x110));
    dVar57 = dVar56;
    dVar58 = local_980;
    if ((dVar56 <= 99.0) && (dVar58 = dVar51, 90.0 < dVar56)) {
      dVar58 = 0.1;
    }
  }
  plVar26 = *(long **)(in_x0 + 0x158);
  plVar19 = *(long **)(in_x0 + 0x160);
  do {
    lVar25 = (long)plVar19 - (long)plVar26;
    dVar55 = dVar59;
    if (lVar25 == 0) goto LAB_00d4a724;
    lVar36 = *plVar26;
    dVar51 = (double)plVar26[1];
    if (0x10 < lVar25) {
      lVar32 = plVar19[-2];
      lVar22 = plVar26[1];
      lVar33 = *plVar26;
      uVar30 = (lVar25 >> 4) - 1;
      plVar26[1] = plVar19[-1];
      *plVar26 = lVar32;
      plVar19[-1] = lVar22;
      plVar19[-2] = lVar33;
      if (1 < uVar30) {
        plVar19 = plVar26 + 2;
        if ((uVar30 == 2) || ((double)plVar26[3] <= (double)plVar26[5])) {
          uVar31 = 1;
          dVar54 = (double)plVar26[1];
          if ((double)plVar26[3] <= dVar54) goto LAB_00d49964;
        }
        else {
          plVar19 = plVar26 + 4;
          uVar31 = 2;
          dVar54 = (double)plVar26[1];
          if ((double)plVar26[5] <= dVar54) {
LAB_00d49964:
            lVar32 = *plVar26;
            plVar35 = plVar26;
            do {
              plVar20 = plVar19;
              lVar33 = *plVar20;
              plVar35[1] = plVar20[1];
              *plVar35 = lVar33;
              if ((long)((lVar25 >> 4) - 3U >> 1) < (long)uVar31) break;
              uVar38 = uVar31 << 1 | 1;
              uVar44 = uVar31 * 2 + 2;
              plVar19 = plVar26 + uVar38 * 2;
              uVar31 = uVar38;
              if (((long)uVar44 < (long)uVar30) && ((double)plVar19[3] < (double)plVar19[1])) {
                plVar19 = plVar19 + 2;
                uVar31 = uVar44;
              }
              plVar35 = plVar20;
            } while ((double)plVar19[1] <= dVar54);
            *plVar20 = lVar32;
            plVar20[1] = (long)dVar54;
          }
        }
      }
    }
    lVar25 = *(long *)(in_x0 + 0x120);
    plVar19 = (long *)(*(long *)(in_x0 + 0x160) + -0x10);
    *(long **)(in_x0 + 0x160) = plVar19;
    if ((*(char *)(lVar25 + lVar36 * 0x30 + 0x28) == '\0') &&
       (*(double *)(lVar25 + lVar36 * 0x30 + 0x20) == dVar51)) break;
    plVar26 = *pplVar1;
  } while( true );
  lVar25 = lVar25 + lVar36 * 0x30;
  bVar12 = false;
  dVar51 = *(double *)(lVar25 + 0x18);
  if ((dVar51 < *(double *)(in_x0 + 0x80)) && (dVar59 < *(double *)(in_x0 + 0x80))) {
    if (*(ulong *)(in_x0 + 0x70) < *(ulong *)(in_x0 + 0x110)) {
      bVar12 = *(long *)(in_x0 + 0x118) != 0;
    }
    else {
      bVar12 = false;
    }
  }
  lVar32 = *(long *)(lVar25 + 8);
  lVar25 = *(long *)(lVar25 + 0x10);
  lVar33 = *(long *)(in_x0 + 0x138);
  dVar54 = *(double *)(lVar33 + lVar32 * 0x310 + 0x268);
  if ((dVar54 < dVar50) || ((bool)(bVar12 | *(double *)(lVar33 + lVar25 * 0x310 + 0x268) < dVar50)))
  {
    if (!(bool)(bVar12 | *(long *)(in_x0 + 0x178) == 0)) {
      FUN_00d47538((dVar54 * 100.0) / *(double *)(in_x0 + 0xc0),
                   (*(double *)(lVar33 + lVar25 * 0x310 + 0x268) * 100.0) /
                   *(double *)(in_x0 + 0xc0),auStack_4b0);
      (**(code **)(in_x0 + 0x178))(dVar56,dVar59,auStack_4b0,*(undefined8 *)(in_x0 + 0x110));
      lVar33 = *(long *)(in_x0 + 0x138);
      dVar51 = *(double *)(*(long *)(in_x0 + 0x120) + lVar36 * 0x30 + 0x18);
    }
    lVar36 = lVar33 + lVar32 * 0x310;
    puVar2 = (ulong *)(lVar36 + 200);
    puVar3 = (ulong *)(lVar36 + 0x250);
    dVar55 = dVar51;
    if (dVar51 <= dVar59) {
      dVar55 = dVar59;
    }
    puVar4 = (ulong *)(lVar36 + 600);
    plVar26 = *(long **)(lVar36 + 0x270);
    *(double *)(lVar36 + 0x260) = dVar51;
    local_8c0 = (long ********)0x0;
    local_8b8 = 0;
    local_8c8 = (long ********)&local_8c0;
    plVar26[0x1c] = 0;
    ppuVar5 = (ulong **)(lVar36 + 0x248);
    if (*(long *)(lVar36 + 0x250) != 0) {
      uVar30 = 0;
      do {
        puVar16 = puVar2;
        if (*puVar4 != 0x10) {
          puVar16 = *ppuVar5;
        }
        puVar16 = puVar16 + uVar30 * 3;
        pppppppplVar42 = (long ********)&local_8c0;
        pppppppplVar23 = (long ********)&local_8c0;
        if (local_8c0 != (long ********)0x0) {
          pppppppplVar11 = local_8c0;
          do {
            while (pppppppplVar23 = pppppppplVar11, (long)*puVar16 < (long)pppppppplVar23[4]) {
              pppppppplVar42 = pppppppplVar23;
              pppppppplVar11 = (long ********)*pppppppplVar23;
              if ((long ********)*pppppppplVar23 == (long ********)0x0) {
                ppppppplVar39 = *pppppppplVar23;
                goto joined_r0x00d49bfc;
              }
            }
            if ((long)*puVar16 <= (long)pppppppplVar23[4]) break;
            pppppppplVar42 = pppppppplVar23 + 1;
            pppppppplVar11 = (long ********)*pppppppplVar42;
          } while ((long ********)*pppppppplVar42 != (long ********)0x0);
        }
        ppppppplVar39 = *pppppppplVar42;
joined_r0x00d49bfc:
        if (ppppppplVar39 == (long *******)0x0) {
          ppppppplVar39 = (long *******)operator_new(0x40);
          pppppplVar21 = (long ******)*puVar16;
          *(undefined2 *)(ppppppplVar39 + 7) = 0;
          ppppppplVar39[6] = (long ******)0x0;
          *ppppppplVar39 = (long ******)0x0;
          ppppppplVar39[1] = (long ******)0x0;
          ppppppplVar39[4] = pppppplVar21;
          ppppppplVar39[5] = (long ******)0x0;
          ppppppplVar39[2] = (long ******)pppppppplVar23;
          *pppppppplVar42 = ppppppplVar39;
          ppppppplVar53 = ppppppplVar39;
          if ((long ********)*local_8c8 != (long ********)0x0) {
            local_8c8 = (long ********)*local_8c8;
            ppppppplVar53 = *pppppppplVar42;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)local_8c0,(__tree_node_base *)ppppppplVar53);
          local_8b8 = local_8b8 + 1;
        }
        uVar30 = uVar30 + 1;
        pppppplVar52 = (long ******)puVar16[1];
        pppppplVar21 = (long ******)*puVar16;
        *(undefined2 *)(ppppppplVar39 + 7) = *(undefined2 *)(puVar16 + 2);
        ppppppplVar39[6] = pppppplVar52;
        ppppppplVar39[5] = pppppplVar21;
      } while (uVar30 < *puVar3);
    }
    lVar22 = lVar33 + lVar25 * 0x310;
    if (*(long *)(lVar22 + 0x250) != 0) {
      uVar30 = 0;
      do {
        lVar49 = lVar22 + 200;
        if (*(long *)(lVar22 + 600) != 0x10) {
          lVar49 = *(long *)(lVar22 + 0x248);
        }
        puVar37 = (undefined8 *)(lVar49 + uVar30 * 0x18);
        pppppplVar21 = (long ******)*puVar37;
        pppppppplVar42 = (long ********)&local_8c0;
        pppppppplVar11 = local_8c0;
        pppppppplVar23 = (long ********)&local_8c0;
        if (local_8c0 == (long ********)0x0) {
          pcVar47 = (char *)(lVar49 + uVar30 * 0x18 + 0x11);
          cVar46 = *pcVar47;
LAB_00d49d5c:
          ppppppplVar39 = *pppppppplVar23;
joined_r0x00d49d60:
          if (ppppppplVar39 == (long *******)0x0) {
            ppppppplVar39 = (long *******)operator_new(0x40);
            ppppppplVar39[4] = pppppplVar21;
            ppppppplVar39[5] = pppppplVar21;
            *(char *)((long)ppppppplVar39 + 0x39) = cVar46;
            ppppppplVar39[6] = (long ******)0x0;
            *(undefined *)(ppppppplVar39 + 7) = 0;
            *(undefined4 *)((long)ppppppplVar39 + 0x3a) = (undefined4)local_4c8;
            *(undefined2 *)((long)ppppppplVar39 + 0x3e) = local_4c8._4_2_;
            *ppppppplVar39 = (long ******)0x0;
            ppppppplVar39[1] = (long ******)0x0;
            ppppppplVar39[2] = (long ******)pppppppplVar42;
            *pppppppplVar23 = ppppppplVar39;
            if ((long ********)*local_8c8 != (long ********)0x0) {
              local_8c8 = (long ********)*local_8c8;
              ppppppplVar39 = *pppppppplVar23;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)local_8c0,(__tree_node_base *)ppppppplVar39);
            local_8b8 = local_8b8 + 1;
            cVar46 = *pcVar47;
          }
          else {
            cVar46 = *pcVar47;
          }
          if (cVar46 == '\0') {
            pppppplVar21 = (long ******)*puVar37;
            pVVar18 = (Vec3 *)(*(long *)(in_x0 + 0x18) + (long)pppppplVar21 * 0x18);
LAB_00d49c88:
            ICHull::AddPoint((ICHull *)plVar26,pVVar18,(long)pppppplVar21);
          }
        }
        else {
          do {
            pppppppplVar34 = pppppppplVar11;
            pppppppplVar27 = pppppppplVar42;
            ppppppplVar39 = pppppppplVar34[4];
            pppppppplVar42 = pppppppplVar27;
            if ((long)pppppplVar21 <= (long)ppppppplVar39) {
              pppppppplVar42 = pppppppplVar34;
            }
            pppppppplVar11 = (long ********)pppppppplVar34[(long)ppppppplVar39 < (long)pppppplVar21]
            ;
          } while ((long ********)pppppppplVar34[(long)ppppppplVar39 < (long)pppppplVar21] !=
                   (long ********)0x0);
          if ((long *********)pppppppplVar42 == &local_8c0) {
LAB_00d49d0c:
            pcVar47 = (char *)(lVar49 + uVar30 * 0x18 + 0x11);
            cVar46 = *pcVar47;
            pppppppplVar11 = local_8c0;
            do {
              while (pppppppplVar42 = pppppppplVar11, (long)pppppplVar21 < (long)pppppppplVar42[4])
              {
                pppppppplVar11 = (long ********)*pppppppplVar42;
                pppppppplVar23 = pppppppplVar42;
                if ((long ********)*pppppppplVar42 == (long ********)0x0) {
                  ppppppplVar39 = *pppppppplVar42;
                  goto joined_r0x00d49d60;
                }
              }
              if ((long)pppppplVar21 <= (long)pppppppplVar42[4]) break;
              pppppppplVar23 = pppppppplVar42 + 1;
              pppppppplVar11 = (long ********)*pppppppplVar23;
            } while ((long ********)*pppppppplVar23 != (long ********)0x0);
            goto LAB_00d49d5c;
          }
          if ((long)pppppplVar21 <= (long)ppppppplVar39) {
            pppppppplVar27 = pppppppplVar34;
          }
          if ((long)pppppplVar21 < (long)pppppppplVar27[4]) goto LAB_00d49d0c;
          if ((*(char *)((long)pppppppplVar42 + 0x39) != '\0') &&
             (*(char *)(lVar49 + uVar30 * 0x18 + 0x11) == '\0')) {
            *(undefined *)((long)pppppppplVar42 + 0x39) = 0;
            pVVar18 = (Vec3 *)(*(long *)(in_x0 + 0x18) + (long)pppppplVar21 * 0x18);
            goto LAB_00d49c88;
          }
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 < *(ulong *)(lVar22 + 0x250));
    }
    *puVar3 = 0;
    if (*ppuVar5 != (ulong *)0x0) {
      operator_delete__(*ppuVar5 + -1);
    }
    uVar30 = local_8b8;
    *ppuVar5 = (ulong *)0x0;
    *puVar4 = 0x10;
    uVar31 = 0x10;
    if (0x10 < local_8b8) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_8b8;
      uVar44 = local_8b8 * 0x18;
      uVar31 = uVar44 + 8;
      if (SUB168(auVar7 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < uVar44) {
        uVar31 = 0xffffffffffffffff;
      }
      puVar16 = (ulong *)operator_new__(uVar31);
      puVar40 = puVar16 + 1;
      *puVar16 = uVar30;
      puVar16 = puVar40;
      do {
        *puVar16 = 0;
        puVar16[1] = 0;
        *(undefined2 *)(puVar16 + 2) = 0;
        uVar44 = uVar44 - 0x18;
        puVar16 = puVar16 + 3;
      } while (uVar44 != 0);
      puVar16 = *ppuVar5;
      memcpy(puVar40,puVar2,*puVar3 * 0x18);
      if (puVar16 != (ulong *)0x0) {
        operator_delete__(puVar16 + -1);
      }
      *ppuVar5 = puVar40;
      *puVar4 = uVar30;
      uVar31 = uVar30;
    }
    if ((long *********)local_8c8 != &local_8c0) {
      uVar30 = *puVar3;
      pppppppplVar42 = local_8c8;
      if (uVar30 != uVar31) goto LAB_00d49fd0;
      do {
        uVar30 = uVar31;
        uVar31 = uVar30 * 2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar31;
        uVar44 = uVar30 * 0x30 | 8;
        if (SUB168(auVar8 * ZEXT816(0x18),8) != 0) {
          uVar44 = 0xffffffffffffffff;
        }
        puVar16 = (ulong *)operator_new__(uVar44);
        puVar40 = puVar16 + 1;
        *puVar16 = uVar31;
        if (uVar31 != 0) {
          lVar22 = uVar30 * 0x30;
          puVar16 = puVar40;
          do {
            *puVar16 = 0;
            puVar16[1] = 0;
            *(undefined2 *)(puVar16 + 2) = 0;
            lVar22 = lVar22 + -0x18;
            puVar16 = puVar16 + 3;
          } while (lVar22 != 0);
        }
        puVar48 = *ppuVar5;
        puVar16 = puVar2;
        if (uVar30 != 0x10) {
          puVar16 = puVar48;
        }
        memcpy(puVar40,puVar16,uVar30 * 0x18);
        if (puVar48 != (ulong *)0x0) {
          operator_delete__(puVar48 + -1);
          uVar30 = *puVar3;
        }
        *ppuVar5 = puVar40;
        *puVar4 = uVar31;
        while( true ) {
          puVar16 = puVar2;
          if (uVar31 != 0x10) {
            puVar16 = puVar40;
          }
          *puVar3 = uVar30 + 1;
          puVar16 = puVar16 + uVar30 * 3;
          ppppppplVar53 = pppppppplVar42[6];
          ppppppplVar39 = pppppppplVar42[5];
          *(undefined2 *)(puVar16 + 2) = *(undefined2 *)(pppppppplVar42 + 7);
          puVar16[1] = (ulong)ppppppplVar53;
          *puVar16 = (ulong)ppppppplVar39;
          pppppppplVar23 = (long ********)pppppppplVar42[1];
          if ((long ********)pppppppplVar42[1] == (long ********)0x0) {
            pppppppplVar23 = pppppppplVar42 + 2;
            bVar12 = (long ********)**pppppppplVar23 != pppppppplVar42;
            pppppppplVar42 = (long ********)*pppppppplVar23;
            if (bVar12) {
              do {
                ppppppplVar39 = *pppppppplVar23;
                pppppppplVar23 = (long ********)(ppppppplVar39 + 2);
                pppppppplVar42 = (long ********)*pppppppplVar23;
              } while (*pppppppplVar42 != ppppppplVar39);
            }
          }
          else {
            do {
              pppppppplVar42 = pppppppplVar23;
              pppppppplVar23 = (long ********)*pppppppplVar42;
            } while ((long ********)*pppppppplVar42 != (long ********)0x0);
          }
          if ((long *********)pppppppplVar42 == &local_8c0) goto LAB_00d4a078;
          uVar31 = *puVar4;
          uVar30 = *puVar3;
          if (uVar30 == uVar31) break;
LAB_00d49fd0:
          puVar40 = *ppuVar5;
        }
      } while( true );
    }
LAB_00d4a078:
    plVar26[0x1c] = 0;
    iVar13 = ICHull::Process();
    if (iVar13 == 3) {
      do {
        plVar19 = (long *)operator_new(0x110);
        ICHull::ICHull((ICHull *)plVar19,*(HeapManager **)(in_x0 + 400));
        lVar22 = plVar26[3];
        uVar30 = plVar26[4];
        if (uVar30 != 0) {
          lVar22 = *(long *)(lVar22 + 0x38);
          plVar26[3] = lVar22;
        }
        lVar49 = *(long *)(lVar22 + 0x18);
        lVar22 = *(long *)(in_x0 + 0x18);
        dVar59 = *(double *)(in_x0 + 0xa8) * 0.0001;
        iVar13 = rand();
        iVar14 = rand();
        iVar15 = rand();
        pdVar28 = (double *)(lVar22 + lVar49 * 0x18);
        local_4c8 = (long ********)(*pdVar28 + dVar59 * (double)(iVar13 % 10 + -5));
        local_4c0 = (long ********)(pdVar28[1] + dVar59 * (double)(iVar14 % 10 + -5));
        local_4b8 = pdVar28[2] + dVar59 * (double)(iVar15 % 10 + -5);
        ICHull::AddPoint((ICHull *)plVar19,(Vec3 *)&local_4c8,lVar49);
        if (1 < uVar30) {
          lVar22 = uVar30 - 1;
          do {
            ICHull::AddPoint((ICHull *)plVar19,
                             (Vec3 *)(*(long *)(in_x0 + 0x18) + *(long *)(plVar26[3] + 0x18) * 0x18)
                             ,*(long *)(plVar26[3] + 0x18));
            if (plVar26[4] != 0) {
              plVar26[3] = *(long *)(plVar26[3] + 0x38);
            }
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        *(long **)(lVar36 + 0x270) = plVar19;
        (**(code **)(*plVar26 + 8))(plVar26);
        iVar13 = ICHull::Process();
        plVar26 = plVar19;
      } while (iVar13 == 3);
    }
    if (0.0 < *(double *)(in_x0 + 0x88)) {
      lVar36 = lVar33 + lVar32 * 0x310;
      local_4c0 = (long ********)0x0;
      local_4b8 = 0.0;
      puVar2 = (ulong *)(lVar36 + 0x300);
      puVar3 = (ulong *)(lVar36 + 0x308);
      pvVar43 = (void *)(lVar36 + 0x278);
      uVar30 = *(ulong *)(lVar36 + 0x300);
      ppvVar6 = (void **)(lVar36 + 0x2f8);
      local_4c8 = (long ********)&local_4c0;
      if (uVar30 != 0) {
        uVar31 = 0;
        pppppppplVar42 = (long ********)&local_4c0;
        pppppppplVar23 = (long ********)&local_4c0;
        pvVar17 = pvVar43;
        if (*puVar3 != 0x10) {
          pvVar17 = *ppvVar6;
        }
LAB_00d4a2e0:
        do {
          ppppppplVar39 = *pppppppplVar23;
          while( true ) {
            if (ppppppplVar39 == (long *******)0x0) {
              ppppppplVar39 = (long *******)operator_new(0x28);
              pppppplVar21 = *(long *******)((long)pvVar17 + uVar31 * 8);
              *ppppppplVar39 = (long ******)0x0;
              ppppppplVar39[1] = (long ******)0x0;
              ppppppplVar39[2] = (long ******)pppppppplVar42;
              ppppppplVar39[4] = pppppplVar21;
              *pppppppplVar23 = ppppppplVar39;
              if ((long ********)*local_4c8 != (long ********)0x0) {
                ppppppplVar39 = *pppppppplVar23;
                local_4c8 = (long ********)*local_4c8;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        ((__tree_node_base *)local_4c0,(__tree_node_base *)ppppppplVar39);
              local_4b8 = (double)((long)local_4b8 + 1);
              uVar30 = *puVar2;
            }
            uVar31 = uVar31 + 1;
            if (uVar30 <= uVar31) goto LAB_00d4a348;
            pvVar17 = pvVar43;
            if (*puVar3 != 0x10) {
              pvVar17 = *ppvVar6;
            }
            pppppppplVar42 = (long ********)&local_4c0;
            pppppppplVar23 = (long ********)&local_4c0;
            if (local_4c0 == (long ********)0x0) break;
            ppppppplVar39 = *(long ********)((long)pvVar17 + uVar31 * 8);
            pppppppplVar11 = local_4c0;
            do {
              while (pppppppplVar42 = pppppppplVar11, pppppppplVar42[4] <= ppppppplVar39) {
                if (ppppppplVar39 <= pppppppplVar42[4]) goto LAB_00d4a2e0;
                pppppppplVar23 = pppppppplVar42 + 1;
                pppppppplVar11 = (long ********)*pppppppplVar23;
                if ((long ********)*pppppppplVar23 == (long ********)0x0) goto LAB_00d4a2e0;
              }
              pppppppplVar11 = (long ********)*pppppppplVar42;
              pppppppplVar23 = pppppppplVar42;
            } while ((long ********)*pppppppplVar42 != (long ********)0x0);
            ppppppplVar39 = *pppppppplVar42;
          }
        } while( true );
      }
LAB_00d4a348:
      local_8f0 = (long ********)0x0;
      local_8e8 = 0;
      lVar36 = lVar33 + lVar25 * 0x310;
      uVar30 = *(ulong *)(lVar36 + 0x300);
      local_8f8 = (long ********)&local_8f0;
      if (uVar30 != 0) {
        uVar31 = 0;
        pppppppplVar42 = (long ********)&local_8f0;
        lVar22 = lVar36 + 0x278;
        pppppppplVar23 = (long ********)&local_8f0;
        if (*(long *)(lVar36 + 0x308) != 0x10) {
          lVar22 = *(long *)(lVar36 + 0x2f8);
        }
LAB_00d4a408:
        do {
          ppppppplVar39 = *pppppppplVar23;
          while( true ) {
            if (ppppppplVar39 == (long *******)0x0) {
              ppppppplVar39 = (long *******)operator_new(0x28);
              pppppplVar21 = *(long *******)(lVar22 + uVar31 * 8);
              *ppppppplVar39 = (long ******)0x0;
              ppppppplVar39[1] = (long ******)0x0;
              ppppppplVar39[2] = (long ******)pppppppplVar42;
              ppppppplVar39[4] = pppppplVar21;
              *pppppppplVar23 = ppppppplVar39;
              if ((long ********)*local_8f8 != (long ********)0x0) {
                ppppppplVar39 = *pppppppplVar23;
                local_8f8 = (long ********)*local_8f8;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        ((__tree_node_base *)local_8f0,(__tree_node_base *)ppppppplVar39);
              local_8e8 = local_8e8 + 1;
              uVar30 = *(ulong *)(lVar36 + 0x300);
            }
            uVar31 = uVar31 + 1;
            if (uVar30 <= uVar31) goto LAB_00d4a484;
            lVar22 = lVar36 + 0x278;
            if (*(long *)(lVar36 + 0x308) != 0x10) {
              lVar22 = *(long *)(lVar36 + 0x2f8);
            }
            pppppppplVar42 = (long ********)&local_8f0;
            pppppppplVar23 = (long ********)&local_8f0;
            if (local_8f0 == (long ********)0x0) break;
            ppppppplVar39 = *(long ********)(lVar22 + uVar31 * 8);
            pppppppplVar11 = local_8f0;
            do {
              while (pppppppplVar42 = pppppppplVar11, pppppppplVar42[4] <= ppppppplVar39) {
                if (ppppppplVar39 <= pppppppplVar42[4]) goto LAB_00d4a408;
                pppppppplVar23 = pppppppplVar42 + 1;
                pppppppplVar11 = (long ********)*pppppppplVar23;
                if ((long ********)*pppppppplVar23 == (long ********)0x0) goto LAB_00d4a408;
              }
              pppppppplVar11 = (long ********)*pppppppplVar42;
              pppppppplVar23 = pppppppplVar42;
            } while ((long ********)*pppppppplVar42 != (long ********)0x0);
            ppppppplVar39 = *pppppppplVar42;
          }
        } while( true );
      }
LAB_00d4a484:
      local_908 = (__tree_node *)0x0;
      local_900 = 0;
      local_910 = (__less **)&local_908;
      std::__ndk1::
      __set_symmetric_difference<std::__ndk1::__less<unsigned_long_long,unsigned_long_long>&,std::__ndk1::__tree_const_iterator<unsigned_long_long,std::__ndk1::__tree_node<unsigned_long_long,void*>*,long>,std::__ndk1::__tree_const_iterator<unsigned_long_long,std::__ndk1::__tree_node<unsigned_long_long,void*>*,long>,std::__ndk1::insert_iterator<std::__ndk1::set<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>>>
                ((__tree_const_iterator)local_4c8,(__tree_const_iterator)&local_4c0,
                 (__tree_const_iterator)local_8f8,(__tree_const_iterator)&local_8f0,
                 (insert_iterator)&local_910,(__less *)&local_908);
      *puVar2 = 0;
      if (*ppvVar6 != (void *)0x0) {
        operator_delete__(*ppvVar6);
      }
      *ppvVar6 = (void *)0x0;
      *puVar3 = 0x10;
      if (local_910 != (__less **)&local_908) {
        pvVar41 = (void *)0x0;
        uVar30 = 0x10;
        p_Var45 = local_910[4];
        pvVar17 = pvVar43;
        uVar31 = *puVar2;
        pp_Var10 = local_910;
joined_r0x00d4a4fc:
        if (uVar31 != 0) {
          uVar44 = 0;
          do {
            uVar38 = uVar31;
            if (p_Var45 == *(__less **)((long)pvVar17 + uVar44 * 8)) goto LAB_00d4a590;
            uVar44 = uVar44 + 1;
          } while (uVar31 != uVar44);
        }
        __dest = pvVar41;
        if (uVar31 == uVar30) {
          uVar30 = uVar31 << 1;
          uVar44 = uVar31 << 4;
          if (uVar30 >> 0x3d != 0) {
            uVar44 = 0xffffffffffffffff;
          }
          __dest = operator_new__(uVar44);
          memcpy(__dest,pvVar17,uVar31 << 3);
          if (pvVar41 != (void *)0x0) {
            operator_delete__(pvVar41);
            p_Var45 = pp_Var10[4];
            uVar31 = *puVar2;
          }
          *ppvVar6 = __dest;
          *puVar3 = uVar30;
        }
        uVar38 = uVar31 + 1;
        pvVar17 = pvVar43;
        if (uVar30 != 0x10) {
          pvVar17 = __dest;
        }
        *puVar2 = uVar38;
        *(__less **)((long)pvVar17 + uVar31 * 8) = p_Var45;
LAB_00d4a590:
        pp_Var24 = (__less **)pp_Var10[1];
        if ((__less **)pp_Var10[1] == (__less **)0x0) {
          pp_Var24 = pp_Var10 + 2;
          pp_Var29 = (__less **)*pp_Var24;
          if ((__less **)*pp_Var29 != pp_Var10) {
            do {
              p_Var45 = *pp_Var24;
              pp_Var24 = (__less **)(p_Var45 + 0x10);
              pp_Var29 = (__less **)*pp_Var24;
            } while (*pp_Var29 != p_Var45);
          }
        }
        else {
          do {
            pp_Var29 = pp_Var24;
            pp_Var24 = (__less **)*pp_Var29;
          } while ((__less **)*pp_Var29 != (__less **)0x0);
        }
        if (pp_Var29 != (__less **)&local_908) {
          pvVar41 = *ppvVar6;
          p_Var45 = pp_Var29[4];
          pvVar17 = pvVar43;
          uVar31 = uVar38;
          pp_Var10 = pp_Var29;
          if (uVar30 != 0x10) {
            pvVar17 = pvVar41;
          }
          goto joined_r0x00d4a4fc;
        }
      }
      std::__ndk1::
      __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
      ::destroy((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                 *)&local_910,local_908);
      std::__ndk1::
      __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
      ::destroy((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                 *)&local_8f8,(__tree_node *)local_8f0);
      std::__ndk1::
      __tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
      ::destroy((__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                 *)&local_4c8,(__tree_node *)local_4c0);
    }
    lVar36 = lVar33 + lVar32 * 0x310;
    *(double *)(lVar36 + 0x268) =
         *(double *)(lVar33 + lVar25 * 0x310 + 0x268) + *(double *)(lVar36 + 0x268);
    Graph::EdgeCollapse((Graph *)(in_x0 + 0x100),lVar32,lVar25);
    lVar25 = *(long *)(in_x0 + 0x138);
    if (*(long *)(lVar25 + lVar32 * 0x310 + 0x98) != 0) {
      uVar30 = 0;
      do {
        lVar25 = lVar25 + lVar32 * 0x310;
        lVar36 = lVar25 + 0x10;
        if (*(long *)(lVar25 + 0xa0) != 0x10) {
          lVar36 = *(long *)(lVar25 + 0x90);
        }
        pppppppplVar42 = *(long *********)(lVar36 + uVar30 * 8);
        ComputeEdgeCost(in_x0,(ulong)pppppppplVar42);
        local_4c0 = *(long *********)(*(long *)(in_x0 + 0x120) + (long)pppppppplVar42 * 0x30 + 0x20)
        ;
        local_4c8 = pppppppplVar42;
        FUN_00d49598(pplVar1,&local_4c8);
        lVar25 = *(long *)(in_x0 + 0x138);
        uVar30 = uVar30 + 1;
      } while (uVar30 < *(ulong *)(lVar25 + lVar32 * 0x310 + 0x98));
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<long,HACD::DPoint>,std::__ndk1::__map_value_compare<long,std::__ndk1::__value_type<long,HACD::DPoint>,std::__ndk1::less<long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<long,HACD::DPoint>>>
    ::destroy((__tree<std::__ndk1::__value_type<long,HACD::DPoint>,std::__ndk1::__map_value_compare<long,std::__ndk1::__value_type<long,HACD::DPoint>,std::__ndk1::less<long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<long,HACD::DPoint>>>
               *)&local_8c8,(__tree_node *)local_8c0);
    plVar19 = *(long **)(in_x0 + 0x160);
  }
  dVar59 = dVar55;
  dVar51 = dVar58;
  if (*pplVar1 == plVar19) goto LAB_00d4a724;
  goto LAB_00d497f4;
}


