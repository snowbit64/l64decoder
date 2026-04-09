// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00a4f81c
// Size: 656 bytes
// Signature: undefined __thiscall __append(vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>> * this, ulong param_1, Element * param_2)


/* std::__ndk1::vector<AudioSourceSample::Element,
   std::__ndk1::allocator<AudioSourceSample::Element> >::__append(unsigned long,
   AudioSourceSample::Element const&) */

void __thiscall
std::__ndk1::vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>::
__append(vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>> *this
        ,ulong param_1,Element *param_2)

{
  Element *pEVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  Element *pEVar12;
  Element *pEVar13;
  Element *pEVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  pEVar13 = *(Element **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pEVar13 >> 3) * 0x6db6db6db6db6db7) < param_1) {
    lVar8 = (long)pEVar13 - *(long *)this >> 3;
    uVar2 = lVar8 * 0x6db6db6db6db6db7 + param_1;
    if (0x492492492492492 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar9 = lVar7 * -0x2492492492492492;
    if (uVar2 <= uVar9) {
      uVar2 = uVar9;
    }
    if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
      uVar2 = 0x492492492492492;
    }
    if (uVar2 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x492492492492492 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar5 = operator_new(uVar2 * 0x38);
    }
    pEVar13 = (Element *)((long)pvVar5 + lVar8 * 8);
    pEVar14 = pEVar13 + param_1 * 0xe;
    pEVar12 = pEVar13;
    do {
      *pEVar12 = *param_2;
                    /* try { // try from 00a4f994 to 00a4f99f has its CatchHandler @ 00a4fabc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(pEVar12 + 2);
      pEVar1 = pEVar12 + 0xe;
      uVar16 = *(undefined8 *)(param_2 + 10);
      uVar15 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(pEVar12 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(pEVar12 + 10) = uVar16;
      *(undefined8 *)(pEVar12 + 8) = uVar15;
      pEVar12 = pEVar1;
    } while (pEVar1 != pEVar14);
    pvVar10 = *(void **)this;
    pvVar3 = *(void **)(this + 8);
    pvVar11 = pvVar10;
    if (pvVar3 != pvVar10) {
      lVar8 = 0;
      do {
        *(undefined4 *)((long)pEVar13 + lVar8 + -0x38) =
             *(undefined4 *)((long)pvVar3 + lVar8 + -0x38);
                    /* try { // try from 00a4f9e8 to 00a4f9eb has its CatchHandler @ 00a4faac */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)((long)pEVar13 + lVar8 + -0x30));
        uVar16 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x10);
        uVar15 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x18);
        lVar7 = lVar8 + -0x38;
        *(undefined8 *)((long)pEVar13 + lVar8 + -8) = *(undefined8 *)((long)pvVar3 + lVar8 + -8);
        *(undefined8 *)((long)pEVar13 + lVar8 + -0x10) = uVar16;
        *(undefined8 *)((long)pEVar13 + lVar8 + -0x18) = uVar15;
        lVar8 = lVar7;
      } while ((void *)((long)pvVar3 + lVar7) != pvVar10);
      pvVar10 = *(void **)this;
      pEVar13 = (Element *)((long)pEVar13 + lVar7);
      pvVar11 = *(void **)(this + 8);
    }
    *(Element **)this = pEVar13;
    *(Element **)(this + 8) = pEVar14;
    *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar2 * 0x38);
    while (pvVar5 = pvVar11, pvVar5 != pvVar10) {
      pvVar11 = (void *)((long)pvVar5 + -0x38);
      if ((*(byte *)((long)pvVar5 + -0x30) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar5 + -0x20));
      }
    }
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
  }
  else {
    pEVar12 = pEVar13;
    if (param_1 != 0) {
      pEVar12 = pEVar13 + param_1 * 0xe;
      do {
        *pEVar13 = *param_2;
                    /* try { // try from 00a4f92c to 00a4f937 has its CatchHandler @ 00a4fab4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pEVar13 + 2);
        pEVar14 = pEVar13 + 0xe;
        uVar16 = *(undefined8 *)(param_2 + 10);
        uVar15 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(pEVar13 + 0xc) = *(undefined8 *)(param_2 + 0xc);
        *(undefined8 *)(pEVar13 + 10) = uVar16;
        *(undefined8 *)(pEVar13 + 8) = uVar15;
        pEVar13 = pEVar14;
      } while (pEVar14 != pEVar12);
    }
    *(Element **)(this + 8) = pEVar12;
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


