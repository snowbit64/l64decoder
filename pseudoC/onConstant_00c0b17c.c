// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onConstant
// Entry Point: 00c0b17c
// Size: 412 bytes
// Signature: undefined __thiscall onConstant(CreateIR * this, Value * param_1)


/* CreateIR::onConstant(AST_ConstantNode::Value const&) */

void __thiscall CreateIR::onConstant(CreateIR *this,Value *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  IR_Type *this_00;
  IR_Type *pIVar4;
  IR_Function *this_01;
  IR_InstructionSequence *this_02;
  uint uVar5;
  undefined4 local_a0 [2];
  undefined4 local_98;
  uint local_90 [2];
  IR_Type *local_88;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x120) == *(long *)(this + 0x118)) goto LAB_00c0b2e8;
  this_00 = (IR_Type *)
            IR_TypeSet::getScalarType(*(IR_TypeSet **)(this + 0x68),*(GsTBasicType *)param_1);
  uVar2 = IR_Type::getNumIRRegisters();
  uVar3 = IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),this_00,(char *)0x0);
  local_60 = 0;
  local_90[0] = uVar3;
  local_88 = this_00;
  if (1 < uVar2) {
    uVar5 = 1;
    do {
      pIVar4 = (IR_Type *)
               IR_Type::getIRRegisterType
                         (this_00,uVar5,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
      IR_RegisterSet::allocateReg
                ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar4,(char *)0x0);
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  uVar2 = *(uint *)param_1;
  if (uVar2 < 9) {
    uVar5 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar5 & 0x18) == 0) {
      if ((uVar5 & 0xa0) == 0) {
        if ((1 << (ulong)(uVar2 & 0x1f) & 0x140U) == 0) goto LAB_00c0b2ac;
        local_98 = *(undefined4 *)(param_1 + 4);
        local_a0[0] = 6;
      }
      else {
        local_98 = *(undefined4 *)(param_1 + 4);
        local_a0[0] = 5;
      }
      this_01 = *(IR_Function **)(this + 0x70);
      this_02 = *(IR_InstructionSequence **)(this + 0x78);
    }
    else {
      local_98 = *(undefined4 *)(param_1 + 4);
      this_01 = *(IR_Function **)(this + 0x70);
      this_02 = *(IR_InstructionSequence **)(this + 0x78);
      local_a0[0] = 3;
    }
  }
  else {
LAB_00c0b2ac:
    this_01 = *(IR_Function **)(this + 0x70);
    this_02 = *(IR_InstructionSequence **)(this + 0x78);
    local_a0[0] = 9;
    local_98 = CONCAT31(local_98._1_3_,param_1[4]);
  }
  uVar2 = IR_Function::storeConst(this_01,(IR_Const *)local_a0);
  IR_InstructionSequence::emit(this_02,0x1a,uVar3,uVar2 | 0x80000000);
  FUN_00c09960(this + 0x100,local_90);
LAB_00c0b2e8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


