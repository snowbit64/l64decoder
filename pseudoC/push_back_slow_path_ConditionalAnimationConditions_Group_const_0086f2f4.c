// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<ConditionalAnimationConditions::Group_const&>
// Entry Point: 0086f2f4
// Size: 492 bytes
// Signature: void __thiscall __push_back_slow_path<ConditionalAnimationConditions::Group_const&>(vector<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>> * this, Group * param_1)


/* void std::__ndk1::vector<ConditionalAnimationConditions::Group,
   std::__ndk1::allocator<ConditionalAnimationConditions::Group>
   >::__push_back_slow_path<ConditionalAnimationConditions::Group
   const&>(ConditionalAnimationConditions::Group const&) */

void __thiscall
std::__ndk1::
vector<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>>
::__push_back_slow_path<ConditionalAnimationConditions::Group_const&>
          (vector<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>>
           *this,Group *param_1)

{
  ulong uVar1;
  vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
  *pvVar2;
  long lVar3;
  void *pvVar4;
  void **ppvVar5;
  long lVar6;
  long lVar7;
  void **ppvVar8;
  void **ppvVar9;
  long lVar10;
  ulong uVar11;
  void **ppvVar12;
  vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
  *this_00;
  void **ppvVar13;
  void **ppvVar14;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar11 = lVar10 * 0x5555555555555556;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
    uVar1 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x18);
  }
  this_00 = (vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
             *)((long)pvVar4 + lVar7 * 8);
                    /* try { // try from 0086f3b4 to 0086f3bf has its CatchHandler @ 0086f4e0 */
  vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
  ::vector(this_00,(vector *)param_1);
  ppvVar12 = *(void ***)this;
  pvVar2 = this_00 + 0x18;
  ppvVar8 = *(void ***)(this + 8);
  ppvVar14 = ppvVar12;
  if (*(void ***)(this + 8) != ppvVar12) {
    do {
      *(undefined8 *)(this_00 + -0x18) = 0;
      *(undefined8 *)(this_00 + -0x10) = 0;
      *(undefined8 *)(this_00 + -8) = 0;
      ppvVar14 = ppvVar8 + -3;
      *(void **)(this_00 + -0x18) = *ppvVar14;
      *(void **)(this_00 + -0x10) = ppvVar8[-2];
      *(void **)(this_00 + -8) = ppvVar8[-1];
      *ppvVar14 = (void *)0x0;
      ppvVar8[-2] = (void *)0x0;
      ppvVar8[-1] = (void *)0x0;
      this_00 = this_00 + -0x18;
      ppvVar8 = ppvVar14;
    } while (ppvVar14 != ppvVar12);
    ppvVar12 = *(void ***)this;
    ppvVar14 = *(void ***)(this + 8);
  }
  *(vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
    **)this = this_00;
  *(vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
    **)(this + 8) = pvVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x18);
  while (ppvVar8 = ppvVar14, ppvVar8 != ppvVar12) {
    ppvVar14 = ppvVar8 + -3;
    ppvVar13 = (void **)*ppvVar14;
    if (ppvVar13 != (void **)0x0) {
      ppvVar9 = (void **)ppvVar8[-2];
      ppvVar5 = ppvVar13;
      if (ppvVar9 != ppvVar13) {
        do {
          ppvVar5 = ppvVar9 + -4;
          pvVar4 = *ppvVar5;
          if (pvVar4 != (void *)0x0) {
            ppvVar9[-3] = pvVar4;
            operator_delete(pvVar4);
          }
          ppvVar9 = ppvVar5;
        } while (ppvVar5 != ppvVar13);
        ppvVar5 = (void **)*ppvVar14;
      }
      ppvVar8[-2] = ppvVar13;
      operator_delete(ppvVar5);
    }
  }
  if (ppvVar12 != (void **)0x0) {
    operator_delete(ppvVar12);
  }
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


