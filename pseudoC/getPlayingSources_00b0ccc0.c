// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlayingSources
// Entry Point: 00b0ccc0
// Size: 332 bytes
// Signature: undefined __thiscall getPlayingSources(SoftAudioDevice * this, vector * param_1)


/* SoftAudioDevice::getPlayingSources(std::__ndk1::vector<IAudioSource*,
   std::__ndk1::allocator<IAudioSource*> >&) */

void __thiscall SoftAudioDevice::getPlayingSources(SoftAudioDevice *this,vector *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *__src;
  size_t __n;
  long lVar8;
  
  Mutex::enterCriticalSection();
  lVar3 = *(long *)(this + 0x38);
  uVar4 = *(long *)(this + 0x40) - lVar3;
  if ((int)(uVar4 >> 3) != 0) {
    lVar8 = 0;
    while( true ) {
      puVar2 = *(undefined8 **)(param_1 + 8);
      uVar7 = *(undefined8 *)(lVar3 + lVar8);
      if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
        *puVar2 = uVar7;
        *(undefined8 **)(param_1 + 8) = puVar2 + 1;
      }
      else {
        __src = *(void **)param_1;
        __n = (long)puVar2 - (long)__src;
        uVar1 = ((long)__n >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar5 = (long)*(undefined8 **)(param_1 + 0x10) - (long)__src;
        uVar6 = (long)uVar5 >> 2;
        if (uVar1 <= uVar6) {
          uVar1 = uVar6;
        }
        if (0x7ffffffffffffff7 < uVar5) {
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
        *puVar2 = uVar7;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)param_1 = __dest;
        *(undefined8 **)(param_1 + 8) = puVar2 + 1;
        *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar1 * 8);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      if ((uVar4 >> 3 & 0xffffffff) * 8 + -8 == lVar8) break;
      lVar3 = *(long *)(this + 0x38);
      lVar8 = lVar8 + 8;
    }
  }
  Mutex::leaveCriticalSection();
  return;
}


