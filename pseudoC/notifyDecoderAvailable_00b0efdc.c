// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyDecoderAvailable
// Entry Point: 00b0efdc
// Size: 276 bytes
// Signature: undefined __thiscall notifyDecoderAvailable(SoftAudioBuffer * this, stb_vorbis * param_1)


/* SoftAudioBuffer::notifyDecoderAvailable(stb_vorbis*) */

void __thiscall SoftAudioBuffer::notifyDecoderAvailable(SoftAudioBuffer *this,stb_vorbis *param_1)

{
  ulong uVar1;
  stb_vorbis **ppsVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  Mutex::enterCriticalSection();
  ppsVar2 = *(stb_vorbis ***)(this + 0x70);
  if (ppsVar2 == *(stb_vorbis ***)(this + 0x78)) {
    __src = *(void **)(this + 0x68);
    __n = (long)ppsVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00b0f0e0 to 00b0f0ef has its CatchHandler @ 00b0f0f4 */
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
                    /* try { // try from 00b0f06c to 00b0f06f has its CatchHandler @ 00b0f0f4 */
      __dest = operator_new(uVar1 << 3);
    }
    ppsVar2 = (stb_vorbis **)((long)__dest + ((long)__n >> 3) * 8);
    *ppsVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x68) = __dest;
    *(stb_vorbis ***)(this + 0x70) = ppsVar2 + 1;
    *(void **)(this + 0x78) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppsVar2 = param_1;
    *(stb_vorbis ***)(this + 0x70) = ppsVar2 + 1;
  }
                    /* try { // try from 00b0f0b4 to 00b0f0bb has its CatchHandler @ 00b0f0f4 */
  stb_vorbis_seek_start(param_1);
                    /* try { // try from 00b0f0bc to 00b0f0c3 has its CatchHandler @ 00b0f0f0 */
  Mutex::leaveCriticalSection();
  return;
}


