// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onUserFunctionCall
// Entry Point: 00c0e7a4
// Size: 1640 bytes
// Signature: undefined __thiscall onUserFunctionCall(CreateIR * this, SHC_String * param_1, SHC_String * param_2, SHC_Vector * param_3)


/* CreateIR::onUserFunctionCall(SHC_String const&, SHC_String const&, SHC_Vector<AST_Node*> const&)
    */

void __thiscall
CreateIR::onUserFunctionCall
          (CreateIR *this,SHC_String *param_1,SHC_String *param_2,SHC_Vector *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  __tree_const_iterator _Var9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
  *this_00;
  long *plVar16;
  ulong uVar17;
  IR_InstructionSequence *pIVar18;
  long **pplVar19;
  IR_Type *pIVar20;
  int *piVar21;
  int *piVar22;
  uint uVar23;
  long *plVar24;
  long **pplVar25;
  long **pplVar26;
  undefined8 *puVar27;
  long lVar28;
  uint local_174;
  void *local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  void *local_138;
  undefined8 local_130;
  undefined4 local_128 [2];
  long *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  uint local_e0;
  uint uStack_dc;
  int *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  int *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  plVar24 = *(long **)(this + 0x60);
  lVar13 = *plVar24;
  lVar28 = (plVar24[1] - lVar13) * 0x20000000 >> 0x20;
  do {
    this_00 = *(__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                **)(lVar13 + lVar28 * 8 + -8);
    _Var9 = std::__ndk1::
            __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
            ::find<SHC_String>(this_00,param_2);
    if (this_00 + 8 ==
        (__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
         *)(ulong)_Var9) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = *(long **)((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                            *)(ulong)_Var9 + 0x40);
      if (plVar16 != (long *)0x0) break;
    }
    if (lVar28 < 2) break;
    lVar13 = *plVar24;
    lVar28 = lVar28 + -1;
  } while( true );
  if (plVar16[0x13] != 0) {
    pplVar19 = (long **)(this + 0x140);
    pplVar25 = *(long ***)(this + 0x140);
    pplVar26 = pplVar19;
    while (pplVar25 != (long **)0x0) {
      while (pplVar26 = pplVar25, plVar16 < pplVar26[4]) {
        pplVar19 = pplVar26;
        pplVar25 = (long **)*pplVar26;
        if ((long **)*pplVar26 == (long **)0x0) {
          plVar24 = *pplVar26;
          goto joined_r0x00c0e888;
        }
      }
      if (plVar16 <= pplVar26[4]) break;
      pplVar19 = pplVar26 + 1;
      pplVar25 = (long **)*pplVar19;
    }
    plVar24 = *pplVar19;
joined_r0x00c0e888:
    if (plVar24 == (long *)0x0) {
      plVar24 = (long *)operator_new(0x28);
      plVar24[4] = (long)plVar16;
      *plVar24 = 0;
      plVar24[1] = 0;
      plVar24[2] = (long)pplVar26;
      *pplVar19 = plVar24;
      if (**(long **)(this + 0x138) != 0) {
        *(long *)(this + 0x138) = **(long **)(this + 0x138);
        plVar24 = *pplVar19;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x140),(__tree_node_base *)plVar24);
      *(long *)(this + 0x148) = *(long *)(this + 0x148) + 1;
    }
  }
  lVar13 = *(long *)(this + 0xe8);
  lVar28 = *(long *)(this + 0xf0);
  pIVar20 = (IR_Type *)plVar16[9];
  pushOp(this,3);
  local_140 = (void *)0x0;
  local_138 = (void *)0x0;
  local_130 = 0;
  local_158 = (void *)0x0;
  local_150 = (void *)0x0;
  local_148 = 0;
  local_170 = (void *)0x0;
  local_168 = (void *)0x0;
  local_160 = 0;
                    /* try { // try from 00c0e910 to 00c0e933 has its CatchHandler @ 00c0ee0c */
  collectOperationInsAndOuts
            (this,(GsTFunction *)plVar16,pIVar20,param_3,(vector *)&local_140,(vector *)&local_158,
             (vector *)&local_170,&local_174);
  if (local_138 == local_140) {
    iVar11 = 0;
  }
  else {
    uVar17 = 0;
    iVar11 = 0;
    do {
                    /* try { // try from 00c0e964 to 00c0e967 has its CatchHandler @ 00c0ee28 */
      iVar10 = IR_Type::getNumIRRegisters();
      iVar11 = iVar10 + iVar11;
      uVar17 = (ulong)((int)uVar17 + 1);
      uVar14 = ((long)local_138 - (long)local_140 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar17 <= uVar14 && uVar14 - uVar17 != 0);
  }
  if (local_150 == local_158) {
    uVar12 = 0;
  }
  else {
    uVar17 = 0;
    uVar12 = 0;
    do {
                    /* try { // try from 00c0e9c4 to 00c0e9c7 has its CatchHandler @ 00c0ee24 */
      iVar10 = IR_Type::getNumIRRegisters();
      uVar12 = iVar10 + uVar12;
      uVar17 = (ulong)((int)uVar17 + 1);
      uVar14 = ((long)local_150 - (long)local_158 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar17 <= uVar14 && uVar14 - uVar17 != 0);
  }
                    /* try { // try from 00c0e9f8 to 00c0ea03 has its CatchHandler @ 00c0ee14 */
  IR_InstructionSequence::beginInst
            (*(IR_InstructionSequence **)(this + 0x78),0x14,uVar12,iVar11 + 1);
  if (local_150 != local_158) {
    uVar17 = 0;
    do {
      pvVar8 = local_158;
                    /* try { // try from 00c0ea50 to 00c0ea53 has its CatchHandler @ 00c0ee20 */
      iVar11 = IR_Type::getNumIRRegisters();
      if (iVar11 != 0) {
        iVar10 = 0;
        do {
                    /* try { // try from 00c0ea70 to 00c0ea73 has its CatchHandler @ 00c0ee60 */
          IR_InstructionSequence::emitOperand
                    (*(IR_InstructionSequence **)(this + 0x78),
                     iVar10 + *(int *)((long)pvVar8 + uVar17 * 0x38));
          iVar10 = iVar10 + 1;
        } while (iVar11 != iVar10);
      }
      uVar17 = (ulong)((int)uVar17 + 1);
      uVar14 = ((long)local_150 - (long)local_158 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar17 <= uVar14 && uVar14 - uVar17 != 0);
  }
  pIVar18 = *(IR_InstructionSequence **)(this + 0x78);
  local_128[0] = 10;
                    /* try { // try from 00c0ea94 to 00c0eaa7 has its CatchHandler @ 00c0ee14 */
  local_120 = plVar16;
  uVar12 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_128);
  IR_InstructionSequence::emitOperand(pIVar18,uVar12 | 0x80000000);
  if (local_138 != local_140) {
    uVar17 = 0;
    do {
      pvVar8 = local_140;
                    /* try { // try from 00c0eaf4 to 00c0eaf7 has its CatchHandler @ 00c0ee1c */
      iVar11 = IR_Type::getNumIRRegisters();
      if (iVar11 != 0) {
        iVar10 = 0;
        do {
                    /* try { // try from 00c0eb14 to 00c0eb17 has its CatchHandler @ 00c0ee5c */
          IR_InstructionSequence::emitOperand
                    (*(IR_InstructionSequence **)(this + 0x78),
                     iVar10 + *(int *)((long)pvVar8 + uVar17 * 0x38));
          iVar10 = iVar10 + 1;
        } while (iVar11 != iVar10);
      }
      uVar17 = (ulong)((int)uVar17 + 1);
      uVar14 = ((long)local_138 - (long)local_140 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar17 <= uVar14 && uVar14 - uVar17 != 0);
  }
                    /* try { // try from 00c0eb2c to 00c0eb2f has its CatchHandler @ 00c0ee14 */
  IR_InstructionSequence::endInst();
  if (local_150 != local_158) {
    uVar17 = 0;
    piVar21 = local_a0;
    uVar12 = local_a8;
    uVar23 = uStack_a4;
    do {
      puVar27 = (undefined8 *)((long)local_158 + uVar17 * 0x38);
      puVar2 = (uint *)((long)local_170 + uVar17 * 0x38);
      piVar22 = *(int **)(puVar2 + 2);
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      uVar4 = puVar2[0xc];
      uVar14 = (ulong)uVar4;
      uVar1 = (uint)*puVar27;
      if (*piVar22 == 5) {
        uStack_90 = *(undefined8 *)(puVar2 + 6);
        local_98 = *(undefined8 *)(puVar2 + 4);
        uStack_80 = *(undefined8 *)(puVar2 + 10);
        uStack_88 = *(undefined8 *)(puVar2 + 8);
        pIVar18 = *(IR_InstructionSequence **)(this + 0x78);
        local_78 = uVar4;
        uStack_74 = puVar2[0xd];
        IR_InstructionSequence::beginInst(pIVar18,0xd,0,uVar4 + 2);
        IR_InstructionSequence::emitOperand(pIVar18,uVar1);
        IR_InstructionSequence::emitOperand(pIVar18,uVar3);
        puVar27 = &local_98;
        if (uVar4 != 0) {
          do {
                    /* try { // try from 00c0ec94 to 00c0ec9b has its CatchHandler @ 00c0ee44 */
            IR_InstructionSequence::emitOperand(pIVar18,*(uint *)puVar27);
            uVar14 = uVar14 - 1;
            puVar27 = (undefined8 *)((long)puVar27 + 4);
          } while (uVar14 != 0);
        }
                    /* try { // try from 00c0eca8 to 00c0ecaf has its CatchHandler @ 00c0ee40 */
        IR_InstructionSequence::endInst();
        piVar21 = piVar22;
        uVar12 = uVar3;
        uVar23 = uVar5;
      }
      else if (uVar4 == 0) {
        if (uVar1 != uVar3) {
                    /* try { // try from 00c0ecc0 to 00c0ecc3 has its CatchHandler @ 00c0ee10 */
          for (iVar11 = IR_Type::getNumIRRegisters(); iVar11 != 0; iVar11 = iVar11 + -1) {
                    /* try { // try from 00c0ecd0 to 00c0ecdf has its CatchHandler @ 00c0ee2c */
            IR_InstructionSequence::emit(*(IR_InstructionSequence **)(this + 0x78),0x1a,uVar3,uVar1)
            ;
            uVar1 = uVar1 + 1;
            uVar3 = uVar3 + 1;
          }
        }
      }
      else {
        uStack_c8 = *(undefined8 *)(puVar2 + 6);
        local_d0 = *(undefined8 *)(puVar2 + 4);
        uStack_b8 = *(undefined8 *)(puVar2 + 10);
        uStack_c0 = *(undefined8 *)(puVar2 + 8);
        uStack_100 = puVar27[3];
        local_108 = puVar27[2];
        uStack_f0 = puVar27[5];
        uStack_f8 = puVar27[4];
        local_e8 = puVar27[6];
                    /* try { // try from 00c0ebb8 to 00c0ec87 has its CatchHandler @ 00c0ee40 */
        local_118 = *puVar27;
        local_110 = puVar27[1];
        local_e0 = uVar3;
        uStack_dc = uVar5;
        local_d8 = piVar22;
        local_b0 = uVar4;
        uStack_ac = puVar2[0xd];
        codeRegToRegInsert(this,&local_e0,&local_118,*(undefined8 *)(this + 0x78));
      }
      uVar17 = (ulong)((int)uVar17 + 1);
      uVar14 = ((long)local_150 - (long)local_158 >> 3) * 0x6db6db6db6db6db7;
      local_a0 = piVar21;
      local_a8 = uVar12;
      uStack_a4 = uVar23;
    } while (uVar17 <= uVar14 && uVar14 - uVar17 != 0);
  }
  lVar6 = *(long *)(this + 0xf0);
  lVar15 = lVar6 - *(long *)(this + 0xe8);
  while (((ulong)(lVar28 - lVar13) >> 3 & 0xffffffff) < (ulong)(lVar15 >> 3)) {
    pIVar18 = *(IR_InstructionSequence **)(lVar6 + -8);
    *(IR_InstructionSequence ***)(this + 0xf0) = (IR_InstructionSequence **)(lVar6 + -8);
                    /* try { // try from 00c0ede8 to 00c0edef has its CatchHandler @ 00c0ee18 */
    IR_InstructionSequence::emitSequence(*(IR_InstructionSequence **)(this + 0x78),pIVar18);
    if (pIVar18 != (IR_InstructionSequence *)0x0) {
      IR_InstructionSequence::~IR_InstructionSequence(pIVar18);
      operator_delete(pIVar18);
    }
    lVar6 = *(long *)(this + 0xf0);
    lVar15 = lVar6 - *(long *)(this + 0xe8);
  }
  if (local_174 != 0) {
                    /* try { // try from 00c0ed4c to 00c0ed4f has its CatchHandler @ 00c0ee14 */
    FUN_00c09960(this + 0x100,local_158);
  }
  lVar13 = *(long *)(this + 0x120);
  *(long *)(this + 0x120) = lVar13 + -8;
  if (*(long *)(this + 0x118) == lVar13 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
  if (local_170 != (void *)0x0) {
    local_168 = local_170;
    operator_delete(local_170);
  }
  if (local_158 != (void *)0x0) {
    local_150 = local_158;
    operator_delete(local_158);
  }
  if (local_140 != (void *)0x0) {
    local_138 = local_140;
    operator_delete(local_140);
  }
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


