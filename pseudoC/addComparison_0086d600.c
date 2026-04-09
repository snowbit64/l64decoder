// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addComparison
// Entry Point: 0086d600
// Size: 340 bytes
// Signature: undefined __thiscall addComparison(ConditionalAnimationComparisons * this, uint param_1, COMPARE_OPERATION param_2, ConditionalAnimationValue * param_3)


/* ConditionalAnimationComparisons::addComparison(unsigned int,
   ConditionalAnimationComparison::COMPARE_OPERATION, ConditionalAnimationValue const&) */

void __thiscall
ConditionalAnimationComparisons::addComparison
          (ConditionalAnimationComparisons *this,uint param_1,COMPARE_OPERATION param_2,
          ConditionalAnimationValue *param_3)

{
  ulong uVar1;
  uint *__src;
  uint *puVar2;
  void *__dest;
  uint *puVar3;
  ulong __n;
  undefined8 uVar4;
  
  __src = *(uint **)this;
  puVar2 = *(uint **)(this + 8);
  uVar4 = *(undefined8 *)param_3;
  puVar3 = __src;
  if (__src == puVar2) {
LAB_0086d660:
    if (puVar3 != puVar2) {
      return;
    }
  }
  else {
    do {
      if (*puVar3 == param_1 && puVar3[1] == param_2) goto LAB_0086d660;
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar2);
  }
  if (puVar2 == *(uint **)(this + 0x10)) {
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 3)) {
      uVar1 = (long)__n >> 3;
    }
    if (0x7fffffffffffffef < __n) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 * 0x10);
    puVar3 = (uint *)((long)__dest + ((long)__n >> 4) * 0x10);
    *puVar3 = param_1;
    puVar3[1] = param_2;
    *(undefined8 *)(puVar3 + 2) = uVar4;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(uint **)(this + 8) = puVar3 + 4;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (uint *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    *(undefined8 *)(puVar2 + 2) = uVar4;
    *(uint **)(this + 8) = puVar2 + 4;
  }
  return;
}


