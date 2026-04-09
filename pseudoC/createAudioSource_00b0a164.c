// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAudioSource
// Entry Point: 00b0a164
// Size: 308 bytes
// Signature: undefined __thiscall createAudioSource(NullAudioDevice * this, AudioSourceDesc * param_1)


/* NullAudioDevice::createAudioSource(AudioSourceDesc const&) */

NullAudioStreamedSource * __thiscall
NullAudioDevice::createAudioSource(NullAudioDevice *this,AudioSourceDesc *param_1)

{
  ulong uVar1;
  NullAudioStreamedSource **ppNVar2;
  int iVar3;
  NullAudioStreamedSource *this_00;
  void *__dest;
  void *__src;
  ulong __n;
  
  iVar3 = NullAudioBuffer::getBufferType();
  if (iVar3 == 0) {
    this_00 = (NullAudioStreamedSource *)operator_new(0x30);
                    /* try { // try from 00b0a1b8 to 00b0a1c3 has its CatchHandler @ 00b0a298 */
    NullAudioSource::NullAudioSource((NullAudioSource *)this_00,param_1,this);
  }
  else {
    this_00 = (NullAudioStreamedSource *)operator_new(0x50);
                    /* try { // try from 00b0a19c to 00b0a1a7 has its CatchHandler @ 00b0a29c */
    NullAudioStreamedSource::NullAudioStreamedSource(this_00,param_1,this);
  }
  ppNVar2 = *(NullAudioStreamedSource ***)(this + 0x10);
  if (ppNVar2 == *(NullAudioStreamedSource ***)(this + 0x18)) {
    __src = *(void **)(this + 8);
    __n = (long)ppNVar2 - (long)__src;
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
    ppNVar2 = (NullAudioStreamedSource **)((long)__dest + ((long)__n >> 3) * 8);
    *ppNVar2 = this_00;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 8) = __dest;
    *(NullAudioStreamedSource ***)(this + 0x10) = ppNVar2 + 1;
    *(void **)(this + 0x18) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppNVar2 = this_00;
    *(NullAudioStreamedSource ***)(this + 0x10) = ppNVar2 + 1;
  }
  return this_00;
}


