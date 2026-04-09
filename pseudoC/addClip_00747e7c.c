// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addClip
// Entry Point: 00747e7c
// Size: 280 bytes
// Signature: undefined __thiscall addClip(CharacterSet * this, Clip * param_1)


/* CharacterSet::addClip(Clip*) */

void __thiscall CharacterSet::addClip(CharacterSet *this,Clip *param_1)

{
  ulong uVar1;
  Clip **ppCVar2;
  uint uVar3;
  void *__dest;
  void *__src;
  ulong __n;
  long lVar4;
  
  uVar3 = Clip::getCombinedFlags();
  lVar4 = *(long *)(this + 0x40);
  ppCVar2 = *(Clip ***)(lVar4 + 0x78);
  *(uint *)(lVar4 + 0xc) = *(uint *)(lVar4 + 0xc) | uVar3;
  if (ppCVar2 == *(Clip ***)(lVar4 + 0x80)) {
    __src = *(void **)(lVar4 + 0x70);
    __n = (long)ppCVar2 - (long)__src;
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
    ppCVar2 = (Clip **)((long)__dest + ((long)__n >> 3) * 8);
    *ppCVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(lVar4 + 0x70) = __dest;
    *(Clip ***)(lVar4 + 0x78) = ppCVar2 + 1;
    *(void **)(lVar4 + 0x80) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppCVar2 = param_1;
    *(Clip ***)(lVar4 + 0x78) = ppCVar2 + 1;
  }
  return;
}


