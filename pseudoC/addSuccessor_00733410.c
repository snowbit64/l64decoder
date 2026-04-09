// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSuccessor
// Entry Point: 00733410
// Size: 248 bytes
// Signature: undefined __thiscall addSuccessor(RoadSegment * this, ushort param_1)


/* RoadSegment::addSuccessor(unsigned short) */

void __thiscall RoadSegment::addSuccessor(RoadSegment *this,ushort param_1)

{
  ulong uVar1;
  ushort *puVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar2 = *(ushort **)(this + 0x28);
  if (puVar2 == *(ushort **)(this + 0x30)) {
    __src = *(void **)(this + 0x20);
    __n = (long)puVar2 - (long)__src;
    if (__n == 0xfffffffffffffffd || (long)(__n + 3) < 0 != SCARRY8(__n,3)) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar1 = ((long)__n >> 1) + 1;
    if (uVar1 <= __n) {
      uVar1 = __n;
    }
    if (0x7ffffffffffffffd < __n) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 1);
    }
    puVar2 = (ushort *)((long)__dest + ((long)__n >> 1) * 2);
    *puVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x20) = __dest;
    *(ushort **)(this + 0x28) = puVar2 + 1;
    *(void **)(this + 0x30) = (void *)((long)__dest + uVar1 * 2);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *puVar2 = param_1;
    *(ushort **)(this + 0x28) = puVar2 + 1;
  }
  return;
}


