// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeRedundantCOND
// Entry Point: 00c4832c
// Size: 2580 bytes
// Signature: undefined __thiscall removeRedundantCOND(IR_Section * this, bool param_1)


/* IR_Section::removeRedundantCOND(bool) */

uint __thiscall IR_Section::removeRedundantCOND(IR_Section *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  IR_Section *this_00;
  IR_Section *pIVar8;
  vector *pvVar9;
  vector *pvVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  size_t sVar24;
  uint *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint local_114;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined4 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *puStack_d8;
  undefined8 *local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  IR_InstructionSequence aIStack_a8 [32];
  long local_88;
  long lStack_80;
  undefined8 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar23 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) == lVar23) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar15 = 0;
    uVar22 = 1;
    do {
      piVar19 = *(int **)(lVar23 + uVar15 * 8);
      if (*piVar19 == 4) {
        pIVar8 = (IR_Section *)
                 IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)this,
                            *(uint *)((long)piVar19 +
                                     ((ulong)((uint)piVar19[1] >> 0xe) & 0x3fffc) + 0xc));
LAB_00c483a0:
        uVar5 = removeRedundantCOND(pIVar8,param_1);
        uVar13 = uVar13 | uVar5;
      }
      else if (*piVar19 == 2) {
        this_00 = (IR_Section *)
                  IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)this,
                             *(uint *)((long)piVar19 +
                                      ((ulong)((uint)piVar19[1] >> 0xe) & 0x3fffc) + 0xc));
        pIVar8 = (IR_Section *)
                 IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)this,
                            *(uint *)((long)piVar19 +
                                     ((ulong)((uint)piVar19[1] >> 0xe) & 0x3fffc) + 0x10));
        if (this_00 != (IR_Section *)0x0) {
          uVar5 = removeRedundantCOND(this_00,param_1);
          uVar13 = uVar13 | uVar5;
        }
        if (pIVar8 != (IR_Section *)0x0) goto LAB_00c483a0;
      }
      lVar23 = *(long *)(this + 0x20);
      bVar4 = uVar22 < (ulong)(*(long *)(this + 0x28) - lVar23 >> 3);
      uVar15 = uVar22;
      uVar22 = (ulong)((int)uVar22 + 1);
    } while (bVar4);
  }
  IR_InstructionSequence::IR_InstructionSequence(aIStack_a8,*(IR_Function **)this);
  lVar23 = *(long *)(this + 0x28);
  lVar18 = lVar23;
  if (lVar23 != *(long *)(this + 0x20)) {
    uVar15 = 0;
    local_114 = 0;
    lVar23 = *(long *)(this + 0x20);
    do {
      puVar20 = *(uint **)(lVar23 + uVar15 * 8);
      if (*puVar20 == 2) {
        uVar5 = puVar20[(ulong)(puVar20[1] >> 0x10) + 2];
        if ((int)uVar5 < 0) {
          local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,9);
          local_b8 = (undefined8 *)CONCAT71(local_b8._1_7_,1);
                    /* try { // try from 00c4870c to 00c48737 has its CatchHandler @ 00c48d9c */
          uVar7 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)&local_c0);
          uVar13 = 3;
          if (uVar5 != (uVar7 | 0x80000000)) {
            uVar13 = 4;
          }
          pIVar8 = (IR_Section *)
                   IR_InstructionSequence::getSection
                             ((IR_InstructionSequence *)this,
                              puVar20[(ulong)*(ushort *)((long)puVar20 + 6) + (ulong)uVar13]);
          if (pIVar8 == (IR_Section *)0x0) {
            uVar13 = puVar20[1];
            if (0xffff < uVar13) {
              uVar5 = uVar13 >> 0x10;
                    /* try { // try from 00c48910 to 00c4891b has its CatchHandler @ 00c48dc0 */
              for (lVar23 = 0;
                  IR_InstructionSequence::emit
                            (aIStack_a8,0x1a,puVar20[lVar23 + 2],
                             puVar20[(int)lVar23 + (uVar13 >> 0x10) + 5]),
                  (ulong)uVar5 - 1 != lVar23; lVar23 = lVar23 + 1) {
                uVar13 = puVar20[1];
              }
            }
          }
          else {
            plVar14 = *(long **)(pIVar8 + 0x20);
            lVar23 = *(long *)(pIVar8 + 0x28);
            lVar18 = *plVar14;
            lVar21 = *(long *)(lVar23 + -8);
            if (0xffff < *(uint *)(lVar18 + 4)) {
              uVar15 = 0;
              do {
                    /* try { // try from 00c48774 to 00c4877f has its CatchHandler @ 00c48e10 */
                IR_InstructionSequence::emit
                          (aIStack_a8,0x1a,*(uint *)(lVar18 + 8 + uVar15 * 4),
                           puVar20[(int)uVar15 + (uint)*(ushort *)((long)puVar20 + 6) + 5]);
                uVar15 = uVar15 + 1;
              } while (uVar15 < *(ushort *)(lVar18 + 6));
              plVar14 = *(long **)(pIVar8 + 0x20);
              lVar23 = *(long *)(pIVar8 + 0x28);
            }
            if ((lVar23 - (long)plVar14 >> 3) - 3U < 0xfffffffffffffffe) {
              uVar15 = 1;
              do {
                    /* try { // try from 00c487b0 to 00c487b7 has its CatchHandler @ 00c48e0c */
                IR_InstructionSequence::emit(aIStack_a8,(uint *)plVar14[uVar15]);
                plVar14 = *(long **)(pIVar8 + 0x20);
                uVar15 = (ulong)((int)uVar15 + 1);
              } while (uVar15 < (*(long *)(pIVar8 + 0x28) - (long)plVar14 >> 3) - 1U);
            }
            uVar13 = *(uint *)(lVar21 + 4);
            if ((uVar13 & 0xffff) != 0) {
              lVar23 = 2;
              do {
                    /* try { // try from 00c487f8 to 00c48803 has its CatchHandler @ 00c48e14 */
                IR_InstructionSequence::emit
                          (aIStack_a8,0x1a,puVar20[lVar23],
                           *(uint *)(lVar21 + (ulong)((int)lVar23 + (uVar13 >> 0x10)) * 4));
                uVar13 = *(uint *)(lVar21 + 4);
                uVar15 = lVar23 - 1;
                lVar23 = lVar23 + 1;
              } while (uVar15 < (ushort)uVar13);
            }
                    /* try { // try from 00c48820 to 00c48827 has its CatchHandler @ 00c48d8c */
            IR_Function::unallocateSection(*(IR_Function **)this,pIVar8);
          }
        }
        else {
                    /* try { // try from 00c484c0 to 00c484c7 has its CatchHandler @ 00c48d98 */
          pvVar9 = (vector *)
                   IR_InstructionSequence::getSection
                             ((IR_InstructionSequence *)this,puVar20[(puVar20[1] >> 0x10) + 3]);
                    /* try { // try from 00c484e0 to 00c484e7 has its CatchHandler @ 00c48da0 */
          pvVar10 = (vector *)
                    IR_InstructionSequence::getSection
                              ((IR_InstructionSequence *)this,
                               *(uint *)((long)puVar20 +
                                        ((ulong)(puVar20[1] >> 0xe) & 0x3fffc) + 0x10));
          if (((pvVar9 != (vector *)0x0) &&
              ((int)((ulong)(*(long *)(pvVar9 + 0x28) - *(long *)(pvVar9 + 0x20)) >> 3) != 2)) ||
             ((pvVar10 != (vector *)0x0 &&
              ((int)((ulong)(*(long *)(pvVar10 + 0x28) - *(long *)(pvVar10 + 0x20)) >> 3) != 2)))) {
                    /* try { // try from 00c4882c to 00c48837 has its CatchHandler @ 00c48da0 */
            IR_InstructionSequence::emit(aIStack_a8,puVar20);
            goto LAB_00c48474;
          }
          local_c0 = (undefined8 *)0x0;
          local_b8 = (undefined8 *)0x0;
          local_b0 = (undefined8 *)0x0;
          uVar13 = puVar20[1];
          if ((uVar13 & 0xffff) != 3) {
            uVar5 = 4;
            uVar7 = uVar13;
            do {
              puVar2 = local_c0;
              uVar7 = puVar20[uVar5 + (uVar7 >> 0x10) + 1];
              if ((int)uVar7 < 0) {
                puVar16 = (undefined8 *)
                          (*(long *)(*(long *)this + 0x80) + ((ulong)uVar7 & 0x7fffffff) * 0x18);
                puStack_d8 = (undefined8 *)puVar16[1];
                local_e0 = (undefined8 *)*puVar16;
                local_d0 = (undefined8 *)puVar16[2];
                if (local_b0 <= local_b8) {
                  sVar24 = (long)local_b8 - (long)local_c0;
                  uVar15 = ((long)sVar24 >> 5) + 1;
                  if (uVar15 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  uVar22 = (long)local_b0 - (long)local_c0 >> 4;
                  if (uVar15 <= uVar22) {
                    uVar15 = uVar22;
                  }
                  if (0x7fffffffffffffdf < (ulong)((long)local_b0 - (long)local_c0)) {
                    uVar15 = 0x7ffffffffffffff;
                  }
                  if (uVar15 >> 0x3b != 0) {
                    /* try { // try from 00c48d00 to 00c48d13 has its CatchHandler @ 00c48dbc */
                    /* WARNING: Subroutine does not return */
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                    /* try { // try from 00c4868c to 00c4868f has its CatchHandler @ 00c48db0 */
                  puVar12 = (undefined8 *)operator_new(uVar15 << 5);
                  puVar16 = puVar12 + ((long)sVar24 >> 5) * 4;
                  puVar16[2] = local_d0;
                  puVar16[1] = puStack_d8;
                  *puVar16 = local_e0;
                  *(undefined4 *)(puVar16 + 3) = 0xffffffff;
                  if (0 < (long)sVar24) {
                    memcpy(puVar12,puVar2,sVar24);
                  }
                  goto LAB_00c486cc;
                }
                uVar26 = puVar16[1];
                uVar17 = *puVar16;
                local_b8[2] = puVar16[2];
                *(undefined4 *)(local_b8 + 3) = 0xffffffff;
                local_b8[1] = uVar26;
                *local_b8 = uVar17;
                local_b8 = local_b8 + 4;
              }
              else if (local_b8 < local_b0) {
                *(undefined4 *)local_b8 = 0;
                local_b8[2] = 0;
                *(uint *)(local_b8 + 3) = uVar7;
                local_b8 = local_b8 + 4;
              }
              else {
                sVar24 = (long)local_b8 - (long)local_c0;
                uVar15 = ((long)sVar24 >> 5) + 1;
                if (uVar15 >> 0x3b != 0) {
                    /* try { // try from 00c48cec to 00c48cff has its CatchHandler @ 00c48df4 */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                uVar22 = (long)local_b0 - (long)local_c0 >> 4;
                if (uVar15 <= uVar22) {
                  uVar15 = uVar22;
                }
                if (0x7fffffffffffffdf < (ulong)((long)local_b0 - (long)local_c0)) {
                  uVar15 = 0x7ffffffffffffff;
                }
                if (uVar15 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 00c48610 to 00c48613 has its CatchHandler @ 00c48db8 */
                puVar12 = (undefined8 *)operator_new(uVar15 << 5);
                puVar16 = puVar12 + ((long)sVar24 >> 5) * 4;
                *(undefined4 *)puVar16 = 0;
                puVar16[2] = 0;
                *(uint *)(puVar16 + 3) = uVar7;
                if (0 < (long)sVar24) {
                  memcpy(puVar12,puVar2,sVar24);
                }
LAB_00c486cc:
                local_b8 = puVar16 + 4;
                local_b0 = puVar12 + uVar15 * 4;
                local_c0 = puVar12;
                if (puVar2 != (undefined8 *)0x0) {
                  operator_delete(puVar2);
                }
              }
              if ((uVar13 & 0xffff) == uVar5) break;
              uVar7 = puVar20[1];
              uVar5 = uVar5 + 1;
            } while( true );
          }
          local_e0 = (undefined8 *)0x0;
          puStack_d8 = (undefined8 *)0x0;
          local_d0 = (undefined8 *)0x0;
          local_f8 = (undefined8 *)0x0;
          local_f0 = (undefined8 *)0x0;
          uVar5 = uVar13 >> 0x10;
          local_e8 = (undefined8 *)0x0;
          if (pvVar9 == (vector *)0x0) {
            if (0xffff < uVar13) {
              lVar23 = 0;
              uVar7 = uVar5;
              if (uVar5 < 2) {
                uVar7 = 1;
              }
              while( true ) {
                puVar2 = local_c0;
                puVar16 = local_e0;
                if (puStack_d8 == local_d0) {
                  uVar22 = (long)local_d0 - (long)local_e0;
                  uVar15 = ((long)uVar22 >> 5) + 1;
                  if (uVar15 >> 0x3b != 0) {
                    /* try { // try from 00c48d14 to 00c48d1b has its CatchHandler @ 00c48dac */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  if (uVar15 <= (ulong)((long)uVar22 >> 4)) {
                    uVar15 = (long)uVar22 >> 4;
                  }
                  if (0x7fffffffffffffdf < uVar22) {
                    uVar15 = 0x7ffffffffffffff;
                  }
                  if (uVar15 == 0) {
                    puVar12 = (undefined8 *)0x0;
                  }
                  else {
                    if (uVar15 >> 0x3b != 0) {
                    /* try { // try from 00c48d24 to 00c48d2f has its CatchHandler @ 00c48dac */
                    /* WARNING: Subroutine does not return */
                      FUN_006d1f18(
                                  "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                  );
                    }
                    /* try { // try from 00c48b40 to 00c48b43 has its CatchHandler @ 00c48d94 */
                    puVar12 = (undefined8 *)operator_new(uVar15 << 5);
                  }
                  puVar2 = (undefined8 *)((long)puVar2 + lVar23);
                  puVar1 = puVar12 + ((long)uVar22 >> 5) * 4;
                  uVar27 = *puVar2;
                  uVar26 = puVar2[3];
                  uVar17 = puVar2[2];
                  puVar1[1] = puVar2[1];
                  *puVar1 = uVar27;
                  puVar1[3] = uVar26;
                  puVar1[2] = uVar17;
                  if (0 < (long)uVar22) {
                    memcpy(puVar12,puVar16,uVar22);
                  }
                  puStack_d8 = puVar1 + 4;
                  local_d0 = puVar12 + uVar15 * 4;
                  local_e0 = puVar12;
                  if (puVar16 != (undefined8 *)0x0) {
                    operator_delete(puVar16);
                  }
                }
                else {
                  puVar2 = (undefined8 *)((long)local_c0 + lVar23);
                  uVar17 = *puVar2;
                  uVar27 = puVar2[3];
                  uVar26 = puVar2[2];
                  puStack_d8[1] = puVar2[1];
                  *puStack_d8 = uVar17;
                  puStack_d8[3] = uVar27;
                  puStack_d8[2] = uVar26;
                  puStack_d8 = puStack_d8 + 4;
                }
                if ((ulong)uVar7 * 0x20 + -0x20 == lVar23) break;
                lVar23 = lVar23 + 0x20;
              }
            }
          }
          else {
            local_108 = (undefined4 *)0x0;
            local_100 = (undefined4 *)0x0;
            local_110 = (undefined4 *)0x0;
            uVar7 = *(uint *)(*(long *)this + 0x98);
            if (uVar7 != 0) {
                    /* try { // try from 00c48880 to 00c48883 has its CatchHandler @ 00c48d44 */
              local_110 = (undefined4 *)operator_new((ulong)uVar7 << 5);
              local_100 = local_110 + (ulong)uVar7 * 8;
              puVar11 = local_110;
              do {
                *puVar11 = 0;
                *(undefined8 *)(puVar11 + 4) = 0;
                puVar11[6] = 0xffffffff;
                puVar11 = puVar11 + 8;
              } while (puVar11 != local_100);
            }
                    /* try { // try from 00c488ac to 00c488c7 has its CatchHandler @ 00c48d48 */
            local_108 = local_100;
            executeConstantFolding
                      (pvVar9,(vector *)&local_110,(vector *)&local_c0,SUB81(&local_e0,0),false);
            if (local_110 != (undefined4 *)0x0) {
              local_108 = local_110;
              operator_delete(local_110);
            }
          }
          if (pvVar10 == (vector *)0x0) {
            if (0xffff < uVar13) {
              lVar23 = 0;
              uVar7 = uVar5;
              if (uVar5 < 2) {
                uVar7 = 1;
              }
              do {
                puVar2 = local_c0;
                puVar16 = local_f8;
                if (local_f0 == local_e8) {
                  uVar22 = (long)local_f0 - (long)local_f8;
                  uVar15 = ((long)uVar22 >> 5) + 1;
                  if (uVar15 >> 0x3b != 0) {
                    /* try { // try from 00c48d1c to 00c48d23 has its CatchHandler @ 00c48da8 */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  if (uVar15 <= (ulong)((long)uVar22 >> 4)) {
                    uVar15 = (long)uVar22 >> 4;
                  }
                  if (0x7fffffffffffffdf < uVar22) {
                    uVar15 = 0x7ffffffffffffff;
                  }
                  if (uVar15 == 0) {
                    puVar12 = (undefined8 *)0x0;
                  }
                  else {
                    if (uVar15 >> 0x3b != 0) {
                    /* try { // try from 00c48d30 to 00c48d3b has its CatchHandler @ 00c48da8 */
                    /* WARNING: Subroutine does not return */
                      FUN_006d1f18(
                                  "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                  );
                    }
                    /* try { // try from 00c48c34 to 00c48c37 has its CatchHandler @ 00c48d90 */
                    puVar12 = (undefined8 *)operator_new(uVar15 << 5);
                  }
                  puVar2 = (undefined8 *)((long)puVar2 + lVar23);
                  puVar1 = puVar12 + ((long)uVar22 >> 5) * 4;
                  uVar27 = *puVar2;
                  uVar26 = puVar2[3];
                  uVar17 = puVar2[2];
                  puVar1[1] = puVar2[1];
                  *puVar1 = uVar27;
                  puVar1[3] = uVar26;
                  puVar1[2] = uVar17;
                  if (0 < (long)uVar22) {
                    memcpy(puVar12,puVar16,uVar22);
                  }
                  local_f0 = puVar1 + 4;
                  local_e8 = puVar12 + uVar15 * 4;
                  local_f8 = puVar12;
                  if (puVar16 != (undefined8 *)0x0) {
                    operator_delete(puVar16);
                  }
                }
                else {
                  puVar2 = (undefined8 *)((long)local_c0 + lVar23);
                  uVar17 = *puVar2;
                  uVar27 = puVar2[3];
                  uVar26 = puVar2[2];
                  local_f0[1] = puVar2[1];
                  *local_f0 = uVar17;
                  local_f0[3] = uVar27;
                  local_f0[2] = uVar26;
                  local_f0 = local_f0 + 4;
                }
                lVar23 = lVar23 + 0x20;
              } while ((ulong)uVar7 * 0x20 - lVar23 != 0);
              goto LAB_00c489b8;
            }
          }
          else {
            local_108 = (undefined4 *)0x0;
            local_100 = (undefined4 *)0x0;
            local_110 = (undefined4 *)0x0;
            uVar7 = *(uint *)(*(long *)this + 0x98);
            if (uVar7 != 0) {
                    /* try { // try from 00c48960 to 00c48963 has its CatchHandler @ 00c48d40 */
              local_110 = (undefined4 *)operator_new((ulong)uVar7 << 5);
              local_100 = local_110 + (ulong)uVar7 * 8;
              puVar11 = local_110;
              do {
                *puVar11 = 0;
                *(undefined8 *)(puVar11 + 4) = 0;
                puVar11[6] = 0xffffffff;
                puVar11 = puVar11 + 8;
              } while (puVar11 != local_100);
            }
                    /* try { // try from 00c4898c to 00c489a7 has its CatchHandler @ 00c48d4c */
            local_108 = local_100;
            executeConstantFolding
                      (pvVar10,(vector *)&local_110,(vector *)&local_c0,SUB81(&local_f8,0),false);
            if (local_110 != (undefined4 *)0x0) {
              local_108 = local_110;
              operator_delete(local_110);
            }
LAB_00c489b8:
            if (0xffff < uVar13) {
              lVar23 = 0;
              puVar25 = puVar20 + 2;
              if (uVar5 < 2) {
                uVar5 = 1;
              }
              do {
                uVar13 = *puVar25;
                if (-1 < (int)uVar13) {
                  piVar19 = (int *)((long)local_e0 + lVar23);
                  uVar7 = piVar19[6];
                  if (*piVar19 != 0 || uVar7 == 0xffffffff) {
                    /* try { // try from 00c48a4c to 00c48a4f has its CatchHandler @ 00c48db4 */
                    uVar7 = IR_Function::storeConst(*(IR_Function **)this,(IR_TConst *)piVar19);
                    uVar7 = uVar7 | 0x80000000;
                  }
                  piVar19 = (int *)((long)local_f8 + lVar23);
                  if ((*piVar19 != 0) || (uVar6 = piVar19[6], uVar6 == 0xffffffff)) {
                    /* try { // try from 00c489e4 to 00c48a13 has its CatchHandler @ 00c48dc4 */
                    uVar6 = IR_Function::storeConst(*(IR_Function **)this,(IR_TConst *)piVar19);
                    uVar6 = uVar6 | 0x80000000;
                  }
                  IR_InstructionSequence::emit
                            (aIStack_a8,0xd3,uVar13,
                             *(uint *)((long)puVar20 + ((ulong)(puVar20[1] >> 0xe) & 0x3fffc) + 8),
                             uVar7,uVar6);
                }
                lVar23 = lVar23 + 0x20;
                puVar25 = puVar25 + 1;
              } while ((ulong)uVar5 * 0x20 - lVar23 != 0);
            }
          }
          if (local_f8 != (undefined8 *)0x0) {
            local_f0 = local_f8;
            operator_delete(local_f8);
          }
          if (local_e0 != (undefined8 *)0x0) {
            puStack_d8 = local_e0;
            operator_delete(local_e0);
          }
          if (local_c0 != (undefined8 *)0x0) {
            local_b8 = local_c0;
            operator_delete(local_c0);
          }
        }
        uVar13 = 1;
      }
      else {
                    /* try { // try from 00c48468 to 00c48473 has its CatchHandler @ 00c48da4 */
        IR_InstructionSequence::emit(aIStack_a8,puVar20);
      }
LAB_00c48474:
      lVar23 = *(long *)(this + 0x20);
      local_114 = local_114 + 1;
      uVar15 = (ulong)local_114;
      lVar18 = *(long *)(this + 0x28);
    } while (uVar15 < (ulong)(*(long *)(this + 0x28) - lVar23 >> 3));
  }
  uVar17 = *(undefined8 *)(this + 0x30);
  *(long *)(this + 0x28) = lStack_80;
  *(long *)(this + 0x20) = local_88;
  *(undefined8 *)(this + 0x30) = local_78;
  local_88 = lVar23;
  lStack_80 = lVar18;
  local_78 = uVar17;
  IR_InstructionSequence::~IR_InstructionSequence(aIStack_a8);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar13 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


