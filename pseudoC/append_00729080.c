// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00729080
// Size: 420 bytes
// Signature: undefined __thiscall __append(vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>> * this, ulong param_1)


/* std::__ndk1::vector<StoppingPath::PathKnot, std::__ndk1::allocator<StoppingPath::PathKnot>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>>::__append
          (vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>> *this,
          ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *__src;
  size_t sVar5;
  void *__s;
  size_t __n;
  
  pvVar2 = *(void **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pvVar2 >> 3) * -0x5555555555555555) < param_1) {
    __src = *(void **)this;
    sVar5 = (long)pvVar2 - (long)__src;
    uVar1 = ((long)sVar5 >> 3) * -0x5555555555555555 + param_1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = *(long *)(this + 0x10) - (long)__src >> 3;
    uVar4 = lVar3 * 0x5555555555555556;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x18);
    }
    __s = (void *)((long)pvVar2 + ((long)sVar5 >> 3) * 8);
    __n = ((param_1 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    memset(__s,0,__n);
    if (0 < (long)sVar5) {
      memcpy((void *)((long)__s - sVar5),__src,sVar5);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)__s - sVar5);
    *(size_t *)(this + 8) = (long)__s + __n;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    if (param_1 != 0) {
      sVar5 = ((param_1 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      memset(pvVar2,0,sVar5);
      pvVar2 = (void *)((long)pvVar2 + sVar5);
    }
    *(void **)(this + 8) = pvVar2;
  }
  return;
}


