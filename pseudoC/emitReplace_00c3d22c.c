// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitReplace
// Entry Point: 00c3d22c
// Size: 124 bytes
// Signature: undefined __thiscall emitReplace(IR_InstructionSequence * this, uint param_1, uint * param_2)


/* IR_InstructionSequence::emitReplace(unsigned int, unsigned int const*) */

void __thiscall
IR_InstructionSequence::emitReplace(IR_InstructionSequence *this,uint param_1,uint *param_2)

{
  ulong __n;
  void *__dest;
  void *pvVar1;
  long lVar2;
  
  __n = ((ulong)(param_2[1] >> 0x10) + (ulong)(ushort)param_2[1]) * 4 + 8;
  __dest = operator_new__(__n);
  memcpy(__dest,param_2,__n);
  lVar2 = *(long *)(this + 0x20);
  pvVar1 = *(void **)(lVar2 + (ulong)param_1 * 8);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    lVar2 = *(long *)(this + 0x20);
  }
  *(void **)(lVar2 + (ulong)param_1 * 8) = __dest;
  return;
}


