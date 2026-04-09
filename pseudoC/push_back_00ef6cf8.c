// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00ef6cf8
// Size: 272 bytes
// Signature: undefined __thiscall push_back(TempVector<Luau::AstArray<char>> * this, AstArray * param_1)


/* Luau::TempVector<Luau::AstArray<char> >::push_back(Luau::AstArray<char> const&) */

void __thiscall
Luau::TempVector<Luau::AstArray<char>>::push_back
          (TempVector<Luau::AstArray<char>> *this,AstArray *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  void **ppvVar3;
  void *__src;
  ulong __n;
  undefined8 uVar4;
  
  ppvVar3 = *(void ***)this;
  puVar2 = (undefined8 *)ppvVar3[1];
  if (puVar2 == (undefined8 *)ppvVar3[2]) {
    __src = *ppvVar3;
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 3)) {
      uVar1 = (long)__n >> 3;
    }
    if (0x7fffffffffffffef < __n) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 4);
    }
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
    uVar4 = *(undefined8 *)param_1;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *puVar2 = uVar4;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *ppvVar3 = __dest;
    ppvVar3[1] = puVar2 + 2;
    ppvVar3[2] = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    uVar4 = *(undefined8 *)param_1;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *puVar2 = uVar4;
    ppvVar3[1] = puVar2 + 2;
  }
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return;
}


