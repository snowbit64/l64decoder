// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onNetworkStatusChanged
// Entry Point: 00c62e28
// Size: 264 bytes
// Signature: undefined __thiscall onNetworkStatusChanged(NetworkAvailability * this, CONNECTION_STATUS param_1)


/* NetworkAvailability::onNetworkStatusChanged(NetworkAvailability::CONNECTION_STATUS) */

void __thiscall
NetworkAvailability::onNetworkStatusChanged(NetworkAvailability *this,CONNECTION_STATUS param_1)

{
  ulong uVar1;
  CONNECTION_STATUS *pCVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  Mutex::enterCriticalSection();
  pCVar2 = *(CONNECTION_STATUS **)(this + 0x58);
  if (pCVar2 == *(CONNECTION_STATUS **)(this + 0x60)) {
    __src = *(void **)(this + 0x50);
    __n = (long)pCVar2 - (long)__src;
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
    pCVar2 = (CONNECTION_STATUS *)((long)__dest + ((long)__n >> 2) * 4);
    *pCVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x50) = __dest;
    *(CONNECTION_STATUS **)(this + 0x58) = pCVar2 + 1;
    *(void **)(this + 0x60) = (void *)((long)__dest + uVar1 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *pCVar2 = param_1;
    *(CONNECTION_STATUS **)(this + 0x58) = pCVar2 + 1;
  }
  Mutex::leaveCriticalSection();
  return;
}


