// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00761fcc
// Size: 220 bytes
// Signature: undefined __thiscall reserve(vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>> * this, ulong param_1)


/* std::__ndk1::vector<FieldCropsQuery::CropTypeIndex,
   std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>::
reserve(vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>
        *this,ulong param_1)

{
  void *__dest;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)__src >> 2) * 0xf83e0f83e0f83e1) < param_1) {
    if (0x1f07c1f07c1f07c < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __n = *(long *)(this + 8) - (long)__src;
    __dest = operator_new(param_1 * 0x84);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(size_t *)(this + 8) = (long)__dest + __n;
    *(void **)(this + 0x10) = (void *)((long)__dest + param_1 * 0x84);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


