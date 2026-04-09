// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00a4f3bc
// Size: 448 bytes
// Signature: undefined __thiscall reserve(vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>> * this, ulong param_1)


/* std::__ndk1::vector<AudioSourceSample::Element,
   std::__ndk1::allocator<AudioSourceSample::Element> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>::
reserve(vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>> *this,
       ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  pvVar8 = *(void **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)pvVar8 >> 3) * 0x6db6db6db6db6db7) < param_1) {
    lVar11 = *(long *)(this + 8);
    if (0x492492492492492 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(param_1 * 0x38);
    lVar3 = (lVar11 - (long)pvVar8) / 0x38;
    pvVar10 = (void *)((long)pvVar5 + lVar3 * 0x38);
    pvVar7 = pvVar10;
    pvVar9 = pvVar8;
    if (lVar11 - (long)pvVar8 != 0) {
      lVar12 = 0;
      do {
        lVar1 = lVar11 + lVar12;
        lVar4 = lVar12 + lVar3 * 0x38;
        *(undefined4 *)((long)pvVar5 + lVar4 + -0x38) = *(undefined4 *)(lVar1 + -0x38);
                    /* try { // try from 00a4f4ac to 00a4f4af has its CatchHandler @ 00a4f57c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)((long)pvVar5 + lVar4 + -0x30));
        uVar14 = *(undefined8 *)(lVar1 + -0x10);
        uVar13 = *(undefined8 *)(lVar1 + -0x18);
        lVar12 = lVar12 + -0x38;
        *(undefined8 *)((long)pvVar5 + lVar4 + -8) = *(undefined8 *)(lVar1 + -8);
        *(undefined8 *)((long)pvVar5 + lVar4 + -0x10) = uVar14;
        *(undefined8 *)((long)pvVar5 + lVar4 + -0x18) = uVar13;
      } while ((void *)(lVar11 + lVar12) != pvVar8);
      pvVar8 = *(void **)this;
      pvVar7 = (void *)((long)pvVar5 + lVar12 + lVar3 * 0x38);
      pvVar9 = *(void **)(this + 8);
    }
    *(void **)this = pvVar7;
    *(void **)(this + 8) = pvVar10;
    *(void **)(this + 0x10) = (void *)((long)pvVar5 + param_1 * 0x38);
    while (pvVar7 = pvVar9, pvVar7 != pvVar8) {
      pvVar9 = (void *)((long)pvVar7 + -0x38);
      if ((*(byte *)((long)pvVar7 + -0x30) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar7 + -0x20));
      }
    }
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


