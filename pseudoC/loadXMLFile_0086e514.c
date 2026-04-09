// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadXMLFile
// Entry Point: 0086e514
// Size: 432 bytes
// Signature: undefined __thiscall loadXMLFile(Group * this, DomXMLFile * param_1, char * param_2, ConditionalAnimationShared * param_3)


/* ConditionalAnimationConditions::Group::loadXMLFile(DomXMLFile&, char const*,
   ConditionalAnimationShared const&) */

void __thiscall
ConditionalAnimationConditions::Group::loadXMLFile
          (Group *this,DomXMLFile *param_1,char *param_2,ConditionalAnimationShared *param_3)

{
  void **ppvVar1;
  long lVar2;
  ulong uVar3;
  void *__dest;
  size_t __n;
  void *local_110;
  void *local_108;
  undefined local_f8;
  char acStack_f0 [128];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  FUN_0086e3e0(acStack_f0,param_1,param_2,"%s.condition(%u)",param_2,0);
  uVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1,acStack_f0,0);
  while ((uVar3 & 1) != 0) {
    ConditionalAnimationComparisons::ConditionalAnimationComparisons
              ((ConditionalAnimationComparisons *)&local_110);
                    /* try { // try from 0086e5d0 to 0086e5eb has its CatchHandler @ 0086e6e4 */
    Condition::loadXMLFile((Condition *)&local_110,param_1,acStack_f0,param_3);
    uVar3 = ConditionalAnimationComparisons::hasComparisons();
    if ((uVar3 & 1) != 0) {
      ppvVar1 = *(void ***)(this + 8);
      if (ppvVar1 == *(void ***)(this + 0x10)) {
                    /* try { // try from 0086e668 to 0086e673 has its CatchHandler @ 0086e6e4 */
        std::__ndk1::
        vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
        ::__push_back_slow_path<ConditionalAnimationConditions::Condition_const&>
                  ((vector<ConditionalAnimationConditions::Condition,std::__ndk1::allocator<ConditionalAnimationConditions::Condition>>
                    *)this,(Condition *)&local_110);
      }
      else {
        *ppvVar1 = (void *)0x0;
        ppvVar1[1] = (void *)0x0;
        ppvVar1[2] = (void *)0x0;
        uVar3 = (long)local_108 - (long)local_110;
        if (uVar3 != 0) {
          if ((long)uVar3 < 0) {
                    /* try { // try from 0086e6b8 to 0086e6bf has its CatchHandler @ 0086e6c4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
                    /* try { // try from 0086e614 to 0086e61b has its CatchHandler @ 0086e6c8 */
          __dest = operator_new(uVar3);
          *ppvVar1 = __dest;
          ppvVar1[1] = __dest;
          ppvVar1[2] = (void *)((long)__dest + ((long)uVar3 >> 4) * 0x10);
          __n = (long)local_108 - (long)local_110;
          if (0 < (long)__n) {
            memcpy(__dest,local_110,__n);
            __dest = (void *)((long)__dest + __n);
          }
          ppvVar1[1] = __dest;
        }
        *(undefined *)(ppvVar1 + 3) = local_f8;
        *(void ***)(this + 8) = ppvVar1 + 4;
      }
    }
    if (local_110 != (void *)0x0) {
      local_108 = local_110;
      operator_delete(local_110);
    }
    FUN_0086e3e0(acStack_f0);
    uVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1,acStack_f0,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


