// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onFunctionOperator
// Entry Point: 00c0dd04
// Size: 2216 bytes
// Signature: undefined __thiscall onFunctionOperator(CreateIR * this, GsTOperator param_1, SHC_Vector * param_2)


/* CreateIR::onFunctionOperator(GsTOperator, SHC_Vector<AST_Node*> const&) */

void __thiscall CreateIR::onFunctionOperator(CreateIR *this,GsTOperator param_1,SHC_Vector *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  CreateIR CVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  IR_Type *pIVar14;
  undefined8 *puVar15;
  int *piVar16;
  void **ppvVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  IR_InstructionSequence *pIVar21;
  uint uVar22;
  IR_OPCODE IVar23;
  IR_Type *pIVar24;
  ulong uVar25;
  undefined8 uVar26;
  int *piVar27;
  uint unaff_w27;
  size_t __n;
  uint unaff_w28;
  int *piVar28;
  int *piVar29;
  undefined8 local_228;
  int *local_220;
  int *local_218;
  uint local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  uint uStack_1cc;
  int *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  uint local_1a0;
  uint uStack_19c;
  uint local_198;
  uint uStack_194;
  int *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  uint local_168;
  uint local_164;
  undefined4 local_160 [14];
  int *local_128;
  int *local_120;
  undefined8 local_118;
  void *local_f0;
  void *pvStack_e8;
  void *local_e0;
  void *pvStack_d8;
  void *local_d0;
  void *pvStack_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  IR_Type *local_a8;
  undefined8 local_a0;
  undefined4 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  lVar13 = (**(code **)(**(long **)(this + 0x58) + 0x18))();
  pushOp(this,param_1);
  pIVar24 = *(IR_Type **)(lVar13 + 0x20);
  local_20c = 0;
  if (param_1 - 0x58 < 0x31) {
    uVar9 = IR_Type::getNumIRRegisters();
    uVar10 = IR_RegisterSet::allocateReg
                       ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar24,(char *)0x0);
    local_b0 = (IR_Type *)CONCAT44(local_b0._4_4_,uVar10);
    local_80 = 0;
    local_a8 = pIVar24;
    if (1 < uVar9) {
      uVar22 = 1;
      do {
        pIVar14 = (IR_Type *)
                  IR_Type::getIRRegisterType
                            (pIVar24,uVar22,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
        IR_RegisterSet::allocateReg
                  ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar14,(char *)0x0);
        uVar22 = uVar22 + 1;
      } while (uVar9 != uVar22);
    }
    lVar13 = *(long *)param_2;
    piVar20 = (int *)0x0;
    piVar28 = (int *)0x0;
    local_228 = (int *)0x0;
    local_220 = (int *)0x0;
    local_218 = (int *)0x0;
    if (*(long *)(param_2 + 8) != lVar13) {
      uVar25 = 0;
      ppvVar17 = (void **)((ulong)local_160 | 4);
      do {
        piVar16 = local_218;
        puVar15 = *(undefined8 **)(lVar13 + uVar25 * 8);
        CVar6 = this[0xe0];
        this[0xe0] = (CreateIR)0x0;
                    /* try { // try from 00c0de60 to 00c0de67 has its CatchHandler @ 00c0e5cc */
        (**(code **)*puVar15)(puVar15,this + 8);
        lVar13 = *(long *)(this + 0x108);
        this[0xe0] = CVar6;
        uVar10 = *(undefined4 *)(lVar13 + -0x38);
        pvStack_e8 = *(void **)(lVar13 + -0x2c);
        local_f0 = *(void **)(lVar13 + -0x34);
        pvStack_d8 = *(void **)(lVar13 + -0x1c);
        local_e0 = *(void **)(lVar13 + -0x24);
        pvStack_c8 = *(void **)(lVar13 + -0xc);
        local_d0 = *(void **)(lVar13 + -0x14);
        local_c0 = *(undefined4 *)(lVar13 + -4);
        *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar13 + -0x38);
                    /* try { // try from 00c0dea8 to 00c0deab has its CatchHandler @ 00c0e5d0 */
        lVar13 = (**(code **)(**(long **)(*(long *)param_2 + uVar25 * 8) + 0x18))();
        uVar26 = *(undefined8 *)(lVar13 + 0x20);
        ppvVar17[1] = pvStack_e8;
        *ppvVar17 = local_f0;
        ppvVar17[3] = pvStack_d8;
        ppvVar17[2] = local_e0;
        ppvVar17[5] = pvStack_c8;
        ppvVar17[4] = local_d0;
        *(undefined4 *)(ppvVar17 + 6) = local_c0;
                    /* try { // try from 00c0ded0 to 00c0dee3 has its CatchHandler @ 00c0e5d4 */
        local_160[0] = uVar10;
        resolveToValue(&local_128,this,local_160,uVar26);
        iVar12 = (int)local_128;
                    /* try { // try from 00c0dee8 to 00c0deef has its CatchHandler @ 00c0e5d8 */
        iVar11 = IR_Type::getNumIRRegisters();
        piVar27 = local_228;
        piVar8 = local_228;
        for (; local_228 = piVar27, iVar11 != 0; iVar11 = iVar11 + -1) {
          if (piVar28 < piVar16) {
            piVar29 = piVar28 + 1;
            *piVar28 = iVar12;
            piVar28 = piVar20;
            piVar27 = local_228;
            local_228 = piVar8;
            local_220 = piVar29;
          }
          else {
            __n = (long)piVar28 - (long)piVar20;
            uVar18 = ((long)__n >> 2) + 1;
            if (uVar18 >> 0x3e != 0) {
              local_218 = piVar16;
                    /* try { // try from 00c0e58c to 00c0e5a7 has its CatchHandler @ 00c0e628 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar19 = (long)piVar16 - (long)piVar20 >> 1;
            if (uVar18 <= uVar19) {
              uVar18 = uVar19;
            }
            if (0x7ffffffffffffffb < (ulong)((long)piVar16 - (long)piVar20)) {
              uVar18 = 0x3fffffffffffffff;
            }
            if (uVar18 == 0) {
              piVar28 = (int *)0x0;
              local_228 = piVar8;
            }
            else {
              if (uVar18 >> 0x3e != 0) {
                local_218 = piVar16;
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              local_228 = piVar8;
                    /* try { // try from 00c0df60 to 00c0df63 has its CatchHandler @ 00c0e604 */
              piVar28 = (int *)operator_new(uVar18 << 2);
            }
            piVar29 = piVar28 + ((long)__n >> 2) + 1;
            piVar28[(long)__n >> 2] = iVar12;
            if (0 < (long)__n) {
              memcpy(piVar28,piVar20,__n);
            }
            piVar16 = piVar28 + uVar18;
            piVar27 = piVar28;
            local_220 = piVar29;
            if (piVar20 != (int *)0x0) {
              operator_delete(piVar20);
            }
          }
          iVar12 = iVar12 + 1;
          piVar20 = piVar28;
          piVar28 = piVar29;
          piVar8 = local_228;
        }
        lVar13 = *(long *)param_2;
        uVar25 = (ulong)((int)uVar25 + 1);
        local_218 = piVar16;
      } while (uVar25 < (ulong)(*(long *)(param_2 + 8) - lVar13 >> 3));
    }
                    /* try { // try from 00c0dfc4 to 00c0dfcb has its CatchHandler @ 00c0e5b4 */
    uVar9 = IR_Type::getNumIRRegisters();
    if (param_1 == 0x88) {
      if (uVar9 != 0) {
        uVar25 = 0;
        do {
          IVar23 = 0x1a;
          if (uVar25 != 0) {
            IVar23 = 0x11;
          }
                    /* try { // try from 00c0dffc to 00c0e02b has its CatchHandler @ 00c0e5fc */
          IR_InstructionSequence::beginInst(*(IR_InstructionSequence **)(this + 0x78),IVar23,1,1);
          IR_InstructionSequence::emitOperand
                    (*(IR_InstructionSequence **)(this + 0x78),(int)uVar25 + (uint)local_b0);
          IR_InstructionSequence::emitOperand
                    (*(IR_InstructionSequence **)(this + 0x78),piVar20[uVar25]);
          IR_InstructionSequence::endInst();
          uVar25 = uVar25 + 1;
        } while (uVar9 != uVar25);
      }
    }
    else {
                    /* try { // try from 00c0e048 to 00c0e053 has its CatchHandler @ 00c0e5b4 */
      IR_InstructionSequence::beginInst
                (*(IR_InstructionSequence **)(this + 0x78),0x11,uVar9,
                 (uint)((ulong)((long)piVar28 - (long)piVar20) >> 2));
      if (uVar9 != 0) {
        uVar22 = (uint)local_b0;
        do {
                    /* try { // try from 00c0e060 to 00c0e067 has its CatchHandler @ 00c0e5c4 */
          IR_InstructionSequence::emitOperand(*(IR_InstructionSequence **)(this + 0x78),uVar22);
          uVar9 = uVar9 - 1;
          uVar22 = uVar22 + 1;
        } while (uVar9 != 0);
      }
      if (piVar28 != piVar20) {
        uVar25 = 0;
        do {
                    /* try { // try from 00c0e08c to 00c0e08f has its CatchHandler @ 00c0e5bc */
          IR_InstructionSequence::emitOperand
                    (*(IR_InstructionSequence **)(this + 0x78),piVar20[uVar25]);
          uVar25 = (ulong)((int)uVar25 + 1);
        } while (uVar25 < (ulong)((long)piVar28 - (long)piVar20 >> 2));
      }
                    /* try { // try from 00c0e0a0 to 00c0e0af has its CatchHandler @ 00c0e5b4 */
      IR_InstructionSequence::endInst();
    }
    FUN_00c09960(this + 0x100,&local_b0);
    if (piVar20 != (int *)0x0) {
      operator_delete(piVar20);
    }
  }
  else {
    IVar23 = *(IR_OPCODE *)(GISLParserUtil::s_operatorOpcode + (ulong)param_1 * 4);
    if (IVar23 == 0) {
      piVar20 = (int *)GsTSymbolTableLevel::findSomeFunctionByNonUniqueName
                                 (*(GsTSymbolTableLevel **)**(undefined8 **)(this + 0x60),
                                  (&GISLParserUtil::s_operatorName)[param_1]);
      IVar23 = 0x14;
    }
    else {
      piVar20 = (int *)0x0;
    }
    local_b0 = (IR_Type *)0x0;
    local_a8 = (IR_Type *)0x0;
    local_a0 = 0;
    local_128 = (int *)0x0;
    local_120 = (int *)0x0;
    local_118 = 0;
    local_f0 = (void *)0x0;
    pvStack_e8 = (void *)0x0;
    local_e0 = (void *)0x0;
                    /* try { // try from 00c0e104 to 00c0e127 has its CatchHandler @ 00c0e5ac */
    collectOperationInsAndOuts
              (this,(GsTFunction *)piVar20,pIVar24,param_2,(vector *)&local_b0,(vector *)&local_128,
               (vector *)&local_f0,&local_20c);
    if (local_a8 == local_b0) {
      piVar28 = (int *)0x0;
    }
    else {
      uVar25 = 0;
      piVar28 = (int *)0x0;
      do {
                    /* try { // try from 00c0e158 to 00c0e15b has its CatchHandler @ 00c0e5e4 */
        iVar12 = IR_Type::getNumIRRegisters();
        piVar28 = (int *)(ulong)(uint)(iVar12 + (int)piVar28);
        uVar25 = (ulong)((int)uVar25 + 1);
        uVar18 = ((long)local_a8 - (long)local_b0 >> 3) * 0x6db6db6db6db6db7;
      } while (uVar25 <= uVar18 && uVar18 - uVar25 != 0);
    }
    if (local_120 == local_128) {
      uVar9 = 0;
    }
    else {
      uVar25 = 0;
      uVar9 = 0;
      do {
                    /* try { // try from 00c0e1b4 to 00c0e1b7 has its CatchHandler @ 00c0e5e0 */
        iVar12 = IR_Type::getNumIRRegisters();
        uVar9 = iVar12 + uVar9;
        uVar25 = (ulong)((int)uVar25 + 1);
        uVar18 = ((long)local_120 - (long)local_128 >> 3) * 0x6db6db6db6db6db7;
      } while (uVar25 <= uVar18 && uVar18 - uVar25 != 0);
    }
    uVar22 = (uint)piVar28;
    if (piVar20 != (int *)0x0) {
      uVar22 = uVar22 + 1;
    }
                    /* try { // try from 00c0e1ec to 00c0e1f7 has its CatchHandler @ 00c0e5b8 */
    IR_InstructionSequence::beginInst(*(IR_InstructionSequence **)(this + 0x78),IVar23,uVar9,uVar22)
    ;
    if (local_120 != local_128) {
      piVar28 = (int *)0x0;
      do {
        piVar16 = local_128;
                    /* try { // try from 00c0e244 to 00c0e247 has its CatchHandler @ 00c0e5dc */
        iVar12 = IR_Type::getNumIRRegisters();
        if (iVar12 != 0) {
          iVar11 = 0;
          do {
                    /* try { // try from 00c0e264 to 00c0e267 has its CatchHandler @ 00c0e644 */
            IR_InstructionSequence::emitOperand
                      (*(IR_InstructionSequence **)(this + 0x78),
                       iVar11 + piVar16[(long)piVar28 * 0xe]);
            iVar11 = iVar11 + 1;
          } while (iVar12 != iVar11);
        }
        piVar28 = (int *)(ulong)((int)piVar28 + 1);
        piVar16 = (int *)(((long)local_120 - (long)local_128 >> 3) * 0x6db6db6db6db6db7);
      } while (piVar28 <= piVar16 && (long)piVar16 - (long)piVar28 != 0);
    }
    piVar16 = local_128;
    if (piVar20 != (int *)0x0) {
      pIVar21 = *(IR_InstructionSequence **)(this + 0x78);
      local_228 = (int *)CONCAT44(local_228._4_4_,10);
                    /* try { // try from 00c0e28c to 00c0e29f has its CatchHandler @ 00c0e5b8 */
      local_220 = piVar20;
      uVar9 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)&local_228);
      IR_InstructionSequence::emitOperand(pIVar21,uVar9 | 0x80000000);
    }
    if (local_a8 != local_b0) {
      uVar25 = 0;
      piVar28 = (int *)0x38;
      do {
        pIVar24 = local_b0;
                    /* try { // try from 00c0e2ec to 00c0e2ef has its CatchHandler @ 00c0e5c8 */
        uVar18 = IR_Type::getNumIRRegisters();
        piVar20 = (int *)(uVar18 & 0xffffffff);
        if ((uint)uVar18 != 0) {
          piVar16 = (int *)0x0;
          do {
                    /* try { // try from 00c0e30c to 00c0e30f has its CatchHandler @ 00c0e640 */
            IR_InstructionSequence::emitOperand
                      (*(IR_InstructionSequence **)(this + 0x78),
                       (int)piVar16 + *(int *)(pIVar24 + uVar25 * 0x38));
            uVar9 = (int)piVar16 + 1;
            piVar16 = (int *)(ulong)uVar9;
          } while ((uint)uVar18 != uVar9);
        }
        uVar25 = (ulong)((int)uVar25 + 1);
        uVar18 = ((long)local_a8 - (long)local_b0 >> 3) * 0x6db6db6db6db6db7;
      } while (uVar25 <= uVar18 && uVar18 - uVar25 != 0);
    }
    uVar9 = (uint)local_b0;
    uVar22 = (uint)piVar20;
                    /* try { // try from 00c0e324 to 00c0e327 has its CatchHandler @ 00c0e5b8 */
    IR_InstructionSequence::endInst();
    if (local_120 != local_128) {
      uVar25 = 0;
      piVar28 = piVar16;
      uVar9 = unaff_w27;
      uVar22 = unaff_w28;
      do {
        puVar15 = (undefined8 *)(local_128 + uVar25 * 0xe);
        puVar2 = (uint *)((long)local_f0 + uVar25 * 0x38);
        piVar20 = *(int **)(puVar2 + 2);
        uVar3 = *puVar2;
        uVar5 = puVar2[1];
        uVar4 = puVar2[0xc];
        uVar18 = (ulong)uVar4;
        uVar1 = (uint)*puVar15;
        if (*piVar20 == 5) {
          uStack_180 = *(undefined8 *)(puVar2 + 6);
          local_188 = *(undefined8 *)(puVar2 + 4);
          uStack_170 = *(undefined8 *)(puVar2 + 10);
          uStack_178 = *(undefined8 *)(puVar2 + 8);
          pIVar21 = *(IR_InstructionSequence **)(this + 0x78);
          local_168 = uVar4;
          local_164 = puVar2[0xd];
          IR_InstructionSequence::beginInst(pIVar21,0xd,0,uVar4 + 2);
          IR_InstructionSequence::emitOperand(pIVar21,uVar1);
          IR_InstructionSequence::emitOperand(pIVar21,uVar3);
          puVar15 = &local_188;
          if (uVar4 != 0) {
            do {
                    /* try { // try from 00c0e480 to 00c0e487 has its CatchHandler @ 00c0e614 */
              IR_InstructionSequence::emitOperand(pIVar21,*(uint *)puVar15);
              uVar18 = uVar18 - 1;
              puVar15 = (undefined8 *)((long)puVar15 + 4);
            } while (uVar18 != 0);
          }
                    /* try { // try from 00c0e494 to 00c0e49b has its CatchHandler @ 00c0e600 */
          IR_InstructionSequence::endInst();
          piVar28 = piVar20;
          uVar9 = uVar5;
          uVar22 = uVar3;
        }
        else if (uVar4 == 0) {
          if (uVar1 != uVar3) {
                    /* try { // try from 00c0e4ac to 00c0e4af has its CatchHandler @ 00c0e5b0 */
            for (iVar12 = IR_Type::getNumIRRegisters(); iVar12 != 0; iVar12 = iVar12 + -1) {
                    /* try { // try from 00c0e4bc to 00c0e4cb has its CatchHandler @ 00c0e5e8 */
              IR_InstructionSequence::emit
                        (*(IR_InstructionSequence **)(this + 0x78),0x1a,uVar3,uVar1);
              uVar1 = uVar1 + 1;
              uVar3 = uVar3 + 1;
            }
          }
        }
        else {
          uStack_1b8 = *(undefined8 *)(puVar2 + 6);
          local_1c0 = *(undefined8 *)(puVar2 + 4);
          uStack_1a8 = *(undefined8 *)(puVar2 + 10);
          uStack_1b0 = *(undefined8 *)(puVar2 + 8);
          uStack_1f0 = puVar15[3];
          local_1f8 = puVar15[2];
          uStack_1e0 = puVar15[5];
          uStack_1e8 = puVar15[4];
          local_1d8 = puVar15[6];
                    /* try { // try from 00c0e3a0 to 00c0e473 has its CatchHandler @ 00c0e600 */
          local_208 = *puVar15;
          local_200 = puVar15[1];
          local_1d0 = uVar3;
          uStack_1cc = uVar5;
          local_1c8 = piVar20;
          local_1a0 = uVar4;
          uStack_19c = puVar2[0xd];
          codeRegToRegInsert(this,&local_1d0,&local_208,*(undefined8 *)(this + 0x78));
        }
        uVar25 = (ulong)((int)uVar25 + 1);
        uVar18 = ((long)local_120 - (long)local_128 >> 3) * 0x6db6db6db6db6db7;
      } while (uVar25 <= uVar18 && uVar18 - uVar25 != 0);
    }
    local_198 = uVar22;
    uStack_194 = uVar9;
    local_190 = piVar28;
    if (local_20c != 0) {
                    /* try { // try from 00c0e500 to 00c0e503 has its CatchHandler @ 00c0e5b8 */
      FUN_00c09960(this + 0x100);
    }
    if (local_f0 != (void *)0x0) {
      pvStack_e8 = local_f0;
      operator_delete(local_f0);
    }
    if (local_128 != (int *)0x0) {
      local_120 = local_128;
      operator_delete(local_128);
    }
    if (local_b0 != (IR_Type *)0x0) {
      local_a8 = local_b0;
      operator_delete(local_b0);
    }
  }
  lVar13 = *(long *)(this + 0x120);
  *(long *)(this + 0x120) = lVar13 + -8;
  if (*(long *)(this + 0x118) == lVar13 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
  if (*(long *)(lVar7 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


