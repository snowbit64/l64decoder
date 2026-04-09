// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onControlFlow
// Entry Point: 00c0f598
// Size: 456 bytes
// Signature: undefined __thiscall onControlFlow(CreateIR * this, GsTOperator param_1, AST_TypedNode * param_2)


/* CreateIR::onControlFlow(GsTOperator, AST_TypedNode*) */

void __thiscall CreateIR::onControlFlow(CreateIR *this,GsTOperator param_1,AST_TypedNode *param_2)

{
  uint uVar1;
  CreateIR CVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  IR_InstructionSequence *this_00;
  IR_InstructionSequence *pIVar6;
  char *pcVar7;
  long lVar8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined4 local_bc;
  uint local_b8 [2];
  undefined local_b0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pushOp(this,param_1);
  if (param_1 == 0x57) {
    pIVar6 = *(IR_InstructionSequence **)(this + 0x88);
    if (pIVar6 == (IR_InstructionSequence *)0x0) {
      pcVar7 = "continue statement in invalid place";
      goto LAB_00c0f710;
    }
    this_00 = *(IR_InstructionSequence **)(this + 0x78);
  }
  else {
    if (param_1 == 0x56) {
      if (*(long *)(this + 0x88) != 0) {
        pIVar6 = *(IR_InstructionSequence **)(this + 0x78);
        uVar1 = *(uint *)(this + 0x90);
        local_b0 = 0;
        local_b8[0] = 9;
        uVar5 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_b8);
        IR_InstructionSequence::emit(pIVar6,0x1a,uVar1,uVar5 | 0x80000000);
        IR_InstructionSequence::emit_0DST(*(IR_InstructionSequence **)(this + 0x78),8);
        goto LAB_00c0f718;
      }
      pcVar7 = "break statement in invalid place";
LAB_00c0f710:
      error(this,pcVar7);
      goto LAB_00c0f718;
    }
    if (param_1 != 0x55) goto LAB_00c0f718;
    if (param_2 != (AST_TypedNode *)0x0) {
      CVar2 = this[0xe0];
      this[0xe0] = (CreateIR)0x0;
      (***(code ***)param_2)(param_2,this + 8);
      lVar8 = *(long *)(this + 0x108);
      this[0xe0] = CVar2;
      uVar5 = *(uint *)(this + 0xa0);
      local_f0 = *(undefined4 *)(lVar8 + -0x38);
      local_bc = *(undefined4 *)(lVar8 + -4);
      uStack_c4 = *(undefined8 *)(lVar8 + -0xc);
      local_cc = *(undefined8 *)(lVar8 + -0x14);
      uStack_d4 = *(undefined8 *)(lVar8 + -0x1c);
      local_dc = *(undefined8 *)(lVar8 + -0x24);
      uStack_e4 = *(undefined8 *)(lVar8 + -0x2c);
      local_ec = *(undefined8 *)(lVar8 + -0x34);
      *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar8 + -0x38);
      local_80 = local_ec;
      uStack_78 = uStack_e4;
      local_70 = local_dc;
      uStack_68 = uStack_d4;
      uStack_60 = local_cc;
      uStack_58 = uStack_c4;
      local_50 = local_bc;
      resolveToValue(local_b8,this,&local_f0,*(undefined8 *)(this + 0xd8));
      uVar1 = local_b8[0];
      for (iVar4 = IR_Type::getNumIRRegisters(); iVar4 != 0; iVar4 = iVar4 + -1) {
        IR_InstructionSequence::emit(*(IR_InstructionSequence **)(this + 0x78),0x1a,uVar5,uVar1);
        uVar1 = uVar1 + 1;
        uVar5 = uVar5 + 1;
      }
    }
    this_00 = *(IR_InstructionSequence **)(this + 0x78);
    pIVar6 = *(IR_InstructionSequence **)(this + 0x80);
  }
  IR_InstructionSequence::emitSequence(this_00,pIVar6);
LAB_00c0f718:
  lVar8 = *(long *)(this + 0x120);
  *(long *)(this + 0x120) = lVar8 + -8;
  if (*(long *)(this + 0x118) == lVar8 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


