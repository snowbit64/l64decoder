// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addIndexPair
// Entry Point: 00b76f0c
// Size: 348 bytes
// Signature: undefined __thiscall addIndexPair(IndexPairMap * this, ushort param_1, ushort param_2)


/* IndexPairMap::addIndexPair(unsigned short, unsigned short) */

void __thiscall IndexPairMap::addIndexPair(IndexPairMap *this,ushort param_1,ushort param_2)

{
  ulong uVar1;
  pair pVar2;
  long lVar3;
  pair pVar4;
  void *__dest;
  pair *ppVar5;
  void *__src;
  ulong __n;
  pair local_70;
  undefined2 local_6c;
  long local_68;
  
  ppVar5 = &local_70;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pVar2 = CONCAT22(param_2,param_1);
  local_6c = (undefined2)((uint)(*(int *)(this + 0x20) - *(int *)(this + 0x18)) >> 2);
  local_70 = pVar2;
  pVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>>
          ::
          __emplace_unique_key_args<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::pair<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>>
                      *)this,&local_70,&local_70);
  if (((ulong)ppVar5 & 0xff) != 0) {
    ppVar5 = *(pair **)(this + 0x20);
    if (ppVar5 == *(pair **)(this + 0x28)) {
      __src = *(void **)(this + 0x18);
      __n = (long)ppVar5 - (long)__src;
      uVar1 = ((long)__n >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 1)) {
        uVar1 = (long)__n >> 1;
      }
      if (0x7ffffffffffffffb < __n) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 2);
      }
      ppVar5 = (pair *)((long)__dest + ((long)__n >> 2) * 4);
      *ppVar5 = pVar2;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x18) = __dest;
      *(pair **)(this + 0x20) = ppVar5 + 1;
      *(void **)(this + 0x28) = (void *)((long)__dest + uVar1 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *ppVar5 = pVar2;
      *(pair **)(this + 0x20) = ppVar5 + 1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined2 *)((ulong)pVar4 + 0x1e));
}


