// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitOperand
// Entry Point: 00c3c934
// Size: 256 bytes
// Signature: undefined __thiscall emitOperand(IR_InstructionSequence * this, uint param_1)


/* IR_InstructionSequence::emitOperand(unsigned int) */

void __thiscall IR_InstructionSequence::emitOperand(IR_InstructionSequence *this,uint param_1)

{
  ulong uVar1;
  uint *puVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar2 = *(uint **)(this + 0x10);
  if (puVar2 == *(uint **)(this + 0x18)) {
    __src = *(void **)(this + 8);
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 1)) {
      uVar1 = (long)__n >> 1;
    }
    if (0x7ffffffffffffffb < __n) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 2);
    }
    puVar2 = (uint *)((long)__dest + ((long)__n >> 2) * 4);
    *puVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 8) = __dest;
    *(uint **)(this + 0x10) = puVar2 + 1;
    *(void **)(this + 0x18) = (void *)((long)__dest + uVar1 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *puVar2 = param_1;
    *(uint **)(this + 0x10) = puVar2 + 1;
  }
  return;
}


