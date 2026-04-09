// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00cc25dc
// Size: 480 bytes
// Signature: undefined __thiscall __append(vector<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>> * this, ulong param_1, PolynomialMod2 * param_2)


/* std::__ndk1::vector<CryptoPP::PolynomialMod2, std::__ndk1::allocator<CryptoPP::PolynomialMod2>
   >::__append(unsigned long, CryptoPP::PolynomialMod2 const&) */

void __thiscall
std::__ndk1::vector<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>>::
__append(vector<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>> *this,
        ulong param_1,PolynomialMod2 *param_2)

{
  ulong uVar1;
  PolynomialMod2 *pPVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  PolynomialMod2 *pPVar8;
  PolynomialMod2 *pPVar9;
  long lVar10;
  PolynomialMod2 *pPVar11;
  PolynomialMod2 *pPVar12;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  pPVar9 = *(PolynomialMod2 **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)pPVar9 >> 5) < param_1) {
    lVar10 = (long)pPVar9 - *(long *)this >> 5;
    uVar1 = lVar10 + param_1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar6 = *(long *)(this + 0x10) - *(long *)this;
    uVar7 = (long)uVar6 >> 4;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar1 << 5);
    }
    pPVar11 = (PolynomialMod2 *)((long)pvVar4 + lVar10 * 0x20);
    lVar10 = param_1 * 0x20;
    pPVar2 = pPVar11 + lVar10;
    pPVar9 = pPVar11;
    do {
                    /* try { // try from 00cc26c8 to 00cc26d3 has its CatchHandler @ 00cc27d0 */
      CryptoPP::PolynomialMod2::PolynomialMod2(pPVar9,param_2);
      pPVar9 = pPVar9 + 0x20;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
    pPVar9 = *(PolynomialMod2 **)this;
    pPVar8 = *(PolynomialMod2 **)(this + 8);
    pPVar12 = pPVar9;
    if (pPVar8 != pPVar9) {
      do {
        pPVar11 = pPVar11 + -0x20;
        pPVar8 = pPVar8 + -0x20;
                    /* try { // try from 00cc26f8 to 00cc2703 has its CatchHandler @ 00cc27bc */
        CryptoPP::PolynomialMod2::PolynomialMod2(pPVar11,pPVar8);
      } while (pPVar8 != pPVar9);
      pPVar9 = *(PolynomialMod2 **)this;
      pPVar12 = *(PolynomialMod2 **)(this + 8);
    }
    *(PolynomialMod2 **)this = pPVar11;
    *(PolynomialMod2 **)(this + 8) = pPVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x20);
    while (pPVar12 != pPVar9) {
      pvVar4 = *(void **)(pPVar12 + -8);
      uVar1 = *(ulong *)(pPVar12 + -0x18);
      if (*(ulong *)(pPVar12 + -0x10) <= *(ulong *)(pPVar12 + -0x18)) {
        uVar1 = *(ulong *)(pPVar12 + -0x10);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)((long)pvVar4 + uVar1 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc2728 to 00cc272b has its CatchHandler @ 00cc27cc */
      CryptoPP::UnalignedDeallocate(pvVar4);
      pPVar12 = pPVar12 + -0x20;
    }
    if (pPVar9 != (PolynomialMod2 *)0x0) {
      operator_delete(pPVar9);
    }
  }
  else {
    pPVar11 = pPVar9;
    if (param_1 != 0) {
      pPVar11 = pPVar9 + param_1 * 0x20;
      lVar10 = param_1 << 5;
      do {
                    /* try { // try from 00cc2684 to 00cc268f has its CatchHandler @ 00cc27c4 */
        CryptoPP::PolynomialMod2::PolynomialMod2(pPVar9,param_2);
        pPVar9 = pPVar9 + 0x20;
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != 0);
    }
    *(PolynomialMod2 **)(this + 8) = pPVar11;
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


