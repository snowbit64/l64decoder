// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createThread
// Entry Point: 00b04bb8
// Size: 328 bytes
// Signature: undefined __thiscall createThread(WebResourceManager * this, bool param_1)


/* WebResourceManager::createThread(bool) */

undefined8 __thiscall WebResourceManager::createThread(WebResourceManager *this,bool param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  WebResourceManager **ppWVar3;
  Thread *this_00;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppWVar3 = (WebResourceManager **)operator_new(0x18);
  *ppWVar3 = this;
  *(undefined *)(ppWVar3 + 2) = 0;
  *(bool *)((long)ppWVar3 + 0x11) = param_1;
  this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 00b04bfc to 00b04bff has its CatchHandler @ 00b04d00 */
  Thread::Thread(this_00);
  ppWVar3[1] = (WebResourceManager *)this_00;
  Thread::start(this_00,loadingThreadStart,ppWVar3,0xffffffff,"GIANTS WebResourceManager",2,0x80000)
  ;
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 == *(undefined8 **)(this + 0x10)) {
    __src = *(void **)this;
    __n = (long)puVar2 - (long)__src;
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
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar2 = ppWVar3;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(undefined8 **)(this + 8) = puVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *puVar2 = ppWVar3;
    *(undefined8 **)(this + 8) = puVar2 + 1;
  }
  return 1;
}


