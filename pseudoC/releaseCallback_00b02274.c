// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseCallback
// Entry Point: 00b02274
// Size: 316 bytes
// Signature: undefined __thiscall releaseCallback(StreamManager * this, StreamableCallback * param_1)


/* StreamManager::releaseCallback(StreamableCallback*) */

void __thiscall StreamManager::releaseCallback(StreamManager *this,StreamableCallback *param_1)

{
  ulong uVar1;
  StreamableCallback **ppSVar2;
  long lVar3;
  void *__dest;
  long lVar4;
  void *__src;
  ulong __n;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  Mutex::enterCriticalSection();
  ppSVar2 = *(StreamableCallback ***)(this + 0xf0);
  if (ppSVar2 == *(StreamableCallback ***)(this + 0xf8)) {
    __src = *(void **)(this + 0xe8);
    __n = (long)ppSVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00b02398 to 00b023ab has its CatchHandler @ 00b023b0 */
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
                    /* try { // try from 00b02318 to 00b0231b has its CatchHandler @ 00b023b0 */
      __dest = operator_new(uVar1 << 3);
    }
    ppSVar2 = (StreamableCallback **)((long)__dest + ((long)__n >> 3) * 8);
    *ppSVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xe8) = __dest;
    *(StreamableCallback ***)(this + 0xf0) = ppSVar2 + 1;
    *(void **)(this + 0xf8) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppSVar2 = param_1;
    *(StreamableCallback ***)(this + 0xf0) = ppSVar2 + 1;
  }
                    /* try { // try from 00b02364 to 00b02367 has its CatchHandler @ 00b023c4 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


