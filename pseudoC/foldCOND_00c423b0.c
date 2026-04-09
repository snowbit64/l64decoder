// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: foldCOND
// Entry Point: 00c423b0
// Size: 3768 bytes
// Signature: undefined __cdecl foldCOND(uint param_1, vector * param_2, bool param_3, bool param_4)


/* WARNING: Removing unreachable block (ram,0x00c42458) */
/* IR_Section::foldCOND(unsigned int, std::__ndk1::vector<IR_GenValue,
   std::__ndk1::allocator<IR_GenValue> >&, bool, bool) */

void IR_Section::foldCOND(uint param_1,vector *param_2,bool param_3,bool param_4)

{
  bool bVar1;
  undefined8 *******pppppppuVar2;
  long ********pppppppplVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  IR_Const *this;
  IR_Const *pIVar7;
  undefined4 *puVar8;
  undefined8 **ppuVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  IR_Function **this_00;
  long *******ppppppplVar17;
  undefined8 *puVar18;
  vector *pvVar19;
  vector *pvVar20;
  long *plVar21;
  long *plVar22;
  int *piVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *******pppppppuVar26;
  long *plVar27;
  undefined8 *puVar28;
  long ********pppppppplVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined8 *******pppppppuVar32;
  long ********pppppppplVar33;
  uint *puVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  undefined8 uVar38;
  uint uVar39;
  long ********unaff_x20;
  uint uVar40;
  long lVar41;
  uint uVar42;
  size_t sVar43;
  undefined4 uVar44;
  long lVar45;
  undefined8 uVar46;
  long lVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  void *local_160;
  void *local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long *local_120;
  void *local_118;
  ulong local_110;
  long local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long ********local_d0;
  long ********local_c8;
  long local_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 *******local_b0;
  undefined8 uStack_a8;
  undefined8 *******local_a0;
  undefined8 *******local_98;
  undefined8 local_90;
  undefined8 *******local_88;
  undefined8 *******local_80;
  long local_78;
  long local_70;
  
  plVar22 = (long *)(ulong)param_3;
  this_00 = (IR_Function **)(ulong)param_1;
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  lVar41 = *(long *)(this_00[4] + ((ulong)param_2 & 0xffffffff) * 8);
  local_80 = (undefined8 *******)0x0;
  local_78 = 0;
  local_90 = 0;
  local_98 = (undefined8 *******)0x0;
  local_b0 = (undefined8 *******)0x0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_c8 = (long ********)0x0;
  uVar10 = *(uint *)(lVar41 + 4);
  uVar37 = uVar10 >> 0x10;
  lVar30 = (ulong)uVar37 + 2;
  uVar39 = *(uint *)(lVar41 + lVar30 * 4);
  local_d0 = (long ********)&local_c8;
  pppppppuStack_b8 = &local_b0;
  local_a0 = &local_98;
  local_88 = &local_80;
  if (-1 < (int)uVar39) {
                    /* try { // try from 00c42a98 to 00c42a9f has its CatchHandler @ 00c432c0 */
    local_88 = (undefined8 *******)operator_new(0x20);
    *(uint *)((long)local_88 + 0x1c) = uVar39;
    *local_88 = (undefined8 ******)0x0;
    local_88[1] = (undefined8 ******)0x0;
    local_88[2] = &local_80;
    local_80 = local_88;
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_88,(__tree_node_base *)local_88);
    local_78 = local_78 + 1;
    uVar39 = *(uint *)(((ulong)(*(uint *)(lVar41 + 4) >> 0xe) & 0x3fffc) + lVar41 + 8);
    unaff_x20 = (long ********)&local_c8;
    pppppppplVar29 = local_c8;
    while (pppppppplVar33 = unaff_x20, pppppppplVar29 != (long ********)0x0) {
      while (unaff_x20 = pppppppplVar29, *(uint *)((long)unaff_x20 + 0x1c) <= uVar39) {
        if (uVar39 <= *(uint *)((long)unaff_x20 + 0x1c)) goto LAB_00c42464;
        pppppppplVar33 = unaff_x20 + 1;
        pppppppplVar29 = (long ********)*pppppppplVar33;
        if ((long ********)*pppppppplVar33 == (long ********)0x0) goto LAB_00c42464;
      }
      pppppppplVar29 = (long ********)*unaff_x20;
    }
LAB_00c42464:
    if (*pppppppplVar33 == (long *******)0x0) {
                    /* try { // try from 00c4246c to 00c42477 has its CatchHandler @ 00c432bc */
      ppppppplVar17 = (long *******)operator_new(0x20);
      *(uint *)((long)ppppppplVar17 + 0x1c) = uVar39;
      *ppppppplVar17 = (long ******)0x0;
      ppppppplVar17[1] = (long ******)0x0;
      ppppppplVar17[2] = (long ******)unaff_x20;
      *pppppppplVar33 = ppppppplVar17;
      if ((long ********)*local_d0 != (long ********)0x0) {
        ppppppplVar17 = *pppppppplVar33;
        local_d0 = (long ********)*local_d0;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)local_c8,(__tree_node_base *)ppppppplVar17);
      local_c0 = local_c0 + 1;
    }
    uVar37 = (int)param_2 - 1;
                    /* try { // try from 00c424b4 to 00c424db has its CatchHandler @ 00c432dc */
    getTrueAndFalseRegs((IR_Section *)this_00,(set *)&local_88,(set *)&local_a0,uVar37);
    getTrueAndFalseRegs((IR_Section *)this_00,(set *)&pppppppuStack_b8,(set *)&local_d0,uVar37);
    uVar10 = *(uint *)(lVar41 + 4);
    uVar37 = uVar10 >> 0x10;
    lVar30 = (ulong)uVar37 + 2;
  }
  uVar40 = *(uint *)(lVar41 + lVar30 * 4);
  if ((int)uVar40 < 0) {
    piVar23 = (int *)(*(long *)(*this_00 + 0x80) + ((ulong)uVar40 & 0x7fffffff) * 0x18);
  }
  else {
    piVar23 = (int *)(*plVar22 + (ulong)uVar40 * 0x20);
  }
  if (*piVar23 == 0) {
    bVar1 = false;
    bVar14 = false;
  }
  else {
    bVar14 = *(char *)(piVar23 + 2) == '\0';
    bVar1 = !bVar14;
  }
  local_e8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = (long *)0x0;
  local_100 = (undefined8 *)0x0;
  local_f8 = (undefined8 *)0x0;
  local_f0 = (undefined8 *)0x0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_108 = 0;
  if (3 < (uVar10 & 0xffff)) {
    uVar40 = 3;
    do {
      uVar42 = *(uint *)(lVar41 + ((ulong)*(ushort *)(lVar41 + 6) + (ulong)uVar40) * 4 + 8);
      if ((int)uVar42 < 0) {
        iVar11 = *(int *)(*(long *)(*this_00 + 0x80) + ((ulong)uVar42 & 0x7fffffff) * 0x18);
        bVar13 = iVar11 == 0xe || iVar11 == 0;
      }
      else {
        bVar13 = false;
      }
      if (local_110 == local_108 * 0x40) {
        if ((long)(local_110 + 1) < 0) {
                    /* try { // try from 00c4320c to 00c43213 has its CatchHandler @ 00c43334 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (local_110 < 0x3fffffffffffffff) {
          uVar24 = local_110 + 0x40 & 0xffffffffffffffc0;
          if (uVar24 <= (ulong)(local_108 << 7)) {
            uVar24 = local_108 << 7;
          }
        }
        else {
          uVar24 = 0x7fffffffffffffff;
        }
                    /* try { // try from 00c4263c to 00c42643 has its CatchHandler @ 00c4332c */
        std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::reserve
                  ((vector<bool,std::__ndk1::allocator<bool>> *)&local_118,uVar24);
      }
      uVar24 = local_110 + 1;
      uVar36 = local_110 >> 6;
      uVar25 = 1L << (local_110 & 0x3f);
      uVar16 = uVar42;
      local_110 = uVar24;
      if (bVar13) {
        *(ulong *)((long)local_118 + uVar36 * 8) = *(ulong *)((long)local_118 + uVar36 * 8) | uVar25
        ;
        if ((int)uVar42 < 0) goto LAB_00c42828;
LAB_00c4268c:
        pppppppuVar26 = &local_80;
        pppppppuVar32 = local_80;
        if (local_80 == (undefined8 *******)0x0) {
LAB_00c426c8:
          pppppppuVar26 = &local_98;
          pppppppuVar32 = local_98;
          uVar15 = uVar42;
          if (local_98 != (undefined8 *******)0x0) {
            do {
              bVar13 = *(uint *)((long)pppppppuVar32 + 0x1c) < uVar42;
              if (!bVar13) {
                pppppppuVar26 = pppppppuVar32;
              }
              pppppppuVar2 = pppppppuVar32 + bVar13;
              pppppppuVar32 = (undefined8 *******)*pppppppuVar2;
            } while ((undefined8 *******)*pppppppuVar2 != (undefined8 *******)0x0);
            if (((undefined8 ********)pppppppuVar26 != &local_98) &&
               (*(uint *)((long)pppppppuVar26 + 0x1c) <= uVar42)) {
              uStack_128 = (long *)((ulong)uStack_128._1_7_ << 8);
              local_130 = (long *)CONCAT44(local_130._4_4_,9);
                    /* try { // try from 00c42720 to 00c427fb has its CatchHandler @ 00c43324 */
              uVar15 = IR_Function::storeConst(*this_00,(IR_Const *)&local_130);
              goto LAB_00c42748;
            }
          }
        }
        else {
          do {
            bVar13 = *(uint *)((long)pppppppuVar32 + 0x1c) < uVar42;
            if (!bVar13) {
              pppppppuVar26 = pppppppuVar32;
            }
            pppppppuVar2 = pppppppuVar32 + bVar13;
            pppppppuVar32 = (undefined8 *******)*pppppppuVar2;
          } while ((undefined8 *******)*pppppppuVar2 != (undefined8 *******)0x0);
          if (((undefined8 ********)pppppppuVar26 == &local_80) ||
             (uVar42 < *(uint *)((long)pppppppuVar26 + 0x1c))) goto LAB_00c426c8;
          local_130 = (long *)CONCAT44(local_130._4_4_,9);
          uStack_128 = (long *)CONCAT71(uStack_128._1_7_,1);
          uVar15 = IR_Function::storeConst(*this_00,(IR_Const *)&local_130);
LAB_00c42748:
          uVar15 = uVar15 | 0x80000000;
        }
        pppppppuVar26 = &local_b0;
        pppppppuVar32 = local_b0;
        if (local_b0 == (undefined8 *******)0x0) {
LAB_00c42788:
          pppppppplVar29 = (long ********)&local_c8;
          pppppppplVar33 = local_c8;
          if (local_c8 != (long ********)0x0) {
            do {
              bVar13 = *(uint *)((long)pppppppplVar33 + 0x1c) < uVar42;
              if (!bVar13) {
                pppppppplVar29 = pppppppplVar33;
              }
              pppppppplVar3 = pppppppplVar33 + bVar13;
              pppppppplVar33 = (long ********)*pppppppplVar3;
            } while ((long ********)*pppppppplVar3 != (long ********)0x0);
            if (((long *********)pppppppplVar29 != &local_c8) &&
               (*(uint *)((long)pppppppplVar29 + 0x1c) <= uVar42)) {
              uStack_128 = (long *)((ulong)uStack_128._1_7_ << 8);
              local_130 = (long *)CONCAT44(local_130._4_4_,9);
              uVar16 = IR_Function::storeConst(*this_00,(IR_Const *)&local_130);
              goto LAB_00c427fc;
            }
          }
        }
        else {
          do {
            bVar13 = *(uint *)((long)pppppppuVar32 + 0x1c) < uVar42;
            if (!bVar13) {
              pppppppuVar26 = pppppppuVar32;
            }
            pppppppuVar2 = pppppppuVar32 + bVar13;
            pppppppuVar32 = (undefined8 *******)*pppppppuVar2;
          } while ((undefined8 *******)*pppppppuVar2 != (undefined8 *******)0x0);
          if (((undefined8 ********)pppppppuVar26 == &local_b0) ||
             (uVar42 < *(uint *)((long)pppppppuVar26 + 0x1c))) goto LAB_00c42788;
          local_130 = (long *)CONCAT44(local_130._4_4_,9);
          uStack_128 = (long *)CONCAT71(uStack_128._1_7_,1);
          uVar16 = IR_Function::storeConst(*this_00,(IR_Const *)&local_130);
LAB_00c427fc:
          uVar16 = uVar16 | 0x80000000;
        }
        uVar42 = uVar15;
        if ((int)uVar15 < 0) goto LAB_00c42828;
        plVar27 = (long *)(*plVar22 + (ulong)uVar15 * 0x20);
        uStack_128 = (long *)plVar27[1];
        local_130 = (long *)*plVar27;
        local_120 = (long *)plVar27[2];
        uVar44 = *(undefined4 *)(plVar27 + 3);
        uVar39 = *(uint *)((long)plVar27 + 0x1c);
      }
      else {
        *(ulong *)((long)local_118 + uVar36 * 8) =
             *(ulong *)((long)local_118 + uVar36 * 8) & (uVar25 ^ 0xffffffffffffffff);
        if (-1 < (int)uVar42) goto LAB_00c4268c;
LAB_00c42828:
        uVar44 = 0xffffffff;
        plVar27 = (long *)(*(long *)(*this_00 + 0x80) + (ulong)(uVar42 & 0x7fffffff) * 0x18);
        uStack_128 = (long *)plVar27[1];
        local_130 = (long *)*plVar27;
        local_120 = (long *)plVar27[2];
      }
      plVar27 = local_e8;
      if (local_e0 < local_d8) {
        *(undefined4 *)(local_e0 + 3) = uVar44;
        *(uint *)((long)local_e0 + 0x1c) = uVar39;
        local_e0[1] = (long)uStack_128;
        *local_e0 = (long)local_130;
        local_e0[2] = (long)local_120;
        local_e0 = local_e0 + 4;
      }
      else {
        sVar43 = (long)local_e0 - (long)local_e8;
        uVar24 = ((long)sVar43 >> 5) + 1;
        if (uVar24 >> 0x3b != 0) {
                    /* try { // try from 00c43220 to 00c43227 has its CatchHandler @ 00c43338 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar25 = (long)local_d8 - (long)local_e8 >> 4;
        if (uVar24 <= uVar25) {
          uVar24 = uVar25;
        }
        if (0x7fffffffffffffdf < (ulong)((long)local_d8 - (long)local_e8)) {
          uVar24 = 0x7ffffffffffffff;
        }
        if (uVar24 >> 0x3b != 0) {
                    /* try { // try from 00c43230 to 00c4323b has its CatchHandler @ 00c43338 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00c428c4 to 00c428c7 has its CatchHandler @ 00c43330 */
        plVar21 = (long *)operator_new(uVar24 << 5);
        plVar4 = plVar21 + ((long)sVar43 >> 5) * 4;
        *(undefined4 *)(plVar4 + 3) = uVar44;
        *(uint *)((long)plVar4 + 0x1c) = uVar39;
        plVar4[1] = (long)uStack_128;
        *plVar4 = (long)local_130;
        plVar4[2] = (long)local_120;
        if (0 < (long)sVar43) {
          memcpy(plVar21,plVar27,sVar43);
        }
        local_e0 = plVar4 + 4;
        local_d8 = plVar21 + uVar24 * 4;
        local_e8 = plVar21;
        if (plVar27 != (long *)0x0) {
          operator_delete(plVar27);
        }
      }
      puVar31 = local_100;
      if ((int)uVar16 < 0) {
        uVar44 = 0xffffffff;
        puVar28 = (undefined8 *)(*(long *)(*this_00 + 0x80) + (ulong)(uVar16 & 0x7fffffff) * 0x18);
        uStack_128 = (long *)puVar28[1];
        local_130 = (long *)*puVar28;
        local_120 = (long *)puVar28[2];
      }
      else {
        puVar28 = (undefined8 *)(*plVar22 + (ulong)uVar16 * 0x20);
        uStack_128 = (long *)puVar28[1];
        local_130 = (long *)*puVar28;
        local_120 = (long *)puVar28[2];
        uVar44 = *(undefined4 *)(puVar28 + 3);
        unaff_x20 = (long ********)(ulong)*(uint *)((long)puVar28 + 0x1c);
      }
      if (local_f8 < local_f0) {
        *(undefined4 *)(local_f8 + 3) = uVar44;
        *(int *)((long)local_f8 + 0x1c) = (int)unaff_x20;
        local_f8[1] = uStack_128;
        *local_f8 = local_130;
        local_f8[2] = local_120;
        local_f8 = local_f8 + 4;
      }
      else {
        sVar43 = (long)local_f8 - (long)local_100;
        uVar24 = ((long)sVar43 >> 5) + 1;
        if (uVar24 >> 0x3b != 0) {
                    /* try { // try from 00c43228 to 00c4322f has its CatchHandler @ 00c4333c */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar25 = (long)local_f0 - (long)local_100 >> 4;
        if (uVar24 <= uVar25) {
          uVar24 = uVar25;
        }
        if (0x7fffffffffffffdf < (ulong)((long)local_f0 - (long)local_100)) {
          uVar24 = 0x7ffffffffffffff;
        }
        if (uVar24 >> 0x3b != 0) {
                    /* try { // try from 00c43214 to 00c4321f has its CatchHandler @ 00c4333c */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00c429c4 to 00c429c7 has its CatchHandler @ 00c43328 */
        puVar18 = (undefined8 *)operator_new(uVar24 << 5);
        puVar28 = puVar18 + ((long)sVar43 >> 5) * 4;
        *(undefined4 *)(puVar28 + 3) = uVar44;
        *(int *)((long)puVar28 + 0x1c) = (int)unaff_x20;
        puVar28[1] = uStack_128;
        *puVar28 = local_130;
        puVar28[2] = local_120;
        if (0 < (long)sVar43) {
          memcpy(puVar18,puVar31,sVar43);
        }
        local_f8 = puVar28 + 4;
        local_f0 = puVar18 + uVar24 * 4;
        local_100 = puVar18;
        if (puVar31 != (undefined8 *)0x0) {
          operator_delete(puVar31);
        }
      }
      uVar40 = uVar40 + 1;
    } while (uVar40 != (uVar10 & 0xffff));
  }
                    /* try { // try from 00c42a34 to 00c42a3b has its CatchHandler @ 00c432d8 */
  pvVar19 = (vector *)
            IR_InstructionSequence::getSection
                      ((IR_InstructionSequence *)this_00,
                       *(uint *)(((ulong)(*(uint *)(lVar41 + 4) >> 0xe) & 0x3fffc) + lVar41 + 0xc));
                    /* try { // try from 00c42a54 to 00c42a5b has its CatchHandler @ 00c432d4 */
  pvVar20 = (vector *)
            IR_InstructionSequence::getSection
                      ((IR_InstructionSequence *)this_00,
                       *(uint *)(((ulong)(*(uint *)(lVar41 + 4) >> 0xe) & 0x3fffc) + lVar41 + 0x10))
  ;
  local_130 = (long *)0x0;
  uStack_128 = (long *)0x0;
  local_120 = (long *)0x0;
  if (!bVar14) {
    if (pvVar19 == (vector *)0x0) {
      if (0xffff < uVar10) {
        uVar39 = uVar37;
        if (uVar37 < 2) {
          uVar39 = 1;
        }
        lVar30 = (ulong)uVar39 - 1;
        plVar27 = local_e8;
        do {
          plVar4 = local_130;
          uVar25 = (long)local_120 - (long)local_130;
          uVar24 = ((long)uVar25 >> 5) + 1;
          if (uVar24 >> 0x3b != 0) {
                    /* try { // try from 00c4323c to 00c43243 has its CatchHandler @ 00c43304 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar24 <= (ulong)((long)uVar25 >> 4)) {
            uVar24 = (long)uVar25 >> 4;
          }
          if (0x7fffffffffffffdf < uVar25) {
            uVar24 = 0x7ffffffffffffff;
          }
          if (uVar24 == 0) {
            plVar21 = (long *)0x0;
          }
          else {
            if (uVar24 >> 0x3b != 0) {
                    /* try { // try from 00c4324c to 00c43257 has its CatchHandler @ 00c43304 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00c42bc4 to 00c42bc7 has its CatchHandler @ 00c432d0 */
            plVar21 = (long *)operator_new(uVar24 << 5);
          }
          lVar47 = *plVar27;
          lVar45 = plVar27[3];
          lVar35 = plVar27[2];
          plVar5 = plVar21 + ((long)uVar25 >> 5) * 4;
          plVar5[1] = plVar27[1];
          *plVar5 = lVar47;
          plVar5[3] = lVar45;
          plVar5[2] = lVar35;
          if (0 < (long)uVar25) {
            memcpy(plVar21,plVar4,uVar25);
          }
          uStack_128 = plVar5 + 4;
          local_120 = plVar21 + uVar24 * 4;
          local_130 = plVar21;
          plVar21 = plVar27;
          if (plVar4 != (long *)0x0) {
            operator_delete(plVar4);
          }
          while( true ) {
            if (lVar30 == 0) goto LAB_00c42c18;
            plVar27 = plVar21 + 4;
            lVar30 = lVar30 + -1;
            if (uStack_128 == local_120) break;
            lVar35 = *plVar27;
            lVar47 = plVar21[7];
            lVar45 = plVar21[6];
            uStack_128[1] = plVar21[5];
            *uStack_128 = lVar35;
            uStack_128[3] = lVar47;
            uStack_128[2] = lVar45;
            plVar21 = plVar27;
            uStack_128 = uStack_128 + 4;
          }
        } while( true );
      }
    }
    else {
                    /* try { // try from 00c42a74 to 00c42a93 has its CatchHandler @ 00c432c4 */
      executeConstantFolding
                (pvVar19,(vector *)plVar22,(vector *)&local_e8,SUB81(&local_130,0),false);
    }
  }
LAB_00c42c18:
  local_148 = (undefined8 *)0x0;
  local_140 = (undefined8 *)0x0;
  local_138 = (undefined8 *)0x0;
  if (!bVar1) {
    if (pvVar20 == (vector *)0x0) {
      if (0xffff < uVar10) {
        uVar39 = uVar37;
        if (uVar37 < 2) {
          uVar39 = 1;
        }
        lVar30 = (ulong)uVar39 - 1;
        puVar31 = local_100;
        do {
          puVar28 = local_148;
          uVar25 = (long)local_138 - (long)local_148;
          uVar24 = ((long)uVar25 >> 5) + 1;
          if (uVar24 >> 0x3b != 0) {
                    /* try { // try from 00c43244 to 00c4324b has its CatchHandler @ 00c432e4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar24 <= (ulong)((long)uVar25 >> 4)) {
            uVar24 = (long)uVar25 >> 4;
          }
          if (0x7fffffffffffffdf < uVar25) {
            uVar24 = 0x7ffffffffffffff;
          }
          if (uVar24 == 0) {
            puVar18 = (undefined8 *)0x0;
          }
          else {
            if (uVar24 >> 0x3b != 0) {
                    /* try { // try from 00c43258 to 00c43263 has its CatchHandler @ 00c432e4 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00c42cf0 to 00c42cf3 has its CatchHandler @ 00c432cc */
            puVar18 = (undefined8 *)operator_new(uVar24 << 5);
          }
          uVar48 = *puVar31;
          uVar46 = puVar31[3];
          uVar38 = puVar31[2];
          puVar6 = puVar18 + ((long)uVar25 >> 5) * 4;
          puVar6[1] = puVar31[1];
          *puVar6 = uVar48;
          puVar6[3] = uVar46;
          puVar6[2] = uVar38;
          if (0 < (long)uVar25) {
            memcpy(puVar18,puVar28,uVar25);
          }
          local_148 = puVar18;
          local_140 = puVar6 + 4;
          local_138 = puVar18 + uVar24 * 4;
          puVar18 = puVar31;
          if (puVar28 != (undefined8 *)0x0) {
            operator_delete(puVar28);
          }
          while( true ) {
            if (lVar30 == 0) goto LAB_00c42d44;
            puVar31 = puVar18 + 4;
            lVar30 = lVar30 + -1;
            if (local_140 == local_138) break;
            uVar38 = *puVar31;
            uVar48 = puVar18[7];
            uVar46 = puVar18[6];
            local_140[1] = puVar18[5];
            *local_140 = uVar38;
            local_140[3] = uVar48;
            local_140[2] = uVar46;
            local_140 = local_140 + 4;
            puVar18 = puVar31;
          }
        } while( true );
      }
    }
    else {
                    /* try { // try from 00c42c2c to 00c42c4b has its CatchHandler @ 00c432c8 */
      executeConstantFolding
                (pvVar20,(vector *)plVar22,(vector *)&local_100,SUB81(&local_148,0),false);
    }
LAB_00c42d44:
    if (!bVar14) {
      if (0xffff < uVar10) {
        lVar30 = 0;
        uVar24 = 0;
        if (uVar37 < 2) {
          uVar37 = 1;
        }
        do {
          uVar39 = *(uint *)(lVar41 + 8 + uVar24 * 4);
          uVar25 = (ulong)uVar39;
          if (-1 < (int)uVar39) {
            uVar36 = *(ulong *)((long)local_118 + (uVar24 >> 3 & 0x1ffffffffffffff8)) &
                     1L << (uVar24 & 0x3f);
            if ((pvVar19 == (vector *)0x0) && (uVar36 != 0)) {
              puVar31 = (undefined8 *)((long)local_148 + lVar30);
              uVar46 = *puVar31;
              puVar28 = (undefined8 *)(*plVar22 + uVar25 * 0x20);
              uVar38 = puVar31[2];
              if (*(uint *)(puVar31 + 3) == 0xffffffff || *(int *)puVar31 != 0) {
                uVar39 = *(uint *)(puVar31 + 3);
              }
              puVar28[1] = puVar31[1];
              *puVar28 = uVar46;
              puVar28[2] = uVar38;
              *(uint *)(puVar28 + 3) = uVar39;
            }
            else if ((pvVar20 == (vector *)0x0) && (uVar36 != 0)) {
              puVar31 = (undefined8 *)((long)local_130 + lVar30);
              uVar46 = *puVar31;
              puVar28 = (undefined8 *)(*plVar22 + uVar25 * 0x20);
              uVar38 = puVar31[2];
              if (*(uint *)(puVar31 + 3) == 0xffffffff || *(int *)((long)local_130 + lVar30) != 0) {
                uVar39 = *(uint *)(puVar31 + 3);
              }
              puVar28[1] = puVar31[1];
              *puVar28 = uVar46;
              puVar28[2] = uVar38;
              *(uint *)(puVar28 + 3) = uVar39;
            }
            else {
              if ((*(int *)((long)local_130 + lVar30) == 0) ||
                 (*(int *)((long)local_148 + lVar30) == 0)) {
LAB_00c4319c:
                if (((*(int *)((long)local_130 + lVar30) != 0) ||
                    (*(int *)((long)local_148 + lVar30) != 0)) ||
                   (puVar31 = (undefined8 *)((long)local_130 + lVar30),
                   *(int *)(puVar31 + 3) != *(int *)((long)local_148 + lVar30 + 0x18))) {
                  puVar8 = (undefined4 *)(*plVar22 + uVar25 * 0x20);
                  *puVar8 = 0;
                  *(undefined8 *)(puVar8 + 4) = 0;
                  puVar8[6] = uVar39;
                  goto LAB_00c430cc;
                }
                uVar46 = *(undefined8 *)((long)puVar31 + 0x14);
                uVar38 = *(undefined8 *)((long)puVar31 + 0xc);
                lVar35 = *plVar22;
              }
              else {
                this = (IR_Const *)((long)local_130 + lVar30);
                pIVar7 = (IR_Const *)((long)local_148 + lVar30);
                uVar36 = IR_Const::operator==(this,pIVar7);
                if (((uVar36 & 1) == 0) || (*(long *)(this + 0x10) != *(long *)(pIVar7 + 0x10)))
                goto LAB_00c4319c;
                puVar31 = (undefined8 *)((long)local_130 + lVar30);
                lVar35 = *plVar22;
                uVar46 = *(undefined8 *)((long)puVar31 + 0x14);
                uVar38 = *(undefined8 *)((long)puVar31 + 0xc);
              }
              puVar28 = (undefined8 *)(lVar35 + uVar25 * 0x20);
              uVar49 = puVar31[1];
              uVar48 = *puVar31;
              *(undefined8 *)((long)puVar28 + 0x14) = uVar46;
              *(undefined8 *)((long)puVar28 + 0xc) = uVar38;
              puVar28[1] = uVar49;
              *puVar28 = uVar48;
            }
          }
LAB_00c430cc:
          uVar24 = uVar24 + 1;
          lVar30 = lVar30 + 0x20;
        } while ((ulong)uVar37 * 0x20 - lVar30 != 0);
      }
      if (param_4) {
        if (local_e0 != local_e8) {
          uVar24 = 0;
          do {
            uVar25 = (ulong)((int)uVar24 + 1);
            plVar27 = local_e8 + uVar24 * 4;
            iVar11 = *(int *)(plVar27 + 3);
            if (iVar11 != -1 && *(int *)plVar27 == 0) {
              iVar11 = -1;
            }
            *(int *)(plVar27 + 3) = iVar11;
            puVar31 = local_100 + uVar24 * 4;
            iVar11 = *(int *)(puVar31 + 3);
            if (iVar11 != -1 && *(int *)puVar31 == 0) {
              iVar11 = -1;
            }
            *(int *)(puVar31 + 3) = iVar11;
            uVar24 = uVar25;
          } while (uVar25 < (ulong)((long)local_e0 - (long)local_e8 >> 5));
        }
        if (pvVar19 != (vector *)0x0) {
          local_160 = (void *)0x0;
          local_158 = (void *)0x0;
          local_150 = 0;
                    /* try { // try from 00c42f10 to 00c42f2f has its CatchHandler @ 00c4326c */
          executeConstantFolding
                    (pvVar19,(vector *)plVar22,(vector *)&local_e8,SUB81(&local_160,0),true);
          if (local_160 != (void *)0x0) {
            local_158 = local_160;
            operator_delete(local_160);
          }
        }
        if (pvVar20 != (vector *)0x0) {
          local_160 = (void *)0x0;
          local_158 = (void *)0x0;
          local_150 = 0;
                    /* try { // try from 00c42f4c to 00c42f6b has its CatchHandler @ 00c43268 */
          executeConstantFolding
                    (pvVar20,(vector *)plVar22,(vector *)&local_100,SUB81(&local_160,0),true);
          if (local_160 != (void *)0x0) {
            local_158 = local_160;
            operator_delete(local_160);
          }
        }
      }
      goto LAB_00c42fc0;
    }
  }
  if (0xffff < uVar10) {
    lVar30 = 0;
    if (uVar37 < 2) {
      uVar37 = 1;
    }
    puVar34 = (uint *)(lVar41 + 8);
    do {
      uVar39 = *puVar34;
      if (-1 < (int)uVar39) {
        ppuVar9 = (undefined8 **)&local_130;
        if (!bVar1) {
          ppuVar9 = &local_148;
        }
        puVar31 = (undefined8 *)((long)*ppuVar9 + lVar30);
        uVar46 = *puVar31;
        puVar28 = (undefined8 *)(*plVar22 + (ulong)uVar39 * 0x20);
        uVar38 = puVar31[2];
        if (*(uint *)(puVar31 + 3) == 0xffffffff || *(int *)puVar31 != 0) {
          uVar39 = *(uint *)(puVar31 + 3);
        }
        puVar28[1] = puVar31[1];
        *puVar28 = uVar46;
        puVar28[2] = uVar38;
        *(uint *)(puVar28 + 3) = uVar39;
      }
      lVar30 = lVar30 + 0x20;
      puVar34 = puVar34 + 1;
    } while ((ulong)uVar37 * 0x20 - lVar30 != 0);
  }
  if (param_4) {
    if (local_e0 != local_e8) {
      uVar24 = 0;
      do {
        uVar25 = (ulong)((int)uVar24 + 1);
        plVar27 = local_e8 + uVar24 * 4;
        iVar11 = *(int *)(plVar27 + 3);
        if (iVar11 != -1 && *(int *)plVar27 == 0) {
          iVar11 = -1;
        }
        *(int *)(plVar27 + 3) = iVar11;
        puVar31 = local_100 + uVar24 * 4;
        iVar11 = *(int *)(puVar31 + 3);
        if (iVar11 != -1 && *(int *)puVar31 == 0) {
          iVar11 = -1;
        }
        *(int *)(puVar31 + 3) = iVar11;
        uVar24 = uVar25;
      } while (uVar25 < (ulong)((long)local_e0 - (long)local_e8 >> 5));
    }
    if ((bool)(bVar1 & pvVar19 != (vector *)0x0)) {
      uStack_128 = local_130;
                    /* try { // try from 00c42de0 to 00c42dff has its CatchHandler @ 00c432c8 */
      executeConstantFolding(pvVar19,(vector *)plVar22,(vector *)&local_e8,SUB81(&local_130,0),true)
      ;
    }
    else if (!(bool)(bVar14 ^ 1U | pvVar20 == (vector *)0x0)) {
      local_140 = local_148;
                    /* try { // try from 00c42fa0 to 00c42fbf has its CatchHandler @ 00c432c8 */
      executeConstantFolding
                (pvVar20,(vector *)plVar22,(vector *)&local_100,SUB81(&local_148,0),true);
    }
  }
LAB_00c42fc0:
  if (local_148 != (undefined8 *)0x0) {
    local_140 = local_148;
    operator_delete(local_148);
  }
  if (local_130 != (long *)0x0) {
    uStack_128 = local_130;
    operator_delete(local_130);
  }
  if (local_118 != (void *)0x0) {
    operator_delete(local_118);
  }
  if (local_100 != (undefined8 *)0x0) {
    operator_delete(local_100);
  }
  if (local_e8 != (long *)0x0) {
    operator_delete(local_e8);
  }
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::destroy
            ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
              *)&local_d0,(__tree_node *)local_c8);
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::destroy
            ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
              *)&pppppppuStack_b8,(__tree_node *)local_b0);
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::destroy
            ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
              *)&local_a0,(__tree_node *)local_98);
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::destroy
            ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
              *)&local_88,(__tree_node *)local_80);
  if (*(long *)(lVar12 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


