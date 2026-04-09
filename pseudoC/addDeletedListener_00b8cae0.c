// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDeletedListener
// Entry Point: 00b8cae0
// Size: 256 bytes
// Signature: undefined __thiscall addDeletedListener(IDensityPixelSource * this, DeletedListener * param_1)


/* IDensityPixelSource::addDeletedListener(IDensityPixelSource::DeletedListener*) */

void __thiscall
IDensityPixelSource::addDeletedListener(IDensityPixelSource *this,DeletedListener *param_1)

{
  ulong uVar1;
  DeletedListener **ppDVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppDVar2 = *(DeletedListener ***)(this + 0x10);
  if (ppDVar2 == *(DeletedListener ***)(this + 0x18)) {
    __src = *(void **)(this + 8);
    __n = (long)ppDVar2 - (long)__src;
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
    ppDVar2 = (DeletedListener **)((long)__dest + ((long)__n >> 3) * 8);
    *ppDVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 8) = __dest;
    *(DeletedListener ***)(this + 0x10) = ppDVar2 + 1;
    *(void **)(this + 0x18) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppDVar2 = param_1;
    *(DeletedListener ***)(this + 0x10) = ppDVar2 + 1;
  }
  return;
}


