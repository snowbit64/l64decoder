// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateSection
// Entry Point: 00c28a98
// Size: 280 bytes
// Signature: undefined __thiscall allocateSection(IR_Function * this, IR_SectionType param_1)


/* IR_Function::allocateSection(IR_SectionType) */

IR_Section * __thiscall IR_Function::allocateSection(IR_Function *this,IR_SectionType param_1)

{
  ulong uVar1;
  IR_Section **ppIVar2;
  uint uVar3;
  IR_Section *this_00;
  void *__dest;
  void *__src;
  ulong __n;
  
  this_00 = (IR_Section *)operator_new(0xa0);
  uVar3 = *(uint *)(this + 0xd0);
  *(uint *)(this + 0xd0) = uVar3 + 1;
                    /* try { // try from 00c28ad0 to 00c28adb has its CatchHandler @ 00c28bb0 */
  IR_Section::IR_Section(this_00,this,uVar3,param_1);
  ppIVar2 = *(IR_Section ***)(this + 0xc0);
  if (ppIVar2 == *(IR_Section ***)(this + 200)) {
    __src = *(void **)(this + 0xb8);
    __n = (long)ppIVar2 - (long)__src;
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
    ppIVar2 = (IR_Section **)((long)__dest + ((long)__n >> 3) * 8);
    *ppIVar2 = this_00;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xb8) = __dest;
    *(IR_Section ***)(this + 0xc0) = ppIVar2 + 1;
    *(void **)(this + 200) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppIVar2 = this_00;
    *(IR_Section ***)(this + 0xc0) = ppIVar2 + 1;
  }
  return this_00;
}


