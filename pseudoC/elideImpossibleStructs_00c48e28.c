// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: elideImpossibleStructs
// Entry Point: 00c48e28
// Size: 4208 bytes
// Signature: undefined elideImpossibleStructs(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::elideImpossibleStructs() */

void IR_Section::elideImpossibleStructs(void)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *****pppppuVar9;
  uint uVar10;
  uint uVar11;
  IR_Function **in_x0;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined8 *****pppppuVar15;
  IR_InstructionSequence *this;
  undefined8 ******ppppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 ******ppppppuVar20;
  IR_Type **ppIVar21;
  IR_Function *pIVar22;
  undefined8 *******pppppppuVar23;
  int iVar24;
  ulong uVar25;
  undefined8 *******pppppppuVar26;
  undefined8 ******ppppppuVar27;
  bool bVar28;
  uint uVar29;
  uint uVar30;
  undefined8 *******pppppppuVar31;
  ulong uVar32;
  uint *puVar33;
  IR_Struct *pIVar34;
  undefined8 *******pppppppuVar35;
  size_t __n;
  ulong uVar36;
  ulong __n_00;
  undefined8 *****pppppuVar37;
  uint local_214;
  uint local_1d8 [4];
  char *local_1c8;
  IR_Type *pIStack_1c0;
  IR_Type *local_1b8;
  undefined8 uStack_1b0;
  void *local_1a8;
  undefined8 *****local_1a0;
  undefined8 *****local_198;
  undefined8 *****local_190;
  undefined8 *******local_188;
  undefined8 *******local_180;
  long local_178;
  undefined8 ******local_170;
  undefined8 ******local_168;
  undefined8 ******local_160;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  pIVar22 = in_x0[4];
  local_180 = (undefined8 *******)0x0;
  local_178 = 0;
  local_188 = &local_180;
  if (in_x0[5] != pIVar22) {
    uVar25 = 0;
    local_214 = 0;
    do {
      puVar33 = *(uint **)(pIVar22 + uVar25 * 8);
      uVar5 = *puVar33;
      uVar6 = puVar33[1];
      uVar4 = uVar6 >> 0x10;
      if (uVar5 == 2) {
                    /* try { // try from 00c48ee0 to 00c48ee7 has its CatchHandler @ 00c49eb4 */
        lVar12 = IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)in_x0,puVar33[(ulong)uVar4 + 3]);
                    /* try { // try from 00c48f00 to 00c48f23 has its CatchHandler @ 00c49ec8 */
        lVar13 = IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)in_x0,
                            *(uint *)((long)puVar33 + ((ulong)(puVar33[1] >> 0xe) & 0x3fffc) + 0x10)
                           );
        if (lVar12 != 0) {
          elideImpossibleStructs();
        }
        if (lVar13 != 0) {
          elideImpossibleStructs();
        }
      }
      else if (uVar5 == 4) {
                    /* try { // try from 00c48f3c to 00c48f47 has its CatchHandler @ 00c49eb8 */
        IR_InstructionSequence::getSection((IR_InstructionSequence *)in_x0,puVar33[uVar4 + 3]);
        elideImpossibleStructs();
      }
      uVar2 = uVar6 & 0xffff;
      if ((uVar6 & 0xffff) == 0) {
        bVar28 = false;
      }
      else {
        uVar29 = 0;
        bVar28 = false;
        do {
          uVar7 = puVar33[(ulong)*(ushort *)((long)puVar33 + 6) + (ulong)uVar29 + 2];
          pppppppuVar31 = &local_180;
          pppppppuVar35 = local_180;
          if (local_180 == (undefined8 *******)0x0) {
LAB_00c48fdc:
            if ((int)uVar7 < 0) {
              piVar14 = (int *)IR_Function::getConstType(*in_x0,uVar7 & 0x7fffffff);
            }
            else {
                    /* try { // try from 00c48fe8 to 00c48ffb has its CatchHandler @ 00c49f24 */
              piVar14 = (int *)IR_RegisterSet::getRegisterType
                                         ((IR_RegisterSet *)(*in_x0 + 0x98),uVar7);
            }
            if (((piVar14 != (int *)0x0) && (*piVar14 == 3)) &&
               (pIVar34 = *(IR_Struct **)(piVar14 + 2), pIVar34[0x55] == (IR_Struct)0x0)) {
              local_170 = (undefined8 ******)0x0;
              local_168 = (undefined8 ******)0x0;
              local_160 = (undefined8 ******)0x0;
                    /* try { // try from 00c4902c to 00c49033 has its CatchHandler @ 00c49ef8 */
              uVar10 = IR_Struct::getReplacementRegListSize();
              pppppppuVar31 = &local_180;
              pppppppuVar35 = &local_180;
              pppppppuVar23 = local_180;
              if (uVar10 != 0) {
                uVar30 = 0;
                do {
                  local_1a0 = (undefined8 *****)0x0;
                  local_198 = (undefined8 *****)0x0;
                  local_190 = (undefined8 *****)0x0;
                    /* try { // try from 00c49060 to 00c49073 has its CatchHandler @ 00c49fb0 */
                  local_1d8[0] = uVar30;
                  IR_Struct::getReplacementRegInfoInternal
                            (pIVar34,local_1d8,&local_1b8,(basic_string *)&local_1a0);
                    /* try { // try from 00c4907c to 00c490e3 has its CatchHandler @ 00c49fb4 */
                  uVar11 = IR_Function::uninitializedConst(*in_x0,local_1b8);
                  ppppppuVar16 = local_170;
                  if (local_168 == local_160) {
                    uVar32 = (long)local_168 - (long)local_170;
                    uVar25 = ((long)uVar32 >> 2) + 1;
                    if (uVar25 >> 0x3e != 0) {
                    /* try { // try from 00c49df4 to 00c49e07 has its CatchHandler @ 00c49f40 */
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__vector_base_common<true>::__throw_length_error();
                    }
                    if (uVar25 <= (ulong)((long)uVar32 >> 1)) {
                      uVar25 = (long)uVar32 >> 1;
                    }
                    if (0x7ffffffffffffffb < uVar32) {
                      uVar25 = 0x3fffffffffffffff;
                    }
                    if (uVar25 == 0) {
                      ppppppuVar20 = (undefined8 ******)0x0;
                    }
                    else {
                      if (uVar25 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_006d1f18(
                                    "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                    );
                      }
                      ppppppuVar20 = (undefined8 ******)operator_new(uVar25 << 2);
                    }
                    puVar1 = (uint *)((long)ppppppuVar20 + ((long)uVar32 >> 2) * 4);
                    ppppppuVar19 = (undefined8 ******)(puVar1 + 1);
                    *puVar1 = uVar11 | 0x80000000;
                    if (0 < (long)uVar32) {
                      memcpy(ppppppuVar20,ppppppuVar16,uVar32);
                    }
                    local_160 = (undefined8 ******)((long)ppppppuVar20 + uVar25 * 4);
                    local_170 = ppppppuVar20;
                    local_168 = ppppppuVar19;
                    if (ppppppuVar16 != (undefined8 ******)0x0) {
                      operator_delete(ppppppuVar16);
                    }
                  }
                  else {
                    *(uint *)local_168 = uVar11 | 0x80000000;
                    local_168 = (undefined8 ******)((long)local_168 + 4);
                  }
                  if (((ulong)local_1a0 & 1) != 0) {
                    operator_delete(local_190);
                  }
                  uVar30 = uVar30 + 1;
                  pppppppuVar23 = local_180;
                } while (uVar10 != uVar30);
              }
              while (pppppppuVar23 != (undefined8 *******)0x0) {
                while (pppppppuVar35 = pppppppuVar23, uVar7 < *(uint *)(pppppppuVar35 + 4)) {
                  pppppppuVar31 = pppppppuVar35;
                  pppppppuVar23 = (undefined8 *******)*pppppppuVar35;
                  if ((undefined8 *******)*pppppppuVar35 == (undefined8 *******)0x0) {
                    ppppppuVar16 = *pppppppuVar35;
                    goto joined_r0x00c491d8;
                  }
                }
                if (uVar7 <= *(uint *)(pppppppuVar35 + 4)) break;
                pppppppuVar31 = pppppppuVar35 + 1;
                pppppppuVar23 = (undefined8 *******)pppppppuVar35[1];
              }
              ppppppuVar16 = *pppppppuVar31;
joined_r0x00c491d8:
              if (ppppppuVar16 == (undefined8 ******)0x0) {
                    /* try { // try from 00c49194 to 00c4920f has its CatchHandler @ 00c49ef8 */
                ppppppuVar16 = (undefined8 ******)operator_new(0x40);
                *(uint *)(ppppppuVar16 + 4) = uVar7;
                ppppppuVar16[6] = (undefined8 *****)0x0;
                ppppppuVar16[7] = (undefined8 *****)0x0;
                ppppppuVar16[5] = (undefined8 *****)0x0;
                *ppppppuVar16 = (undefined8 *****)0x0;
                ppppppuVar16[1] = (undefined8 *****)0x0;
                ppppppuVar16[2] = pppppppuVar35;
                *pppppppuVar31 = ppppppuVar16;
                ppppppuVar20 = ppppppuVar16;
                if ((undefined8 *******)*local_188 != (undefined8 *******)0x0) {
                  ppppppuVar20 = *pppppppuVar31;
                  local_188 = (undefined8 *******)*local_188;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          ((__tree_node_base *)local_180,(__tree_node_base *)ppppppuVar20);
                local_178 = local_178 + 1;
              }
              if ((undefined8 *******)(ppppppuVar16 + 5) != &local_170) {
                std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
                assign<unsigned_int*>
                          ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)
                           (ppppppuVar16 + 5),(uint *)local_170,(uint *)local_168);
              }
              if (local_170 != (undefined8 ******)0x0) {
                local_168 = local_170;
                operator_delete(local_170);
              }
            }
          }
          else {
            do {
              pppppppuVar26 = pppppppuVar35;
              pppppppuVar23 = pppppppuVar31;
              uVar10 = *(uint *)(pppppppuVar26 + 4);
              pppppppuVar31 = pppppppuVar23;
              if (uVar10 >= uVar7) {
                pppppppuVar31 = pppppppuVar26;
              }
              pppppppuVar35 = (undefined8 *******)pppppppuVar26[uVar10 < uVar7];
            } while ((undefined8 *******)pppppppuVar26[uVar10 < uVar7] != (undefined8 *******)0x0);
            if ((undefined8 ********)pppppppuVar31 == &local_180) goto LAB_00c48fdc;
            if (uVar7 <= uVar10) {
              pppppppuVar23 = pppppppuVar26;
            }
            if (uVar7 < *(uint *)(pppppppuVar23 + 4)) goto LAB_00c48fdc;
            bVar28 = true;
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar2);
      }
      if (0xffff < uVar6) {
        uVar25 = 0;
        uVar29 = uVar4;
        if (uVar4 < 2) {
          uVar29 = 1;
        }
        do {
          uVar7 = puVar33[uVar25 + 2];
          if ((int)uVar7 < 0) {
            piVar14 = (int *)IR_Function::getConstType(*in_x0,uVar7 & 0x7fffffff);
          }
          else {
                    /* try { // try from 00c492c8 to 00c492db has its CatchHandler @ 00c49f20 */
            piVar14 = (int *)IR_RegisterSet::getRegisterType
                                       ((IR_RegisterSet *)(*in_x0 + 0x98),uVar7);
          }
          if (((piVar14 != (int *)0x0) && (*piVar14 == 3)) &&
             (pIVar34 = *(IR_Struct **)(piVar14 + 2), pIVar34[0x55] == (IR_Struct)0x0)) {
            local_1a0 = (undefined8 *****)0x0;
            local_198 = (undefined8 *****)0x0;
            local_190 = (undefined8 *****)0x0;
                    /* try { // try from 00c49300 to 00c4930b has its CatchHandler @ 00c49ef0 */
            uVar10 = IR_Struct::getReplacementRegListSize();
            pppppppuVar31 = &local_180;
            pppppppuVar35 = &local_180;
            if ((int)uVar7 < 0) {
              pppppppuVar23 = local_180;
              if (uVar10 != 0) {
                uVar30 = 0;
                do {
                  local_170 = (undefined8 ******)0x0;
                  local_168 = (undefined8 ******)0x0;
                  local_160 = (undefined8 ******)0x0;
                    /* try { // try from 00c4936c to 00c4937f has its CatchHandler @ 00c49f18 */
                  local_1d8[0] = uVar30;
                  IR_Struct::getReplacementRegInfoInternal
                            (pIVar34,local_1d8,&local_1b8,(basic_string *)&local_170);
                    /* try { // try from 00c49388 to 00c493ef has its CatchHandler @ 00c49f2c */
                  uVar11 = IR_Function::uninitializedConst(*in_x0,local_1b8);
                  pppppuVar9 = local_1a0;
                  if (local_198 == local_190) {
                    uVar36 = (long)local_198 - (long)local_1a0;
                    uVar32 = ((long)uVar36 >> 2) + 1;
                    if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 00c49e2c to 00c49e33 has its CatchHandler @ 00c49f08 */
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__vector_base_common<true>::__throw_length_error();
                    }
                    if (uVar32 <= (ulong)((long)uVar36 >> 1)) {
                      uVar32 = (long)uVar36 >> 1;
                    }
                    if (0x7ffffffffffffffb < uVar36) {
                      uVar32 = 0x3fffffffffffffff;
                    }
                    if (uVar32 == 0) {
                      pppppuVar15 = (undefined8 *****)0x0;
                    }
                    else {
                      if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 00c49e4c to 00c49e57 has its CatchHandler @ 00c49f08 */
                    /* WARNING: Subroutine does not return */
                        FUN_006d1f18(
                                    "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                    );
                      }
                      pppppuVar15 = (undefined8 *****)operator_new(uVar32 << 2);
                    }
                    puVar1 = (uint *)((long)pppppuVar15 + ((long)uVar36 >> 2) * 4);
                    pppppuVar37 = (undefined8 *****)(puVar1 + 1);
                    *puVar1 = uVar11 | 0x80000000;
                    if (0 < (long)uVar36) {
                      memcpy(pppppuVar15,pppppuVar9,uVar36);
                    }
                    local_190 = (undefined8 *****)((long)pppppuVar15 + uVar32 * 4);
                    local_1a0 = pppppuVar15;
                    local_198 = pppppuVar37;
                    if (pppppuVar9 != (undefined8 *****)0x0) {
                      operator_delete(pppppuVar9);
                    }
                  }
                  else {
                    *(uint *)local_198 = uVar11 | 0x80000000;
                    local_198 = (undefined8 *****)((long)local_198 + 4);
                  }
                  if (((ulong)local_170 & 1) != 0) {
                    operator_delete(local_160);
                  }
                  uVar30 = uVar30 + 1;
                  pppppppuVar23 = local_180;
                } while (uVar10 != uVar30);
              }
            }
            else {
                    /* try { // try from 00c49318 to 00c49323 has its CatchHandler @ 00c49ecc */
              lVar12 = IR_RegisterSet::getRegisterName((IR_RegisterSet *)(*in_x0 + 0x98),uVar7);
              local_1b8 = (IR_Type *)0x0;
              uStack_1b0 = 0;
              local_1a8 = (void *)0x0;
              if (lVar12 == 0) {
                    /* try { // try from 00c49458 to 00c4946f has its CatchHandler @ 00c49ebc */
                FUN_00c49fec(&local_170);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((char *)&local_1b8);
              }
              else {
                    /* try { // try from 00c49330 to 00c49337 has its CatchHandler @ 00c49ed4 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((char *)&local_1b8);
              }
                    /* try { // try from 00c49470 to 00c4947f has its CatchHandler @ 00c49ed4 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_1b8);
              if (uVar10 != 0) {
                uVar30 = 0;
                do {
                  local_170 = (undefined8 ******)0x0;
                  local_168 = (undefined8 ******)0x0;
                  local_160 = (undefined8 ******)0x0;
                    /* try { // try from 00c494ac to 00c494bf has its CatchHandler @ 00c49f48 */
                  ppIVar21 = &pIStack_1c0;
                  local_1d8[0] = uVar30;
                  IR_Struct::getReplacementRegInfoInternal
                            (pIVar34,local_1d8,ppIVar21,(basic_string *)&local_170);
                    /* try { // try from 00c494c0 to 00c494cf has its CatchHandler @ 00c49f44 */
                  std::__ndk1::operator+
                            ((__ndk1 *)&local_1b8,(basic_string_conflict *)&local_170,
                             (basic_string_conflict *)ppIVar21);
                  pcVar3 = (char *)((ulong)local_1d8 | 1);
                  if ((local_1d8[0] & 1) != 0) {
                    pcVar3 = local_1c8;
                  }
                    /* try { // try from 00c494ec to 00c49553 has its CatchHandler @ 00c49f68 */
                  uVar11 = IR_RegisterSet::allocateReg
                                     ((IR_RegisterSet *)(*in_x0 + 0x98),pIStack_1c0,pcVar3);
                  pppppuVar9 = local_1a0;
                  if (local_198 == local_190) {
                    uVar36 = (long)local_198 - (long)local_1a0;
                    uVar32 = ((long)uVar36 >> 2) + 1;
                    if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 00c49e08 to 00c49e0f has its CatchHandler @ 00c49f1c */
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__vector_base_common<true>::__throw_length_error();
                    }
                    if (uVar32 <= (ulong)((long)uVar36 >> 1)) {
                      uVar32 = (long)uVar36 >> 1;
                    }
                    if (0x7ffffffffffffffb < uVar36) {
                      uVar32 = 0x3fffffffffffffff;
                    }
                    if (uVar32 == 0) {
                      pppppuVar15 = (undefined8 *****)0x0;
                    }
                    else {
                      if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 00c49e20 to 00c49e2b has its CatchHandler @ 00c49f1c */
                    /* WARNING: Subroutine does not return */
                        FUN_006d1f18(
                                    "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                    );
                      }
                      pppppuVar15 = (undefined8 *****)operator_new(uVar32 << 2);
                    }
                    puVar1 = (uint *)((long)pppppuVar15 + ((long)uVar36 >> 2) * 4);
                    pppppuVar37 = (undefined8 *****)(puVar1 + 1);
                    *puVar1 = uVar11;
                    if (0 < (long)uVar36) {
                      memcpy(pppppuVar15,pppppuVar9,uVar36);
                    }
                    local_190 = (undefined8 *****)((long)pppppuVar15 + uVar32 * 4);
                    local_1a0 = pppppuVar15;
                    local_198 = pppppuVar37;
                    if (pppppuVar9 != (undefined8 *****)0x0) {
                      operator_delete(pppppuVar9);
                    }
                  }
                  else {
                    *(uint *)local_198 = uVar11;
                    local_198 = (undefined8 *****)((long)local_198 + 4);
                  }
                  if ((local_1d8[0] & 1) != 0) {
                    operator_delete(local_1c8);
                  }
                  if (((ulong)local_170 & 1) != 0) {
                    operator_delete(local_160);
                  }
                  uVar30 = uVar30 + 1;
                } while (uVar10 != uVar30);
              }
              pppppppuVar23 = local_180;
              if (((ulong)local_1b8 & 1) != 0) {
                operator_delete(local_1a8);
                pppppppuVar23 = local_180;
              }
            }
            while (pppppppuVar23 != (undefined8 *******)0x0) {
              while (pppppppuVar35 = pppppppuVar23, uVar7 < *(uint *)(pppppppuVar35 + 4)) {
                pppppppuVar31 = pppppppuVar35;
                pppppppuVar23 = (undefined8 *******)*pppppppuVar35;
                if ((undefined8 *******)*pppppppuVar35 == (undefined8 *******)0x0) {
                  ppppppuVar16 = *pppppppuVar35;
                  goto joined_r0x00c4966c;
                }
              }
              if (uVar7 <= *(uint *)(pppppppuVar35 + 4)) break;
              pppppppuVar31 = pppppppuVar35 + 1;
              pppppppuVar23 = (undefined8 *******)pppppppuVar35[1];
            }
            ppppppuVar16 = *pppppppuVar31;
joined_r0x00c4966c:
            if (ppppppuVar16 == (undefined8 ******)0x0) {
                    /* try { // try from 00c49628 to 00c496a3 has its CatchHandler @ 00c49ef0 */
              ppppppuVar16 = (undefined8 ******)operator_new(0x40);
              *(uint *)(ppppppuVar16 + 4) = uVar7;
              ppppppuVar16[6] = (undefined8 *****)0x0;
              ppppppuVar16[7] = (undefined8 *****)0x0;
              ppppppuVar16[5] = (undefined8 *****)0x0;
              *ppppppuVar16 = (undefined8 *****)0x0;
              ppppppuVar16[1] = (undefined8 *****)0x0;
              ppppppuVar16[2] = pppppppuVar35;
              *pppppppuVar31 = ppppppuVar16;
              ppppppuVar20 = ppppppuVar16;
              if ((undefined8 *******)*local_188 != (undefined8 *******)0x0) {
                ppppppuVar20 = *pppppppuVar31;
                local_188 = (undefined8 *******)*local_188;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        ((__tree_node_base *)local_180,(__tree_node_base *)ppppppuVar20);
              local_178 = local_178 + 1;
            }
            if (ppppppuVar16 + 5 != &local_1a0) {
              std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
              assign<unsigned_int*>
                        ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)
                         (ppppppuVar16 + 5),(uint *)local_1a0,(uint *)local_198);
            }
            if (local_1a0 != (undefined8 *****)0x0) {
              local_198 = local_1a0;
              operator_delete(local_1a0);
            }
            bVar28 = true;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar29);
      }
      if ((bVar28) && (uVar5 < 0x1b)) {
        uVar29 = 1 << (ulong)(uVar5 & 0x1f);
        if ((uVar29 & 0x21002d4) == 0) {
          if (((uVar29 & 0x408c000) == 0) || (uVar4 = puVar33[2], (int)uVar4 < 0))
          goto LAB_00c48e98;
          local_170 = (undefined8 ******)0x0;
          local_168 = (undefined8 ******)0x0;
          local_160 = (undefined8 ******)0x0;
                    /* try { // try from 00c496d8 to 00c496df has its CatchHandler @ 00c49ea4 */
          local_170 = (undefined8 ******)operator_new(4);
          local_168 = (undefined8 ******)((long)local_170 + 4);
          *(uint *)local_170 = uVar4;
          pppppppuVar31 = &local_180;
          pppppppuVar35 = local_180;
          local_160 = local_168;
          if (local_180 != (undefined8 *******)0x0) {
            do {
              pppppppuVar26 = pppppppuVar35;
              pppppppuVar23 = pppppppuVar31;
              uVar6 = *(uint *)(pppppppuVar26 + 4);
              pppppppuVar31 = pppppppuVar23;
              if (uVar6 >= uVar4) {
                pppppppuVar31 = pppppppuVar26;
              }
              pppppppuVar35 = (undefined8 *******)pppppppuVar26[uVar6 < uVar4];
            } while ((undefined8 *******)pppppppuVar26[uVar6 < uVar4] != (undefined8 *******)0x0);
            if ((undefined8 ********)pppppppuVar31 != &local_180) {
              if (uVar4 <= uVar6) {
                pppppppuVar23 = pppppppuVar26;
              }
              if (*(uint *)(pppppppuVar23 + 4) <= uVar4 && &local_170 != pppppppuVar31 + 5) {
                    /* try { // try from 00c4974c to 00c49753 has its CatchHandler @ 00c49e98 */
                std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
                assign<unsigned_int*>
                          ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_170,
                           (uint *)pppppppuVar31[5],(uint *)pppppppuVar31[6]);
              }
            }
          }
                    /* try { // try from 00c49758 to 00c4976f has its CatchHandler @ 00c49ea0 */
          this = (IR_InstructionSequence *)
                 createReplacementInstSeq
                           ((IR_Section *)in_x0,uVar5,(RegList *)&local_170,puVar33 + 3,uVar2,
                            (map *)&local_188);
          uVar25 = *(long *)(this + 0x28) - (long)*(uint ***)(this + 0x20);
          if ((int)(uVar25 >> 3) != 0) {
            lVar12 = 0;
            puVar33 = **(uint ***)(this + 0x20);
            do {
              IR_InstructionSequence::emitReplace((IR_InstructionSequence *)in_x0,local_214,puVar33)
              ;
              while( true ) {
                if ((uVar25 >> 3 & 0xffffffff) * 8 + -8 == lVar12) goto LAB_00c497dc;
                lVar12 = lVar12 + 8;
                puVar33 = *(uint **)(*(long *)(this + 0x20) + lVar12);
                if (lVar12 == 0) break;
                local_214 = local_214 + 1;
                    /* try { // try from 00c497b8 to 00c497d3 has its CatchHandler @ 00c49ee4 */
                IR_InstructionSequence::emitInsert
                          ((IR_InstructionSequence *)in_x0,local_214,puVar33);
              }
            } while( true );
          }
LAB_00c497dc:
          IR_InstructionSequence::~IR_InstructionSequence(this);
          operator_delete(this);
        }
        else {
          if (uVar5 == 2) {
            uVar29 = 3;
            bVar28 = true;
          }
          else if (uVar5 == 4) {
            uVar29 = 2;
            bVar28 = true;
          }
          else if ((uVar5 == 7) || (uVar5 == 0x14)) {
            bVar28 = true;
            uVar29 = 1;
          }
          else {
            bVar28 = false;
            uVar29 = 0;
          }
          local_170 = (undefined8 ******)0x0;
          local_168 = (undefined8 ******)0x0;
          local_160 = (undefined8 ******)0x0;
                    /* try { // try from 00c49830 to 00c49837 has its CatchHandler @ 00c49eb0 */
          ppppppuVar16 = (undefined8 ******)operator_new(4);
          local_168 = (undefined8 ******)((long)ppppppuVar16 + 4);
          *(uint *)ppppppuVar16 = uVar5;
          local_170 = ppppppuVar16;
          local_160 = local_168;
                    /* try { // try from 00c49850 to 00c49857 has its CatchHandler @ 00c49eac */
          local_170 = (undefined8 ******)operator_new(8);
          local_168 = local_170 + 1;
          *(uint *)local_170 = *(uint *)ppppppuVar16;
          *(uint *)((long)local_170 + 4) = 0;
          local_160 = local_168;
          operator_delete(ppppppuVar16);
          if (0xffff < uVar6) {
            uVar25 = 0;
            if (uVar4 < 2) {
              uVar4 = 1;
            }
            do {
              ppppppuVar16 = local_170;
              uVar5 = puVar33[uVar25 + 2];
              pppppppuVar35 = local_180;
              pppppppuVar31 = &local_180;
              if (local_180 == (undefined8 *******)0x0) {
LAB_00c49bcc:
                if (local_168 == local_160) {
                  uVar36 = (long)local_168 - (long)local_170;
                  uVar32 = ((long)uVar36 >> 2) + 1;
                  if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 00c49e6c to 00c49e73 has its CatchHandler @ 00c49eec */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  if (uVar32 <= (ulong)((long)uVar36 >> 1)) {
                    uVar32 = (long)uVar36 >> 1;
                  }
                  if (0x7ffffffffffffffb < uVar36) {
                    uVar32 = 0x3fffffffffffffff;
                  }
                  if (uVar32 == 0) {
                    ppppppuVar20 = (undefined8 ******)0x0;
                  }
                  else {
                    if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 00c49e7c to 00c49e87 has its CatchHandler @ 00c49eec */
                    /* WARNING: Subroutine does not return */
                      FUN_006d1f18(
                                  "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                  );
                    }
                    /* try { // try from 00c49d60 to 00c49d63 has its CatchHandler @ 00c49ec4 */
                    ppppppuVar20 = (undefined8 ******)operator_new(uVar32 << 2);
                  }
                  puVar1 = (uint *)((long)ppppppuVar20 + ((long)uVar36 >> 2) * 4);
                  ppppppuVar19 = (undefined8 ******)(puVar1 + 1);
                  *puVar1 = uVar5;
                  if (0 < (long)uVar36) {
                    memcpy(ppppppuVar20,ppppppuVar16,uVar36);
                  }
                  local_160 = (undefined8 ******)((long)ppppppuVar20 + uVar32 * 4);
                  local_170 = ppppppuVar20;
                  local_168 = ppppppuVar19;
                  if (ppppppuVar16 != (undefined8 ******)0x0) {
                    operator_delete(ppppppuVar16);
                  }
                }
                else {
                  *(uint *)local_168 = uVar5;
                  local_168 = (undefined8 ******)((long)local_168 + 4);
                }
              }
              else {
                do {
                  pppppppuVar23 = pppppppuVar31;
                  pppppppuVar26 = pppppppuVar35;
                  uVar6 = *(uint *)(pppppppuVar26 + 4);
                  pppppppuVar31 = pppppppuVar23;
                  if (uVar6 >= uVar5) {
                    pppppppuVar31 = pppppppuVar26;
                  }
                  pppppppuVar35 = (undefined8 *******)pppppppuVar26[uVar6 < uVar5];
                } while ((undefined8 *******)pppppppuVar26[uVar6 < uVar5] != (undefined8 *******)0x0
                        );
                if ((undefined8 ********)pppppppuVar31 == &local_180) goto LAB_00c49bcc;
                if (uVar5 <= uVar6) {
                  pppppppuVar23 = pppppppuVar26;
                }
                if (uVar5 < *(uint *)(pppppppuVar23 + 4)) goto LAB_00c49bcc;
                ppppppuVar16 = pppppppuVar31[5];
                if (pppppppuVar31[6] != ppppppuVar16) {
                  uVar32 = 0;
                  do {
                    ppppppuVar20 = local_170;
                    if (local_168 == local_160) {
                      __n_00 = (long)local_168 - (long)local_170;
                      uVar36 = ((long)__n_00 >> 2) + 1;
                      if (uVar36 >> 0x3e != 0) {
                    /* try { // try from 00c49e10 to 00c49e17 has its CatchHandler @ 00c49f10 */
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__vector_base_common<true>::__throw_length_error();
                      }
                      if (uVar36 <= (ulong)((long)__n_00 >> 1)) {
                        uVar36 = (long)__n_00 >> 1;
                      }
                      if (0x7ffffffffffffffb < __n_00) {
                        uVar36 = 0x3fffffffffffffff;
                      }
                      if (uVar36 == 0) {
                        ppppppuVar19 = (undefined8 ******)0x0;
                      }
                      else {
                        if (uVar36 >> 0x3e != 0) {
                    /* try { // try from 00c49e34 to 00c49e3f has its CatchHandler @ 00c49f10 */
                    /* WARNING: Subroutine does not return */
                          FUN_006d1f18(
                                      "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                      );
                        }
                    /* try { // try from 00c49ccc to 00c49ccf has its CatchHandler @ 00c49f04 */
                        ppppppuVar19 = (undefined8 ******)operator_new(uVar36 << 2);
                      }
                      puVar1 = (uint *)((long)ppppppuVar19 + ((long)__n_00 >> 2) * 4);
                      ppppppuVar18 = (undefined8 ******)(puVar1 + 1);
                      *puVar1 = *(uint *)((long)ppppppuVar16 + uVar32 * 4);
                      if (0 < (long)__n_00) {
                        memcpy(ppppppuVar19,ppppppuVar20,__n_00);
                      }
                      local_160 = (undefined8 ******)((long)ppppppuVar19 + uVar36 * 4);
                      local_170 = ppppppuVar19;
                      local_168 = ppppppuVar18;
                      if (ppppppuVar20 != (undefined8 ******)0x0) {
                        operator_delete(ppppppuVar20);
                      }
                    }
                    else {
                      *(uint *)local_168 = *(uint *)((long)ppppppuVar16 + uVar32 * 4);
                      local_168 = (undefined8 ******)((long)local_168 + 4);
                    }
                    ppppppuVar16 = pppppppuVar31[5];
                    uVar32 = (ulong)((int)uVar32 + 1);
                  } while (uVar32 < (ulong)((long)pppppppuVar31[6] - (long)ppppppuVar16 >> 2));
                }
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar4);
          }
          ppppppuVar20 = local_168;
          ppppppuVar16 = local_170;
          if (bVar28) {
            lVar12 = 0;
            uVar4 = uVar29;
            if (uVar29 < 2) {
              uVar4 = 1;
            }
            while( true ) {
              ppppppuVar19 = local_170;
              uVar5 = puVar33[lVar12 + (ulong)*(ushort *)((long)puVar33 + 6) + 2];
              if (local_168 < local_160) {
                *(uint *)local_168 = uVar5;
                local_168 = (undefined8 ******)((long)local_168 + 4);
              }
              else {
                __n = (long)local_168 - (long)local_170;
                uVar25 = ((long)__n >> 2) + 1;
                if (uVar25 >> 0x3e != 0) {
                    /* try { // try from 00c49e58 to 00c49e6b has its CatchHandler @ 00c49efc */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                uVar32 = (long)local_160 - (long)local_170 >> 1;
                if (uVar25 <= uVar32) {
                  uVar25 = uVar32;
                }
                if (0x7ffffffffffffffb < (ulong)((long)local_160 - (long)local_170)) {
                  uVar25 = 0x3fffffffffffffff;
                }
                if (uVar25 == 0) {
                  ppppppuVar18 = (undefined8 ******)0x0;
                }
                else {
                  if (uVar25 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                    /* try { // try from 00c4991c to 00c4991f has its CatchHandler @ 00c49ed0 */
                  ppppppuVar18 = (undefined8 ******)operator_new(uVar25 << 2);
                }
                puVar1 = (uint *)((long)ppppppuVar18 + ((long)__n >> 2) * 4);
                ppppppuVar17 = (undefined8 ******)(puVar1 + 1);
                *puVar1 = uVar5;
                if (0 < (long)__n) {
                  memcpy(ppppppuVar18,ppppppuVar19,__n);
                }
                local_160 = (undefined8 ******)((long)ppppppuVar18 + uVar25 * 4);
                local_170 = ppppppuVar18;
                local_168 = ppppppuVar17;
                if (ppppppuVar19 != (undefined8 ******)0x0) {
                  operator_delete(ppppppuVar19);
                }
              }
              if (uVar4 - 1 == (int)lVar12) break;
              lVar12 = lVar12 + 1;
            }
          }
          if (uVar29 < uVar2) {
            do {
              ppppppuVar19 = local_170;
              uVar4 = puVar33[(ulong)*(ushort *)((long)puVar33 + 6) + (ulong)uVar29 + 2];
              pppppppuVar35 = local_180;
              pppppppuVar31 = &local_180;
              if (local_180 == (undefined8 *******)0x0) {
LAB_00c499d0:
                if (local_168 == local_160) {
                  uVar32 = (long)local_168 - (long)local_170;
                  uVar25 = ((long)uVar32 >> 2) + 1;
                  if (uVar25 >> 0x3e != 0) {
                    /* try { // try from 00c49e74 to 00c49e7b has its CatchHandler @ 00c49ee8 */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  if (uVar25 <= (ulong)((long)uVar32 >> 1)) {
                    uVar25 = (long)uVar32 >> 1;
                  }
                  if (0x7ffffffffffffffb < uVar32) {
                    uVar25 = 0x3fffffffffffffff;
                  }
                  if (uVar25 == 0) {
                    ppppppuVar18 = (undefined8 ******)0x0;
                  }
                  else {
                    if (uVar25 >> 0x3e != 0) {
                    /* try { // try from 00c49e88 to 00c49e93 has its CatchHandler @ 00c49ee8 */
                    /* WARNING: Subroutine does not return */
                      FUN_006d1f18(
                                  "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                  );
                    }
                    /* try { // try from 00c49b6c to 00c49b6f has its CatchHandler @ 00c49ec0 */
                    ppppppuVar18 = (undefined8 ******)operator_new(uVar25 << 2);
                  }
                  puVar1 = (uint *)((long)ppppppuVar18 + ((long)uVar32 >> 2) * 4);
                  ppppppuVar17 = (undefined8 ******)(puVar1 + 1);
                  *puVar1 = uVar4;
                  if (0 < (long)uVar32) {
                    memcpy(ppppppuVar18,ppppppuVar19,uVar32);
                  }
                  local_160 = (undefined8 ******)((long)ppppppuVar18 + uVar25 * 4);
                  local_170 = ppppppuVar18;
                  local_168 = ppppppuVar17;
                  if (ppppppuVar19 != (undefined8 ******)0x0) {
                    operator_delete(ppppppuVar19);
                  }
                }
                else {
                  *(uint *)local_168 = uVar4;
                  local_168 = (undefined8 ******)((long)local_168 + 4);
                }
              }
              else {
                do {
                  pppppppuVar23 = pppppppuVar31;
                  pppppppuVar26 = pppppppuVar35;
                  uVar5 = *(uint *)(pppppppuVar26 + 4);
                  pppppppuVar31 = pppppppuVar23;
                  if (uVar5 >= uVar4) {
                    pppppppuVar31 = pppppppuVar26;
                  }
                  pppppppuVar35 = (undefined8 *******)pppppppuVar26[uVar5 < uVar4];
                } while ((undefined8 *******)pppppppuVar26[uVar5 < uVar4] != (undefined8 *******)0x0
                        );
                if ((undefined8 ********)pppppppuVar31 == &local_180) goto LAB_00c499d0;
                if (uVar4 <= uVar5) {
                  pppppppuVar23 = pppppppuVar26;
                }
                if (uVar4 < *(uint *)(pppppppuVar23 + 4)) goto LAB_00c499d0;
                ppppppuVar19 = pppppppuVar31[5];
                if (pppppppuVar31[6] != ppppppuVar19) {
                  uVar25 = 0;
                  do {
                    ppppppuVar18 = local_170;
                    if (local_168 == local_160) {
                      uVar36 = (long)local_168 - (long)local_170;
                      uVar32 = ((long)uVar36 >> 2) + 1;
                      if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 00c49e18 to 00c49e1f has its CatchHandler @ 00c49f0c */
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__vector_base_common<true>::__throw_length_error();
                      }
                      if (uVar32 <= (ulong)((long)uVar36 >> 1)) {
                        uVar32 = (long)uVar36 >> 1;
                      }
                      if (0x7ffffffffffffffb < uVar36) {
                        uVar32 = 0x3fffffffffffffff;
                      }
                      if (uVar32 == 0) {
                        ppppppuVar17 = (undefined8 ******)0x0;
                      }
                      else {
                        if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 00c49e40 to 00c49e4b has its CatchHandler @ 00c49f0c */
                    /* WARNING: Subroutine does not return */
                          FUN_006d1f18(
                                      "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                      );
                        }
                    /* try { // try from 00c49ad8 to 00c49adb has its CatchHandler @ 00c49f00 */
                        ppppppuVar17 = (undefined8 ******)operator_new(uVar32 << 2);
                      }
                      puVar1 = (uint *)((long)ppppppuVar17 + ((long)uVar36 >> 2) * 4);
                      ppppppuVar27 = (undefined8 ******)(puVar1 + 1);
                      *puVar1 = *(uint *)((long)ppppppuVar19 + uVar25 * 4);
                      if (0 < (long)uVar36) {
                        memcpy(ppppppuVar17,ppppppuVar18,uVar36);
                      }
                      local_160 = (undefined8 ******)((long)ppppppuVar17 + uVar32 * 4);
                      local_170 = ppppppuVar17;
                      local_168 = ppppppuVar27;
                      if (ppppppuVar18 != (undefined8 ******)0x0) {
                        operator_delete(ppppppuVar18);
                      }
                    }
                    else {
                      *(uint *)local_168 = *(uint *)((long)ppppppuVar19 + uVar25 * 4);
                      local_168 = (undefined8 ******)((long)local_168 + 4);
                    }
                    ppppppuVar19 = pppppppuVar31[5];
                    uVar25 = (ulong)((int)uVar25 + 1);
                  } while (uVar25 < (ulong)((long)pppppppuVar31[6] - (long)ppppppuVar19 >> 2));
                }
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 != uVar2);
          }
          iVar24 = (int)((ulong)((long)ppppppuVar20 - (long)ppppppuVar16) >> 2);
          *(uint *)((long)local_170 + 4) =
               (int)((ulong)((long)local_168 - (long)local_170) >> 2) - iVar24 |
               iVar24 * 0x10000 - 0x20000U;
                    /* try { // try from 00c499b0 to 00c499bb has its CatchHandler @ 00c49ea8 */
          IR_InstructionSequence::emitReplace
                    ((IR_InstructionSequence *)in_x0,local_214,(uint *)local_170);
        }
        if (local_170 != (undefined8 ******)0x0) {
          local_168 = local_170;
          operator_delete(local_170);
        }
      }
LAB_00c48e98:
      pIVar22 = in_x0[4];
      local_214 = local_214 + 1;
      uVar25 = (ulong)local_214;
    } while (uVar25 < (ulong)((long)in_x0[5] - (long)pIVar22 >> 3));
  }
                    /* try { // try from 00c49dac to 00c49db3 has its CatchHandler @ 00c49e9c */
  removeMovChains();
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,IR_Section::RegList>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,IR_Section::RegList>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,IR_Section::RegList>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,IR_Section::RegList>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,IR_Section::RegList>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,IR_Section::RegList>>>
             *)&local_188,(__tree_node *)local_180);
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


