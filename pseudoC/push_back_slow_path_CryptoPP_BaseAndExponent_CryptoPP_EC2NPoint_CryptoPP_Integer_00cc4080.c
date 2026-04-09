// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>
// Entry Point: 00cc4080
// Size: 376 bytes
// Signature: void __thiscall __push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>(vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>> * this, BaseAndExponent * param_1)


/* void std::__ndk1::vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>,
   std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer> >
   >::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>
   >(CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>&&) */

void __thiscall
std::__ndk1::
vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>
          (vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
           *this,BaseAndExponent *param_1)

{
  ulong uVar1;
  BaseAndExponent *pBVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *pBVar8;
  long lVar9;
  BaseAndExponent *pBVar10;
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *pBVar11;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(this + 8) - *(long *)this >> 7;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar6 = *(long *)(this + 0x10) - *(long *)this;
  uVar7 = (long)uVar6 >> 6;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x7fffffffffffff7f < uVar6) {
    uVar1 = 0x1ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 << 7);
  }
  pBVar10 = (BaseAndExponent *)((long)pvVar4 + lVar9 * 0x80);
  pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x80);
                    /* try { // try from 00cc4120 to 00cc412f has its CatchHandler @ 00cc41f8 */
  allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>::
  construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>
            ((allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>> *)
             (this + 0x10),pBVar10,param_1);
  pBVar8 = *(BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> **)this;
  pBVar11 = *(BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> **)(this + 8);
  pBVar2 = pBVar10 + 0x80;
  if (pBVar11 == pBVar8) {
    *(BaseAndExponent **)this = pBVar10;
    *(BaseAndExponent **)(this + 8) = pBVar2;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    do {
      pBVar10 = pBVar10 + -0x80;
      pBVar11 = pBVar11 + -0x80;
                    /* try { // try from 00cc414c to 00cc415b has its CatchHandler @ 00cc41fc */
      allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>::
      construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>const&>
                ((allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>> *)
                 (this + 0x10),pBVar10,(BaseAndExponent *)pBVar11);
    } while (pBVar11 != pBVar8);
    pBVar8 = *(BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> **)this;
    pBVar11 = *(BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> **)(this + 8);
    *(BaseAndExponent **)this = pBVar10;
    *(BaseAndExponent **)(this + 8) = pBVar2;
    *(void **)(this + 0x10) = pvVar4;
    while (pBVar11 != pBVar8) {
      pBVar11 = pBVar11 + -0x80;
      CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>::~BaseAndExponent(pBVar11);
    }
  }
  if (pBVar8 != (BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *)0x0) {
    operator_delete(pBVar8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


