// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IR_InstructionSequence
// Entry Point: 00c3c70c
// Size: 24 bytes
// Signature: undefined __thiscall IR_InstructionSequence(IR_InstructionSequence * this, IR_Function * param_1)


/* IR_InstructionSequence::IR_InstructionSequence(IR_Function*) */

void __thiscall
IR_InstructionSequence::IR_InstructionSequence(IR_InstructionSequence *this,IR_Function *param_1)

{
  *(IR_Function **)this = param_1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


