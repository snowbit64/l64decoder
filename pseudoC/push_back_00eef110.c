// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00eef110
// Size: 272 bytes
// Signature: undefined __thiscall push_back(TempVector<Luau::Parser::Binding> * this, Binding * param_1)


/* Luau::TempVector<Luau::Parser::Binding>::push_back(Luau::Parser::Binding const&) */

void __thiscall
Luau::TempVector<Luau::Parser::Binding>::push_back
          (TempVector<Luau::Parser::Binding> *this,Binding *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  void **ppvVar3;
  void *__src;
  ulong __n;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  ppvVar3 = *(void ***)this;
  puVar2 = (undefined8 *)ppvVar3[1];
  if (puVar2 == (undefined8 *)ppvVar3[2]) {
    __src = *ppvVar3;
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 4)) {
      uVar1 = (long)__n >> 4;
    }
    if (0x7fffffffffffffdf < __n) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 5);
    }
    uVar4 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 5) * 0x20);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *puVar2 = uVar4;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *ppvVar3 = __dest;
    ppvVar3[1] = puVar2 + 4;
    ppvVar3[2] = (void *)((long)__dest + uVar1 * 0x20);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    uVar6 = *(undefined8 *)param_1;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *puVar2 = uVar6;
    puVar2[3] = uVar5;
    puVar2[2] = uVar4;
    ppvVar3[1] = puVar2 + 4;
  }
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return;
}


