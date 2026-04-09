// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeDuplicateOperations
// Entry Point: 00c4b0ac
// Size: 1500 bytes
// Signature: undefined removeDuplicateOperations(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::removeDuplicateOperations() */

undefined4 IR_Section::removeDuplicateOperations(void)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  IR_Function **in_x0;
  long lVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  int *piVar12;
  IR_Function *pIVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  int **ppiVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  IR_Function *pIVar21;
  ulong uVar22;
  uint *puVar23;
  uint *puVar24;
  undefined4 local_2464;
  undefined4 local_2450 [1018];
  int *piStack_1468;
  void *apvStack_1460 [2];
  int *local_1450 [636];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  memset(&piStack_1468 + 3,0,0x13e0);
  pIVar13 = in_x0[4];
  pIVar21 = in_x0[5];
  if (pIVar21 != pIVar13) {
    uVar22 = 0;
    do {
      uVar18 = **(uint **)(pIVar13 + uVar22 * 8);
      uVar9 = (ulong)uVar18;
      iVar5 = (int)uVar22;
      if (0x15 < uVar18 || (1 << (ulong)(uVar18 & 0x1f) & 0x283000U) == 0) {
        ppiVar17 = local_1450 + uVar9 * 3 + 1;
        piVar10 = *ppiVar17;
        if (piVar10 == local_1450[uVar9 * 3 + 2]) {
          piVar12 = (&piStack_1468)[uVar9 * 3 + 3];
          uVar20 = (long)piVar10 - (long)piVar12;
          uVar22 = ((long)uVar20 >> 2) + 1;
          if (uVar22 >> 0x3e != 0) {
                    /* try { // try from 00c4b670 to 00c4b683 has its CatchHandler @ 00c4b6a4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar22 <= (ulong)((long)uVar20 >> 1)) {
            uVar22 = (long)uVar20 >> 1;
          }
          if (0x7ffffffffffffffb < uVar20) {
            uVar22 = 0x3fffffffffffffff;
          }
          if (uVar22 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            if (uVar22 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00c4b1bc to 00c4b1bf has its CatchHandler @ 00c4b6a0 */
            piVar10 = (int *)operator_new(uVar22 << 2);
          }
          piVar10[(long)uVar20 >> 2] = iVar5;
          if (0 < (long)uVar20) {
            memcpy(piVar10,piVar12,uVar20);
          }
          (&piStack_1468)[uVar9 * 3 + 3] = piVar10;
          *ppiVar17 = piVar10 + ((long)uVar20 >> 2) + 1;
          local_1450[uVar9 * 3 + 2] = piVar10 + uVar22;
          if (piVar12 != (int *)0x0) {
            operator_delete(piVar12);
            pIVar13 = in_x0[4];
            pIVar21 = in_x0[5];
          }
        }
        else {
          *piVar10 = iVar5;
          *ppiVar17 = piVar10 + 1;
        }
      }
      uVar22 = (ulong)(iVar5 + 1);
    } while (uVar22 < (ulong)((long)pIVar21 - (long)pIVar13 >> 3));
  }
  local_2464 = 0;
  uVar22 = 0;
  do {
    piVar10 = (&piStack_1468)[uVar22 * 3 + 3];
    piVar12 = local_1450[uVar22 * 3 + 1];
    if (piVar12 != piVar10) {
      uVar9 = 0;
      uVar18 = 0;
      do {
        puVar23 = (uint *)(piVar10 + uVar9);
        uVar18 = uVar18 + 1;
        uVar9 = (ulong)uVar18;
        pIVar13 = in_x0[4];
        puVar23 = *(uint **)(pIVar13 + (ulong)*puVar23 * 8);
        if (uVar22 == *puVar23) {
          uVar20 = (long)piVar12 - (long)piVar10 >> 2;
          uVar11 = uVar9;
          uVar19 = uVar18;
          if (uVar9 < uVar20) {
            do {
              puVar24 = *(uint **)(pIVar13 + (ulong)(uint)piVar10[uVar11] * 8);
              if (uVar22 == *puVar24) {
                uVar4 = puVar23[1];
                uVar11 = (ulong)uVar4;
                uVar20 = uVar11 & 0xffff;
                if (((uint)uVar20 == (puVar24[1] & 0xffff)) &&
                   (uVar2 = uVar4 >> 0x10, uVar2 == puVar24[1] >> 0x10)) {
                  if ((uint)uVar20 != 0) {
                    puVar15 = puVar23 + (ulong)uVar2 + 2;
                    puVar14 = puVar24 + (ulong)uVar2 + 2;
                    do {
                      if (*puVar15 != *puVar14) goto LAB_00c4b344;
                      puVar14 = puVar14 + 1;
                      puVar15 = puVar15 + 1;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                  if (0xffff < uVar4) {
                    bVar3 = true;
                    lVar16 = 2;
                    do {
                      uVar4 = puVar24[lVar16];
                      if (-1 < (int)(uVar4 | puVar23[lVar16])) {
                    /* try { // try from 00c4b440 to 00c4b457 has its CatchHandler @ 00c4b6b4 */
                        lVar6 = IR_RegisterSet::getRegisterType
                                          ((IR_RegisterSet *)(*in_x0 + 0x98),puVar23[lVar16]);
                        lVar7 = IR_RegisterSet::getRegisterType
                                          ((IR_RegisterSet *)(*in_x0 + 0x98),uVar4);
                        bVar3 = (bool)(lVar6 == lVar7 & bVar3);
                        if ((lVar6 != lVar7) && (uVar22 != 0x12)) {
                    /* try { // try from 00c4b470 to 00c4b4df has its CatchHandler @ 00c4b6b0 */
                          IR_InstructionSequence::disassembleInst
                                    ((IR_InstructionSequence *)in_x0,puVar23,(char *)local_2450,
                                     (vector *)0x0);
                          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::
                                                           singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00c4b4f8 to 00c4b503 has its CatchHandler @ 00c4b68c */
                            LogManager::LogManager
                                      ((LogManager *)&LogManager::getInstance()::singletonLogManager
                                      );
                            __cxa_atexit(LogManager::~LogManager,
                                         &LogManager::getInstance()::singletonLogManager,
                                         &PTR_LOOP_00fd8de0);
                            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                          }
                          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager
                                             ,"Error: Register type mismatch. %s, ",local_2450);
                          IR_InstructionSequence::disassembleInst
                                    ((IR_InstructionSequence *)in_x0,puVar24,(char *)local_2450,
                                     (vector *)0x0);
                          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::
                                                           singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00c4b53c to 00c4b547 has its CatchHandler @ 00c4b688 */
                            LogManager::LogManager
                                      ((LogManager *)&LogManager::getInstance()::singletonLogManager
                                      );
                            __cxa_atexit(LogManager::~LogManager,
                                         &LogManager::getInstance()::singletonLogManager,
                                         &PTR_LOOP_00fd8de0);
                            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                          }
                          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager
                                             ,&DAT_005118dd,local_2450);
                          bVar3 = false;
                        }
                      }
                      uVar4 = puVar23[1];
                      uVar11 = (ulong)uVar4;
                      uVar20 = lVar16 - 1;
                      lVar16 = lVar16 + 1;
                    } while (uVar20 < uVar4 >> 0x10);
                    if ((bVar3) && (0xffff < uVar4)) {
                      uVar20 = 0;
                      do {
                        uVar4 = puVar24[uVar20 + 2];
                        if (-1 < (int)uVar4) {
                          if ((int)puVar23[uVar20 + 2] < 0) {
                            puVar23[uVar20 + 2] = uVar4;
                          }
                          else {
                    /* try { // try from 00c4b5b4 to 00c4b5d3 has its CatchHandler @ 00c4b6ac */
                            replaceRegWithField((IR_Section *)in_x0,uVar4,puVar23[uVar20 + 2]);
                          }
                          local_2450[0] = 0;
                          uVar4 = IR_Function::storeConst(*in_x0,(IR_Const *)local_2450);
                          puVar24[uVar20 + 2] = uVar4 | 0x80000000;
                          uVar11 = (ulong)puVar23[1];
                          local_2464 = 1;
                        }
                        uVar20 = uVar20 + 1;
                      } while (uVar20 < uVar11 >> 0x10);
                    }
                  }
                }
LAB_00c4b344:
                if ((((uVar22 == *puVar24) && ((uint)uVar22 < 0x26)) &&
                    ((1L << (uVar22 & 0x3f) & 0x3bf8000000U) != 0)) &&
                   ((-1 < (int)puVar23[2] &&
                    (*(uint *)((long)puVar24 + ((ulong)(puVar24[1] >> 0xe) & 0x3fffc) + 8) ==
                     puVar23[2])))) {
                    /* try { // try from 00c4b3a8 to 00c4b3bf has its CatchHandler @ 00c4b6a8 */
                  replaceRegWithField((IR_Section *)in_x0,puVar24[2],
                                      puVar23[(int)(uVar11 >> 0x10) + 2]);
                  local_2450[0] = 0;
                  uVar4 = IR_Function::storeConst(*in_x0,(IR_Const *)local_2450);
                  local_2464 = 1;
                  puVar24[2] = uVar4 | 0x80000000;
                }
              }
              piVar12 = local_1450[uVar22 * 3 + 1];
              uVar19 = uVar19 + 1;
              piVar10 = (&piStack_1468)[uVar22 * 3 + 3];
              uVar20 = (long)piVar12 - (long)piVar10 >> 2;
              if (uVar20 <= uVar19) break;
              pIVar13 = in_x0[4];
              uVar11 = (ulong)uVar19;
            } while( true );
          }
        }
        else {
          uVar20 = (long)piVar12 - (long)piVar10 >> 2;
        }
      } while (uVar9 < uVar20);
    }
    uVar22 = uVar22 + 1;
    if (uVar22 == 0xd4) {
      lVar16 = 0x13e0;
      do {
        pvVar8 = *(void **)((long)&piStack_1468 + lVar16);
        if (pvVar8 != (void *)0x0) {
          *(void **)((long)&piStack_1468 + lVar16 + 8) = pvVar8;
          operator_delete(pvVar8);
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != 0);
      if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_2464;
    }
  } while( true );
}


