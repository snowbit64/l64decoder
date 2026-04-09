// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushOp
// Entry Point: 00c09b90
// Size: 304 bytes
// Signature: undefined __thiscall pushOp(CreateIR * this, GsTOperator param_1)


/* CreateIR::pushOp(GsTOperator) */

void __thiscall CreateIR::pushOp(CreateIR *this,GsTOperator param_1)

{
  ulong uVar1;
  ulong *puVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  ulong uVar5;
  
  puVar2 = *(ulong **)(this + 0x120);
  uVar5 = (*(long *)(this + 0x108) - *(long *)(this + 0x100) >> 3) * 0x6db6db6db6db6db7;
  if (puVar2 < *(ulong **)(this + 0x128)) {
    *puVar2 = uVar5 & 0xffffffff | (ulong)param_1 << 0x20;
    *(ulong **)(this + 0x120) = puVar2 + 1;
  }
  else {
    __src = *(void **)(this + 0x118);
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = (long)*(ulong **)(this + 0x128) - (long)__src;
    uVar4 = (long)uVar3 >> 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
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
    *puVar2 = uVar5 & 0xffffffff | (ulong)param_1 << 0x20;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x118) = __dest;
    *(ulong **)(this + 0x120) = puVar2 + 1;
    *(void **)(this + 0x128) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


