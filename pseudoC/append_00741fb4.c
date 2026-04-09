// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00741fb4
// Size: 312 bytes
// Signature: undefined __thiscall __append(vector<HashTable<unsigned_int,Hash<unsigned_int>>::Entry,std::__ndk1::allocator<HashTable<unsigned_int,Hash<unsigned_int>>::Entry>> * this, ulong param_1)


/* std::__ndk1::vector<HashTable<unsigned int, Hash<unsigned int> >::Entry,
   std::__ndk1::allocator<HashTable<unsigned int, Hash<unsigned int> >::Entry> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::
vector<HashTable<unsigned_int,Hash<unsigned_int>>::Entry,std::__ndk1::allocator<HashTable<unsigned_int,Hash<unsigned_int>>::Entry>>
::__append(vector<HashTable<unsigned_int,Hash<unsigned_int>>::Entry,std::__ndk1::allocator<HashTable<unsigned_int,Hash<unsigned_int>>::Entry>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *__s;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  
  pvVar2 = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)pvVar2 >> 3) < param_1) {
    __src = *(void **)this;
    __n = (long)pvVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + param_1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = *(long *)(this + 0x10) - (long)__src;
    uVar4 = (long)uVar3 >> 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 << 3);
    }
    __s = (void *)((long)pvVar2 + ((long)__n >> 3) * 8);
    memset(__s,0,param_1 * 8);
    if (0 < (long)__n) {
      memcpy(pvVar2,__src,__n);
    }
    *(void **)this = pvVar2;
    *(void **)(this + 8) = (void *)((long)__s + param_1 * 8);
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    if (param_1 != 0) {
      memset(pvVar2,0,param_1 * 8);
      pvVar2 = (void *)((long)pvVar2 + param_1 * 8);
    }
    *(void **)(this + 8) = pvVar2;
  }
  return;
}


