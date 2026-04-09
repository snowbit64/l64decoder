// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addFileErrorListener
// Entry Point: 00b32aec
// Size: 264 bytes
// Signature: undefined __thiscall addFileErrorListener(FileManager * this, FileErrorListener * param_1)


/* FileManager::addFileErrorListener(FileManager::FileErrorListener*) */

void __thiscall FileManager::addFileErrorListener(FileManager *this,FileErrorListener *param_1)

{
  ulong uVar1;
  FileErrorListener **ppFVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  Mutex::enterCriticalSection();
  ppFVar2 = *(FileErrorListener ***)(this + 0x20);
  if (ppFVar2 == *(FileErrorListener ***)(this + 0x28)) {
    __src = *(void **)(this + 0x18);
    __n = (long)ppFVar2 - (long)__src;
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
    ppFVar2 = (FileErrorListener **)((long)__dest + ((long)__n >> 3) * 8);
    *ppFVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x18) = __dest;
    *(FileErrorListener ***)(this + 0x20) = ppFVar2 + 1;
    *(void **)(this + 0x28) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppFVar2 = param_1;
    *(FileErrorListener ***)(this + 0x20) = ppFVar2 + 1;
  }
  Mutex::leaveCriticalSection();
  return;
}


