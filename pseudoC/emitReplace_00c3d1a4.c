// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitReplace
// Entry Point: 00c3d1a4
// Size: 112 bytes
// Signature: undefined __thiscall emitReplace(IR_InstructionSequence * this, uint * param_1, uint param_2, uint param_3)


/* IR_InstructionSequence::emitReplace(unsigned int const*, unsigned int, unsigned int) */

void __thiscall
IR_InstructionSequence::emitReplace
          (IR_InstructionSequence *this,uint *param_1,uint param_2,uint param_3)

{
  void *__dest;
  void *pvVar1;
  long lVar2;
  
  __dest = operator_new__((ulong)param_2 << 2);
  memcpy(__dest,param_1,(ulong)param_2 << 2);
  lVar2 = *(long *)(this + 0x20);
  pvVar1 = *(void **)(lVar2 + (ulong)param_3 * 8);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    lVar2 = *(long *)(this + 0x20);
  }
  *(void **)(lVar2 + (ulong)param_3 * 8) = __dest;
  return;
}


