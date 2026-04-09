// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findCompatible
// Entry Point: 00c58f78
// Size: 1696 bytes
// Signature: undefined __cdecl findCompatible(GsTFunction * param_1)


/* GsTSymbolTableLevel::findCompatible(GsTFunction const*) const */

void GsTSymbolTableLevel::findCompatible(GsTFunction *param_1)

{
  byte *__s2;
  undefined8 *puVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  pair *__dest;
  long in_x1;
  long **in_x8;
  size_t sVar12;
  GsTFunction **ppGVar13;
  long *plVar14;
  long *plVar15;
  byte *pbVar16;
  GsTFunction **ppGVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  byte *__s1;
  GsTFunction *pGVar22;
  long lVar23;
  long *plVar24;
  IR_Type *pIVar25;
  long *plVar26;
  pair *ppVar27;
  size_t sVar28;
  GsTFunction **ppGVar29;
  long lVar30;
  byte *pbVar31;
  uint uVar32;
  GsTFunction **ppGVar33;
  undefined8 uVar34;
  ulong local_b8;
  pair *local_a0;
  pair *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  ppGVar33 = *(GsTFunction ***)param_1;
  pbVar31 = *(byte **)(in_x1 + 8);
  in_x8[1] = (long *)0x0;
  in_x8[2] = (long *)0x0;
  *in_x8 = (long *)0x0;
  if (ppGVar33 != (GsTFunction **)(param_1 + 8)) {
    ppGVar29 = (GsTFunction **)0x0;
    do {
      plVar26 = (long *)ppGVar33[8];
      bVar3 = *pbVar31;
      pbVar16 = (byte *)plVar26[1];
      bVar4 = *pbVar16;
      sVar12 = (size_t)(bVar4 >> 1);
      sVar28 = sVar12;
      if ((bVar4 & 1) != 0) {
        sVar28 = *(size_t *)(pbVar16 + 8);
      }
      sVar2 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar2 = *(size_t *)(pbVar31 + 8);
      }
      if (sVar28 == sVar2) {
        __s1 = *(byte **)(pbVar16 + 0x10);
        if ((bVar4 & 1) == 0) {
          __s1 = pbVar16 + 1;
        }
        __s2 = pbVar31 + 1;
        if ((bVar3 & 1) != 0) {
          __s2 = *(byte **)(pbVar31 + 0x10);
        }
        if ((bVar4 & 1) == 0) {
          while (sVar28 != 0) {
            pbVar16 = pbVar16 + 1;
            if (*pbVar16 != *__s2) goto LAB_00c590d0;
            __s2 = __s2 + 1;
            sVar12 = sVar12 - 1;
            sVar28 = sVar12;
          }
        }
        else if ((sVar28 != 0) && (iVar7 = memcmp(__s1,__s2,sVar28), iVar7 != 0)) goto LAB_00c590d0;
                    /* try { // try from 00c59084 to 00c5908b has its CatchHandler @ 00c5964c */
        uVar10 = (**(code **)(*plVar26 + 0x18))(plVar26);
        if (((uVar10 & 1) == 0) ||
           (pGVar22 = ppGVar33[8],
           (int)((ulong)(*(long *)(in_x1 + 0x28) - *(long *)(in_x1 + 0x20)) >> 3) * -0x55555555 !=
           (int)((ulong)(*(long *)(pGVar22 + 0x28) - *(long *)(pGVar22 + 0x20)) >> 3) * -0x55555555)
           ) goto LAB_00c590d0;
        if (ppGVar29 < in_x8[2]) {
          *ppGVar29 = pGVar22;
          ppGVar29[1] = (GsTFunction *)0x0;
          in_x8[1] = (long *)(ppGVar29 + 2);
          ppGVar29 = ppGVar29 + 2;
          goto LAB_00c590d0;
        }
        plVar26 = *in_x8;
        sVar28 = (long)ppGVar29 - (long)plVar26;
        uVar10 = ((long)sVar28 >> 4) + 1;
        if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar20 = (long)in_x8[2] - (long)plVar26;
        uVar19 = (long)uVar20 >> 3;
        if (uVar10 <= uVar19) {
          uVar10 = uVar19;
        }
        if (0x7fffffffffffffef < uVar20) {
          uVar10 = 0xfffffffffffffff;
        }
        if (uVar10 >> 0x3c != 0) {
                    /* try { // try from 00c59600 to 00c59613 has its CatchHandler @ 00c59624 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00c5912c to 00c5912f has its CatchHandler @ 00c59620 */
        plVar11 = (long *)operator_new(uVar10 << 4);
        ppGVar29 = (GsTFunction **)(plVar11 + ((long)sVar28 >> 4) * 2);
        *ppGVar29 = pGVar22;
        ppGVar29[1] = (GsTFunction *)0x0;
        if (0 < (long)sVar28) {
          memcpy(plVar11,plVar26,sVar28);
        }
        ppGVar29 = ppGVar29 + 2;
        *in_x8 = plVar11;
        in_x8[1] = (long *)ppGVar29;
        in_x8[2] = plVar11 + uVar10 * 2;
        if (plVar26 != (long *)0x0) {
          operator_delete(plVar26);
        }
        ppGVar13 = (GsTFunction **)ppGVar33[1];
        if ((GsTFunction **)ppGVar33[1] == (GsTFunction **)0x0) goto LAB_00c59188;
LAB_00c590d8:
        do {
          ppGVar17 = ppGVar13;
          ppGVar13 = (GsTFunction **)*ppGVar17;
        } while ((GsTFunction **)*ppGVar17 != (GsTFunction **)0x0);
      }
      else {
LAB_00c590d0:
        ppGVar13 = (GsTFunction **)ppGVar33[1];
        if ((GsTFunction **)ppGVar33[1] != (GsTFunction **)0x0) goto LAB_00c590d8;
LAB_00c59188:
        ppGVar13 = ppGVar33 + 2;
        ppGVar17 = (GsTFunction **)*ppGVar13;
        if ((GsTFunction **)*ppGVar17 != ppGVar33) {
          do {
            pGVar22 = *ppGVar13;
            ppGVar13 = (GsTFunction **)(pGVar22 + 0x10);
            ppGVar17 = (GsTFunction **)*ppGVar13;
          } while (*ppGVar17 != pGVar22);
        }
      }
      ppGVar33 = ppGVar17;
    } while (ppGVar17 != (GsTFunction **)(param_1 + 8));
    if (ppGVar29 != (GsTFunction **)*in_x8) {
      lVar18 = *(long *)(in_x1 + 0x20);
      local_a0 = (pair *)0x0;
      local_90 = (pair *)0x0;
      if ((int)((ulong)(*(long *)(in_x1 + 0x28) - lVar18) >> 3) * -0x55555555 < 1) {
        ppVar27 = (pair *)0x0;
        local_a0 = (pair *)0x0;
      }
      else {
        lVar23 = 0;
        ppVar27 = (pair *)0x0;
        lVar30 = 0;
        while( true ) {
          puVar1 = (undefined8 *)(lVar18 + lVar23);
          uVar34 = puVar1[1];
          uStack_7c = (undefined4)uVar34;
          uStack_78 = (undefined4)((ulong)uVar34 >> 0x20);
          uStack_84 = (undefined4)*puVar1;
          uStack_80 = (undefined4)((ulong)*puVar1 >> 0x20);
          uStack_74 = puVar1[2];
          if (ppVar27 < local_90) {
            *ppVar27 = (pair)lVar30;
            *(ulong *)(ppVar27 + 3) = CONCAT44(uStack_7c,uStack_80);
            *(ulong *)(ppVar27 + 1) = CONCAT44(uStack_84,local_88);
            *(undefined8 *)(ppVar27 + 6) = uStack_74;
            *(undefined8 *)(ppVar27 + 4) = uVar34;
            ppVar27 = ppVar27 + 8;
            __dest = local_a0;
          }
          else {
            sVar28 = (long)ppVar27 - (long)local_a0;
            uVar10 = ((long)sVar28 >> 5) + 1;
            if (uVar10 >> 0x3b != 0) {
                    /* try { // try from 00c595ec to 00c595ff has its CatchHandler @ 00c59640 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar20 = (long)local_90 - (long)local_a0 >> 4;
            if (uVar10 <= uVar20) {
              uVar10 = uVar20;
            }
            if (0x7fffffffffffffdf < (ulong)((long)local_90 - (long)local_a0)) {
              uVar10 = 0x7ffffffffffffff;
            }
            if (uVar10 == 0) {
              __dest = (pair *)0x0;
            }
            else {
              if (uVar10 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00c59288 to 00c5928b has its CatchHandler @ 00c5962c */
              __dest = (pair *)operator_new(uVar10 << 5);
            }
            ppVar27 = __dest + ((long)sVar28 >> 5) * 8;
            *ppVar27 = (pair)lVar30;
            *(ulong *)(ppVar27 + 3) = CONCAT44(uStack_7c,uStack_80);
            *(ulong *)(ppVar27 + 1) = CONCAT44(uStack_84,local_88);
            *(undefined8 *)(ppVar27 + 6) = uStack_74;
            *(ulong *)(ppVar27 + 4) = CONCAT44(uStack_78,uStack_7c);
            if (0 < (long)sVar28) {
              memcpy(__dest,local_a0,sVar28);
            }
            ppVar27 = ppVar27 + 8;
            local_90 = __dest + uVar10 * 8;
            if (local_a0 != (pair *)0x0) {
              operator_delete(local_a0);
            }
          }
          local_a0 = __dest;
          lVar18 = *(long *)(in_x1 + 0x20);
          lVar30 = lVar30 + 1;
          if ((int)((ulong)(*(long *)(in_x1 + 0x28) - lVar18) >> 3) * -0x55555555 <= lVar30) break;
          lVar23 = lVar23 + 0x18;
        }
      }
      local_88 = 0xc58bdc;
      uStack_84 = 0;
                    /* try { // try from 00c59328 to 00c59337 has its CatchHandler @ 00c59618 */
      std::__ndk1::
      __sort<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
                (local_a0,ppVar27,(_func_bool_pair_ptr_pair_ptr *)&local_88);
      if ((long)ppVar27 - (long)local_a0 != 0) {
        plVar26 = *in_x8;
        local_b8 = 0;
        plVar11 = in_x8[1];
        do {
          if (plVar26 == plVar11) goto LAB_00c595b0;
          lVar18 = *(long *)(local_a0 + local_b8 * 8 + 6);
          lVar30 = (long)(int)local_a0[local_b8 * 8];
          pIVar25 = *(IR_Type **)(lVar18 + 8);
          uVar9 = *(uint *)(lVar18 + 0x10);
          plVar14 = plVar11;
          plVar24 = plVar26;
          uVar32 = 0x40;
          do {
            while( true ) {
              bVar6 = (bool)((byte)(uVar9 >> 1) & 1);
                    /* try { // try from 00c593c0 to 00c593cb has its CatchHandler @ 00c59668 */
              uVar8 = IR_Type::canReceive(*(IR_Type **)
                                           (*(long *)(*(long *)(*plVar24 + 0x20) + lVar30 * 0x18 +
                                                     0x10) + 8),pIVar25,bVar6,
                                          (IR_Type **)(plVar24 + 1));
              if (uVar8 != 0xffffffff) break;
              uVar20 = (long)plVar24 - (long)plVar26;
              uVar10 = uVar20 & 0xfffffffffffffff0;
              plVar24 = (long *)((long)plVar26 + uVar10);
              plVar14 = plVar24 + 2;
              plVar15 = plVar24;
              if (plVar14 != plVar11) {
                uVar10 = (long)plVar11 + (-0x20 - (uVar10 + (long)plVar26));
                if (0x2f < uVar10) {
                  uVar10 = (uVar10 >> 4) + 1;
                  uVar19 = uVar10 & 0x1ffffffffffffffc;
                  plVar15 = plVar24 + uVar19 * 2;
                  plVar14 = plVar14 + uVar19 * 2;
                  plVar21 = plVar26 + ((long)uVar20 >> 4) * 2 + 4;
                  uVar20 = uVar19;
                  do {
                    uVar20 = uVar20 - 4;
                    plVar21[-3] = plVar21[-1];
                    plVar21[-4] = plVar21[-2];
                    plVar21[-1] = plVar21[1];
                    plVar21[-2] = *plVar21;
                    plVar21[1] = plVar21[3];
                    *plVar21 = plVar21[2];
                    plVar21[3] = plVar21[5];
                    plVar21[2] = plVar21[4];
                    plVar21 = plVar21 + 8;
                  } while (uVar20 != 0);
                  if (uVar10 == uVar19) goto LAB_00c59470;
                }
                do {
                  *plVar15 = *plVar14;
                  plVar21 = plVar14 + 1;
                  plVar14 = plVar14 + 2;
                  plVar15[1] = *plVar21;
                  plVar15 = plVar15 + 2;
                } while (plVar14 != plVar11);
              }
LAB_00c59470:
              plVar11 = plVar15;
              in_x8[1] = plVar11;
              plVar14 = plVar11;
              uVar8 = uVar32;
              if (plVar24 == plVar11) goto LAB_00c59484;
            }
            plVar24 = plVar24 + 2;
            if (uVar32 <= uVar8) {
              uVar8 = uVar32;
            }
            uVar32 = uVar8;
          } while (plVar24 != plVar11);
LAB_00c59484:
          if ((plVar11 == plVar26) || (plVar11 = plVar26, plVar26 == plVar14)) break;
          do {
                    /* try { // try from 00c594d0 to 00c594db has its CatchHandler @ 00c5965c */
            uVar9 = IR_Type::canReceive(*(IR_Type **)
                                         (*(long *)(*(long *)(*plVar11 + 0x20) + lVar30 * 0x18 +
                                                   0x10) + 8),pIVar25,bVar6,
                                        (IR_Type **)(plVar11 + 1));
            if (uVar9 == uVar8) {
              plVar24 = plVar11 + 2;
            }
            else {
              uVar10 = (long)plVar11 - (long)plVar26 & 0xfffffffffffffff0;
              plVar24 = (long *)((long)plVar26 + uVar10);
              plVar15 = plVar24 + 2;
              plVar21 = plVar24;
              if (plVar15 != plVar14) {
                uVar10 = (long)plVar14 + (-0x20 - (uVar10 + (long)plVar26));
                if (0x2f < uVar10) {
                  uVar10 = (uVar10 >> 4) + 1;
                  uVar19 = uVar10 & 0x1ffffffffffffffc;
                  plVar21 = plVar24 + uVar19 * 2;
                  plVar15 = plVar15 + uVar19 * 2;
                  plVar11 = plVar26 + ((long)plVar11 - (long)plVar26 >> 4) * 2 + 4;
                  uVar20 = uVar19;
                  do {
                    uVar20 = uVar20 - 4;
                    plVar11[-3] = plVar11[-1];
                    plVar11[-4] = plVar11[-2];
                    plVar11[-1] = plVar11[1];
                    plVar11[-2] = *plVar11;
                    plVar11[1] = plVar11[3];
                    *plVar11 = plVar11[2];
                    plVar11[3] = plVar11[5];
                    plVar11[2] = plVar11[4];
                    plVar11 = plVar11 + 8;
                  } while (uVar20 != 0);
                  if (uVar10 == uVar19) goto LAB_00c59580;
                }
                do {
                  *plVar21 = *plVar15;
                  plVar11 = plVar15 + 1;
                  plVar15 = plVar15 + 2;
                  plVar21[1] = *plVar11;
                  plVar21 = plVar21 + 2;
                } while (plVar15 != plVar14);
              }
LAB_00c59580:
              in_x8[1] = plVar21;
              plVar14 = plVar21;
            }
            plVar11 = plVar24;
          } while (plVar24 != plVar14);
          if ((plVar14 == plVar26) ||
             (local_b8 = (ulong)((int)local_b8 + 1), plVar11 = plVar14,
             (ulong)((long)ppVar27 - (long)local_a0 >> 5) <= local_b8)) break;
        } while( true );
      }
      if (local_a0 != (pair *)0x0) {
LAB_00c595b0:
        operator_delete(local_a0);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


