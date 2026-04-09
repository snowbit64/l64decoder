// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IR_Section
// Entry Point: 00c3ee40
// Size: 100 bytes
// Signature: undefined __thiscall IR_Section(IR_Section * this, IR_Function * param_1, uint param_2, IR_SectionType param_3)


/* IR_Section::IR_Section(IR_Function*, unsigned int, IR_SectionType) */

void __thiscall
IR_Section::IR_Section(IR_Section *this,IR_Function *param_1,uint param_2,IR_SectionType param_3)

{
  IR_InstructionSequence::IR_InstructionSequence((IR_InstructionSequence *)this,param_1);
  *(IR_SectionType *)(this + 0x38) = param_3;
  *(uint *)(this + 0x3c) = param_2;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  this[100] = (IR_Section)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  this[0x5c] = (IR_Section)0x0;
  *(undefined4 *)(this + 0x9c) = 0xffffffff;
  return;
}


