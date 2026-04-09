// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileFunction
// Entry Point: 00c08d50
// Size: 2584 bytes
// Signature: undefined __thiscall compileFunction(CreateIR * this, GsTFunction * param_1, bool param_2)


/* CreateIR::compileFunction(GsTFunction*, bool) */

IR_Function * __thiscall CreateIR::compileFunction(CreateIR *this,GsTFunction *param_1,bool param_2)

{
  IR_QualFlags IVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  IR_Function *pIVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  IR_Type *pIVar13;
  long lVar14;
  undefined8 *puVar15;
  IR_Type *pIVar16;
  IR_InstructionSequence *pIVar17;
  GsTSymbolTableLevel *this_00;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  long **pplVar24;
  long **pplVar25;
  IR_Function **ppIVar26;
  __tree_node_base *p_Var27;
  uint uVar28;
  IR_TypeSet *pIVar29;
  GsTFunction *pGVar30;
  long lVar31;
  uint *this_01;
  char *pcVar32;
  uint uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  ulong local_f8;
  IR_Type *pIStack_f0;
  char *local_e8;
  void *local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  IR_Type *pIStack_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pIVar29 = *(IR_TypeSet **)(this + 0x68);
  pbVar8 = (byte *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
  pbVar21 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    pbVar21 = pbVar8 + 1;
  }
  pIVar9 = (IR_Function *)IR_TypeSet::getFunction(pIVar29,(char *)pbVar21);
  if (pIVar9 != (IR_Function *)0x0) goto LAB_00c08dbc;
  if (*(long **)(param_1 + 0x98) == (long *)0x0) {
    pIVar9 = (IR_Function *)0x0;
    goto LAB_00c08dbc;
  }
  lVar10 = (**(code **)(**(long **)(param_1 + 0x98) + 0x30))();
  lVar11 = (**(code **)(***(long ***)(lVar10 + 0x50) + 0x30))();
  GsTSymbolTable::push(*(GsTSymbolTable **)(this + 0x60),(SHC_PoolAllocator *)(this + 0x150));
  pIVar9 = (IR_Function *)operator_new(0xf0);
  pbVar22 = *(byte **)(param_1 + 8);
  pIVar29 = *(IR_TypeSet **)(this + 0x68);
  bVar2 = *pbVar22;
  pbVar21 = *(byte **)(pbVar22 + 0x10);
                    /* try { // try from 00c08e58 to 00c08e87 has its CatchHandler @ 00c097c8 */
  pbVar12 = (byte *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
  pbVar8 = *(byte **)(pbVar12 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar21 = pbVar22 + 1;
  }
  if ((*pbVar12 & 1) == 0) {
    pbVar8 = pbVar12 + 1;
  }
  IR_Function::IR_Function
            (pIVar9,pIVar29,(char *)pbVar21,(char *)pbVar8,*(SHC_String **)(param_1 + 0x10));
  local_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  ppIVar26 = (IR_Function **)(this + 0x70);
  *ppIVar26 = pIVar9;
  this_01 = *(uint **)(param_1 + 0x48);
  local_e0 = (void *)0x0;
  *(uint **)(this + 0xd8) = this_01;
  if ((*this_01 | this_01[2]) != 0) {
                    /* try { // try from 00c08ebc to 00c08edf has its CatchHandler @ 00c097c0 */
    uVar4 = IR_Type::getNumIRRegisters();
    uVar5 = IR_RegisterSet::allocateReg
                      ((IR_RegisterSet *)(*ppIVar26 + 0x98),(IR_Type *)this_01,"$rv");
    if (1 < uVar4) {
      uVar33 = 1;
      do {
                    /* try { // try from 00c08ef8 to 00c08f17 has its CatchHandler @ 00c097f0 */
        pIVar13 = (IR_Type *)
                  IR_Type::getIRRegisterType
                            ((IR_Type *)this_01,uVar33,*(IR_TypeSet **)(*ppIVar26 + 0x38));
        IR_RegisterSet::allocateReg((IR_RegisterSet *)(*ppIVar26 + 0x98),pIVar13,(char *)0x0);
        uVar33 = uVar33 + 1;
      } while (uVar4 != uVar33);
    }
    *(undefined4 *)(this + 0xa0) = uVar5;
    *(uint **)(this + 0xa8) = this_01;
    *(undefined4 *)(this + 0xd0) = 0;
                    /* try { // try from 00c08f34 to 00c08f5b has its CatchHandler @ 00c097bc */
    FUN_00c09960(&local_e0);
    IR_Function::addParameter
              (*(IR_Function **)(this + 0x70),"$rv",(char *)0x0,*(IR_Type **)(this + 0xd8),0x800);
  }
  lVar14 = *(long *)(lVar11 + 0x50);
  uVar4 = (uint)((ulong)(*(long *)(lVar11 + 0x58) - lVar14) >> 3);
  if (uVar4 != 0) {
    uVar33 = 0;
    while( true ) {
      lVar31 = *(long *)(param_1 + 0x20);
      IVar1 = *(IR_QualFlags *)(*(long *)(lVar31 + (long)(int)uVar33 * 0x18 + 0x10) + 0x10);
                    /* try { // try from 00c08fb0 to 00c08fb3 has its CatchHandler @ 00c097f4 */
      lVar14 = (**(code **)(**(long **)(lVar14 + (ulong)uVar33 * 8) + 0x48))();
      pIVar13 = *(IR_Type **)(lVar14 + 0x20);
                    /* try { // try from 00c08fbc to 00c08fc7 has its CatchHandler @ 00c097f8 */
      puVar15 = (undefined8 *)SHC_PoolAllocator::allocate((SHC_PoolAllocator *)(this + 0x150),0x98);
      uVar18 = *(undefined8 *)(lVar14 + 0x50);
      puVar15[4] = 0;
      puVar15[1] = uVar18;
      puVar15[2] = 0;
      *puVar15 = &PTR__GsTSymbol_00fee830;
      uVar34 = *(undefined8 *)(lVar14 + 0x40);
      uVar18 = *(undefined8 *)(lVar14 + 0x38);
      uVar36 = *(undefined8 *)(lVar14 + 0x30);
      uVar35 = *(undefined8 *)(lVar14 + 0x28);
      uVar38 = *(undefined8 *)(lVar14 + 0x20);
      uVar37 = *(undefined8 *)(lVar14 + 0x18);
      *(undefined2 *)(puVar15 + 0xb) = 0;
      puVar15[10] = uVar34;
      puVar15[9] = uVar18;
      puVar15[8] = uVar36;
      puVar15[7] = uVar35;
      puVar15[6] = uVar38;
      puVar15[5] = uVar37;
      pbVar8 = *(byte **)(lVar14 + 0x50);
      bVar2 = *pbVar8;
      pbVar21 = *(byte **)(pbVar8 + 0x10);
                    /* try { // try from 00c09008 to 00c0902b has its CatchHandler @ 00c097fc */
      uVar6 = IR_Type::getNumIRRegisters();
      if ((bVar2 & 1) == 0) {
        pbVar21 = pbVar8 + 1;
      }
      uVar5 = IR_RegisterSet::allocateReg
                        ((IR_RegisterSet *)(*ppIVar26 + 0x98),pIVar13,(char *)pbVar21);
      local_b0 = CONCAT44(local_b0._4_4_,uVar5);
      local_80 = 0;
      pIStack_a8 = pIVar13;
      if (1 < uVar6) {
        uVar28 = 1;
        do {
                    /* try { // try from 00c0904c to 00c0906b has its CatchHandler @ 00c09808 */
          pIVar16 = (IR_Type *)
                    IR_Type::getIRRegisterType(pIVar13,uVar28,*(IR_TypeSet **)(*ppIVar26 + 0x38));
          IR_RegisterSet::allocateReg((IR_RegisterSet *)(*ppIVar26 + 0x98),pIVar16,(char *)0x0);
          uVar28 = uVar28 + 1;
        } while (uVar6 != uVar28);
      }
      *(undefined *)((long)puVar15 + 0x59) = 1;
      puVar15[0xd] = pIStack_a8;
      puVar15[0xc] = local_b0;
      puVar15[0xf] = uStack_98;
      puVar15[0xe] = local_a0;
      puVar15[0x11] = uStack_88;
      puVar15[0x10] = local_90;
      puVar15[0x12] = CONCAT44(uStack_7c,local_80);
      plVar19 = *(long **)(this + 0x60);
      iVar7 = *(int *)(plVar19 + 3);
      *(int *)(plVar19 + 3) = iVar7 + 1;
      *(int *)(puVar15 + 3) = iVar7 + 1;
                    /* try { // try from 00c090c4 to 00c0914b has its CatchHandler @ 00c097fc */
      GsTSymbolTableLevel::insert
                (*(GsTSymbolTableLevel **)
                  (*plVar19 + ((plVar19[1] - *plVar19) * 0x20000000 + -0x100000000 >> 0x20) * 8),
                 (GsTSymbol *)puVar15);
      uVar6 = IVar1 & 0xc00;
      if ((uVar6 == 0x800) || (FUN_00c09960(&local_c8,&local_b0), uVar6 != 0x400)) {
        FUN_00c09960(&local_e0,&local_b0);
      }
      pbVar22 = (byte *)puVar15[1];
      pbVar21 = *(byte **)(pbVar22 + 0x10);
      pbVar8 = *(byte **)(lVar31 + (long)(int)uVar33 * 0x18 + 8);
      if ((*pbVar22 & 1) == 0) {
        pbVar21 = pbVar22 + 1;
      }
      if (pbVar8 == (byte *)0x0) {
        pbVar22 = (byte *)0x0;
      }
      else {
        pbVar22 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar22 = pbVar8 + 1;
        }
      }
      IR_Function::addParameter(*ppIVar26,(char *)pbVar21,(char *)pbVar22,pIVar13,IVar1);
      uVar33 = uVar33 + 1;
      if (uVar33 == uVar4) break;
      lVar14 = *(long *)(lVar11 + 0x50);
    }
  }
                    /* try { // try from 00c0918c to 00c0918f has its CatchHandler @ 00c09770 */
  if ((*(long *)(lVar10 + 0x58) - *(long *)(lVar10 + 0x50) == 0x10) &&
     (lVar11 = (**(code **)(**(long **)(*(long *)(lVar10 + 0x50) + 8) + 0x48))(), lVar11 != 0)) {
    pbVar8 = *(byte **)(lVar11 + 0x50);
    pbVar21 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar21 = pbVar8 + 1;
    }
    pIVar13 = (IR_Type *)strlen((char *)pbVar21);
    if ((IR_Type *)0xffffffffffffffef < pIVar13) {
                    /* try { // try from 00c0975c to 00c09763 has its CatchHandler @ 00c0976c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pIVar13 < (IR_Type *)0x17) {
      pcVar32 = (char *)((ulong)&local_b0 | 1);
      local_b0 = CONCAT71(local_b0._1_7_,(char)((int)pIVar13 << 1));
      if (pIVar13 != (IR_Type *)0x0) goto LAB_00c095f8;
    }
    else {
                    /* try { // try from 00c095e0 to 00c095e7 has its CatchHandler @ 00c0976c */
      pcVar32 = (char *)operator_new((ulong)(pIVar13 + 0x10) & 0xfffffffffffffff0);
      local_b0 = (ulong)(pIVar13 + 0x10) & 0xfffffffffffffff0 | 1;
      pIStack_a8 = pIVar13;
      local_a0 = pcVar32;
LAB_00c095f8:
      memcpy(pcVar32,pbVar21,(size_t)pIVar13);
    }
    pcVar32[(long)pIVar13] = '\0';
                    /* try { // try from 00c0960c to 00c09623 has its CatchHandler @ 00c09768 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_f8,(ulong)&local_b0,2,(allocator *)0xffffffffffffffff);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    pIStack_a8 = pIStack_f0;
    local_b0 = local_f8;
    local_a0 = local_e8;
    if ((local_f8 & 1) == 0) {
      uVar20 = local_f8 >> 1 & 0x7f;
      local_e8 = (char *)((long)&local_b0 + uVar20);
      local_b0._1_7_ = (undefined7)(local_f8 >> 8);
      local_b0 = CONCAT71(local_b0._1_7_,((char)uVar20 + -1) * '\x02');
    }
    else {
      pIStack_a8 = pIStack_f0 + -1;
      local_e8 = local_e8 + (long)pIStack_a8;
    }
    *local_e8 = '\0';
    if ((local_b0 & 1) == 0) {
      uVar20 = local_b0 >> 1 & 0x7f;
      pcVar32 = (char *)((long)&local_b0 + uVar20);
      local_b0 = CONCAT71(local_b0._1_7_,((char)uVar20 + -1) * '\x02');
    }
    else {
      pIStack_a8 = pIStack_a8 + -1;
      pcVar32 = local_a0 + (long)pIStack_a8;
    }
    *pcVar32 = '\0';
    pcVar32 = (char *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      pcVar32 = local_a0;
    }
                    /* try { // try from 00c096e8 to 00c0971b has its CatchHandler @ 00c09784 */
    IR_Function::setAsmDefinition
              (*ppIVar26,pcVar32,*(int *)(lVar11 + 0x48) != 0,*(IR_Type **)(param_1 + 200));
    pcVar32 = *(char **)(this + 0x68);
    pbVar21 = (byte *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
    pIVar9 = *(IR_Function **)(pbVar21 + 0x10);
    if ((*pbVar21 & 1) == 0) {
      pIVar9 = (IR_Function *)(pbVar21 + 1);
    }
    IR_TypeSet::addFunction(pcVar32,pIVar9);
    pIVar9 = *ppIVar26;
    *ppIVar26 = (IR_Function *)0x0;
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
  }
  else {
                    /* try { // try from 00c091e4 to 00c091f7 has its CatchHandler @ 00c097c4 */
    uVar18 = IR_Function::allocateSection(*ppIVar26,0);
    *(undefined8 *)(this + 0x78) = uVar18;
    pIVar17 = (IR_InstructionSequence *)operator_new(0x38);
                    /* try { // try from 00c09200 to 00c09203 has its CatchHandler @ 00c09778 */
    IR_InstructionSequence::IR_InstructionSequence(pIVar17,*ppIVar26);
    *(IR_InstructionSequence **)(this + 0x98) = pIVar17;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x90) = 0;
    this[0xe0] = (CreateIR)0x0;
    *(undefined8 *)(this + 0xf0) = *(undefined8 *)(this + 0xe8);
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
    *(undefined8 *)(this + 0x120) = *(undefined8 *)(this + 0x118);
    this[0x130] = (CreateIR)0x0;
    if (local_c0 == local_c8) {
      uVar4 = 0;
    }
    else {
      uVar20 = 0;
      uVar4 = 0;
      do {
                    /* try { // try from 00c09260 to 00c09263 has its CatchHandler @ 00c097ec */
        iVar7 = IR_Type::getNumIRRegisters();
        uVar4 = iVar7 + uVar4;
        uVar20 = (ulong)((int)uVar20 + 1);
        uVar23 = ((long)local_c0 - (long)local_c8 >> 3) * 0x6db6db6db6db6db7;
      } while (uVar20 <= uVar23 && uVar23 - uVar20 != 0);
      pIVar17 = *(IR_InstructionSequence **)(this + 0x98);
    }
                    /* try { // try from 00c09298 to 00c092ab has its CatchHandler @ 00c097d4 */
    IR_InstructionSequence::beginInst(pIVar17,0x19,uVar4,0);
    if (local_c0 != local_c8) {
      uVar20 = 0;
      do {
        uVar4 = *(uint *)((long)local_c8 + uVar20 * 0x38);
                    /* try { // try from 00c092fc to 00c092ff has its CatchHandler @ 00c097e4 */
        for (iVar7 = IR_Type::getNumIRRegisters(); iVar7 != 0; iVar7 = iVar7 + -1) {
                    /* try { // try from 00c0930c to 00c09313 has its CatchHandler @ 00c09804 */
          IR_InstructionSequence::emitOperand(*(IR_InstructionSequence **)(this + 0x98),uVar4);
          uVar4 = uVar4 + 1;
        }
        uVar20 = (ulong)((int)uVar20 + 1);
        uVar23 = ((long)local_c0 - (long)local_c8 >> 3) * 0x6db6db6db6db6db7;
      } while (uVar20 <= uVar23 && uVar23 - uVar20 != 0);
    }
                    /* try { // try from 00c09328 to 00c09333 has its CatchHandler @ 00c097d4 */
    IR_InstructionSequence::endInst();
    pIVar17 = (IR_InstructionSequence *)operator_new(0x38);
                    /* try { // try from 00c0933c to 00c0933f has its CatchHandler @ 00c09774 */
    IR_InstructionSequence::IR_InstructionSequence(pIVar17,*ppIVar26);
    *(IR_InstructionSequence **)(this + 0x80) = pIVar17;
    if (local_d8 == local_e0) {
      uVar4 = 0;
    }
    else {
      uVar20 = 0;
      uVar4 = 0;
      do {
                    /* try { // try from 00c09374 to 00c09377 has its CatchHandler @ 00c097e8 */
        iVar7 = IR_Type::getNumIRRegisters();
        uVar4 = iVar7 + uVar4;
        uVar20 = (ulong)((int)uVar20 + 1);
        uVar23 = ((long)local_d8 - (long)local_e0 >> 3) * 0x6db6db6db6db6db7;
      } while (uVar20 <= uVar23 && uVar23 - uVar20 != 0);
      pIVar17 = *(IR_InstructionSequence **)(this + 0x80);
    }
                    /* try { // try from 00c093a4 to 00c093b7 has its CatchHandler @ 00c097d8 */
    IR_InstructionSequence::beginInst(pIVar17,6,0,uVar4);
    if (local_d8 != local_e0) {
      uVar20 = 0;
      do {
        uVar4 = *(uint *)((long)local_e0 + uVar20 * 0x38);
                    /* try { // try from 00c09408 to 00c0940b has its CatchHandler @ 00c097e0 */
        for (iVar7 = IR_Type::getNumIRRegisters(); iVar7 != 0; iVar7 = iVar7 + -1) {
                    /* try { // try from 00c09418 to 00c0941f has its CatchHandler @ 00c09800 */
          IR_InstructionSequence::emitOperand(*(IR_InstructionSequence **)(this + 0x80),uVar4);
          uVar4 = uVar4 + 1;
        }
        uVar20 = (ulong)((int)uVar20 + 1);
        uVar23 = ((long)local_d8 - (long)local_e0 >> 3) * 0x6db6db6db6db6db7;
      } while (uVar20 <= uVar23 && uVar23 - uVar20 != 0);
    }
                    /* try { // try from 00c09434 to 00c0953b has its CatchHandler @ 00c097d8 */
    IR_InstructionSequence::endInst();
    if (*(long *)(lVar10 + 0x58) - *(long *)(lVar10 + 0x50) == 0x10) {
      puVar15 = *(undefined8 **)(*(long *)(lVar10 + 0x50) + 8);
      (**(code **)*puVar15)(puVar15,this + 8);
    }
    IR_InstructionSequence::emitSequence
              (*(IR_InstructionSequence **)(this + 0x78),*(IR_InstructionSequence **)(this + 0x80));
    pIVar17 = *(IR_InstructionSequence **)(this + 0x80);
    if (pIVar17 != (IR_InstructionSequence *)0x0) {
      IR_InstructionSequence::~IR_InstructionSequence(pIVar17);
      operator_delete(pIVar17);
    }
    IR_InstructionSequence::emitPrefixSequence
              (*(IR_InstructionSequence **)(this + 0x78),*(IR_InstructionSequence **)(this + 0x98));
    pIVar17 = *(IR_InstructionSequence **)(this + 0x98);
    if (pIVar17 != (IR_InstructionSequence *)0x0) {
      IR_InstructionSequence::~IR_InstructionSequence(pIVar17);
      operator_delete(pIVar17);
    }
    if (this[0x130] == (CreateIR)0x0) {
      plVar19 = *(long **)(this + 0x60);
      lVar10 = plVar19[1];
      this_00 = *(GsTSymbolTableLevel **)
                 (*plVar19 + ((lVar10 - *plVar19) * 0x20000000 + -0x100000000 >> 0x20) * 8);
      if (this_00 != (GsTSymbolTableLevel *)0x0) {
        GsTSymbolTableLevel::~GsTSymbolTableLevel(this_00);
        lVar10 = plVar19[1];
      }
      plVar19[1] = lVar10 + -8;
      IR_Function::simplify1();
      pcVar32 = *(char **)(this + 0x68);
      pbVar21 = (byte *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
      pIVar9 = *(IR_Function **)(pbVar21 + 0x10);
      if ((*pbVar21 & 1) == 0) {
        pIVar9 = (IR_Function *)(pbVar21 + 1);
      }
      IR_TypeSet::addFunction(pcVar32,pIVar9);
      pIVar9 = *ppIVar26;
      *ppIVar26 = (IR_Function *)0x0;
      if (!param_2) {
        while (*(long *)(this + 0x148) != 0) {
          p_Var27 = *(__tree_node_base **)(this + 0x138);
          pplVar25 = *(long ***)(p_Var27 + 8);
          if (*(long ***)(p_Var27 + 8) == (long **)0x0) {
            pplVar25 = (long **)(p_Var27 + 0x10);
            pplVar24 = (long **)*pplVar25;
            if ((__tree_node_base *)*pplVar24 != p_Var27) {
              do {
                plVar19 = *pplVar25;
                pplVar25 = (long **)(plVar19 + 2);
                pplVar24 = (long **)*pplVar25;
              } while (*pplVar24 != plVar19);
            }
          }
          else {
            do {
              pplVar24 = pplVar25;
              pplVar25 = (long **)*pplVar24;
            } while (*pplVar24 != (long *)0x0);
          }
          pGVar30 = *(GsTFunction **)(p_Var27 + 0x20);
          *(long ***)(this + 0x138) = pplVar24;
          *(long *)(this + 0x148) = *(long *)(this + 0x148) + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 0x140),p_Var27);
          operator_delete(p_Var27);
                    /* try { // try from 00c09574 to 00c09583 has its CatchHandler @ 00c097dc */
          compileFunction(this,pGVar30,true);
        }
      }
    }
    else {
      pIVar9 = *ppIVar26;
      if (pIVar9 != (IR_Function *)0x0) {
        IR_Function::~IR_Function(pIVar9);
        operator_delete(pIVar9);
      }
      pIVar9 = (IR_Function *)0x0;
      *ppIVar26 = (IR_Function *)0x0;
    }
  }
  if (local_e0 != (void *)0x0) {
    local_d8 = local_e0;
    operator_delete(local_e0);
  }
  if (local_c8 != (void *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
LAB_00c08dbc:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return pIVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


