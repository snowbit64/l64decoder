// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00c9831c
// Size: 328 bytes
// Signature: undefined __thiscall reserve(vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>> * this, ulong param_1)


/* std::__ndk1::vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>,
   std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer> >
   >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
::reserve(vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
          *this,ulong param_1)

{
  void *pvVar1;
  BaseAndExponent *pBVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar6;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *this_00;
  BaseAndExponent *pBVar7;
  BaseAndExponent *pBVar8;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  pBVar6 = *(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)pBVar6 >> 5) * -0x3333333333333333) < param_1) {
    pBVar7 = *(BaseAndExponent **)(this + 8);
    if (0x199999999999999 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(param_1 * 0xa0);
    pvVar1 = (void *)((long)pvVar4 + param_1 * 0xa0);
    pBVar2 = (BaseAndExponent *)((long)pvVar4 + ((long)pBVar7 - (long)pBVar6));
    pBVar8 = pBVar2;
    if ((long)pBVar7 - (long)pBVar6 == 0) {
      *(BaseAndExponent **)this = pBVar2;
      *(BaseAndExponent **)(this + 8) = pBVar2;
      *(void **)(this + 0x10) = pvVar1;
    }
    else {
      do {
        pBVar8 = pBVar8 + -0xa0;
        pBVar7 = pBVar7 + -0xa0;
                    /* try { // try from 00c983c0 to 00c983cf has its CatchHandler @ 00c98464 */
        allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>::
        construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>const&>
                  ((allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> *)
                   (this + 0x10),pBVar8,pBVar7);
      } while (pBVar7 != (BaseAndExponent *)pBVar6);
      pBVar6 = *(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **)this;
      this_00 = *(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **)(this + 8);
      *(BaseAndExponent **)this = pBVar8;
      *(BaseAndExponent **)(this + 8) = pBVar2;
      *(void **)(this + 0x10) = pvVar1;
      while (this_00 != pBVar6) {
        this_00 = this_00 + -0xa0;
        CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>::~BaseAndExponent(this_00);
      }
    }
    if (pBVar6 != (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0) {
      operator_delete(pBVar6);
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


