// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 008b8f90
// Size: 536 bytes
// Signature: undefined __thiscall __append(vector<BiquadResonantFilter,std::__ndk1::allocator<BiquadResonantFilter>> * this, ulong param_1)


/* std::__ndk1::vector<BiquadResonantFilter, std::__ndk1::allocator<BiquadResonantFilter>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<BiquadResonantFilter,std::__ndk1::allocator<BiquadResonantFilter>>::__append
          (vector<BiquadResonantFilter,std::__ndk1::allocator<BiquadResonantFilter>> *this,
          ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  BiquadResonantFilter *pBVar6;
  long lVar7;
  ulong uVar8;
  BiquadResonantFilter *pBVar9;
  BiquadResonantFilter *pBVar10;
  BiquadResonantFilter *pBVar11;
  BiquadResonantFilter *pBVar12;
  BiquadResonantFilter *pBVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pBVar10 = *(BiquadResonantFilter **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pBVar10 >> 3) * 0x6db6db6db6db6db7) < param_1) {
    lVar7 = (long)pBVar10 - *(long *)this >> 3;
    uVar1 = lVar7 * 0x6db6db6db6db6db7 + param_1;
    if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar8 = lVar5 * -0x2492492492492492;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar1 = 0x492492492492492;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x38);
    }
    pBVar12 = (BiquadResonantFilter *)((long)pvVar3 + lVar7 * 8);
    lVar7 = param_1 * 0x38;
    pBVar11 = pBVar12 + lVar7;
    pBVar10 = pBVar12;
    do {
                    /* try { // try from 008b90d0 to 008b90d7 has its CatchHandler @ 008b91b0 */
      BiquadResonantFilter::BiquadResonantFilter(pBVar10);
      pBVar10 = pBVar10 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
    pBVar10 = *(BiquadResonantFilter **)this;
    pBVar6 = *(BiquadResonantFilter **)(this + 8);
    pBVar9 = pBVar10;
    pBVar13 = pBVar12;
    if (*(BiquadResonantFilter **)(this + 8) != pBVar10) {
      do {
        pBVar9 = pBVar6 + -0x38;
        uVar15 = *(undefined8 *)(pBVar6 + -0x10);
        uVar14 = *(undefined8 *)(pBVar6 + -0x18);
        uVar17 = *(undefined8 *)(pBVar6 + -0x30);
        uVar16 = *(undefined8 *)(pBVar6 + -0x38);
        uVar19 = *(undefined8 *)(pBVar6 + -0x20);
        uVar18 = *(undefined8 *)(pBVar6 + -0x28);
        *(undefined8 *)(pBVar13 + -8) = *(undefined8 *)(pBVar6 + -8);
        *(undefined8 *)(pBVar13 + -0x10) = uVar15;
        *(undefined8 *)(pBVar13 + -0x18) = uVar14;
        pBVar12 = pBVar13 + -0x38;
        *(undefined8 *)(pBVar13 + -0x30) = uVar17;
        *(undefined8 *)(pBVar13 + -0x38) = uVar16;
        *(undefined8 *)(pBVar13 + -0x20) = uVar19;
        *(undefined8 *)(pBVar13 + -0x28) = uVar18;
        pBVar6 = pBVar9;
        pBVar13 = pBVar12;
      } while (pBVar9 != pBVar10);
      pBVar10 = *(BiquadResonantFilter **)(this + 8);
      pBVar9 = *(BiquadResonantFilter **)this;
    }
    *(BiquadResonantFilter **)this = pBVar12;
    *(BiquadResonantFilter **)(this + 8) = pBVar11;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x38);
    while (pBVar10 != pBVar9) {
      pBVar10 = pBVar10 + -0x38;
      BiquadResonantFilter::~BiquadResonantFilter(pBVar10);
    }
    if (pBVar9 != (BiquadResonantFilter *)0x0) {
      operator_delete(pBVar9);
    }
  }
  else {
    pBVar11 = pBVar10;
    if (param_1 != 0) {
      pBVar11 = pBVar10 + param_1 * 0x38;
      lVar7 = param_1 * 0x38;
      do {
                    /* try { // try from 008b908c to 008b9093 has its CatchHandler @ 008b91a8 */
        BiquadResonantFilter::BiquadResonantFilter(pBVar10);
        pBVar10 = pBVar10 + 0x38;
        lVar7 = lVar7 + -0x38;
      } while (lVar7 != 0);
    }
    *(BiquadResonantFilter **)(this + 8) = pBVar11;
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


