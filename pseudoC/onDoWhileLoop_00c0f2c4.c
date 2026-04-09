// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDoWhileLoop
// Entry Point: 00c0f2c4
// Size: 692 bytes
// Signature: undefined __thiscall onDoWhileLoop(CreateIR * this, AST_Node * param_1, AST_TypedNode * param_2)


/* CreateIR::onDoWhileLoop(AST_Node*, AST_TypedNode*) */

void __thiscall CreateIR::onDoWhileLoop(CreateIR *this,AST_Node *param_1,AST_TypedNode *param_2)

{
  IR_InstructionSequence *this_00;
  undefined4 uVar1;
  CreateIR CVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  IR_Section *this_01;
  IR_Type *this_02;
  IR_Type *pIVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  IR_InstructionSequence aIStack_158 [56];
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
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  this_01 = (IR_Section *)IR_Function::allocateSection(*(IR_Function **)(this + 0x70),1);
  IR_InstructionSequence::IR_InstructionSequence(aIStack_158,*(IR_Function **)(this + 0x70));
  this_00 = *(IR_InstructionSequence **)(this + 0x78);
  uVar9 = *(undefined8 *)(this + 0x88);
  uVar1 = *(undefined4 *)(this + 0x90);
                    /* try { // try from 00c0f330 to 00c0f35b has its CatchHandler @ 00c0f580 */
  this_02 = (IR_Type *)IR_TypeSet::getScalarType(*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38),9);
  uVar4 = IR_Type::getNumIRRegisters();
  uVar5 = IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),this_02,"$loopp");
  if (1 < uVar4) {
    uVar10 = 1;
    do {
                    /* try { // try from 00c0f374 to 00c0f393 has its CatchHandler @ 00c0f584 */
      pIVar6 = (IR_Type *)
               IR_Type::getIRRegisterType
                         (this_02,uVar10,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
      IR_RegisterSet::allocateReg
                ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar6,(char *)0x0);
      uVar10 = uVar10 + 1;
    } while (uVar4 != uVar10);
  }
                    /* try { // try from 00c0f3a0 to 00c0f443 has its CatchHandler @ 00c0f580 */
  IR_Section::addPredicateRegister(this_01,uVar5,false);
  *(uint *)(this + 0x90) = uVar5;
  local_e8[0] = 9;
  local_e0 = (IR_Section *)CONCAT71(local_e0._1_7_,1);
  uVar4 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_e8);
  IR_InstructionSequence::emit(this_00,0x1a,uVar5,uVar4 | 0x80000000);
  local_e8[0] = 0xb;
  local_e0 = this_01;
  uVar4 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_e8);
  IR_InstructionSequence::emit_0DST(this_00,5,uVar4 | 0x80000000);
  *(undefined8 *)(this + 0x88) = 0;
  *(IR_InstructionSequence **)(this + 0x78) = aIStack_158;
  if (param_2 != (AST_TypedNode *)0x0) {
    pushOp(this,0);
    CVar2 = this[0xe0];
    this[0xe0] = (CreateIR)0x0;
    (***(code ***)param_2)(param_2,this + 8);
    lVar8 = *(long *)(this + 0x108);
    this[0xe0] = CVar2;
    local_120 = *(undefined4 *)(lVar8 + -0x38);
    uStack_114 = *(undefined8 *)(lVar8 + -0x2c);
    local_11c = *(undefined8 *)(lVar8 + -0x34);
    uStack_104 = *(undefined8 *)(lVar8 + -0x1c);
    local_10c = *(undefined8 *)(lVar8 + -0x24);
    uStack_f4 = *(undefined8 *)(lVar8 + -0xc);
    local_fc = *(undefined8 *)(lVar8 + -0x14);
    local_ec = *(undefined4 *)(lVar8 + -4);
    *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar8 + -0x38);
    local_b0 = local_11c;
    uStack_a8 = uStack_114;
    uStack_a0 = local_10c;
    uStack_98 = uStack_104;
    local_90 = local_fc;
    uStack_88 = uStack_f4;
    local_80 = local_ec;
                    /* try { // try from 00c0f48c to 00c0f4a7 has its CatchHandler @ 00c0f57c */
    uVar7 = IR_TypeSet::getScalarType(*(IR_TypeSet **)(this + 0x68),9);
    resolveToValue(local_e8,this,&local_120,uVar7);
    lVar8 = *(long *)(this + 0x120);
    *(long *)(this + 0x120) = lVar8 + -8;
    if (*(long *)(this + 0x118) == lVar8 + -8) {
      *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
    }
                    /* try { // try from 00c0f4c8 to 00c0f4db has its CatchHandler @ 00c0f578 */
    IR_InstructionSequence::emit(aIStack_158,0xa1,uVar5,uVar5,local_e8[0]);
  }
                    /* try { // try from 00c0f4dc to 00c0f527 has its CatchHandler @ 00c0f580 */
  IR_InstructionSequence::emit_0DST(aIStack_158,8);
  *(IR_Section **)(this + 0x78) = this_01;
  *(IR_InstructionSequence **)(this + 0x88) = aIStack_158;
  if (param_1 != (AST_Node *)0x0) {
    CVar2 = this[0xe0];
    this[0xe0] = (CreateIR)0x0;
    (***(code ***)param_1)(param_1,this + 8);
    this_01 = *(IR_Section **)(this + 0x78);
    this[0xe0] = CVar2;
  }
  IR_InstructionSequence::emitSequence((IR_InstructionSequence *)this_01,aIStack_158);
  *(IR_InstructionSequence **)(this + 0x78) = this_00;
  *(undefined8 *)(this + 0x88) = uVar9;
  *(undefined4 *)(this + 0x90) = uVar1;
  IR_InstructionSequence::~IR_InstructionSequence(aIStack_158);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


