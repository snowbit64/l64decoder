// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onForLoop
// Entry Point: 00c0eeb4
// Size: 980 bytes
// Signature: undefined __thiscall onForLoop(CreateIR * this, AST_TypedNode * param_1, AST_TypedNode * param_2, AST_Node * param_3)


/* CreateIR::onForLoop(AST_TypedNode*, AST_TypedNode*, AST_Node*) */

void __thiscall
CreateIR::onForLoop(CreateIR *this,AST_TypedNode *param_1,AST_TypedNode *param_2,AST_Node *param_3)

{
  IR_InstructionSequence *pIVar1;
  undefined4 uVar2;
  CreateIR CVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  IR_Section *this_00;
  IR_Type *this_01;
  IR_Type *pIVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  IR_InstructionSequence aIStack_190 [56];
  undefined4 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  uint local_e8 [2];
  undefined8 local_e0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  this_00 = (IR_Section *)IR_Function::allocateSection(*(IR_Function **)(this + 0x70),1);
  IR_InstructionSequence::IR_InstructionSequence(aIStack_190,*(IR_Function **)(this + 0x70));
  uVar9 = *(undefined8 *)(this + 0x78);
  uVar11 = *(undefined8 *)(this + 0x88);
  uVar2 = *(undefined4 *)(this + 0x90);
                    /* try { // try from 00c0ef2c to 00c0ef57 has its CatchHandler @ 00c0f298 */
  this_01 = (IR_Type *)IR_TypeSet::getScalarType(*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38),9);
  uVar5 = IR_Type::getNumIRRegisters();
  uVar6 = IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),this_01,"$loopp");
  if (1 < uVar5) {
    uVar12 = 1;
    do {
                    /* try { // try from 00c0ef70 to 00c0ef8f has its CatchHandler @ 00c0f29c */
      pIVar7 = (IR_Type *)
               IR_Type::getIRRegisterType
                         (this_01,uVar12,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
      IR_RegisterSet::allocateReg
                ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar7,(char *)0x0);
      uVar12 = uVar12 + 1;
    } while (uVar5 != uVar12);
  }
                    /* try { // try from 00c0ef9c to 00c0efdf has its CatchHandler @ 00c0f298 */
  IR_Section::addPredicateRegister(this_00,uVar6,false);
  *(uint *)(this + 0x90) = uVar6;
  *(undefined8 *)(this + 0x88) = 0;
  if (param_1 == (AST_TypedNode *)0x0) {
    pIVar1 = *(IR_InstructionSequence **)(this + 0x78);
    local_e8[0] = 9;
    local_e0 = (IR_Section *)CONCAT71(local_e0._1_7_,1);
                    /* try { // try from 00c0f0b4 to 00c0f153 has its CatchHandler @ 00c0f298 */
    uVar5 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_e8);
    IR_InstructionSequence::emit(pIVar1,0x1a,uVar6,uVar5 | 0x80000000);
    pIVar1 = *(IR_InstructionSequence **)(this + 0x78);
    local_e8[0] = 0xb;
    local_e0 = this_00;
    uVar5 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_e8);
    IR_InstructionSequence::emit_0DST(pIVar1,5,uVar5 | 0x80000000);
  }
  else {
    pushOp(this,0);
    CVar3 = this[0xe0];
    this[0xe0] = (CreateIR)0x0;
    (***(code ***)param_1)(param_1,this + 8);
    lVar10 = *(long *)(this + 0x108);
    this[0xe0] = CVar3;
    local_120 = *(undefined4 *)(lVar10 + -0x38);
    uStack_114 = *(undefined8 *)(lVar10 + -0x2c);
    local_11c = *(undefined8 *)(lVar10 + -0x34);
    uStack_104 = *(undefined8 *)(lVar10 + -0x1c);
    local_10c = *(undefined8 *)(lVar10 + -0x24);
    uStack_f4 = *(undefined8 *)(lVar10 + -0xc);
    local_fc = *(undefined8 *)(lVar10 + -0x14);
    local_ec = *(undefined4 *)(lVar10 + -4);
    *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar10 + -0x38);
    local_b0 = local_11c;
    uStack_a8 = uStack_114;
    uStack_a0 = local_10c;
    uStack_98 = uStack_104;
    local_90 = local_fc;
    uStack_88 = uStack_f4;
    local_80 = local_ec;
                    /* try { // try from 00c0f028 to 00c0f043 has its CatchHandler @ 00c0f290 */
    uVar8 = IR_TypeSet::getScalarType(*(IR_TypeSet **)(this + 0x68),9);
    resolveToValue(local_e8,this,&local_120,uVar8);
    lVar10 = *(long *)(this + 0x120);
    *(long *)(this + 0x120) = lVar10 + -8;
    if (*(long *)(this + 0x118) == lVar10 + -8) {
      *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
    }
                    /* try { // try from 00c0f068 to 00c0f09b has its CatchHandler @ 00c0f294 */
    IR_InstructionSequence::emit(*(IR_InstructionSequence **)(this + 0x78),0x1a,uVar6,local_e8[0]);
    pIVar1 = *(IR_InstructionSequence **)(this + 0x78);
    local_e8[0] = 0xb;
    local_e0 = this_00;
    uVar5 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_e8);
    IR_InstructionSequence::emit_0DST(pIVar1,5,uVar5 | 0x80000000);
  }
  *(undefined8 *)(this + 0x88) = 0;
  *(IR_InstructionSequence **)(this + 0x78) = aIStack_190;
  if (param_2 != (AST_TypedNode *)0x0) {
    CVar3 = this[0xe0];
    this[0xe0] = (CreateIR)0x0;
    (***(code ***)param_2)(param_2,this + 8);
    this[0xe0] = CVar3;
  }
  if (param_1 != (AST_TypedNode *)0x0) {
    pushOp(this,0);
    CVar3 = this[0xe0];
    this[0xe0] = (CreateIR)0x0;
    (***(code ***)param_1)(param_1,this + 8);
    lVar10 = *(long *)(this + 0x108);
    this[0xe0] = CVar3;
    local_158 = *(undefined4 *)(lVar10 + -0x38);
    uStack_14c = *(undefined8 *)(lVar10 + -0x2c);
    local_154 = *(undefined8 *)(lVar10 + -0x34);
    uStack_13c = *(undefined8 *)(lVar10 + -0x1c);
    local_144 = *(undefined8 *)(lVar10 + -0x24);
    uStack_12c = *(undefined8 *)(lVar10 + -0xc);
    local_134 = *(undefined8 *)(lVar10 + -0x14);
    local_124 = *(undefined4 *)(lVar10 + -4);
    *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar10 + -0x38);
    local_b0 = local_154;
    uStack_a8 = uStack_14c;
    uStack_a0 = local_144;
    uStack_98 = uStack_13c;
    local_90 = local_134;
    uStack_88 = uStack_12c;
    local_80 = local_124;
                    /* try { // try from 00c0f198 to 00c0f1b3 has its CatchHandler @ 00c0f28c */
    uVar8 = IR_TypeSet::getScalarType(*(IR_TypeSet **)(this + 0x68),9);
    resolveToValue(local_e8,this,&local_158,uVar8);
    lVar10 = *(long *)(this + 0x120);
    *(long *)(this + 0x120) = lVar10 + -8;
    if (*(long *)(this + 0x118) == lVar10 + -8) {
      *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
    }
                    /* try { // try from 00c0f1d4 to 00c0f1e7 has its CatchHandler @ 00c0f288 */
    IR_InstructionSequence::emit(aIStack_190,0xa1,uVar6,uVar6,local_e8[0]);
  }
                    /* try { // try from 00c0f1e8 to 00c0f233 has its CatchHandler @ 00c0f298 */
  IR_InstructionSequence::emit_0DST(aIStack_190,8);
  *(IR_Section **)(this + 0x78) = this_00;
  *(IR_InstructionSequence **)(this + 0x88) = aIStack_190;
  if (param_3 != (AST_Node *)0x0) {
    CVar3 = this[0xe0];
    this[0xe0] = (CreateIR)0x0;
    (***(code ***)param_3)(param_3,this + 8);
    this_00 = *(IR_Section **)(this + 0x78);
    this[0xe0] = CVar3;
  }
  IR_InstructionSequence::emitSequence((IR_InstructionSequence *)this_00,aIStack_190);
  *(undefined8 *)(this + 0x78) = uVar9;
  *(undefined8 *)(this + 0x88) = uVar11;
  *(undefined4 *)(this + 0x90) = uVar2;
  IR_InstructionSequence::~IR_InstructionSequence(aIStack_190);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


