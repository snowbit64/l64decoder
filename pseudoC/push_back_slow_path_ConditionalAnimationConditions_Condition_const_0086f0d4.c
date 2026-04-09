// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<ConditionalAnimationConditions::Condition_const&>
// Entry Point: 0086f0d4
// Size: 412 bytes
// Signature: void __thiscall __push_back_slow_path<ConditionalAnimationConditions::Condition_const&>(vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>> * this, Condition * param_1)


/* void std::__ndk1::vector<ConditionalAnimationConditions::Condition,
   std::__ndk1::allocator<ConditionalAnimationConditions::Condition>
   >::__push_back_slow_path<ConditionalAnimationConditions::Condition
   const&>(ConditionalAnimationConditions::Condition const&) */

void __thiscall
std::__ndk1::
vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
::__push_back_slow_path<ConditionalAnimationConditions::Condition_const&>
          (vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
           *this,Condition *param_1)

{
  ulong uVar1;
  vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
  *pvVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  void **ppvVar6;
  ulong uVar7;
  void **ppvVar8;
  ulong uVar9;
  long lVar10;
  vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
  *this_00;
  void **ppvVar11;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar10 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = *(long *)(this + 0x10) - *(long *)this;
  uVar9 = (long)uVar7 >> 4;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x7fffffffffffffdf < uVar7) {
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
  this_00 = (vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
             *)((long)pvVar4 + lVar10 * 0x20);
                    /* try { // try from 0086f170 to 0086f17b has its CatchHandler @ 0086f270 */
  vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>::
  vector(this_00,(vector *)param_1);
  ppvVar6 = *(void ***)this;
  ppvVar8 = *(void ***)(this + 8);
  pvVar2 = this_00 + 0x20;
  this_00[0x18] =
       *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
         *)(param_1 + 0x18);
  ppvVar11 = ppvVar6;
  if (ppvVar8 != ppvVar6) {
    do {
      *(undefined8 *)(this_00 + -0x20) = 0;
      *(undefined8 *)(this_00 + -0x18) = 0;
      *(undefined8 *)(this_00 + -0x10) = 0;
      ppvVar11 = ppvVar8 + -4;
      *(void **)(this_00 + -0x20) = *ppvVar11;
      *(void **)(this_00 + -0x18) = ppvVar8[-3];
      *(void **)(this_00 + -0x10) = ppvVar8[-2];
      ppvVar8[-3] = (void *)0x0;
      ppvVar8[-2] = (void *)0x0;
      *ppvVar11 = (void *)0x0;
      this_00[-8] = *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
                      *)(ppvVar8 + -1);
      this_00 = this_00 + -0x20;
      ppvVar8 = ppvVar11;
    } while (ppvVar11 != ppvVar6);
    ppvVar6 = *(void ***)(this + 8);
    ppvVar11 = *(void ***)this;
  }
  *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>> **
   )this = this_00;
  *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>> **
   )(this + 8) = pvVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x20);
  while (ppvVar8 = ppvVar6, ppvVar8 != ppvVar11) {
    ppvVar6 = ppvVar8 + -4;
    pvVar4 = *ppvVar6;
    if (pvVar4 != (void *)0x0) {
      ppvVar8[-3] = pvVar4;
      operator_delete(pvVar4);
    }
  }
  if (ppvVar11 != (void **)0x0) {
    operator_delete(ppvVar11);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


