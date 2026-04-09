// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createReplacementInstSeq
// Entry Point: 00c4a090
// Size: 2184 bytes
// Signature: undefined __thiscall createReplacementInstSeq(IR_Section * this, IR_OPCODE param_1, RegList * param_2, uint * param_3, uint param_4, map * param_5)


/* IR_Section::createReplacementInstSeq(IR_OPCODE, IR_Section::RegList const&, unsigned int const*,
   unsigned int, std::__ndk1::map<unsigned int, IR_Section::RegList, std::__ndk1::less<unsigned
   int>, std::__ndk1::allocator<std::__ndk1::pair<unsigned int const, IR_Section::RegList> > >
   const&) */

IR_InstructionSequence * __thiscall
IR_Section::createReplacementInstSeq
          (IR_Section *this,IR_OPCODE param_1,RegList *param_2,uint *param_3,uint param_4,
          map *param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  IR_InstructionSequence *this_00;
  IR_Type *pIVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  map **ppmVar12;
  map **ppmVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  map **ppmVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  uint *local_100;
  uint *local_f8;
  uint *local_f0;
  void *local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  uint *local_a0;
  uint *local_98;
  uint *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  this_00 = (IR_InstructionSequence *)operator_new(0x38);
                    /* try { // try from 00c4a0e4 to 00c4a0e7 has its CatchHandler @ 00c4a97c */
  IR_InstructionSequence::IR_InstructionSequence(this_00,*(IR_Function **)this);
  switch(param_1) {
  case 0xe:
    ppmVar19 = (map **)(param_5 + 8);
    ppmVar12 = (map **)*ppmVar19;
    uVar3 = *param_3;
    ppmVar13 = ppmVar19;
    if (ppmVar12 == (map **)0x0) {
LAB_00c4a148:
      ppmVar13 = ppmVar19;
    }
    else {
      do {
        if (*(uint *)(ppmVar12 + 4) >= uVar3) {
          ppmVar13 = ppmVar12;
        }
        ppmVar12 = (map **)ppmVar12[*(uint *)(ppmVar12 + 4) < uVar3];
      } while (ppmVar12 != (map **)0x0);
      if ((ppmVar13 == ppmVar19) || (uVar3 < *(uint *)(ppmVar13 + 4))) goto LAB_00c4a148;
    }
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::vector
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_88,
               (vector *)(ppmVar13 + 5));
    local_a0 = (uint *)0x0;
    local_98 = (uint *)0x0;
    local_90 = (uint *)0x0;
                    /* try { // try from 00c4a168 to 00c4a173 has its CatchHandler @ 00c4a95c */
    pIVar4 = (IR_Type *)
             IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*(long *)this + 0x98),uVar3);
                    /* try { // try from 00c4a174 to 00c4a18f has its CatchHandler @ 00c4a950 */
    uVar3 = getSubRegList(this,pIVar4,param_3,param_4,1,(RegList *)&local_88,(RegList *)&local_a0);
    if (uVar3 == param_4) {
      if (local_80 != local_88) {
        uVar17 = 0;
        do {
                    /* try { // try from 00c4a1bc to 00c4a1c7 has its CatchHandler @ 00c4aa0c */
          IR_InstructionSequence::emit
                    (this_00,0x1a,*(uint *)(*(long *)param_2 + uVar17 * 4),local_88[uVar17]);
          uVar17 = (ulong)((int)uVar17 + 1);
        } while (uVar17 < (ulong)((long)local_80 - (long)local_88 >> 2));
      }
    }
    else {
      local_b8 = (undefined8 *)0x0;
      local_b0 = (undefined8 *)0x0;
      local_a8 = (undefined8 *)0x0;
                    /* try { // try from 00c4a2dc to 00c4a2e3 has its CatchHandler @ 00c4a930 */
      puVar8 = (undefined8 *)operator_new(4);
      local_b0 = (undefined8 *)((long)puVar8 + 4);
      *(undefined4 *)puVar8 = 0xe;
      local_b8 = puVar8;
      local_a8 = local_b0;
                    /* try { // try from 00c4a2fc to 00c4a303 has its CatchHandler @ 00c4a92c */
      puVar10 = (undefined8 *)operator_new(8);
      local_b0 = puVar10 + 1;
      *(undefined4 *)puVar10 = *(undefined4 *)puVar8;
      *(undefined4 *)((long)puVar10 + 4) = 0;
      local_b8 = puVar10;
      local_a8 = local_b0;
      operator_delete(puVar8);
      puVar7 = *(undefined4 **)param_2;
                    /* try { // try from 00c4a328 to 00c4a32f has its CatchHandler @ 00c4a988 */
      puVar5 = (undefined8 *)operator_new(0x10);
      local_b0 = (undefined8 *)((long)puVar5 + 0xc);
      uVar15 = *puVar10;
      puVar8 = puVar5 + 2;
      *(undefined4 *)(puVar5 + 1) = *puVar7;
      *puVar5 = uVar15;
      local_b8 = puVar5;
      local_a8 = puVar8;
      operator_delete(puVar10);
      *(undefined4 *)((long)puVar5 + 0xc) = *local_88;
      puVar10 = puVar8;
      local_b0 = puVar8;
      if (uVar3 < param_4) {
        puVar6 = param_3 + uVar3;
        iVar18 = param_4 - uVar3;
        puVar9 = puVar5;
        puVar20 = puVar8;
        do {
          if (puVar20 == puVar8) {
            uVar16 = (long)puVar8 - (long)puVar9;
            uVar17 = ((long)uVar16 >> 2) + 1;
            if (uVar17 >> 0x3e != 0) {
                    /* try { // try from 00c4a8e4 to 00c4a8eb has its CatchHandler @ 00c4a988 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar17 <= (ulong)((long)uVar16 >> 1)) {
              uVar17 = (long)uVar16 >> 1;
            }
            if (0x7ffffffffffffffb < uVar16) {
              uVar17 = 0x3fffffffffffffff;
            }
            if (uVar17 == 0) {
              puVar5 = (undefined8 *)0x0;
            }
            else {
              if (uVar17 >> 0x3e != 0) {
                    /* try { // try from 00c4a8f4 to 00c4a8ff has its CatchHandler @ 00c4a988 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00c4a3e8 to 00c4a3eb has its CatchHandler @ 00c4a978 */
              puVar5 = (undefined8 *)operator_new(uVar17 << 2);
            }
            puVar11 = (uint *)((long)puVar5 + ((long)uVar16 >> 2) * 4);
            puVar10 = (undefined8 *)(puVar11 + 1);
            *puVar11 = *puVar6;
            if (0 < (long)uVar16) {
              memcpy(puVar5,puVar9,uVar16);
            }
            puVar8 = (undefined8 *)((long)puVar5 + uVar17 * 4);
            local_b8 = puVar5;
            local_b0 = puVar10;
            local_a8 = puVar8;
            if (puVar9 != (undefined8 *)0x0) {
              operator_delete(puVar9);
            }
          }
          else {
            puVar10 = (undefined8 *)((long)puVar20 + 4);
            *(uint *)puVar20 = *puVar6;
            puVar5 = puVar9;
            local_b0 = puVar10;
          }
          puVar6 = puVar6 + 1;
          iVar18 = iVar18 + -1;
          puVar9 = puVar5;
          puVar20 = puVar10;
        } while (iVar18 != 0);
      }
      *(uint *)((long)puVar5 + 4) = (int)((ulong)((long)puVar10 - (long)puVar5) >> 2) - 3U | 0x10000
      ;
                    /* try { // try from 00c4a450 to 00c4a45b has its CatchHandler @ 00c4a928 */
      IR_InstructionSequence::emit(this_00,(uint *)puVar5);
      local_b0 = puVar5;
      operator_delete(puVar5);
    }
    if (local_a0 != (uint *)0x0) {
      local_98 = local_a0;
      puVar11 = local_a0;
LAB_00c4a848:
      operator_delete(puVar11);
    }
    goto LAB_00c4a84c;
  case 0xf:
    ppmVar19 = (map **)(param_5 + 8);
    ppmVar12 = (map **)*ppmVar19;
    uVar3 = param_3[1];
    ppmVar13 = ppmVar19;
    if (ppmVar12 == (map **)0x0) {
LAB_00c4a254:
      ppmVar13 = ppmVar19;
    }
    else {
      do {
        if (*(uint *)(ppmVar12 + 4) >= uVar3) {
          ppmVar13 = ppmVar12;
        }
        ppmVar12 = (map **)ppmVar12[*(uint *)(ppmVar12 + 4) < uVar3];
      } while (ppmVar12 != (map **)0x0);
      if ((ppmVar13 == ppmVar19) || (uVar3 < *(uint *)(ppmVar13 + 4))) goto LAB_00c4a254;
    }
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::vector
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_88,
               (vector *)(ppmVar13 + 5));
    if ((int)uVar3 < 0) {
                    /* try { // try from 00c4a480 to 00c4a483 has its CatchHandler @ 00c4a954 */
      pIVar4 = (IR_Type *)IR_Function::getConstType(*(IR_Function **)this,uVar3 & 0x7fffffff);
    }
    else {
                    /* try { // try from 00c4a274 to 00c4a27b has its CatchHandler @ 00c4a954 */
      pIVar4 = (IR_Type *)
               IR_RegisterSet::getRegisterType
                         ((IR_RegisterSet *)(*(IR_Function **)this + 0x98),uVar3);
    }
    puVar7 = local_88;
    local_a0 = (uint *)0x0;
    local_98 = (uint *)0x0;
    local_90 = (uint *)0x0;
    uVar17 = (long)local_80 - (long)local_88;
    if (uVar17 != 0) {
      if ((long)uVar17 < 0) {
                    /* try { // try from 00c4a90c to 00c4a913 has its CatchHandler @ 00c4a960 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00c4a4a0 to 00c4a4a7 has its CatchHandler @ 00c4a960 */
      puVar6 = (uint *)operator_new(uVar17);
      local_90 = puVar6 + ((long)uVar17 >> 2);
      local_a0 = puVar6;
      memcpy(puVar6,puVar7,uVar17);
      local_98 = (uint *)((long)puVar6 + uVar17);
    }
    local_b8 = (undefined8 *)0x0;
    local_b0 = (undefined8 *)0x0;
    local_a8 = (undefined8 *)0x0;
                    /* try { // try from 00c4a4d8 to 00c4a4f7 has its CatchHandler @ 00c4a940 */
    uVar3 = getSubRegList(this,pIVar4,param_3,param_4,2,(RegList *)&local_a0,(RegList *)&local_b8);
                    /* try { // try from 00c4a4fc to 00c4a507 has its CatchHandler @ 00c4a93c */
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::vector
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_d0,
               (vector *)param_2);
    local_e8 = (void *)0x0;
    local_e0 = (void *)0x0;
    local_d8 = 0;
                    /* try { // try from 00c4a510 to 00c4a52f has its CatchHandler @ 00c4a938 */
    getSubRegList(this,pIVar4,param_3,param_4,2,(RegList *)&local_d0,(RegList *)&local_e8);
    if (local_b0 != local_b8) {
      uVar17 = 0;
      do {
                    /* try { // try from 00c4a554 to 00c4a55f has its CatchHandler @ 00c4aa20 */
        IR_InstructionSequence::emit
                  (this_00,0x1a,*(uint *)((long)local_e8 + uVar17 * 4),
                   *(uint *)((long)local_b8 + uVar17 * 4));
        uVar17 = (ulong)((int)uVar17 + 1);
      } while (uVar17 < (ulong)((long)local_b0 - (long)local_b8 >> 2));
    }
    uVar1 = *param_3;
    local_100 = (uint *)0x0;
    local_f8 = (uint *)0x0;
    local_f0 = (uint *)0x0;
                    /* try { // try from 00c4a580 to 00c4a587 has its CatchHandler @ 00c4a934 */
    local_100 = (uint *)operator_new(4);
    local_f8 = local_100 + 1;
    *local_100 = uVar1;
    local_f0 = local_f8;
    if ((-1 < (int)uVar1) &&
       (ppmVar12 = (map **)*ppmVar19, ppmVar13 = ppmVar19, ppmVar12 != (map **)0x0)) {
      do {
        if (*(uint *)(ppmVar12 + 4) >= uVar1) {
          ppmVar13 = ppmVar12;
        }
        ppmVar12 = (map **)ppmVar12[*(uint *)(ppmVar12 + 4) < uVar1];
      } while (ppmVar12 != (map **)0x0);
      if ((ppmVar13 != ppmVar19) &&
         (*(uint *)(ppmVar13 + 4) <= uVar1 && &local_100 != (uint **)(ppmVar13 + 5))) {
                    /* try { // try from 00c4a5e4 to 00c4a5eb has its CatchHandler @ 00c4a918 */
        std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
        assign<unsigned_int*>
                  ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_100,
                   (uint *)ppmVar13[5],(uint *)ppmVar13[6]);
      }
    }
    puVar6 = local_a0;
    if (uVar3 == param_4) {
      lVar14 = (long)local_98 - (long)local_a0;
      puVar11 = local_98;
      if (lVar14 != 0) {
        uVar17 = 0;
        do {
                    /* try { // try from 00c4a61c to 00c4a627 has its CatchHandler @ 00c4a9ec */
          IR_InstructionSequence::emit(this_00,0x1a,local_d0[uVar17],local_100[uVar17]);
          uVar17 = (ulong)((int)uVar17 + 1);
          puVar11 = puVar6;
        } while (uVar17 < (ulong)(lVar14 >> 2));
      }
    }
    else {
                    /* try { // try from 00c4a640 to 00c4a647 has its CatchHandler @ 00c4a924 */
      puVar7 = (undefined4 *)operator_new(4);
      *puVar7 = 0xf;
                    /* try { // try from 00c4a660 to 00c4a667 has its CatchHandler @ 00c4a920 */
      puVar8 = (undefined8 *)operator_new(8);
      *(undefined4 *)puVar8 = *puVar7;
      *(undefined4 *)((long)puVar8 + 4) = 0;
      operator_delete(puVar7);
      puVar7 = local_d0;
                    /* try { // try from 00c4a68c to 00c4a6db has its CatchHandler @ 00c4a9a0 */
      puVar9 = (undefined8 *)operator_new(0x10);
      uVar15 = *puVar8;
      *(undefined4 *)(puVar9 + 1) = *puVar7;
      *puVar9 = uVar15;
      operator_delete(puVar8);
      puVar11 = local_a0;
      *(uint *)((long)puVar9 + 0xc) = *local_100;
      puVar10 = (undefined8 *)operator_new(0x20);
      puVar8 = (undefined8 *)((long)puVar10 + 0x14);
      uVar21 = puVar9[1];
      uVar15 = *puVar9;
      puVar5 = puVar10 + 4;
      *(uint *)(puVar10 + 2) = *puVar11;
      puVar10[1] = uVar21;
      *puVar10 = uVar15;
      operator_delete(puVar9);
      if (uVar3 < param_4) {
        puVar6 = param_3 + uVar3;
        iVar18 = param_4 - uVar3;
        puVar9 = puVar10;
        do {
          if (puVar8 == puVar5) {
            uVar16 = (long)puVar5 - (long)puVar9;
            uVar17 = ((long)uVar16 >> 2) + 1;
            if (uVar17 >> 0x3e != 0) {
                    /* try { // try from 00c4a8ec to 00c4a8f3 has its CatchHandler @ 00c4a9a0 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar17 <= (ulong)((long)uVar16 >> 1)) {
              uVar17 = (long)uVar16 >> 1;
            }
            if (0x7ffffffffffffffb < uVar16) {
              uVar17 = 0x3fffffffffffffff;
            }
            if (uVar17 == 0) {
              puVar10 = (undefined8 *)0x0;
            }
            else {
              if (uVar17 >> 0x3e != 0) {
                    /* try { // try from 00c4a900 to 00c4a90b has its CatchHandler @ 00c4a9a0 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00c4a77c to 00c4a77f has its CatchHandler @ 00c4a974 */
              puVar10 = (undefined8 *)operator_new(uVar17 << 2);
            }
            puVar8 = (undefined8 *)((long)puVar10 + ((long)uVar16 >> 2) * 4);
            *(uint *)puVar8 = *puVar6;
            if (0 < (long)uVar16) {
              memcpy(puVar10,puVar9,uVar16);
            }
            puVar5 = (undefined8 *)((long)puVar10 + uVar17 * 4);
            if (puVar9 != (undefined8 *)0x0) {
              operator_delete(puVar9);
            }
          }
          else {
            *(uint *)puVar8 = *puVar6;
            puVar10 = puVar9;
          }
          puVar8 = (undefined8 *)((long)puVar8 + 4);
          puVar6 = puVar6 + 1;
          iVar18 = iVar18 + -1;
          puVar9 = puVar10;
        } while (iVar18 != 0);
      }
      *(uint *)((long)puVar10 + 4) =
           (int)((ulong)((long)puVar8 - (long)puVar10) >> 2) - 3U | 0x10000;
                    /* try { // try from 00c4a7e4 to 00c4a7ef has its CatchHandler @ 00c4a91c */
      IR_InstructionSequence::emit(this_00,(uint *)puVar10);
      operator_delete(puVar10);
    }
    if (local_100 != (uint *)0x0) {
      local_f8 = local_100;
      operator_delete(local_100);
    }
    if (local_e8 != (void *)0x0) {
      local_e0 = local_e8;
      operator_delete(local_e8);
    }
    if (local_d0 != (undefined4 *)0x0) {
      local_c8 = local_d0;
      operator_delete(local_d0);
    }
    if (local_b8 != (undefined8 *)0x0) {
      local_b0 = local_b8;
      operator_delete(local_b8);
    }
    if (puVar11 != (uint *)0x0) goto LAB_00c4a848;
LAB_00c4a84c:
    if (local_88 != (undefined4 *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
    break;
  case 0x13:
    lVar14 = *(long *)param_2;
    if (*(long *)(param_2 + 8) != lVar14) {
      uVar17 = 0;
      do {
        IR_InstructionSequence::emit(this_00,0x13,*(uint *)(lVar14 + uVar17 * 4));
        lVar14 = *(long *)param_2;
        uVar17 = (ulong)((int)uVar17 + 1);
      } while (uVar17 < (ulong)(*(long *)(param_2 + 8) - lVar14 >> 2));
    }
    break;
  case 0x1a:
    ppmVar19 = (map **)(param_5 + 8);
    ppmVar12 = (map **)*ppmVar19;
    uVar3 = *param_3;
    ppmVar13 = ppmVar19;
    if (ppmVar12 != (map **)0x0) {
      do {
        if (*(uint *)(ppmVar12 + 4) >= uVar3) {
          ppmVar13 = ppmVar12;
        }
        ppmVar12 = (map **)ppmVar12[*(uint *)(ppmVar12 + 4) < uVar3];
      } while (ppmVar12 != (map **)0x0);
      if ((ppmVar13 != ppmVar19) && (*(uint *)(ppmVar13 + 4) <= uVar3)) {
        lVar14 = *(long *)param_2;
        if (*(long *)(param_2 + 8) != lVar14) {
          uVar17 = 0;
          do {
            IR_InstructionSequence::emit
                      (this_00,0x1a,*(uint *)(lVar14 + uVar17 * 4),
                       *(uint *)(ppmVar13[5] + uVar17 * 4));
            lVar14 = *(long *)param_2;
            uVar17 = (ulong)((int)uVar17 + 1);
          } while (uVar17 < (ulong)(*(long *)(param_2 + 8) - lVar14 >> 2));
        }
        break;
      }
    }
    IR_InstructionSequence::emit(this_00,0x1a,**(uint **)param_2,uVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}


