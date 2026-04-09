// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IR_InstructionSequence
// Entry Point: 00c3c724
// Size: 128 bytes
// Signature: undefined __thiscall ~IR_InstructionSequence(IR_InstructionSequence * this)


/* IR_InstructionSequence::~IR_InstructionSequence() */

void __thiscall IR_InstructionSequence::~IR_InstructionSequence(IR_InstructionSequence *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != *(void **)(this + 0x20)) {
    uVar4 = 0;
    pvVar2 = *(void **)(this + 0x20);
    pvVar3 = pvVar1;
    do {
      pvVar1 = pvVar2;
      pvVar2 = *(void **)((long)pvVar1 + uVar4 * 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
        pvVar1 = *(void **)(this + 0x20);
        pvVar3 = *(void **)(this + 0x28);
      }
      uVar4 = (ulong)((int)uVar4 + 1);
      pvVar2 = pvVar1;
    } while (uVar4 < (ulong)((long)pvVar3 - (long)pvVar1 >> 3));
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x10) = pvVar1;
  operator_delete(pvVar1);
  return;
}


