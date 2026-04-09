// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: colourRegisters
// Entry Point: 00c400c4
// Size: 2652 bytes
// Signature: undefined colourRegisters(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::colourRegisters() */

void IR_Section::colourRegisters(void)

{
  IR_RegisterSet *this;
  ulong uVar1;
  uint uVar2;
  size_t __n;
  long lVar3;
  undefined auVar4 [16];
  ulong *puVar5;
  undefined8 *******pppppppuVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  IR_Function **in_x0;
  long lVar12;
  long lVar13;
  IR_Type *pIVar14;
  ulong *puVar15;
  undefined8 ******ppppppuVar16;
  int iVar17;
  long *plVar18;
  IR_Function *pIVar19;
  uint uVar20;
  long **this_00;
  undefined4 *puVar21;
  undefined8 *******pppppppuVar22;
  int *piVar23;
  undefined8 *******pppppppuVar24;
  uint uVar25;
  ulong *puVar27;
  ulong *puVar28;
  ulong uVar29;
  uint *puVar30;
  undefined8 ******ppppppuVar31;
  ulong __n_00;
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined8 *local_b0;
  undefined8 *******local_a8;
  undefined8 *******local_a0;
  long local_98;
  ulong *local_90;
  ulong *local_88;
  ulong *local_80;
  long local_78;
  ulong uVar26;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  this_00 = (long **)(in_x0 + 4);
  plVar18 = *this_00;
  if ((long *)in_x0[5] != plVar18) {
    uVar26 = 0;
    uVar25 = 0;
    do {
      piVar23 = (int *)plVar18[uVar26];
      iVar7 = *piVar23;
      uVar20 = piVar23[1];
      uVar2 = uVar20 >> 0x10;
      if (iVar7 < 0x1a) {
        if (iVar7 == 2 || iVar7 == 4) {
          if (0xffff < uVar20) {
            uVar8 = uVar2 + 2;
            if (uVar2 < 2) {
              uVar2 = 1;
            }
            uVar26 = (ulong)uVar2;
            puVar30 = (uint *)(piVar23 + 2);
            uVar2 = piVar23[uVar8];
            iVar17 = 4;
            if (iVar7 == 2) {
              iVar17 = 5;
            }
            do {
              uVar26 = uVar26 - 1;
              uVar8 = *puVar30;
              uVar20 = piVar23[iVar17 + (uVar20 >> 0x10)];
              if ((int)uVar8 < 0) {
                this = (IR_RegisterSet *)(*in_x0 + 0x98);
                if ((int)uVar20 < 0) {
                  pIVar14 = (IR_Type *)IR_Function::getConstType(*in_x0,uVar20 & 0x7fffffff);
                }
                else {
                  pIVar14 = (IR_Type *)IR_RegisterSet::getRegisterType(this,uVar20);
                }
                uVar8 = IR_RegisterSet::allocateReg(this,pIVar14,(char *)0x0);
                *puVar30 = uVar8;
                if (-1 < (int)uVar20) goto LAB_00c402bc;
LAB_00c40300:
                local_90 = (ulong *)operator_new__(0x10);
                *local_90 = 0x100010000001a;
                *(uint *)(local_90 + 1) = uVar8;
                *(uint *)((long)local_90 + 0xc) = uVar20;
                std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
                          ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)this_00,
                           (int)*this_00 + uVar25 * 8,(uint **)&local_90);
                if (-1 < (int)uVar20) {
                  IR_RegisterSet::mergeRegisterDetails
                            ((IR_RegisterSet *)(*in_x0 + 0x98),uVar20,uVar8);
                }
                uVar25 = uVar25 + 1;
                piVar23[iVar17 + (uint)*(ushort *)((long)piVar23 + 6)] = uVar8;
              }
              else {
                if ((int)uVar20 < 0) goto LAB_00c40300;
LAB_00c402bc:
                iVar7 = 1;
                if (uVar2 == uVar20) {
                  iVar7 = 2;
                }
                iVar9 = countRegisterReads((IR_Section *)in_x0,uVar20,uVar25);
                if (iVar9 != iVar7) goto LAB_00c40300;
                replaceReg((IR_Section *)in_x0,uVar8,uVar20,uVar25);
              }
              if (uVar26 == 0) break;
              uVar20 = piVar23[1];
              puVar30 = puVar30 + 1;
              iVar17 = iVar17 + 1;
            } while( true );
          }
        }
        else if (iVar7 == 0xf) {
          uVar8 = piVar23[2];
          uVar2 = piVar23[uVar2 + 3];
          iVar7 = countRegisterReads((IR_Section *)in_x0,uVar2,uVar25 + 1);
          if ((-1 < (int)uVar2) && (iVar7 == 0)) goto LAB_00c403a8;
          local_90 = (ulong *)operator_new__(0x10);
          *local_90 = 0x100010000001a;
          *(uint *)(local_90 + 1) = uVar8;
          *(uint *)((long)local_90 + 0xc) = uVar2;
          std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
                    ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)this_00,
                     (int)*this_00 + (int)uVar26 * 8,(uint **)&local_90);
          *(uint *)((long)piVar23 + ((ulong)((uint)piVar23[1] >> 0xe) & 0x3fffc) + 0xc) = uVar8;
          uVar25 = uVar25 + 1;
        }
        else if ((iVar7 == 9) || (iVar7 == 7)) {
          lVar12 = *plVar18;
          local_90 = (ulong *)0x0;
          local_88 = (ulong *)0x0;
          uVar2 = (uVar20 & 0xffff) - (uint)(iVar7 == 7);
          local_80 = (ulong *)0x0;
          if (uVar2 != 0) {
            puVar27 = (ulong *)0x0;
            uVar26 = 0;
            uVar20 = iVar7 == 7 | 2;
            do {
              iVar7 = (int)uVar26;
              uVar8 = piVar23[uVar20 + iVar7 + (uint)*(ushort *)((long)piVar23 + 6)];
              uVar10 = *(uint *)(lVar12 + (ulong)(iVar7 + 2) * 4);
              uVar29 = (ulong)uVar10;
              if ((int)uVar8 < 0) {
                pIVar14 = (IR_Type *)IR_Function::getConstType(*in_x0,uVar8 & 0x7fffffff);
              }
              else {
                    /* try { // try from 00c40460 to 00c404af has its CatchHandler @ 00c40b48 */
                pIVar14 = (IR_Type *)
                          IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*in_x0 + 0x98),uVar8);
              }
              if (((int)uVar10 < 0) &&
                 (iVar17 = *(int *)(*(long *)(*in_x0 + 0x80) + (uVar29 & 0x7fffffff) * 0x18),
                 iVar17 == 0xe || iVar17 == 0)) {
                uVar10 = IR_RegisterSet::allocateReg
                                   ((IR_RegisterSet *)(*in_x0 + 0x98),pIVar14,(char *)0x0);
                uVar29 = (ulong)uVar10;
                *(uint *)(lVar12 + (ulong)(iVar7 + 2) * 4) = uVar10;
              }
              puVar28 = local_90;
              uVar10 = (uint)uVar29;
              if (uVar10 != uVar8) {
                if ((int)uVar8 < 0) {
                    /* try { // try from 00c40528 to 00c4052f has its CatchHandler @ 00c40b2c */
                  local_a8 = (undefined8 *******)operator_new__(0x10);
                  *local_a8 = (undefined8 ******)0x100010000001a;
                  *(uint *)(local_a8 + 1) = uVar10;
                  *(uint *)((long)local_a8 + 0xc) = uVar8;
                    /* try { // try from 00c40548 to 00c40553 has its CatchHandler @ 00c40b30 */
                  std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
                            ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)this_00,
                             (int)*this_00 + uVar25 * 8,(uint **)&local_a8);
                  uVar25 = uVar25 + 1;
                }
                else if (puVar27 == local_80) {
                  __n_00 = (long)puVar27 - (long)local_90;
                  uVar1 = ((long)__n_00 >> 3) + 1;
                  if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00c40b08 to 00c40b1b has its CatchHandler @ 00c40b34 */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  if (uVar1 <= (ulong)((long)__n_00 >> 2)) {
                    uVar1 = (long)__n_00 >> 2;
                  }
                  if (0x7ffffffffffffff7 < __n_00) {
                    uVar1 = 0x1fffffffffffffff;
                  }
                  if (uVar1 == 0) {
                    puVar15 = (ulong *)0x0;
                  }
                  else {
                    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_006d1f18(
                                  "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                  );
                    }
                    /* try { // try from 00c4051c to 00c4051f has its CatchHandler @ 00c40b20 */
                    puVar15 = (ulong *)operator_new(uVar1 << 3);
                  }
                  puVar27 = puVar15 + ((long)__n_00 >> 3) + 1;
                  puVar15[(long)__n_00 >> 3] = uVar29 | (ulong)uVar8 << 0x20;
                  if (0 < (long)__n_00) {
                    memcpy(puVar15,puVar28,__n_00);
                  }
                  local_90 = puVar15;
                  local_88 = puVar27;
                  local_80 = puVar15 + uVar1;
                  if (puVar28 != (ulong *)0x0) {
                    operator_delete(puVar28);
                  }
                }
                else {
                  *puVar27 = uVar29 | (ulong)uVar8 << 0x20;
                  local_88 = puVar27 + 1;
                  puVar27 = puVar27 + 1;
                }
                piVar23[uVar20 + iVar7 + (uint)*(ushort *)((long)piVar23 + 6)] = uVar10;
              }
              uVar26 = uVar26 + 1;
              puVar28 = local_90;
            } while (uVar2 != uVar26);
LAB_00c40618:
            if (puVar27 != puVar28) {
              local_a0 = (undefined8 *******)0x0;
              local_98 = 0;
              pppppppuVar22 = &local_a0;
              pppppppuVar24 = &local_a0;
              puVar15 = puVar28;
              local_a8 = &local_a0;
              if (puVar28 != puVar27) {
LAB_00c40684:
                do {
                  ppppppuVar31 = *pppppppuVar24;
                  while( true ) {
                    if (ppppppuVar31 == (undefined8 ******)0x0) {
                    /* try { // try from 00c4068c to 00c40693 has its CatchHandler @ 00c40b54 */
                      ppppppuVar31 = (undefined8 ******)operator_new(0x28);
                      uVar11 = *(undefined4 *)puVar28;
                      *(undefined *)(ppppppuVar31 + 4) = 0;
                      *ppppppuVar31 = (undefined8 *****)0x0;
                      ppppppuVar31[1] = (undefined8 *****)0x0;
                      ppppppuVar31[2] = pppppppuVar22;
                      *(undefined4 *)((long)ppppppuVar31 + 0x1c) = uVar11;
                      *pppppppuVar24 = ppppppuVar31;
                      ppppppuVar16 = ppppppuVar31;
                      if ((undefined8 *******)*local_a8 != (undefined8 *******)0x0) {
                        ppppppuVar16 = *pppppppuVar24;
                        local_a8 = (undefined8 *******)*local_a8;
                      }
                      std::__ndk1::
                      __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                                ((__tree_node_base *)local_a0,(__tree_node_base *)ppppppuVar16);
                      local_98 = local_98 + 1;
                    }
                    puVar5 = local_88;
                    puVar28 = puVar28 + 1;
                    *(undefined *)(ppppppuVar31 + 4) = 0;
                    if (puVar28 == puVar27) {
                      puVar28 = local_90;
                      puVar15 = local_90;
                      puVar27 = local_90;
                      if (local_90 != local_88) goto LAB_00c4074c;
                      goto LAB_00c408e4;
                    }
                    pppppppuVar22 = &local_a0;
                    pppppppuVar24 = &local_a0;
                    if (local_a0 == (undefined8 *******)0x0) break;
                    pppppppuVar6 = local_a0;
                    do {
                      while (pppppppuVar22 = pppppppuVar6,
                            *(uint *)((long)pppppppuVar22 + 0x1c) <= *(uint *)puVar28) {
                        if (*(uint *)puVar28 <= *(uint *)((long)pppppppuVar22 + 0x1c))
                        goto LAB_00c40684;
                        pppppppuVar24 = pppppppuVar22 + 1;
                        pppppppuVar6 = (undefined8 *******)*pppppppuVar24;
                        if ((undefined8 *******)*pppppppuVar24 == (undefined8 *******)0x0)
                        goto LAB_00c40684;
                      }
                      pppppppuVar6 = (undefined8 *******)*pppppppuVar22;
                      pppppppuVar24 = pppppppuVar22;
                    } while ((undefined8 *******)*pppppppuVar22 != (undefined8 *******)0x0);
                    ppppppuVar31 = *pppppppuVar22;
                  }
                } while( true );
              }
              goto LAB_00c408e4;
            }
            if (puVar28 != (ulong *)0x0) {
              operator_delete(puVar28);
            }
          }
        }
      }
      else {
        uVar8 = piVar23[2];
        uVar2 = piVar23[(ulong)uVar2 + 2];
        if ((int)uVar2 < 0) {
LAB_00c401bc:
          if ((1 < (uVar20 & 0xffff)) &&
             (uVar2 = *(uint *)((long)piVar23 + ((ulong)((uint)piVar23[1] >> 0xe) & 0x3fffc) + 0xc),
             -1 < (int)uVar2)) {
            lVar12 = IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*in_x0 + 0x98),uVar8);
            lVar13 = IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*in_x0 + 0x98),uVar2);
            if ((lVar12 == lVar13) &&
               (iVar7 = countRegisterReads((IR_Section *)in_x0,uVar2,uVar25 + 1), iVar7 == 0))
            goto LAB_00c403a8;
          }
        }
        else {
          lVar12 = IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*in_x0 + 0x98),uVar8);
          lVar13 = IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*in_x0 + 0x98),uVar2);
          if ((lVar12 != lVar13) ||
             (iVar7 = countRegisterReads((IR_Section *)in_x0,uVar2,uVar25 + 1), iVar7 != 0))
          goto LAB_00c401bc;
LAB_00c403a8:
          replaceReg((IR_Section *)in_x0,uVar8,uVar2,uVar25);
        }
      }
      plVar18 = (long *)in_x0[4];
      uVar25 = uVar25 + 1;
      uVar26 = (ulong)uVar25;
    } while (uVar26 < (ulong)((long)in_x0[5] - (long)plVar18 >> 3));
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while( true ) {
    if (ppppppuVar31 == (undefined8 ******)0x0) {
                    /* try { // try from 00c407a8 to 00c407af has its CatchHandler @ 00c40b50 */
      ppppppuVar31 = (undefined8 ******)operator_new(0x28);
      uVar11 = *(undefined4 *)((long)puVar27 + 4);
      *(undefined *)(ppppppuVar31 + 4) = 0;
      *ppppppuVar31 = (undefined8 *****)0x0;
      ppppppuVar31[1] = (undefined8 *****)0x0;
      ppppppuVar31[2] = pppppppuVar22;
      *(undefined4 *)((long)ppppppuVar31 + 0x1c) = uVar11;
      *pppppppuVar24 = ppppppuVar31;
      ppppppuVar16 = ppppppuVar31;
      if ((undefined8 *******)*local_a8 != (undefined8 *******)0x0) {
        ppppppuVar16 = *pppppppuVar24;
        local_a8 = (undefined8 *******)*local_a8;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)local_a0,(__tree_node_base *)ppppppuVar16);
      local_98 = local_98 + 1;
    }
    puVar27 = puVar27 + 1;
    *(undefined *)(ppppppuVar31 + 4) = 1;
    if (puVar27 == puVar5) break;
LAB_00c4074c:
    pppppppuVar22 = &local_a0;
    pppppppuVar24 = &local_a0;
    if (local_a0 == (undefined8 *******)0x0) {
LAB_00c407a0:
      ppppppuVar31 = *pppppppuVar24;
    }
    else {
      pppppppuVar6 = local_a0;
      do {
        while (pppppppuVar22 = pppppppuVar6,
              *(uint *)((long)pppppppuVar22 + 0x1c) <= *(uint *)((long)puVar27 + 4)) {
          if (*(uint *)((long)puVar27 + 4) <= *(uint *)((long)pppppppuVar22 + 0x1c))
          goto LAB_00c407a0;
          pppppppuVar24 = pppppppuVar22 + 1;
          pppppppuVar6 = (undefined8 *******)*pppppppuVar24;
          if ((undefined8 *******)*pppppppuVar24 == (undefined8 *******)0x0) goto LAB_00c407a0;
        }
        pppppppuVar6 = (undefined8 *******)*pppppppuVar22;
        pppppppuVar24 = pppppppuVar22;
      } while ((undefined8 *******)*pppppppuVar22 != (undefined8 *******)0x0);
      ppppppuVar31 = *pppppppuVar22;
    }
  }
  puVar28 = local_90;
  puVar15 = local_90;
  if (local_90 != local_88) {
    do {
      pppppppuVar22 = &local_a0;
      pppppppuVar24 = &local_a0;
      if (local_a0 == (undefined8 *******)0x0) {
LAB_00c40854:
        ppppppuVar31 = *pppppppuVar24;
      }
      else {
        pppppppuVar6 = local_a0;
        do {
          while (pppppppuVar22 = pppppppuVar6,
                *(uint *)((long)pppppppuVar22 + 0x1c) <= *(uint *)puVar28) {
            if (*(uint *)puVar28 <= *(uint *)((long)pppppppuVar22 + 0x1c)) goto LAB_00c40854;
            pppppppuVar24 = pppppppuVar22 + 1;
            pppppppuVar6 = (undefined8 *******)*pppppppuVar24;
            if ((undefined8 *******)*pppppppuVar24 == (undefined8 *******)0x0) goto LAB_00c40854;
          }
          pppppppuVar6 = (undefined8 *******)*pppppppuVar22;
          pppppppuVar24 = pppppppuVar22;
        } while ((undefined8 *******)*pppppppuVar22 != (undefined8 *******)0x0);
        ppppppuVar31 = *pppppppuVar22;
      }
      if (ppppppuVar31 == (undefined8 ******)0x0) {
                    /* try { // try from 00c4085c to 00c40863 has its CatchHandler @ 00c40b40 */
        ppppppuVar31 = (undefined8 ******)operator_new(0x28);
        uVar11 = *(undefined4 *)puVar28;
        *(undefined *)(ppppppuVar31 + 4) = 0;
        *ppppppuVar31 = (undefined8 *****)0x0;
        ppppppuVar31[1] = (undefined8 *****)0x0;
        ppppppuVar31[2] = pppppppuVar22;
        *(undefined4 *)((long)ppppppuVar31 + 0x1c) = uVar11;
        *pppppppuVar24 = ppppppuVar31;
        ppppppuVar16 = ppppppuVar31;
        if ((undefined8 *******)*local_a8 != (undefined8 *******)0x0) {
          ppppppuVar16 = *pppppppuVar24;
          local_a8 = (undefined8 *******)*local_a8;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_a0,(__tree_node_base *)ppppppuVar16);
        local_98 = local_98 + 1;
      }
      if (*(char *)(ppppppuVar31 + 4) == '\0') {
                    /* try { // try from 00c40a68 to 00c40a6f has its CatchHandler @ 00c40b28 */
        local_b0 = (undefined8 *)operator_new__(0x10);
        *local_b0 = 0x100010000001a;
        plVar18 = *this_00;
        *(undefined4 *)(local_b0 + 1) = *(undefined4 *)puVar28;
        *(undefined4 *)((long)local_b0 + 0xc) = *(undefined4 *)((long)puVar28 + 4);
                    /* try { // try from 00c40a94 to 00c40a9f has its CatchHandler @ 00c40b24 */
        std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
                  ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)this_00,
                   (int)plVar18 + uVar25 * 8,(uint **)&local_b0);
        puVar15 = local_90;
        __n = (long)local_88 - (long)(puVar28 + 1);
        if (__n != 0) {
          memmove(puVar28,puVar28 + 1,__n);
        }
        puVar28 = (ulong *)((long)puVar28 + __n);
        local_88 = puVar28;
        goto LAB_00c40608;
      }
      puVar28 = puVar28 + 1;
      puVar15 = local_90;
    } while (puVar28 != local_88);
  }
LAB_00c408e4:
  pIVar19 = *in_x0;
  uVar2 = *(uint *)puVar15;
                    /* try { // try from 00c408f0 to 00c4090b has its CatchHandler @ 00c40b44 */
  pIVar14 = (IR_Type *)IR_RegisterSet::getRegisterType((IR_RegisterSet *)(pIVar19 + 0x98),uVar2);
  uVar11 = IR_RegisterSet::allocateReg((IR_RegisterSet *)(pIVar19 + 0x98),pIVar14,(char *)0x0);
                    /* try { // try from 00c40910 to 00c40917 has its CatchHandler @ 00c40b38 */
  local_b0 = (undefined8 *)operator_new__(0x10);
  *local_b0 = 0x100010000001a;
  *(undefined4 *)(local_b0 + 1) = uVar11;
  *(uint *)((long)local_b0 + 0xc) = uVar2;
                    /* try { // try from 00c40930 to 00c4093b has its CatchHandler @ 00c40b3c */
  std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
            ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)this_00,
             (int)*this_00 + uVar25 * 8,(uint **)&local_b0);
  if (puVar15 != puVar28) {
    uVar26 = (long)puVar28 + (-8 - (long)puVar15);
    puVar27 = puVar15;
    if (0x3f < uVar26) {
      uVar26 = (uVar26 >> 3) + 1;
      uVar29 = 8;
      if ((uVar26 & 7) != 0) {
        uVar29 = uVar26 & 7;
      }
      puVar21 = (undefined4 *)((long)puVar15 + 0x24);
      lVar12 = uVar26 - uVar29;
      puVar27 = puVar15 + lVar12;
      do {
        auVar32._0_4_ = puVar21[-8];
        auVar32._4_4_ = puVar21[-6];
        auVar32._8_4_ = puVar21[-4];
        auVar32._12_4_ = puVar21[-2];
        auVar33._4_4_ = uVar2;
        auVar33._0_4_ = uVar2;
        auVar33._8_4_ = uVar2;
        auVar33._12_4_ = uVar2;
        auVar33 = NEON_cmeq(auVar32,auVar33,4);
        if ((auVar33 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          puVar21[-8] = uVar11;
        }
        if ((auVar33 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
          puVar21[-6] = uVar11;
        }
        if ((auVar33 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          puVar21[-4] = uVar11;
        }
        if ((auVar33 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
          puVar21[-2] = uVar11;
        }
        auVar34._0_4_ = *puVar21;
        auVar34._4_4_ = puVar21[2];
        auVar34._8_4_ = puVar21[4];
        auVar34._12_4_ = puVar21[6];
        auVar4._4_4_ = uVar2;
        auVar4._0_4_ = uVar2;
        auVar4._8_4_ = uVar2;
        auVar4._12_4_ = uVar2;
        auVar33 = NEON_cmeq(auVar34,auVar4,4);
        if ((auVar33 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          *puVar21 = uVar11;
        }
        if ((auVar33 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
          puVar21[2] = uVar11;
        }
        if ((auVar33 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          puVar21[4] = uVar11;
        }
        if ((auVar33 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
          puVar21[6] = uVar11;
        }
        lVar12 = lVar12 + -8;
        puVar21 = puVar21 + 0x10;
      } while (lVar12 != 0);
    }
    do {
      if (*(uint *)((long)puVar27 + 4) == uVar2) {
        *(undefined4 *)((long)puVar27 + 4) = uVar11;
      }
      puVar27 = puVar27 + 1;
    } while (puVar27 != puVar28);
  }
LAB_00c40608:
  uVar25 = uVar25 + 1;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,bool>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,bool>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,bool>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,bool>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,bool>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,bool>>>
             *)&local_a8,(__tree_node *)local_a0);
  puVar27 = puVar28;
  puVar28 = puVar15;
  goto LAB_00c40618;
}


