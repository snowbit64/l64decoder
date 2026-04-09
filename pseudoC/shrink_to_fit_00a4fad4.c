// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shrink_to_fit
// Entry Point: 00a4fad4
// Size: 380 bytes
// Signature: undefined shrink_to_fit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::vector<AudioSourceSample::Element,
   std::__ndk1::allocator<AudioSourceSample::Element> >::shrink_to_fit() */

void std::__ndk1::
     vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>::
     shrink_to_fit(void)

{
  void *pvVar1;
  long lVar2;
  void **in_x0;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pvVar1 = in_x0[1];
  pvVar8 = *in_x0;
  pvVar3 = (void *)((long)pvVar1 - (long)pvVar8);
  lVar7 = (long)pvVar3 >> 3;
  uVar5 = ((long)in_x0[2] - (long)pvVar8 >> 3) * 0x6db6db6db6db6db7;
  if ((ulong)(lVar7 * 0x6db6db6db6db6db7) <= uVar5 && uVar5 + lVar7 * -0x6db6db6db6db6db7 != 0) {
    if (pvVar3 != (void *)0x0) {
      if (0x492492492492492 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
                    /* try { // try from 00a4fc40 to 00a4fc4b has its CatchHandler @ 00a4fc50 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00a4fb5c to 00a4fb5f has its CatchHandler @ 00a4fc50 */
      pvVar3 = operator_new((ulong)pvVar3);
    }
    pvVar3 = (void *)((long)pvVar3 + lVar7 * 8);
    pvVar6 = pvVar3;
    pvVar9 = pvVar8;
    if (pvVar1 != pvVar8) {
      lVar7 = 0;
      do {
        *(undefined4 *)((long)pvVar3 + lVar7 + -0x38) =
             *(undefined4 *)((long)pvVar1 + lVar7 + -0x38);
                    /* try { // try from 00a4fb94 to 00a4fb97 has its CatchHandler @ 00a4fc58 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)((long)pvVar3 + lVar7 + -0x30));
        uVar12 = *(undefined8 *)((long)pvVar1 + lVar7 + -0x10);
        uVar11 = *(undefined8 *)((long)pvVar1 + lVar7 + -0x18);
        lVar10 = lVar7 + -0x38;
        *(undefined8 *)((long)pvVar3 + lVar7 + -8) = *(undefined8 *)((long)pvVar1 + lVar7 + -8);
        *(undefined8 *)((long)pvVar3 + lVar7 + -0x10) = uVar12;
        *(undefined8 *)((long)pvVar3 + lVar7 + -0x18) = uVar11;
        lVar7 = lVar10;
      } while ((void *)((long)pvVar1 + lVar10) != pvVar8);
      pvVar8 = *in_x0;
      pvVar6 = (void *)((long)pvVar3 + lVar10);
      pvVar9 = in_x0[1];
    }
    *in_x0 = pvVar6;
    in_x0[1] = pvVar3;
    in_x0[2] = pvVar3;
    while (pvVar1 = pvVar9, pvVar1 != pvVar8) {
      pvVar9 = (void *)((long)pvVar1 + -0x38);
      if ((*(byte *)((long)pvVar1 + -0x30) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar1 + -0x20));
      }
    }
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


