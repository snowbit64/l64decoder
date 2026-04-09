// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00cd62d4
// Size: 520 bytes
// Signature: undefined __thiscall __append(vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>> * this, ulong param_1)


/* std::__ndk1::vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>,
   std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer> >
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
::__append(vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
           *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  BaseAndExponent *pBVar8;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar9;
  BaseAndExponent *pBVar10;
  BaseAndExponent *pBVar11;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar12;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pBVar8 = *(BaseAndExponent **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pBVar8 >> 5) * -0x3333333333333333) < param_1) {
    lVar6 = (long)pBVar8 - *(long *)this >> 5;
    uVar1 = lVar6 * -0x3333333333333333 + param_1;
    if (0x199999999999999 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 5;
    uVar7 = lVar5 * -0x6666666666666666;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0xcccccccccccccb < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar1 = 0x199999999999999;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x199999999999999 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0xa0);
    }
    pBVar10 = (BaseAndExponent *)((long)pvVar3 + lVar6 * 0x20);
    pvVar3 = (void *)((long)pvVar3 + uVar1 * 0xa0);
    lVar6 = param_1 * 0xa0;
    pBVar11 = pBVar10 + lVar6;
    pBVar8 = pBVar10;
    do {
                    /* try { // try from 00cd6400 to 00cd640b has its CatchHandler @ 00cd64ec */
      allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>::
      construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
                ((allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> *)
                 (this + 0x10),pBVar8);
      pBVar8 = pBVar8 + 0xa0;
      lVar6 = lVar6 + -0xa0;
    } while (lVar6 != 0);
    pBVar9 = *(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **)this;
    pBVar12 = *(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **)(this + 8);
    if (pBVar12 == pBVar9) {
      *(BaseAndExponent **)this = pBVar10;
      *(BaseAndExponent **)(this + 8) = pBVar11;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      do {
        pBVar10 = pBVar10 + -0xa0;
        pBVar12 = pBVar12 + -0xa0;
                    /* try { // try from 00cd6430 to 00cd643f has its CatchHandler @ 00cd64dc */
        allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>::
        construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>const&>
                  ((allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> *)
                   (this + 0x10),pBVar10,(BaseAndExponent *)pBVar12);
      } while (pBVar12 != pBVar9);
      pBVar9 = *(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **)this;
      pBVar12 = *(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **)(this + 8);
      *(BaseAndExponent **)this = pBVar10;
      *(BaseAndExponent **)(this + 8) = pBVar11;
      *(void **)(this + 0x10) = pvVar3;
      while (pBVar12 != pBVar9) {
        pBVar12 = pBVar12 + -0xa0;
        CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>::~BaseAndExponent(pBVar12);
      }
    }
    if (pBVar9 != (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0) {
      operator_delete(pBVar9);
    }
  }
  else {
    pBVar11 = pBVar8;
    if (param_1 != 0) {
      pBVar11 = pBVar8 + param_1 * 0xa0;
      lVar6 = param_1 * 0xa0;
      do {
                    /* try { // try from 00cd63b4 to 00cd63bf has its CatchHandler @ 00cd64e4 */
        allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>::
        construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
                  ((allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> *)
                   (this + 0x10),pBVar8);
        pBVar8 = pBVar8 + 0xa0;
        lVar6 = lVar6 + -0xa0;
      } while (lVar6 != 0);
    }
    *(BaseAndExponent **)(this + 8) = pBVar11;
  }
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


