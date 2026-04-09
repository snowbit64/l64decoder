// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPredicateRegister
// Entry Point: 00c4b88c
// Size: 300 bytes
// Signature: undefined __thiscall addPredicateRegister(IR_Section * this, uint param_1, bool param_2)


/* IR_Section::addPredicateRegister(unsigned int, bool) */

void __thiscall IR_Section::addPredicateRegister(IR_Section *this,uint param_1,bool param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar3 = *(ulong **)(this + 0x48);
  if (puVar3 == *(ulong **)(this + 0x50)) {
    __src = *(void **)(this + 0x40);
    __n = (long)puVar3 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 2)) {
      uVar1 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 3);
    }
    uVar2 = 0x100000000;
    if (!param_2) {
      uVar2 = 0;
    }
    puVar3 = (ulong *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar3 = uVar2 | param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x40) = __dest;
    *(ulong **)(this + 0x48) = puVar3 + 1;
    *(void **)(this + 0x50) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    uVar1 = 0x100000000;
    if (!param_2) {
      uVar1 = 0;
    }
    *puVar3 = uVar1 | param_1;
    *(ulong **)(this + 0x48) = puVar3 + 1;
  }
  return;
}


