// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addEventListener
// Entry Point: 00b20a34
// Size: 256 bytes
// Signature: undefined __cdecl addEventListener(IInputEventListener * param_1, bool param_2)


/* AndroidInputDevice::addEventListener(IInputEventListener*, bool) */

void AndroidInputDevice::addEventListener(IInputEventListener *param_1,bool param_2)

{
  ulong uVar1;
  ulong *puVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar2 = *(ulong **)(param_1 + 0x10);
  if (puVar2 == *(ulong **)(param_1 + 0x18)) {
    __src = *(void **)(param_1 + 8);
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
    puVar2 = (ulong *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar2 = (ulong)param_2;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(param_1 + 8) = __dest;
    *(ulong **)(param_1 + 0x10) = puVar2 + 1;
    *(void **)(param_1 + 0x18) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *puVar2 = (ulong)param_2;
    *(ulong **)(param_1 + 0x10) = puVar2 + 1;
  }
  return;
}


