// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 0096e814
// Size: 308 bytes
// Signature: undefined __thiscall push_back(SmallVector<ICommandList*,5u> * this, ICommandList * * param_1)


/* SmallVector<ICommandList*, 5u>::push_back(ICommandList* const&) */

void __thiscall
SmallVector<ICommandList*,5u>::push_back(SmallVector<ICommandList*,5u> *this,ICommandList **param_1)

{
  ulong uVar1;
  ICommandList **ppIVar2;
  uint uVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  uVar3 = *(uint *)this;
  if (uVar3 < 5) {
    *(ICommandList **)(this + (ulong)uVar3 * 8 + 4) = *param_1;
  }
  else {
    if (uVar3 == 5) {
      switchToHeapStorage(this,6);
    }
    ppIVar2 = *(ICommandList ***)(this + 0x38);
    if (ppIVar2 == *(ICommandList ***)(this + 0x40)) {
      __src = *(void **)(this + 0x30);
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
      ppIVar2 = (ICommandList **)((long)__dest + ((long)__n >> 3) * 8);
      *ppIVar2 = *param_1;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x30) = __dest;
      *(ICommandList ***)(this + 0x38) = ppIVar2 + 1;
      *(void **)(this + 0x40) = (void *)((long)__dest + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *ppIVar2 = *param_1;
      *(ICommandList ***)(this + 0x38) = ppIVar2 + 1;
    }
  }
  *(int *)this = *(int *)this + 1;
  return;
}


