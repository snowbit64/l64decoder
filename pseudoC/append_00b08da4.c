// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00b08da4
// Size: 272 bytes
// Signature: undefined __thiscall __append(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> * this, ulong param_1)


/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
          (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  size_t __n;
  
  pvVar2 = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)pvVar2) < param_1) {
    pvVar5 = *(void **)this;
    __n = (long)pvVar2 - (long)pvVar5;
    uVar1 = __n + param_1;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = *(long *)(this + 0x10) - (long)pvVar5;
    uVar4 = uVar3 * 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = operator_new(uVar1);
    }
    memset((void *)((long)pvVar2 + __n),0,param_1);
    if (0 < (long)__n) {
      memcpy(pvVar2,pvVar5,__n);
    }
    *(void **)this = pvVar2;
    *(ulong *)(this + 8) = (long)(void *)((long)pvVar2 + __n) + param_1;
    *(ulong *)(this + 0x10) = (long)pvVar2 + uVar1;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
      return;
    }
  }
  else {
    pvVar5 = pvVar2;
    if (param_1 != 0) {
      pvVar5 = (void *)((long)pvVar2 + param_1);
      memset(pvVar2,0,param_1);
    }
    *(void **)(this + 8) = pvVar5;
  }
  return;
}


