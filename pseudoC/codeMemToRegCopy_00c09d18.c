// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: codeMemToRegCopy
// Entry Point: 00c09d18
// Size: 140 bytes
// Signature: undefined __thiscall codeMemToRegCopy(CreateIR * this, IR_LValue param_1, IR_LValue param_2, IR_InstructionSequence * param_3)


/* CreateIR::codeMemToRegCopy(IR_LValue, IR_LValue, IR_InstructionSequence*) */

void __thiscall
CreateIR::codeMemToRegCopy
          (undefined8 param_1,uint *param_2,uint *param_3,IR_InstructionSequence *param_4)

{
  ulong uVar1;
  
  IR_InstructionSequence::beginInst(param_4,0xc,1,param_3[0xc] + 1);
  IR_InstructionSequence::emitOperand(param_4,*param_2);
  IR_InstructionSequence::emitOperand(param_4,*param_3);
  if (param_3[0xc] != 0) {
    uVar1 = 0;
    do {
      IR_InstructionSequence::emitOperand(param_4,param_3[uVar1 + 4]);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3[0xc]);
  }
  IR_InstructionSequence::endInst();
  return;
}


