// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addIndexMask
// Entry Point: 009d2e30
// Size: 308 bytes
// Signature: undefined __thiscall addIndexMask(ProceduralPlacementManager * this, basic_string * param_1, basic_string * param_2, basic_string * param_3)


/* ProceduralPlacementManager::addIndexMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementManager::addIndexMask
          (ProceduralPlacementManager *this,basic_string *param_1,basic_string *param_2,
          basic_string *param_3)

{
  ulong uVar1;
  long **pplVar2;
  long *this_00;
  void *__dest;
  void *__src;
  ulong __n;
  
  this_00 = (long *)operator_new(0xe8);
                    /* try { // try from 009d2e64 to 009d2e73 has its CatchHandler @ 009d2f64 */
  ProceduralPlacementIndexMask::ProceduralPlacementIndexMask
            ((ProceduralPlacementIndexMask *)this_00,param_1,param_2,param_3);
  (**(code **)(*this_00 + 0x28))(this_00);
  pplVar2 = *(long ***)(this + 0x70);
  if (pplVar2 == *(long ***)(this + 0x78)) {
    __src = *(void **)(this + 0x68);
    __n = (long)pplVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 2)) {
      uVar1 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
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
    pplVar2 = (long **)((long)__dest + ((long)__n >> 3) * 8);
    *pplVar2 = this_00;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x68) = __dest;
    *(long ***)(this + 0x70) = pplVar2 + 1;
    *(void **)(this + 0x78) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *pplVar2 = this_00;
    *(long ***)(this + 0x70) = pplVar2 + 1;
  }
  return;
}


