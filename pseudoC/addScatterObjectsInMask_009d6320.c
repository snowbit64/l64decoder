// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addScatterObjectsInMask
// Entry Point: 009d6320
// Size: 328 bytes
// Signature: undefined __thiscall addScatterObjectsInMask(ProceduralPlacementManager * this, basic_string * param_1, uint param_2, int * param_3, bool param_4, PPParentObjects * param_5, PPMask * param_6, basic_string * param_7)


/* ProceduralPlacementManager::addScatterObjectsInMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int, int*, bool,
   ProceduralPlacementScriptBinding::PPParentObjects*, ProceduralPlacementScriptBinding::PPMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
ProceduralPlacementManager::addScatterObjectsInMask
          (ProceduralPlacementManager *this,basic_string *param_1,uint param_2,int *param_3,
          bool param_4,PPParentObjects *param_5,PPMask *param_6,basic_string *param_7)

{
  ulong uVar1;
  ClearAndScatterCallScatterObjectsInMask **ppCVar2;
  ClearAndScatterCallScatterObjectsInMask *this_00;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  
  this_00 = (ClearAndScatterCallScatterObjectsInMask *)operator_new(0x60);
                    /* try { // try from 009d6368 to 009d6387 has its CatchHandler @ 009d6468 */
  ClearAndScatterCallScatterObjectsInMask::ClearAndScatterCallScatterObjectsInMask
            (this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  ppCVar2 = *(ClearAndScatterCallScatterObjectsInMask ***)(this + 0x148);
  if (ppCVar2 < *(ClearAndScatterCallScatterObjectsInMask ***)(this + 0x150)) {
    *ppCVar2 = this_00;
    *(ClearAndScatterCallScatterObjectsInMask ***)(this + 0x148) = ppCVar2 + 1;
  }
  else {
    __src = *(void **)(this + 0x140);
    __n = (long)ppCVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = (long)*(ClearAndScatterCallScatterObjectsInMask ***)(this + 0x150) - (long)__src;
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
    ppCVar2 = (ClearAndScatterCallScatterObjectsInMask **)((long)__dest + ((long)__n >> 3) * 8);
    *ppCVar2 = this_00;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x140) = __dest;
    *(ClearAndScatterCallScatterObjectsInMask ***)(this + 0x148) = ppCVar2 + 1;
    *(void **)(this + 0x150) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  ProceduralPlacementClearMask::combineWithMask
            (*(ProceduralPlacementClearMask **)(this + 0x158),*(ProceduralPlacementMask **)param_6);
  return;
}


