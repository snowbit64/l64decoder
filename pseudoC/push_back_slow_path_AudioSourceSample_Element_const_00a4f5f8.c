// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<AudioSourceSample::Element_const&>
// Entry Point: 00a4f5f8
// Size: 524 bytes
// Signature: void __thiscall __push_back_slow_path<AudioSourceSample::Element_const&>(vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>> * this, Element * param_1)


/* void std::__ndk1::vector<AudioSourceSample::Element,
   std::__ndk1::allocator<AudioSourceSample::Element>
   >::__push_back_slow_path<AudioSourceSample::Element const&>(AudioSourceSample::Element const&) */

void __thiscall
std::__ndk1::vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>::
__push_back_slow_path<AudioSourceSample::Element_const&>
          (vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>
           *this,Element *param_1)

{
  ulong uVar1;
  Element *pEVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  void *pvVar12;
  Element *pEVar13;
  undefined8 uVar14;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar7 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * -0x2492492492492492;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x249249249249248 < (ulong)(lVar9 * 0x6db6db6db6db6db7)) {
    uVar1 = 0x492492492492492;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x38);
  }
  pEVar13 = (Element *)((long)pvVar5 + lVar7 * 8);
  *pEVar13 = *param_1;
                    /* try { // try from 00a4f6ec to 00a4f6ef has its CatchHandler @ 00a4f804 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pEVar13 + 2);
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_1 + 0xc);
  pEVar2 = pEVar13 + 0xe;
  pvVar11 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x28) = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x20) = uVar14;
  *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x30) = uVar8;
  pvVar12 = pvVar11;
  if (pvVar3 != pvVar11) {
    lVar7 = 0;
    do {
      *(undefined4 *)((long)pEVar13 + lVar7 + -0x38) = *(undefined4 *)((long)pvVar3 + lVar7 + -0x38)
      ;
                    /* try { // try from 00a4f73c to 00a4f73f has its CatchHandler @ 00a4f808 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)((long)pEVar13 + lVar7 + -0x30));
      uVar14 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x10);
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x18);
      lVar9 = lVar7 + -0x38;
      *(undefined8 *)((long)pEVar13 + lVar7 + -8) = *(undefined8 *)((long)pvVar3 + lVar7 + -8);
      *(undefined8 *)((long)pEVar13 + lVar7 + -0x10) = uVar14;
      *(undefined8 *)((long)pEVar13 + lVar7 + -0x18) = uVar8;
      lVar7 = lVar9;
    } while ((void *)((long)pvVar3 + lVar9) != pvVar11);
    pvVar11 = *(void **)this;
    pEVar13 = (Element *)((long)pEVar13 + lVar9);
    pvVar12 = *(void **)(this + 8);
  }
  *(Element **)this = pEVar13;
  *(Element **)(this + 8) = pEVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x38);
  while (pvVar5 = pvVar12, pvVar5 != pvVar11) {
    pvVar12 = (void *)((long)pvVar5 + -0x38);
    if ((*(byte *)((long)pvVar5 + -0x30) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar5 + -0x20));
    }
  }
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


