// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IR_Section
// Entry Point: 00c3eea4
// Size: 72 bytes
// Signature: undefined __thiscall ~IR_Section(IR_Section * this)


/* IR_Section::~IR_Section() */

void __thiscall IR_Section::~IR_Section(IR_Section *this)

{
  void *pvVar1;
  
  if (*(void **)(this + 0x80) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x80));
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x68));
  }
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  IR_InstructionSequence::~IR_InstructionSequence((IR_InstructionSequence *)this);
  return;
}


