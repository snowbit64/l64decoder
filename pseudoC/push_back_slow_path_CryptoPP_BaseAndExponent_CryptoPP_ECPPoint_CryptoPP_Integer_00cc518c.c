// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
// Entry Point: 00cc518c
// Size: 412 bytes
// Signature: void __thiscall __push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>(vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>> * this, BaseAndExponent * param_1)


/* void std::__ndk1::vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>,
   std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer> >
   >::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>
   >(CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>&&) */

void __thiscall
std::__ndk1::
vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
          (vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
           *this,BaseAndExponent *param_1)

{
  ulong uVar1;
  BaseAndExponent *pBVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar9;
  BaseAndExponent *pBVar10;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar11;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar6 * -0x3333333333333333 + 1;
  if (0x199999999999999 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 5;
  uVar8 = lVar7 * -0x6666666666666666;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0xcccccccccccccb < (ulong)(lVar7 * -0x3333333333333333)) {
    uVar1 = 0x199999999999999;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x199999999999999 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0xa0);
  }
  pBVar10 = (BaseAndExponent *)((long)pvVar4 + lVar6 * 0x20);
  pvVar4 = (void *)((long)pvVar4 + uVar1 * 0xa0);
                    /* try { // try from 00cc5250 to 00cc525f has its CatchHandler @ 00cc5328 */
  allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>::
  construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
            ((allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> *)
             (this + 0x10),pBVar10,param_1);
  pBVar9 = *(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **)this;
  pBVar11 = *(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **)(this + 8);
  pBVar2 = pBVar10 + 0xa0;
  if (pBVar11 == pBVar9) {
    *(BaseAndExponent **)this = pBVar10;
    *(BaseAndExponent **)(this + 8) = pBVar2;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    do {
      pBVar10 = pBVar10 + -0xa0;
      pBVar11 = pBVar11 + -0xa0;
                    /* try { // try from 00cc527c to 00cc528b has its CatchHandler @ 00cc532c */
      allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>::
      construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>const&>
                ((allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> *)
                 (this + 0x10),pBVar10,(BaseAndExponent *)pBVar11);
    } while (pBVar11 != pBVar9);
    pBVar9 = *(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **)this;
    pBVar11 = *(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **)(this + 8);
    *(BaseAndExponent **)this = pBVar10;
    *(BaseAndExponent **)(this + 8) = pBVar2;
    *(void **)(this + 0x10) = pvVar4;
    while (pBVar11 != pBVar9) {
      pBVar11 = pBVar11 + -0xa0;
      CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>::~BaseAndExponent(pBVar11);
    }
  }
  if (pBVar9 != (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0) {
    operator_delete(pBVar9);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


