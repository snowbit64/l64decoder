// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onUnaryPostfixOperator
// Entry Point: 00c0cb6c
// Size: 604 bytes
// Signature: undefined __thiscall onUnaryPostfixOperator(CreateIR * this, GsTOperator param_1, AST_TypedNode * param_2)


/* CreateIR::onUnaryPostfixOperator(GsTOperator, AST_TypedNode*) */

void __thiscall
CreateIR::onUnaryPostfixOperator(CreateIR *this,GsTOperator param_1,AST_TypedNode *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  IR_Type *this_00;
  CreateIR CVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  IR_Type *pIVar8;
  long lVar9;
  long lVar10;
  IR_InstructionSequence *this_01;
  int iVar11;
  uint uVar12;
  undefined8 local_150;
  IR_Type *pIStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  IR_Type *pIStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  IR_Type *pIStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  pushOp(this,param_1);
  if (param_1 - 0xb < 2) {
    CVar4 = this[0xe0];
    lVar1 = *(long *)(this + 0xe8);
    lVar3 = *(long *)(this + 0xf0);
    this[0xe0] = (CreateIR)0x1;
    (***(code ***)param_2)(param_2,this + 8);
    lVar9 = *(long *)(this + 0x108);
    this[0xe0] = CVar4;
    uVar2 = *(undefined8 *)(lVar9 + -0x38);
    this_00 = *(IR_Type **)(lVar9 + -0x30);
    uStack_98 = *(undefined8 *)(lVar9 + -0x20);
    local_a0 = *(undefined8 *)(lVar9 + -0x28);
    uStack_88 = *(undefined8 *)(lVar9 + -0x10);
    uStack_90 = *(undefined8 *)(lVar9 + -0x18);
    local_80 = *(undefined8 *)(lVar9 + -8);
    *(undefined8 **)(this + 0x108) = (undefined8 *)(lVar9 + -0x38);
    uVar7 = *(GsTBasicType *)(*(long *)(param_2 + 0x20) + 8) - 3;
    if (uVar7 < 7) {
      lVar9 = 0x1c;
      if (param_1 != 0xb) {
        lVar9 = 0x38;
      }
      iVar11 = *(int *)(s_opcodeMap + (ulong)uVar7 * 4 + lVar9);
    }
    else {
      iVar11 = 0;
    }
    uVar6 = getIRCONSTForType(this,1,*(GsTBasicType *)(*(long *)(param_2 + 0x20) + 8));
    uVar7 = IR_Type::getNumIRRegisters();
    local_d8 = IR_RegisterSet::allocateReg
                         ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),this_00,(char *)0x0);
    local_a8 = 0;
    pIStack_d0 = this_00;
    if (1 < uVar7) {
      uVar12 = 1;
      do {
        pIVar8 = (IR_Type *)
                 IR_Type::getIRRegisterType
                           (this_00,uVar12,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
        IR_RegisterSet::allocateReg
                  ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar8,(char *)0x0);
        uVar12 = uVar12 + 1;
      } while (uVar7 != uVar12);
    }
    if (iVar11 == 0) {
      error(this,"unsupported postfix operation for type");
      FUN_00c09960(this + 0x100,&local_d8);
    }
    else {
      uStack_f8 = uStack_98;
      local_100 = local_a0;
      uStack_e8 = uStack_88;
      uStack_f0 = uStack_90;
      local_150 = CONCAT44(uStack_d4,local_d8);
      pIStack_148 = pIStack_d0;
      uStack_138 = uStack_c0;
      uStack_140 = local_c8;
      uStack_128 = uStack_b0;
      local_130 = uStack_b8;
      local_120 = CONCAT44(uStack_a4,local_a8);
      local_e0 = local_80;
      local_110 = uVar2;
      pIStack_108 = this_00;
      codeAssignUpdate(this,&local_110,&local_150,1,uVar6,iVar11);
      FUN_00c09960(this + 0x100,&local_d8);
      lVar9 = *(long *)(this + 0xf0);
      lVar10 = lVar9 - *(long *)(this + 0xe8);
      while (((ulong)(lVar3 - lVar1) >> 3 & 0xffffffff) < (ulong)(lVar10 >> 3)) {
        this_01 = *(IR_InstructionSequence **)(lVar9 + -8);
        *(IR_InstructionSequence ***)(this + 0xf0) = (IR_InstructionSequence **)(lVar9 + -8);
        IR_InstructionSequence::emitSequence(*(IR_InstructionSequence **)(this + 0x78),this_01);
        if (this_01 != (IR_InstructionSequence *)0x0) {
          IR_InstructionSequence::~IR_InstructionSequence(this_01);
          operator_delete(this_01);
        }
        lVar9 = *(long *)(this + 0xf0);
        lVar10 = lVar9 - *(long *)(this + 0xe8);
      }
    }
  }
  lVar1 = *(long *)(this + 0x120);
  *(long *)(this + 0x120) = lVar1 + -8;
  if (*(long *)(this + 0x118) == lVar1 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


