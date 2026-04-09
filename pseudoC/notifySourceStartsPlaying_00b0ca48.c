// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifySourceStartsPlaying
// Entry Point: 00b0ca48
// Size: 292 bytes
// Signature: undefined __thiscall notifySourceStartsPlaying(SoftAudioDevice * this, SoftAudioSource * param_1)


/* SoftAudioDevice::notifySourceStartsPlaying(SoftAudioSource*) */

void __thiscall
SoftAudioDevice::notifySourceStartsPlaying(SoftAudioDevice *this,SoftAudioSource *param_1)

{
  uint uVar1;
  ulong uVar2;
  SoftAudioSource **ppSVar3;
  uint uVar4;
  void *__dest;
  void *__src;
  ulong __n;
  
  Mutex::enterCriticalSection();
  ppSVar3 = *(SoftAudioSource ***)(this + 0x40);
  if (ppSVar3 == *(SoftAudioSource ***)(this + 0x48)) {
    __src = *(void **)(this + 0x38);
    __n = (long)ppSVar3 - (long)__src;
    uVar2 = ((long)__n >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)__n >> 2)) {
      uVar2 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar2 << 3);
    }
    ppSVar3 = (SoftAudioSource **)((long)__dest + ((long)__n >> 3) * 8);
    *ppSVar3 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x38) = __dest;
    *(SoftAudioSource ***)(this + 0x40) = ppSVar3 + 1;
    *(void **)(this + 0x48) = (void *)((long)__dest + uVar2 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppSVar3 = param_1;
    *(SoftAudioSource ***)(this + 0x40) = ppSVar3 + 1;
  }
  uVar4 = *(uint *)(this + 0x1ba8);
  uVar1 = *(int *)(this + 0x1ba0) + 1;
  if (uVar4 <= uVar1) {
    uVar4 = *(int *)(this + 0x1ba0) + 1;
  }
  *(uint *)(this + 0x1ba0) = uVar1;
  *(uint *)(this + 0x1ba8) = uVar4;
  Mutex::leaveCriticalSection();
  return;
}


