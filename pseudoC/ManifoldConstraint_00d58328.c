// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ManifoldConstraint
// Entry Point: 00d58328
// Size: 1524 bytes
// Signature: undefined __thiscall ManifoldConstraint(MeshDecimator * this, long param_1, long param_2)


/* WARNING: Type propagation algorithm not settling */
/* HACD::MeshDecimator::ManifoldConstraint(long, long) const */

undefined4 __thiscall
HACD::MeshDecimator::ManifoldConstraint(MeshDecimator *this,long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long ********pppppppplVar3;
  ulong uVar4;
  long lVar5;
  long **pplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long ********pppppppplVar9;
  long lVar10;
  long ********pppppppplVar11;
  long lVar12;
  ulong uVar13;
  long ******pppppplVar14;
  long *plVar15;
  long **pplVar16;
  long *******ppppppplVar17;
  undefined4 uVar18;
  long lVar19;
  ulong uVar20;
  long *******ppppppplVar21;
  long local_98;
  long ********local_80;
  long ********local_78;
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(this + 0x40);
  local_78 = (long ********)0x0;
  local_70 = 0;
  local_80 = (long ********)&local_78;
  if (*(long *)(lVar5 + param_1 * 0x188 + 0x88) != 0) {
    uVar4 = 0;
    uVar13 = 0;
    do {
      lVar5 = lVar5 + param_1 * 0x188;
      if (*(long *)(lVar5 + 0x90) != 0x10) {
        lVar5 = *(long *)(lVar5 + 0x80);
      }
      lVar19 = *(long *)(lVar5 + uVar13 * 8);
      pplVar6 = (long **)(*(long *)(this + 0x58) + lVar19 * 0x38);
      pplVar16 = pplVar6 + 1;
      if (*pplVar6 != (long *)param_1) {
        pplVar16 = pplVar6;
      }
      ppppppplVar21 = (long *******)*pplVar16;
      pppppppplVar11 = (long ********)&local_78;
      pppppppplVar9 = (long ********)&local_78;
      pppppppplVar3 = local_78;
      while (pppppppplVar3 != (long ********)0x0) {
        while (pppppppplVar9 = pppppppplVar3, (long)ppppppplVar21 < (long)pppppppplVar9[4]) {
          pppppppplVar3 = (long ********)*pppppppplVar9;
          pppppppplVar11 = pppppppplVar9;
          if ((long ********)*pppppppplVar9 == (long ********)0x0) {
            ppppppplVar7 = *pppppppplVar9;
            goto joined_r0x00d58434;
          }
        }
        if ((long)ppppppplVar21 <= (long)pppppppplVar9[4]) break;
        pppppppplVar11 = pppppppplVar9 + 1;
        pppppppplVar3 = (long ********)*pppppppplVar11;
      }
      ppppppplVar7 = *pppppppplVar11;
joined_r0x00d58434:
      if (ppppppplVar7 == (long *******)0x0) {
        ppppppplVar7 = (long *******)operator_new(0x28);
        ppppppplVar7[4] = (long ******)ppppppplVar21;
        *ppppppplVar7 = (long ******)0x0;
        ppppppplVar7[1] = (long ******)0x0;
        ppppppplVar7[2] = (long ******)pppppppplVar9;
        *pppppppplVar11 = ppppppplVar7;
        if ((long ********)*local_80 != (long ********)0x0) {
          ppppppplVar7 = *pppppppplVar11;
          local_80 = (long ********)*local_80;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_78,(__tree_node_base *)ppppppplVar7);
        uVar4 = local_70 + 1;
        local_70 = uVar4;
        lVar5 = *(long *)(this + 0x40);
      }
      else {
        lVar5 = *(long *)(this + 0x40);
      }
      if ((ppppppplVar21 != (long *******)param_2) &&
         (lVar19 = local_98, *(long *)(lVar5 + param_2 * 0x188 + 0x88) != 0)) {
        uVar20 = 0;
        do {
          lVar5 = lVar5 + param_2 * 0x188;
          if (*(long *)(lVar5 + 0x90) != 0x10) {
            lVar5 = *(long *)(lVar5 + 0x80);
          }
          pplVar6 = (long **)(*(long *)(this + 0x58) + *(long *)(lVar5 + uVar20 * 8) * 0x38);
          pplVar16 = pplVar6 + 1;
          if (*pplVar6 != (long *)param_2) {
            pplVar16 = pplVar6;
          }
          ppppppplVar7 = (long *******)*pplVar16;
          pppppppplVar9 = (long ********)&local_78;
          pppppppplVar11 = (long ********)&local_78;
          pppppppplVar3 = local_78;
          while (pppppppplVar3 != (long ********)0x0) {
            while (pppppppplVar11 = pppppppplVar3, (long)ppppppplVar7 < (long)pppppppplVar11[4]) {
              pppppppplVar9 = pppppppplVar11;
              pppppppplVar3 = (long ********)*pppppppplVar11;
              if ((long ********)*pppppppplVar11 == (long ********)0x0) {
                ppppppplVar8 = *pppppppplVar11;
                goto joined_r0x00d58590;
              }
            }
            if ((long)ppppppplVar7 <= (long)pppppppplVar11[4]) break;
            pppppppplVar9 = pppppppplVar11 + 1;
            pppppppplVar3 = (long ********)*pppppppplVar9;
          }
          ppppppplVar8 = *pppppppplVar9;
joined_r0x00d58590:
          if (ppppppplVar8 == (long *******)0x0) {
            pppppppplVar3 = (long ********)operator_new(0x28);
            pppppppplVar3[4] = ppppppplVar7;
            *pppppppplVar3 = (long *******)0x0;
            pppppppplVar3[1] = (long *******)0x0;
            pppppppplVar3[2] = (long *******)pppppppplVar11;
            *pppppppplVar9 = (long *******)pppppppplVar3;
            if ((long ********)*local_80 != (long ********)0x0) {
              pppppppplVar3 = (long ********)*pppppppplVar9;
              local_80 = (long ********)*local_80;
            }
            bVar2 = pppppppplVar3 == local_78;
            *(bool *)(pppppppplVar3 + 3) = bVar2;
joined_r0x00d585e4:
            if ((bVar2) || (ppppppplVar8 = pppppppplVar3[2], *(char *)(ppppppplVar8 + 3) != '\0'))
            goto LAB_00d58728;
            pppppppplVar9 = (long ********)ppppppplVar8[2];
            ppppppplVar17 = *pppppppplVar9;
            if (ppppppplVar17 != ppppppplVar8) {
              if ((ppppppplVar17 == (long *******)0x0) ||
                 (ppppppplVar17 = ppppppplVar17 + 3, *(char *)ppppppplVar17 != '\0')) {
                if ((long ********)*ppppppplVar8 == pppppppplVar3) {
                  ppppppplVar17 = pppppppplVar3[1];
                  *ppppppplVar8 = (long ******)ppppppplVar17;
                  if (ppppppplVar17 != (long *******)0x0) {
                    ppppppplVar17[2] = (long ******)ppppppplVar8;
                    pppppppplVar9 = (long ********)ppppppplVar8[2];
                  }
                  pppppppplVar3[2] = (long *******)pppppppplVar9;
                  ppppppplVar8[2][(long *******)*ppppppplVar8[2] != ppppppplVar8] =
                       (long *****)pppppppplVar3;
                  pppppppplVar3[1] = ppppppplVar8;
                  ppppppplVar8[2] = (long ******)pppppppplVar3;
                  pppppppplVar9 = (long ********)pppppppplVar3[2];
                  *(undefined *)(pppppppplVar3 + 3) = 1;
                  ppppppplVar8 = pppppppplVar9[1];
                  *(undefined *)(pppppppplVar9 + 3) = 0;
                  ppppppplVar17 = (long *******)*ppppppplVar8;
                  pppppppplVar9[1] = ppppppplVar17;
                }
                else {
                  *(undefined *)(ppppppplVar8 + 3) = 1;
                  ppppppplVar8 = pppppppplVar9[1];
                  *(undefined *)(pppppppplVar9 + 3) = 0;
                  ppppppplVar17 = (long *******)*ppppppplVar8;
                  pppppppplVar9[1] = ppppppplVar17;
                }
                if (ppppppplVar17 != (long *******)0x0) {
                  ppppppplVar17[2] = (long ******)pppppppplVar9;
                }
                pppppppplVar11 = pppppppplVar9 + 2;
                ppppppplVar8[2] = (long ******)*pppppppplVar11;
                (*pppppppplVar11)[(long ********)**pppppppplVar11 != pppppppplVar9] =
                     (long ******)ppppppplVar8;
                *ppppppplVar8 = (long ******)pppppppplVar9;
                goto LAB_00d58724;
              }
LAB_00d585ec:
              bVar2 = local_78 == pppppppplVar9;
              *(undefined *)(ppppppplVar8 + 3) = 1;
              *(bool *)(pppppppplVar9 + 3) = bVar2;
              *(undefined *)ppppppplVar17 = 1;
              pppppppplVar3 = pppppppplVar9;
              goto joined_r0x00d585e4;
            }
            if ((pppppppplVar9[1] != (long *******)0x0) &&
               (ppppppplVar17 = pppppppplVar9[1] + 3, *(char *)ppppppplVar17 == '\0'))
            goto LAB_00d585ec;
            ppppppplVar17 = ppppppplVar8;
            if ((long ********)*ppppppplVar8 != pppppppplVar3) {
              ppppppplVar17 = (long *******)ppppppplVar8[1];
              pppppplVar14 = *ppppppplVar17;
              ppppppplVar8[1] = pppppplVar14;
              if (pppppplVar14 != (long ******)0x0) {
                pppppplVar14[2] = (long *****)ppppppplVar8;
                pppppppplVar9 = (long ********)ppppppplVar8[2];
              }
              ppppppplVar17[2] = (long ******)pppppppplVar9;
              ppppppplVar8[2][(long *******)*ppppppplVar8[2] != ppppppplVar8] =
                   (long *****)ppppppplVar17;
              *ppppppplVar17 = (long ******)ppppppplVar8;
              ppppppplVar8[2] = (long ******)ppppppplVar17;
              pppppppplVar9 = (long ********)ppppppplVar17[2];
            }
            *(undefined *)(ppppppplVar17 + 3) = 1;
            ppppppplVar8 = *pppppppplVar9;
            *(undefined *)(pppppppplVar9 + 3) = 0;
            ppppppplVar17 = (long *******)ppppppplVar8[1];
            *pppppppplVar9 = ppppppplVar17;
            if (ppppppplVar17 != (long *******)0x0) {
              ppppppplVar17[2] = (long ******)pppppppplVar9;
            }
            pppppppplVar11 = pppppppplVar9 + 2;
            ppppppplVar8[2] = (long ******)*pppppppplVar11;
            (*pppppppplVar11)[(long ********)**pppppppplVar11 != pppppppplVar9] =
                 (long ******)ppppppplVar8;
            ppppppplVar8[1] = (long ******)pppppppplVar9;
LAB_00d58724:
            *pppppppplVar11 = ppppppplVar8;
LAB_00d58728:
            uVar4 = uVar4 + 1;
            local_70 = uVar4;
            lVar5 = *(long *)(this + 0x40);
          }
          else {
            lVar5 = *(long *)(this + 0x40);
          }
          if (ppppppplVar21 == ppppppplVar7) {
            lVar10 = *(long *)(lVar5 + param_1 * 0x188 + 0x120);
            if (lVar10 == 0) goto LAB_00d58888;
            lVar12 = lVar5 + param_1 * 0x188;
            plVar15 = (long *)(lVar12 + 0x98);
            if (*(long *)(lVar12 + 0x128) != 0x10) {
              plVar15 = *(long **)(lVar12 + 0x118);
            }
            while( true ) {
              pplVar16 = (long **)(*(long *)this + *plVar15 * 0x18);
              ppppppplVar7 = (long *******)*pplVar16;
              ppppppplVar8 = (long *******)pplVar16[1];
              ppppppplVar17 = (long *******)pplVar16[2];
              if (((((((ppppppplVar7 == (long *******)param_1 &&
                       ppppppplVar8 == (long *******)param_2) && ppppppplVar17 == ppppppplVar21) ||
                     ((ppppppplVar7 == (long *******)param_1 && ppppppplVar8 == ppppppplVar21) &&
                      ppppppplVar17 == (long *******)param_2)) ||
                    ((ppppppplVar7 == (long *******)param_2 && ppppppplVar8 == (long *******)param_1
                     ) && ppppppplVar17 == ppppppplVar21)) ||
                   (((ppppppplVar7 == (long *******)param_2 && (ppppppplVar8 == ppppppplVar21)) &&
                    (ppppppplVar17 == (long *******)param_1)))) ||
                  (((ppppppplVar7 == ppppppplVar21 && (ppppppplVar8 == (long *******)param_2)) &&
                   (ppppppplVar17 == (long *******)param_1)))) ||
                 (((ppppppplVar7 == ppppppplVar21 && (ppppppplVar8 == (long *******)param_1)) &&
                  (ppppppplVar17 == (long *******)param_2)))) break;
              lVar10 = lVar10 + -1;
              plVar15 = plVar15 + 1;
              if (lVar10 == 0) goto LAB_00d58888;
            }
            if (*plVar15 == -1) goto LAB_00d58888;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < *(ulong *)(lVar5 + param_2 * 0x188 + 0x88));
      }
      local_98 = lVar19;
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(ulong *)(lVar5 + param_1 * 0x188 + 0x88));
    if ((4 < uVar4) &&
       (((*(char *)(lVar5 + param_1 * 0x188 + 0x181) == '\0' ||
         (*(char *)(lVar5 + param_2 * 0x188 + 0x181) == '\0')) ||
        (*(char *)(*(long *)(this + 0x58) + local_98 * 0x38 + 0x30) != '\0')))) {
      uVar18 = 1;
      goto LAB_00d5888c;
    }
  }
LAB_00d58888:
  uVar18 = 0;
LAB_00d5888c:
  std::__ndk1::__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>::destroy
            ((__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *)&local_80,
             (__tree_node *)local_78);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18;
}


