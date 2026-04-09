// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insertRegisters
// Entry Point: 00c4d2ec
// Size: 2724 bytes
// Signature: undefined insertRegisters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::insertRegisters() */

void IR_Section::insertRegisters(void)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  IR_Function **in_x0;
  IR_InstructionSequence *pIVar5;
  IR_InstructionSequence *this;
  void *pvVar6;
  ulong uVar7;
  ulong in_x3;
  int iVar8;
  IR_Function *pIVar9;
  ulong uVar10;
  IR_Function *pIVar11;
  IR_Function *pIVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  uint *puVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined auVar31 [16];
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  IR_InstructionSequence aIStack_b0 [32];
  IR_Function *local_90;
  IR_Function *pIStack_88;
  IR_Function *local_80;
  undefined4 local_78 [2];
  IR_InstructionSequence *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  IR_InstructionSequence::IR_InstructionSequence(aIStack_b0,*in_x0);
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  uVar1 = *(uint *)(*in_x0 + 0x98);
  uVar26 = (ulong)uVar1;
  if (uVar1 == 0) {
    local_e0 = (void *)0x0;
    uStack_d8 = 0;
    local_d0 = 0;
  }
  else {
    lVar24 = (uVar26 - 1 >> 6) + 1;
                    /* try { // try from 00c4d34c to 00c4d36b has its CatchHandler @ 00c4dd98 */
    local_c8 = operator_new(lVar24 * 8);
    uStack_c0 = 0;
    local_b8 = lVar24;
    FUN_00af6bb0(&local_c8,uVar26,0);
                    /* try { // try from 00c4d36c to 00c4d38b has its CatchHandler @ 00c4dd90 */
    local_e0 = operator_new(lVar24 * 8);
    uStack_d8 = 0;
    local_d0 = lVar24;
    FUN_00af6bb0(&local_e0,uVar26,0);
  }
  pIVar12 = in_x0[4];
  pIVar11 = in_x0[5];
  pIVar9 = pIVar11;
  if (pIVar11 != pIVar12) {
    uVar30 = 0;
    uVar29 = uVar26 & 0xfffffffe;
    do {
      puVar27 = *(uint **)(pIVar12 + uVar30 * 8);
      if (*puVar27 == 4) {
        uVar4 = puVar27[(ulong)(puVar27[1] >> 0x10) + 2];
                    /* try { // try from 00c4d594 to 00c4d59b has its CatchHandler @ 00c4dda0 */
        auVar31 = IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)in_x0,puVar27[(puVar27[1] >> 0x10) + 3]);
        uVar10 = auVar31._8_8_;
        pIVar5 = auVar31._0_8_;
        if (uVar1 == 0) {
          uVar28 = 0;
          iVar8 = 0;
        }
        else {
          if (uVar1 == 1) {
            iVar8 = 0;
            uVar28 = 0;
            uVar10 = 0;
          }
          else {
            uVar15 = 0;
            iVar16 = 0;
            iVar8 = 0;
            iVar14 = 0;
            iVar17 = 0;
            do {
              uVar23 = uVar15 >> 6;
              uVar18 = *(ulong *)(*(long *)(pIVar5 + 0x80) + uVar23 * 8);
              uVar22 = 1L << (uVar15 & 0x3e);
              uVar21 = uVar18 & uVar22;
              if (uVar21 == 0) {
                uVar10 = *(ulong *)(pIVar5 + 0x68);
              }
              uVar7 = 1L << (uVar15 & 0x3e | 1);
              uVar25 = uVar18 & uVar7;
              if (uVar25 == 0) {
                uVar18 = *(ulong *)(pIVar5 + 0x68);
              }
              if (uVar21 == 0) {
                in_x3 = *(ulong *)(uVar10 + uVar23 * 8);
              }
              if (uVar25 == 0) {
                uVar10 = *(ulong *)(uVar18 + uVar23 * 8);
              }
              uVar15 = uVar15 + 2;
              if (uVar21 != 0) {
                iVar14 = iVar14 + 1;
              }
              iVar16 = iVar16 + (uint)(uVar21 == 0 && (in_x3 & uVar22) != 0);
              if (uVar25 != 0) {
                iVar17 = iVar17 + 1;
              }
              iVar8 = iVar8 + (uint)(uVar25 == 0 && (uVar10 & uVar7) != 0);
            } while (uVar29 != uVar15);
            uVar28 = iVar17 + iVar14;
            iVar8 = iVar8 + iVar16;
            uVar10 = uVar29;
            if (uVar29 == uVar26) goto LAB_00c4da5c;
          }
          do {
            uVar15 = 1L << (uVar10 & 0x3f);
            if ((*(ulong *)(*(long *)(pIVar5 + 0x80) + (uVar10 >> 6) * 8) & uVar15) == 0) {
              if ((*(ulong *)(*(long *)(pIVar5 + 0x68) + (uVar10 >> 6) * 8) & uVar15) != 0) {
                iVar8 = iVar8 + 1;
              }
            }
            else {
              uVar28 = uVar28 + 1;
            }
            uVar10 = uVar10 + 1;
          } while (uVar26 != uVar10);
        }
LAB_00c4da5c:
                    /* try { // try from 00c4da64 to 00c4da73 has its CatchHandler @ 00c4ddd8 */
        IR_InstructionSequence::beginInst(aIStack_b0,4,uVar28,iVar8 + uVar28 + 2);
        if (uVar1 != 0) {
          uVar10 = 0;
          do {
            if ((*(ulong *)(*(long *)(pIVar5 + 0x80) + (uVar10 >> 3 & 0x1ffffffffffffff8)) >>
                 (uVar10 & 0x3f) & 1) != 0) {
                    /* try { // try from 00c4daa4 to 00c4daaf has its CatchHandler @ 00c4de04 */
              IR_InstructionSequence::emitOperand(aIStack_b0,(uint)uVar10);
            }
            uVar10 = uVar10 + 1;
          } while (uVar26 != uVar10);
        }
                    /* try { // try from 00c4daec to 00c4db1f has its CatchHandler @ 00c4ddd8 */
        IR_InstructionSequence::emitOperand(aIStack_b0,uVar4);
        local_78[0] = 0xb;
        local_70 = pIVar5;
        uVar4 = IR_Function::storeConst(*in_x0,(IR_Const *)local_78);
        IR_InstructionSequence::emitOperand(aIStack_b0,uVar4 | 0x80000000);
        if (uVar1 != 0) {
          uVar10 = 0;
          do {
            if ((*(ulong *)(*(long *)(pIVar5 + 0x80) + (uVar10 >> 3 & 0x1ffffffffffffff8)) >>
                 (uVar10 & 0x3f) & 1) != 0) {
                    /* try { // try from 00c4db50 to 00c4db5b has its CatchHandler @ 00c4de00 */
              IR_InstructionSequence::emitOperand(aIStack_b0,(uint)uVar10);
            }
            uVar10 = uVar10 + 1;
          } while (uVar26 != uVar10);
          if (uVar1 != 0) {
            uVar10 = 0;
            do {
              uVar15 = 1L << (uVar10 & 0x3f);
              if (((*(ulong *)(*(long *)(pIVar5 + 0x68) + (uVar10 >> 6) * 8) & uVar15) != 0) &&
                 ((*(ulong *)(*(long *)(pIVar5 + 0x80) + (uVar10 >> 6) * 8) & uVar15) == 0)) {
                    /* try { // try from 00c4dba0 to 00c4dbab has its CatchHandler @ 00c4ddc8 */
                IR_InstructionSequence::emitOperand(aIStack_b0,(uint)uVar10);
              }
              uVar10 = uVar10 + 1;
            } while (uVar26 != uVar10);
          }
        }
                    /* try { // try from 00c4dbb0 to 00c4dbb7 has its CatchHandler @ 00c4ddd8 */
        IR_InstructionSequence::endInst();
                    /* try { // try from 00c4dbb8 to 00c4dbf7 has its CatchHandler @ 00c4dddc */
        pvVar6 = (void *)IR_InstructionSequence::pop_back();
        uVar4 = *(uint *)((long)pvVar6 + ((ulong)(*(uint *)((long)pvVar6 + 4) >> 0xe) & 0x3fffc) + 8
                         );
        operator_delete__(pvVar6);
        IR_InstructionSequence::beginInst(pIVar5,7,0,uVar28 + 1);
        IR_InstructionSequence::emitOperand(pIVar5,uVar4);
        if (uVar1 != 0) {
          uVar10 = 0;
          do {
            if ((*(ulong *)(*(long *)(pIVar5 + 0x80) + (uVar10 >> 3 & 0x1ffffffffffffff8)) >>
                 (uVar10 & 0x3f) & 1) != 0) {
                    /* try { // try from 00c4dc28 to 00c4dc33 has its CatchHandler @ 00c4ddf8 */
              IR_InstructionSequence::emitOperand(pIVar5,(uint)uVar10);
            }
            uVar10 = uVar10 + 1;
          } while (uVar26 != uVar10);
        }
                    /* try { // try from 00c4dc38 to 00c4dc53 has its CatchHandler @ 00c4dddc */
        IR_InstructionSequence::endInst();
        in_x3 = 0;
        IR_InstructionSequence::beginInst(pIVar5,0x19,iVar8 + uVar28,0);
        if (uVar1 != 0) {
          uVar10 = 0;
          do {
            if ((*(ulong *)(*(long *)(pIVar5 + 0x80) + (uVar10 >> 3 & 0x1ffffffffffffff8)) >>
                 (uVar10 & 0x3f) & 1) != 0) {
                    /* try { // try from 00c4dc84 to 00c4dc8f has its CatchHandler @ 00c4ddf4 */
              IR_InstructionSequence::emitOperand(pIVar5,(uint)uVar10);
            }
            uVar10 = uVar10 + 1;
          } while (uVar26 != uVar10);
          if (uVar1 != 0) {
            uVar10 = 0;
            do {
              uVar15 = 1L << (uVar10 & 0x3f);
              if (((*(ulong *)(*(long *)(pIVar5 + 0x68) + (uVar10 >> 6) * 8) & uVar15) != 0) &&
                 ((*(ulong *)(*(long *)(pIVar5 + 0x80) + (uVar10 >> 6) * 8) & uVar15) == 0)) {
                    /* try { // try from 00c4dcd4 to 00c4dcdf has its CatchHandler @ 00c4ddc0 */
                IR_InstructionSequence::emitOperand(pIVar5,(uint)uVar10);
              }
              uVar10 = uVar10 + 1;
            } while (uVar26 != uVar10);
          }
        }
                    /* try { // try from 00c4dce4 to 00c4dceb has its CatchHandler @ 00c4dddc */
        IR_InstructionSequence::endInst();
                    /* try { // try from 00c4dcec to 00c4dd07 has its CatchHandler @ 00c4ddcc */
        puVar27 = (uint *)IR_InstructionSequence::pop_back();
        IR_InstructionSequence::push_front(pIVar5,puVar27);
        insertRegisters();
      }
      else if (*puVar27 == 2) {
        uVar4 = puVar27[(ulong)(puVar27[1] >> 0x10) + 2];
                    /* try { // try from 00c4d40c to 00c4d417 has its CatchHandler @ 00c4dda8 */
        pIVar5 = (IR_InstructionSequence *)
                 IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)in_x0,puVar27[(puVar27[1] >> 0x10) + 3]);
                    /* try { // try from 00c4d430 to 00c4d437 has its CatchHandler @ 00c4dda4 */
        this = (IR_InstructionSequence *)
               IR_InstructionSequence::getSection
                         ((IR_InstructionSequence *)in_x0,
                          *(uint *)((long)puVar27 + ((ulong)(puVar27[1] >> 0xe) & 0x3fffc) + 0x10));
        if (uVar1 == 0) {
          iVar8 = 0;
          uVar28 = 0;
        }
        else {
          uVar10 = 0;
          uVar28 = 0;
          iVar8 = 0;
          do {
            if (pIVar5 == (IR_InstructionSequence *)0x0) {
              uVar13 = 0;
              if (this != (IR_InstructionSequence *)0x0) {
                bVar3 = false;
                goto LAB_00c4d4d4;
              }
              uVar18 = 1L << (uVar10 & 0x3f);
              uVar21 = uVar10 >> 3 & 0x1ffffffffffffff8;
              uVar15 = ~uVar18;
              puVar19 = (ulong *)((long)local_e0 + uVar21);
              *(ulong *)((long)local_c8 + uVar21) =
                   *(ulong *)((long)local_c8 + uVar21) & (uVar18 ^ 0xffffffffffffffff);
LAB_00c4d56c:
              uVar15 = *puVar19 & uVar15;
              iVar16 = 0;
            }
            else {
              uVar15 = uVar10 >> 3 & 0x1ffffffffffffff8;
              uVar18 = 1L << (uVar10 & 0x3f);
              uVar21 = *(ulong *)(*(long *)(pIVar5 + 0x68) + uVar15) & uVar18;
              bVar3 = uVar21 != 0;
              uVar13 = (uint)((*(ulong *)(*(long *)(pIVar5 + 0x80) + uVar15) & uVar18) != 0);
              if (this == (IR_InstructionSequence *)0x0) {
                uVar15 = 1L << (uVar10 & 0x3f);
                puVar20 = (ulong *)((long)local_c8 + (uVar10 >> 6) * 8);
                if (uVar21 != 0) goto LAB_00c4d52c;
LAB_00c4d50c:
                puVar19 = (ulong *)((long)local_e0 + (uVar10 >> 6) * 8);
                *puVar20 = *puVar20 & (uVar15 ^ 0xffffffffffffffff);
                if (uVar13 == 0) {
                  uVar13 = 0;
                  uVar15 = ~uVar15;
                  goto LAB_00c4d56c;
                }
              }
              else {
LAB_00c4d4d4:
                lVar24 = (uVar10 >> 6) * 8;
                uVar15 = 1L << (uVar10 & 0x3f);
                uVar13 = uVar13 | (*(ulong *)(*(long *)(this + 0x80) + lVar24) & uVar15) != 0;
                puVar20 = (ulong *)((long)local_c8 + lVar24);
                if ((!bVar3) && ((*(ulong *)(*(long *)(this + 0x68) + lVar24) & uVar15) == 0))
                goto LAB_00c4d50c;
LAB_00c4d52c:
                puVar19 = (ulong *)((long)local_e0 + (uVar10 >> 6) * 8);
                *puVar20 = *puVar20 | uVar15;
                if (uVar13 == 0) {
                  uVar15 = ~uVar15;
                  uVar13 = 1;
                  goto LAB_00c4d56c;
                }
              }
              uVar13 = 0;
              uVar15 = *puVar19 | uVar15;
              iVar16 = 1;
            }
            iVar8 = uVar13 + iVar8;
            uVar28 = uVar28 + iVar16;
            uVar10 = uVar10 + 1;
            *puVar19 = uVar15;
          } while (uVar26 != uVar10);
        }
        uVar13 = uVar28 + iVar8;
        in_x3 = (ulong)(uVar13 + 3);
                    /* try { // try from 00c4d5dc to 00c4d5eb has its CatchHandler @ 00c4dde0 */
        IR_InstructionSequence::beginInst(aIStack_b0,2,uVar28,uVar13 + 3);
        if (uVar1 != 0) {
          uVar10 = 0;
          do {
            if ((*(ulong *)((long)local_e0 + (uVar10 >> 3 & 0x1ffffffffffffff8)) >> (uVar10 & 0x3f)
                & 1) != 0) {
                    /* try { // try from 00c4d620 to 00c4d62b has its CatchHandler @ 00c4de08 */
              IR_InstructionSequence::emitOperand(aIStack_b0,(uint)uVar10);
            }
            uVar10 = uVar10 + 1;
          } while (uVar26 != uVar10);
        }
                    /* try { // try from 00c4d630 to 00c4d68f has its CatchHandler @ 00c4dde0 */
        IR_InstructionSequence::emitOperand(aIStack_b0,uVar4);
        local_78[0] = 0xb;
        local_70 = pIVar5;
        uVar4 = IR_Function::storeConst(*in_x0,(IR_Const *)local_78);
        IR_InstructionSequence::emitOperand(aIStack_b0,uVar4 | 0x80000000);
        local_78[0] = 0xb;
        local_70 = this;
        uVar4 = IR_Function::storeConst(*in_x0,(IR_Const *)local_78);
        IR_InstructionSequence::emitOperand(aIStack_b0,uVar4 | 0x80000000);
        if (uVar1 != 0) {
          uVar10 = 0;
          do {
            if ((*(ulong *)((long)local_e0 + (uVar10 >> 3 & 0x1ffffffffffffff8)) >> (uVar10 & 0x3f)
                & 1) != 0) {
                    /* try { // try from 00c4d6c0 to 00c4d6cb has its CatchHandler @ 00c4ddfc */
              IR_InstructionSequence::emitOperand(aIStack_b0,(uint)uVar10);
            }
            uVar10 = uVar10 + 1;
          } while (uVar26 != uVar10);
          if (uVar1 != 0) {
            uVar10 = 0;
            do {
              uVar15 = 1L << (uVar10 & 0x3f);
              if (((*(ulong *)((long)local_c8 + (uVar10 >> 6) * 8) & uVar15) != 0) &&
                 ((*(ulong *)((long)local_e0 + (uVar10 >> 6) * 8) & uVar15) == 0)) {
                    /* try { // try from 00c4d710 to 00c4d71b has its CatchHandler @ 00c4ddc4 */
                IR_InstructionSequence::emitOperand(aIStack_b0,(uint)uVar10);
              }
              uVar10 = uVar10 + 1;
            } while (uVar26 != uVar10);
          }
        }
                    /* try { // try from 00c4d720 to 00c4d727 has its CatchHandler @ 00c4dde0 */
        IR_InstructionSequence::endInst();
        if (pIVar5 != (IR_InstructionSequence *)0x0) {
                    /* try { // try from 00c4d72c to 00c4d74f has its CatchHandler @ 00c4ddd4 */
          pvVar6 = (void *)IR_InstructionSequence::pop_back();
          if (pvVar6 != (void *)0x0) {
            operator_delete__(pvVar6);
          }
          IR_InstructionSequence::beginInst(pIVar5,9,0,uVar28);
          if (uVar1 != 0) {
            uVar10 = 0;
            do {
              if ((*(ulong *)((long)local_e0 + (uVar10 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar10 & 0x3f) & 1) != 0) {
                    /* try { // try from 00c4d780 to 00c4d78b has its CatchHandler @ 00c4ddf0 */
                IR_InstructionSequence::emitOperand(pIVar5,(uint)uVar10);
              }
              uVar10 = uVar10 + 1;
            } while (uVar26 != uVar10);
          }
                    /* try { // try from 00c4d790 to 00c4d7ab has its CatchHandler @ 00c4ddd4 */
          IR_InstructionSequence::endInst();
          in_x3 = 0;
          IR_InstructionSequence::beginInst(pIVar5,0x19,uVar13,0);
          if (uVar1 != 0) {
            uVar10 = 0;
            do {
              if ((*(ulong *)((long)local_e0 + (uVar10 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar10 & 0x3f) & 1) != 0) {
                    /* try { // try from 00c4d7dc to 00c4d7e7 has its CatchHandler @ 00c4ddec */
                IR_InstructionSequence::emitOperand(pIVar5,(uint)uVar10);
              }
              uVar10 = uVar10 + 1;
            } while (uVar26 != uVar10);
            if (uVar1 != 0) {
              uVar10 = 0;
              do {
                uVar15 = 1L << (uVar10 & 0x3f);
                if (((*(ulong *)((long)local_c8 + (uVar10 >> 6) * 8) & uVar15) != 0) &&
                   ((*(ulong *)((long)local_e0 + (uVar10 >> 6) * 8) & uVar15) == 0)) {
                    /* try { // try from 00c4d82c to 00c4d837 has its CatchHandler @ 00c4ddb4 */
                  IR_InstructionSequence::emitOperand(pIVar5,(uint)uVar10);
                }
                uVar10 = uVar10 + 1;
              } while (uVar26 != uVar10);
            }
          }
                    /* try { // try from 00c4d83c to 00c4d843 has its CatchHandler @ 00c4ddd4 */
          IR_InstructionSequence::endInst();
                    /* try { // try from 00c4d844 to 00c4d85f has its CatchHandler @ 00c4ddbc */
          puVar27 = (uint *)IR_InstructionSequence::pop_back();
          IR_InstructionSequence::push_front(pIVar5,puVar27);
          insertRegisters();
        }
        if (this != (IR_InstructionSequence *)0x0) {
                    /* try { // try from 00c4d864 to 00c4d887 has its CatchHandler @ 00c4ddd0 */
          pvVar6 = (void *)IR_InstructionSequence::pop_back();
          if (pvVar6 != (void *)0x0) {
            operator_delete__(pvVar6);
          }
          IR_InstructionSequence::beginInst(this,9,0,uVar28);
          if (uVar1 != 0) {
            uVar10 = 0;
            do {
              if ((*(ulong *)((long)local_e0 + (uVar10 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar10 & 0x3f) & 1) != 0) {
                    /* try { // try from 00c4d8b8 to 00c4d8c3 has its CatchHandler @ 00c4dde8 */
                IR_InstructionSequence::emitOperand(this,(uint)uVar10);
              }
              uVar10 = uVar10 + 1;
            } while (uVar26 != uVar10);
          }
                    /* try { // try from 00c4d8c8 to 00c4d8e3 has its CatchHandler @ 00c4ddd0 */
          IR_InstructionSequence::endInst();
          in_x3 = 0;
          IR_InstructionSequence::beginInst(this,0x19,uVar13,0);
          if (uVar1 != 0) {
            uVar10 = 0;
            do {
              if ((*(ulong *)((long)local_e0 + (uVar10 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar10 & 0x3f) & 1) != 0) {
                    /* try { // try from 00c4d914 to 00c4d91f has its CatchHandler @ 00c4dde4 */
                IR_InstructionSequence::emitOperand(this,(uint)uVar10);
              }
              uVar10 = uVar10 + 1;
            } while (uVar26 != uVar10);
            if (uVar1 != 0) {
              uVar10 = 0;
              do {
                uVar15 = 1L << (uVar10 & 0x3f);
                if (((*(ulong *)((long)local_c8 + (uVar10 >> 6) * 8) & uVar15) != 0) &&
                   ((*(ulong *)((long)local_e0 + (uVar10 >> 6) * 8) & uVar15) == 0)) {
                    /* try { // try from 00c4d964 to 00c4d96f has its CatchHandler @ 00c4ddb0 */
                  IR_InstructionSequence::emitOperand(this,(uint)uVar10);
                }
                uVar10 = uVar10 + 1;
              } while (uVar26 != uVar10);
            }
          }
                    /* try { // try from 00c4d974 to 00c4d97b has its CatchHandler @ 00c4ddd0 */
          IR_InstructionSequence::endInst();
                    /* try { // try from 00c4d97c to 00c4d997 has its CatchHandler @ 00c4ddb8 */
          puVar27 = (uint *)IR_InstructionSequence::pop_back();
          IR_InstructionSequence::push_front(this,puVar27);
          insertRegisters();
        }
      }
      else {
                    /* try { // try from 00c4d3b8 to 00c4d3c3 has its CatchHandler @ 00c4ddac */
        IR_InstructionSequence::emit(aIStack_b0,puVar27);
      }
      uVar30 = (ulong)((int)uVar30 + 1);
      pIVar12 = in_x0[4];
      pIVar11 = in_x0[5];
      pIVar9 = pIVar12;
    } while (uVar30 < (ulong)((long)pIVar11 - (long)pIVar12 >> 3));
  }
  pIVar12 = in_x0[6];
  in_x0[0xe] = (IR_Function *)0x0;
  in_x0[0x11] = (IR_Function *)0x0;
  in_x0[5] = pIStack_88;
  in_x0[4] = local_90;
  in_x0[6] = local_80;
  local_90 = pIVar9;
  pIStack_88 = pIVar11;
  local_80 = pIVar12;
  if (local_e0 != (void *)0x0) {
    operator_delete(local_e0);
  }
  if (local_c8 != (void *)0x0) {
    operator_delete(local_c8);
  }
  IR_InstructionSequence::~IR_InstructionSequence(aIStack_b0);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


