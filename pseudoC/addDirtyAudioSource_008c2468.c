// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDirtyAudioSource
// Entry Point: 008c2468
// Size: 256 bytes
// Signature: undefined __thiscall addDirtyAudioSource(CullingManager * this, AudioSource * param_1)


/* CullingManager::addDirtyAudioSource(AudioSource*) */

void __thiscall CullingManager::addDirtyAudioSource(CullingManager *this,AudioSource *param_1)

{
  ulong uVar1;
  AudioSource **ppAVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppAVar2 = *(AudioSource ***)(this + 0x148);
  if (ppAVar2 == *(AudioSource ***)(this + 0x150)) {
    __src = *(void **)(this + 0x140);
    __n = (long)ppAVar2 - (long)__src;
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
    ppAVar2 = (AudioSource **)((long)__dest + ((long)__n >> 3) * 8);
    *ppAVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x140) = __dest;
    *(AudioSource ***)(this + 0x148) = ppAVar2 + 1;
    *(void **)(this + 0x150) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppAVar2 = param_1;
    *(AudioSource ***)(this + 0x148) = ppAVar2 + 1;
  }
  return;
}


