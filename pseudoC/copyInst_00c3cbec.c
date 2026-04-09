// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyInst
// Entry Point: 00c3cbec
// Size: 84 bytes
// Signature: undefined __cdecl copyInst(uint * param_1)


/* IR_InstructionSequence::copyInst(unsigned int const*) */

void * IR_InstructionSequence::copyInst(uint *param_1)

{
  ulong __n;
  void *__dest;
  
  __n = ((ulong)(param_1[1] >> 0x10) + (ulong)(ushort)param_1[1]) * 4 + 8;
  __dest = operator_new__(__n);
  memcpy(__dest,param_1,__n);
  return __dest;
}


