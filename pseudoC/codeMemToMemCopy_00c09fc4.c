// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: codeMemToMemCopy
// Entry Point: 00c09fc4
// Size: 444 bytes
// Signature: undefined __thiscall codeMemToMemCopy(CreateIR * this, IR_LValue param_1, IR_LValue param_2, IR_InstructionSequence * param_3)


/* CreateIR::codeMemToMemCopy(IR_LValue, IR_LValue, IR_InstructionSequence*) */

void __thiscall
CreateIR::codeMemToMemCopy
          (CreateIR *this,undefined8 *param_2,undefined8 *param_3,IR_InstructionSequence *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  IR_Type *pIVar4;
  undefined8 *puVar5;
  ulong uVar6;
  IR_Type *this_00;
  uint uVar7;
  undefined8 uVar8;
  uint local_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = *(IR_Type **)(param_3[1] + 8);
  uVar2 = IR_Type::getNumIRRegisters();
  uVar3 = IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),this_00,(char *)0x0);
  if (1 < uVar2) {
    uVar7 = 1;
    do {
      pIVar4 = (IR_Type *)
               IR_Type::getIRRegisterType
                         (this_00,uVar7,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
      IR_RegisterSet::allocateReg
                ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar4,(char *)0x0);
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  uStack_98 = param_3[1];
  local_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  uVar6 = param_3[6];
  uStack_78 = param_3[5];
  local_80 = param_3[4];
  local_70 = uVar6;
  IR_InstructionSequence::beginInst(param_4,0xc,1,(int)uVar6 + 1);
  IR_InstructionSequence::emitOperand(param_4,uVar3);
  IR_InstructionSequence::emitOperand(param_4,(uint)local_a0);
  if ((int)uVar6 != 0) {
    uVar6 = uVar6 & 0xffffffff;
    puVar5 = &uStack_90;
    do {
      IR_InstructionSequence::emitOperand(param_4,*(uint *)puVar5);
      uVar6 = uVar6 - 1;
      puVar5 = (undefined8 *)((long)puVar5 + 4);
    } while (uVar6 != 0);
  }
  IR_InstructionSequence::endInst();
  uVar8 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uVar6 = param_2[6];
  uStack_b8 = param_2[5];
  local_c0 = param_2[4];
  local_b0 = uVar6;
  IR_InstructionSequence::beginInst(param_4,0xd,0,(int)uVar6 + 2);
  IR_InstructionSequence::emitOperand(param_4,uVar3);
  local_e0 = (uint)uVar8;
  IR_InstructionSequence::emitOperand(param_4,local_e0);
  if ((int)uVar6 != 0) {
    uVar6 = uVar6 & 0xffffffff;
    puVar5 = &uStack_d0;
    do {
      IR_InstructionSequence::emitOperand(param_4,*(uint *)puVar5);
      uVar6 = uVar6 - 1;
      puVar5 = (undefined8 *)((long)puVar5 + 4);
    } while (uVar6 != 0);
  }
  IR_InstructionSequence::endInst();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


