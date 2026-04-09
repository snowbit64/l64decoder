// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: codeRegToRegExtract
// Entry Point: 00c09da4
// Size: 196 bytes
// Signature: undefined __thiscall codeRegToRegExtract(CreateIR * this, IR_LValue param_1, IR_LValue param_2, IR_InstructionSequence * param_3)


/* CreateIR::codeRegToRegExtract(IR_LValue, IR_LValue, IR_InstructionSequence*) */

void __thiscall
CreateIR::codeRegToRegExtract
          (CreateIR *this,uint *param_2,uint *param_3,IR_InstructionSequence *param_4)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)IR_RegisterSet::getRegisterType
                            ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),*param_3);
  if (*piVar1 != 0) {
    IR_InstructionSequence::beginInst(param_4,0xe,1,param_3[0xc] + 1);
    IR_InstructionSequence::emitOperand(param_4,*param_2);
    IR_InstructionSequence::emitOperand(param_4,*param_3);
    if (param_3[0xc] != 0) {
      uVar2 = 0;
      do {
        IR_InstructionSequence::emitOperand(param_4,param_3[uVar2 + 4]);
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_3[0xc]);
    }
    IR_InstructionSequence::endInst();
    return;
  }
  IR_InstructionSequence::emit(param_4,0x1a,*param_2,*param_3);
  return;
}


