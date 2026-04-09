// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugMask
// Entry Point: 009d4ac8
// Size: 312 bytes
// Signature: undefined __thiscall debugMask(ProceduralPlacementManager * this, basic_string * param_1, PPMask * param_2, bool param_3)


/* ProceduralPlacementManager::debugMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   ProceduralPlacementScriptBinding::PPMask*, bool) */

void __thiscall
ProceduralPlacementManager::debugMask
          (ProceduralPlacementManager *this,basic_string *param_1,PPMask *param_2,bool param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  if (this[0x108] != (ProceduralPlacementManager)0x0) {
    lVar3 = (**(code **)(**(long **)param_2 + 0x20))();
    if (param_3) {
      *(undefined *)(lVar3 + 0x68) = 1;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (lVar3 + 8),param_1);
    plVar2 = *(long **)(this + 0x88);
    if (plVar2 == *(long **)(this + 0x90)) {
      __src = *(void **)(this + 0x80);
      __n = (long)plVar2 - (long)__src;
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
      plVar2 = (long *)((long)__dest + ((long)__n >> 3) * 8);
      *plVar2 = lVar3;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x80) = __dest;
      *(long **)(this + 0x88) = plVar2 + 1;
      *(void **)(this + 0x90) = (void *)((long)__dest + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *plVar2 = lVar3;
      *(long **)(this + 0x88) = plVar2 + 1;
    }
  }
  return;
}


