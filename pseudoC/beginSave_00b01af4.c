// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginSave
// Entry Point: 00b01af4
// Size: 312 bytes
// Signature: undefined __thiscall beginSave(SaveHelperManager * this, SaveHelper * param_1, _func_void_void_ptr_bool * param_2, void * param_3)


/* SaveHelperManager::beginSave(SaveHelper*, void (*)(void*, bool), void*) */

void __thiscall
SaveHelperManager::beginSave
          (SaveHelperManager *this,SaveHelper *param_1,_func_void_void_ptr_bool *param_2,
          void *param_3)

{
  ulong uVar1;
  SaveHelper **ppSVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  if (param_1 == (SaveHelper *)0x0) {
    SaveHelper::callCallback(param_2,param_3,false);
    return;
  }
  ppSVar2 = *(SaveHelper ***)(this + 8);
  if (ppSVar2 == *(SaveHelper ***)(this + 0x10)) {
    __src = *(void **)this;
    __n = (long)ppSVar2 - (long)__src;
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
    ppSVar2 = (SaveHelper **)((long)__dest + ((long)__n >> 3) * 8);
    *ppSVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(SaveHelper ***)(this + 8) = ppSVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppSVar2 = param_1;
    *(SaveHelper ***)(this + 8) = ppSVar2 + 1;
  }
  SaveHelper::beginSave(param_1,param_2,param_3);
  return;
}


