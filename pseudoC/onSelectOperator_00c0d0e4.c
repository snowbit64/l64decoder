// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSelectOperator
// Entry Point: 00c0d0e4
// Size: 844 bytes
// Signature: undefined __thiscall onSelectOperator(CreateIR * this, AST_Node * param_1, AST_Node * param_2, AST_Node * param_3)


/* CreateIR::onSelectOperator(AST_Node*, AST_Node*, AST_Node*) */

void __thiscall
CreateIR::onSelectOperator(CreateIR *this,AST_Node *param_1,AST_Node *param_2,AST_Node *param_3)

{
  CreateIR *pCVar1;
  CreateIR CVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  IR_Type *pIVar10;
  long lVar11;
  IR_Type *this_00;
  uint uVar12;
  undefined4 local_208;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  uint local_e8 [2];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  pushOp(this,0xb8);
  lVar9 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  CVar2 = this[0xe0];
  this[0xe0] = (CreateIR)0x0;
  pCVar1 = this + 8;
  (***(code ***)param_1)(param_1,pCVar1);
  lVar11 = *(long *)(this + 0x108);
  this[0xe0] = CVar2;
  local_120 = *(undefined4 *)(lVar11 + -0x38);
  local_ec = *(undefined4 *)(lVar11 + -4);
  uStack_f4 = *(undefined8 *)(lVar11 + -0xc);
  local_fc = *(undefined8 *)(lVar11 + -0x14);
  uStack_104 = *(undefined8 *)(lVar11 + -0x1c);
  local_10c = *(undefined8 *)(lVar11 + -0x24);
  uStack_114 = *(undefined8 *)(lVar11 + -0x2c);
  local_11c = *(undefined8 *)(lVar11 + -0x34);
  *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar11 + -0x38);
  local_b0 = local_11c;
  uStack_a8 = uStack_114;
  local_a0 = local_10c;
  uStack_98 = uStack_104;
  local_90 = local_fc;
  uStack_88 = uStack_f4;
  local_80 = local_ec;
  resolveToValue(local_e8,this,&local_120,*(undefined8 *)(lVar9 + 0x20));
  uVar4 = local_e8[0];
  uStack_98 = uStack_cc;
  local_a0 = local_d4;
  local_90 = local_c4;
  local_80 = local_b4;
  lVar9 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
  CVar2 = this[0xe0];
  this[0xe0] = (CreateIR)0x0;
  (***(code ***)param_2)(param_2,pCVar1);
  lVar11 = *(long *)(this + 0x108);
  this[0xe0] = CVar2;
  local_198 = *(undefined4 *)(lVar11 + -0x38);
  local_164 = *(undefined4 *)(lVar11 + -4);
  uStack_16c = *(undefined8 *)(lVar11 + -0xc);
  local_174 = *(undefined8 *)(lVar11 + -0x14);
  uStack_17c = *(undefined8 *)(lVar11 + -0x1c);
  local_184 = *(undefined8 *)(lVar11 + -0x24);
  uStack_18c = *(undefined8 *)(lVar11 + -0x2c);
  local_194 = *(undefined8 *)(lVar11 + -0x34);
  *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar11 + -0x38);
  this_00 = *(IR_Type **)(lVar9 + 0x20);
  local_160 = local_194;
  uStack_158 = uStack_18c;
  local_150 = local_184;
  uStack_148 = uStack_17c;
  local_140 = local_174;
  uStack_138 = uStack_16c;
  local_130 = local_164;
  resolveToValue(local_e8,this,&local_198,this_00);
  uVar5 = local_e8[0];
  uStack_148 = uStack_cc;
  local_150 = local_d4;
  local_140 = local_c4;
  local_130 = local_b4;
  lVar9 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  CVar2 = this[0xe0];
  this[0xe0] = (CreateIR)0x0;
  (***(code ***)param_3)(param_3,pCVar1);
  lVar11 = *(long *)(this + 0x108);
  this[0xe0] = CVar2;
  local_208 = *(undefined4 *)(lVar11 + -0x38);
  local_1d4 = *(undefined4 *)(lVar11 + -4);
  uStack_1dc = *(undefined8 *)(lVar11 + -0xc);
  local_1e4 = *(undefined8 *)(lVar11 + -0x14);
  uStack_1ec = *(undefined8 *)(lVar11 + -0x1c);
  local_1f4 = *(undefined8 *)(lVar11 + -0x24);
  uStack_1fc = *(undefined8 *)(lVar11 + -0x2c);
  local_204 = *(undefined8 *)(lVar11 + -0x34);
  *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar11 + -0x38);
  local_1d0 = local_204;
  uStack_1c8 = uStack_1fc;
  local_1c0 = local_1f4;
  uStack_1b8 = uStack_1ec;
  local_1b0 = local_1e4;
  uStack_1a8 = uStack_1dc;
  local_1a0 = local_1d4;
  resolveToValue(local_e8,this,&local_208,*(undefined8 *)(lVar9 + 0x20));
  uVar6 = local_e8[0];
  uStack_1b8 = uStack_cc;
  local_1c0 = local_d4;
  local_1b0 = local_c4;
  local_1a0 = local_b4;
  uVar7 = IR_Type::getNumIRRegisters();
  uVar8 = IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),this_00,(char *)0x0);
  uStack_e0 = SUB84(this_00,0);
  uStack_dc = (undefined4)((ulong)this_00 >> 0x20);
  uStack_b8 = 0;
  local_e8[0] = uVar8;
  if (1 < uVar7) {
    uVar12 = 1;
    do {
      pIVar10 = (IR_Type *)
                IR_Type::getIRRegisterType
                          (this_00,uVar12,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
      IR_RegisterSet::allocateReg
                ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar10,(char *)0x0);
      uVar12 = uVar12 + 1;
    } while (uVar7 != uVar12);
  }
  if (this[0xe0] == (CreateIR)0x0) {
    IR_InstructionSequence::emit
              (*(IR_InstructionSequence **)(this + 0x78),0xd3,uVar8,uVar4,uVar5,uVar6);
  }
  else {
    error(this,"?: used in lvalue position");
  }
  FUN_00c09960(this + 0x100,local_e8);
  lVar9 = *(long *)(this + 0x120);
  *(long *)(this + 0x120) = lVar9 + -8;
  if (*(long *)(this + 0x118) == lVar9 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


