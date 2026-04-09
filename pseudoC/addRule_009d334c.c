// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addRule
// Entry Point: 009d334c
// Size: 296 bytes
// Signature: undefined __thiscall addRule(ProceduralPlacementManager * this, basic_string * param_1, bool param_2, uint param_3, uint param_4, uint param_5)


/* ProceduralPlacementManager::addRule(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool, unsigned int,
   unsigned int, unsigned int) */

ProceduralPlacementRule * __thiscall
ProceduralPlacementManager::addRule
          (ProceduralPlacementManager *this,basic_string *param_1,bool param_2,uint param_3,
          uint param_4,uint param_5)

{
  ulong uVar1;
  ProceduralPlacementRule **ppPVar2;
  ProceduralPlacementRule *this_00;
  void *__dest;
  void *__src;
  ulong __n;
  
  this_00 = (ProceduralPlacementRule *)operator_new(0xc0);
                    /* try { // try from 009d3388 to 009d339f has its CatchHandler @ 009d3474 */
  ProceduralPlacementRule::ProceduralPlacementRule(this_00,param_1,param_2,param_3,param_4,param_5);
  ppPVar2 = *(ProceduralPlacementRule ***)(this + 0xc0);
  if (ppPVar2 == *(ProceduralPlacementRule ***)(this + 200)) {
    __src = *(void **)(this + 0xb8);
    __n = (long)ppPVar2 - (long)__src;
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
    ppPVar2 = (ProceduralPlacementRule **)((long)__dest + ((long)__n >> 3) * 8);
    *ppPVar2 = this_00;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xb8) = __dest;
    *(ProceduralPlacementRule ***)(this + 0xc0) = ppPVar2 + 1;
    *(void **)(this + 200) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppPVar2 = this_00;
    *(ProceduralPlacementRule ***)(this + 0xc0) = ppPVar2 + 1;
  }
  return this_00;
}


