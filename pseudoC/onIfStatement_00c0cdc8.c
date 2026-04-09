// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onIfStatement
// Entry Point: 00c0cdc8
// Size: 796 bytes
// Signature: undefined __thiscall onIfStatement(CreateIR * this, AST_Node * param_1, AST_Node * param_2, AST_Node * param_3)


/* CreateIR::onIfStatement(AST_Node*, AST_Node*, AST_Node*) */

void __thiscall
CreateIR::onIfStatement(CreateIR *this,AST_Node *param_1,AST_Node *param_2,AST_Node *param_3)

{
  CreateIR *pCVar1;
  CreateIR CVar2;
  long lVar3;
  IR_Type *this_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  IR_Section *this_01;
  IR_Section *this_02;
  IR_Type *pIVar9;
  IR_InstructionSequence *this_03;
  uint uVar10;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint local_c8 [2];
  IR_Section *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (((param_2 != (AST_Node *)0x0) &&
      (lVar7 = (**(code **)(*(long *)param_2 + 0x30))(param_2), lVar7 != 0)) &&
     (*(int *)(lVar7 + 0x48) == 1)) {
    *(undefined4 *)(lVar7 + 0x48) = 2;
  }
  if (((param_3 != (AST_Node *)0x0) &&
      (lVar7 = (**(code **)(*(long *)param_3 + 0x30))(param_3), lVar7 != 0)) &&
     (*(int *)(lVar7 + 0x48) == 1)) {
    *(undefined4 *)(lVar7 + 0x48) = 2;
  }
  pushOp(this,0);
  CVar2 = this[0xe0];
  this[0xe0] = (CreateIR)0x0;
  pCVar1 = this + 8;
  (***(code ***)param_1)(param_1,pCVar1);
  lVar7 = *(long *)(this + 0x108);
  this[0xe0] = CVar2;
  local_100 = *(undefined8 *)(lVar7 + -0x38);
  uStack_e8 = *(undefined8 *)(lVar7 + -0x20);
  local_f0 = *(undefined8 *)(lVar7 + -0x28);
  uStack_d8 = *(undefined8 *)(lVar7 + -0x10);
  uStack_e0 = *(undefined8 *)(lVar7 + -0x18);
  local_f8 = *(undefined8 *)(lVar7 + -0x30);
  local_d0 = *(undefined8 *)(lVar7 + -8);
  *(undefined8 **)(this + 0x108) = (undefined8 *)(lVar7 + -0x38);
  local_90 = local_f0;
  uStack_88 = uStack_e8;
  uStack_80 = uStack_e0;
  uStack_78 = uStack_d8;
  local_70 = local_d0;
  uVar8 = IR_TypeSet::getScalarType(*(IR_TypeSet **)(this + 0x68),9);
  resolveToValue(local_c8,this,&local_100,uVar8);
  this_00 = (IR_Type *)local_c0;
  uVar6 = local_c8[0];
  lVar7 = *(long *)(this + 0x120);
  uStack_88 = uStack_b0;
  local_90 = local_b8;
  uStack_78 = uStack_a0;
  uStack_80 = local_a8;
  local_70 = local_98;
  *(long *)(this + 0x120) = lVar7 + -8;
  if (*(long *)(this + 0x118) == lVar7 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
    this_03 = *(IR_InstructionSequence **)(this + 0x78);
  }
  else {
    this_03 = *(IR_InstructionSequence **)(this + 0x78);
  }
  if (param_2 == (AST_Node *)0x0) {
    this_01 = (IR_Section *)0x0;
  }
  else {
    this_01 = (IR_Section *)IR_Function::allocateSection(*(IR_Function **)(this + 0x70),2);
    CVar2 = this[0xe0];
    this[0xe0] = (CreateIR)0x0;
    *(IR_Section **)(this + 0x78) = this_01;
    (***(code ***)param_2)(param_2,pCVar1);
    this[0xe0] = CVar2;
    IR_InstructionSequence::emit_0DST(*(IR_InstructionSequence **)(this + 0x78),9);
  }
  if (param_3 == (AST_Node *)0x0) {
    this_02 = (IR_Section *)0x0;
  }
  else {
    this_02 = (IR_Section *)IR_Function::allocateSection(*(IR_Function **)(this + 0x70),2);
    CVar2 = this[0xe0];
    this[0xe0] = (CreateIR)0x0;
    *(IR_Section **)(this + 0x78) = this_02;
    (***(code ***)param_3)(param_3,pCVar1);
    this[0xe0] = CVar2;
    IR_InstructionSequence::emit_0DST(*(IR_InstructionSequence **)(this + 0x78),9);
  }
  uVar4 = IR_Type::getNumIRRegisters();
  uVar5 = IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),this_00,"$condp");
  if (1 < uVar4) {
    uVar10 = 1;
    do {
      pIVar9 = (IR_Type *)
               IR_Type::getIRRegisterType
                         (this_00,uVar10,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
      IR_RegisterSet::allocateReg
                ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar9,(char *)0x0);
      uVar10 = uVar10 + 1;
    } while (uVar4 != uVar10);
  }
  IR_InstructionSequence::emit(this_03,0x1a,uVar5,uVar6);
  if (this_01 != (IR_Section *)0x0) {
    local_c8[0] = 0xb;
    local_c0 = this_01;
    uVar6 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_c8);
    IR_InstructionSequence::emit_0DST(this_03,3,uVar6 | 0x80000000);
    IR_Section::addPredicateRegister(this_01,uVar5,false);
  }
  if (this_02 != (IR_Section *)0x0) {
    local_c8[0] = 0xb;
    local_c0 = this_02;
    uVar6 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_c8);
    IR_InstructionSequence::emit_0DST(this_03,3,uVar6 | 0x80000000);
    IR_Section::addPredicateRegister(this_02,uVar5,true);
  }
  *(IR_InstructionSequence **)(this + 0x78) = this_03;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


