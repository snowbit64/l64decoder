// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 008bb210
// Size: 516 bytes
// Signature: undefined __thiscall __append(vector<stb_vorbis*,std::__ndk1::allocator<stb_vorbis*>> * this, ulong param_1, stb_vorbis * * param_2)


/* std::__ndk1::vector<stb_vorbis*, std::__ndk1::allocator<stb_vorbis*> >::__append(unsigned long,
   stb_vorbis* const&) */

void __thiscall
std::__ndk1::vector<stb_vorbis*,std::__ndk1::allocator<stb_vorbis*>>::__append
          (vector<stb_vorbis*,std::__ndk1::allocator<stb_vorbis*>> *this,ulong param_1,
          stb_vorbis **param_2)

{
  stb_vorbis *psVar1;
  void *pvVar2;
  void *__src;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  stb_vorbis **ppsVar5;
  stb_vorbis **ppsVar6;
  ulong uVar7;
  ulong uVar8;
  stb_vorbis **ppsVar9;
  stb_vorbis **ppsVar10;
  long lVar11;
  
  ppsVar9 = *(stb_vorbis ***)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)ppsVar9 >> 3)) {
    ppsVar10 = ppsVar9;
    if (param_1 != 0) {
      ppsVar10 = ppsVar9 + param_1;
      uVar4 = param_1 - 1 & 0x1fffffffffffffff;
      if ((2 < uVar4) && ((param_2 + 1 <= ppsVar9 || (ppsVar9 + param_1 <= param_2)))) {
        uVar4 = uVar4 + 1;
        psVar1 = *param_2;
        uVar7 = uVar4 & 0x3ffffffffffffffc;
        ppsVar5 = ppsVar9 + 2;
        uVar3 = uVar7;
        do {
          ppsVar5[-1] = psVar1;
          ppsVar5[-2] = psVar1;
          ppsVar5[1] = psVar1;
          *ppsVar5 = psVar1;
          ppsVar5 = ppsVar5 + 4;
          uVar3 = uVar3 - 4;
        } while (uVar3 != 0);
        ppsVar9 = ppsVar9 + uVar7;
        if (uVar4 == uVar7) goto LAB_008bb30c;
      }
      do {
        ppsVar5 = ppsVar9 + 1;
        *ppsVar9 = *param_2;
        ppsVar9 = ppsVar5;
      } while (ppsVar5 != ppsVar10);
    }
LAB_008bb30c:
    *(stb_vorbis ***)(this + 8) = ppsVar10;
    return;
  }
  lVar11 = (long)ppsVar9 - *(long *)this >> 3;
  uVar4 = lVar11 + param_1;
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar3 = *(long *)(this + 0x10) - *(long *)this;
  uVar7 = (long)uVar3 >> 2;
  if (uVar4 <= uVar7) {
    uVar4 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar4 = 0x1fffffffffffffff;
  }
  if (uVar4 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar2 = operator_new(uVar4 << 3);
  }
  ppsVar10 = (stb_vorbis **)((long)pvVar2 + lVar11 * 8);
  uVar3 = param_1 - 1 & 0x1fffffffffffffff;
  ppsVar5 = ppsVar10;
  if ((2 < uVar3) &&
     ((param_2 + 1 <= ppsVar10 ||
      ((stb_vorbis **)((long)pvVar2 + (param_1 + lVar11) * 8) <= param_2)))) {
    uVar3 = uVar3 + 1;
    psVar1 = *param_2;
    uVar8 = uVar3 & 0x3ffffffffffffffc;
    ppsVar5 = (stb_vorbis **)((long)pvVar2 + lVar11 * 8 + 0x10);
    uVar7 = uVar8;
    do {
      ppsVar5[-1] = psVar1;
      ppsVar5[-2] = psVar1;
      ppsVar5[1] = psVar1;
      *ppsVar5 = psVar1;
      ppsVar5 = ppsVar5 + 4;
      uVar7 = uVar7 - 4;
    } while (uVar7 != 0);
    ppsVar5 = ppsVar10 + uVar8;
    if (uVar3 == uVar8) goto LAB_008bb39c;
  }
  do {
    ppsVar6 = ppsVar5 + 1;
    *ppsVar5 = *param_2;
    ppsVar5 = ppsVar6;
  } while (ppsVar6 != ppsVar10 + param_1);
LAB_008bb39c:
  __src = *(void **)this;
  __n = (long)ppsVar9 - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)ppsVar10 - __n),__src,__n);
    __src = *(void **)this;
  }
  *(void **)this = (void *)((long)ppsVar10 - __n);
  *(stb_vorbis ***)(this + 8) = ppsVar10 + param_1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar4 * 8);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


