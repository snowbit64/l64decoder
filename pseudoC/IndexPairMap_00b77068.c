// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IndexPairMap
// Entry Point: 00b77068
// Size: 52 bytes
// Signature: undefined __thiscall ~IndexPairMap(IndexPairMap * this)


/* IndexPairMap::~IndexPairMap() */

void __thiscall IndexPairMap::~IndexPairMap(IndexPairMap *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>>
             *)this,*(__tree_node **)(this + 8));
  return;
}


