// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addFileLoader
// Entry Point: 00b32918
// Size: 328 bytes
// Signature: undefined __thiscall addFileLoader(FileManager * this, IFileLoader * param_1)


/* FileManager::addFileLoader(IFileLoader*) */

void __thiscall FileManager::addFileLoader(FileManager *this,IFileLoader *param_1)

{
  ulong uVar1;
  IFileLoader **ppIVar2;
  long lVar3;
  void *__dest;
  void *__src;
  IFileLoader **ppIVar4;
  ulong __n;
  fileLoaderCmp afStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  Mutex::enterCriticalSection();
  ppIVar2 = *(IFileLoader ***)(this + 8);
  if (ppIVar2 == *(IFileLoader ***)(this + 0x10)) {
    __src = *(void **)this;
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
    ppIVar2 = (IFileLoader **)((long)__dest + ((long)__n >> 3) * 8);
    ppIVar4 = ppIVar2 + 1;
    *ppIVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(IFileLoader ***)(this + 8) = ppIVar4;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      ppIVar4 = *(IFileLoader ***)(this + 8);
    }
  }
  else {
    ppIVar4 = ppIVar2 + 1;
    *ppIVar2 = param_1;
    *(IFileLoader ***)(this + 8) = ppIVar4;
  }
  std::__ndk1::__sort<FileManager::fileLoaderCmp&,IFileLoader**>
            (*(IFileLoader ***)this,ppIVar4,afStack_70);
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


