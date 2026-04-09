// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadXMLFile
// Entry Point: 0086e83c
// Size: 496 bytes
// Signature: undefined __thiscall loadXMLFile(ConditionalAnimationConditions * this, DomXMLFile * param_1, char * param_2, ConditionalAnimationShared * param_3)


/* ConditionalAnimationConditions::loadXMLFile(DomXMLFile&, char const*, ConditionalAnimationShared
   const&) */

void __thiscall
ConditionalAnimationConditions::loadXMLFile
          (ConditionalAnimationConditions *this,DomXMLFile *param_1,char *param_2,
          ConditionalAnimationShared *param_3)

{
  vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
  **ppvVar1;
  long lVar2;
  void **ppvVar3;
  void **ppvVar4;
  ulong uVar5;
  vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
  *this_00;
  void *pvVar6;
  void **ppvVar7;
  void **local_108;
  void **local_100;
  undefined8 local_f8;
  char acStack_f0 [128];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  FUN_0086e3e0(acStack_f0,param_1,param_2,"%s.conditions.conditionGroup(%u)",param_2,0);
  uVar5 = (**(code **)(*(long *)param_1 + 0x20))(param_1,acStack_f0,0);
  while ((uVar5 & 1) != 0) {
    local_108 = (void **)0x0;
    local_100 = (void **)0x0;
    local_f8 = 0;
                    /* try { // try from 0086e908 to 0086e91b has its CatchHandler @ 0086ea38 */
    Group::loadXMLFile((Group *)&local_108,param_1,acStack_f0,param_3);
    ppvVar1 = *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
                ***)(this + 8);
    if (ppvVar1 ==
        *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
          ***)(this + 0x10)) {
                    /* try { // try from 0086e99c to 0086e9a7 has its CatchHandler @ 0086ea38 */
      std::__ndk1::
      vector<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>>
      ::__push_back_slow_path<ConditionalAnimationConditions::Group_const&>
                ((vector<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>>
                  *)this,(Group *)&local_108);
    }
    else {
      *ppvVar1 = (vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
                  *)0x0;
      ppvVar1[1] = (vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
                    *)0x0;
      ppvVar1[2] = (vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
                    *)0x0;
      uVar5 = (long)local_100 - (long)local_108;
      if (uVar5 != 0) {
        if ((long)uVar5 < 0) {
                    /* try { // try from 0086ea20 to 0086ea27 has its CatchHandler @ 0086ea30 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
                    /* try { // try from 0086e940 to 0086e947 has its CatchHandler @ 0086ea2c */
        this_00 = (vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
                   *)operator_new(uVar5);
        ppvVar7 = local_100;
        *ppvVar1 = this_00;
        ppvVar1[1] = this_00;
        ppvVar1[2] = this_00 + ((long)uVar5 >> 5) * 0x20;
        for (ppvVar3 = local_108; ppvVar3 != ppvVar7; ppvVar3 = ppvVar3 + 4) {
                    /* try { // try from 0086e968 to 0086e973 has its CatchHandler @ 0086ea40 */
          std::__ndk1::
          vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
          ::vector(this_00,(vector *)ppvVar3);
          this_00[0x18] =
               *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
                 *)(ppvVar3 + 3);
          this_00 = this_00 + 0x20;
        }
        ppvVar1[1] = this_00;
      }
      *(vector<ConditionalAnimationComparison,std::__ndk1::allocator<ConditionalAnimationComparison>>
        ***)(this + 8) = ppvVar1 + 3;
    }
    ppvVar3 = local_108;
    ppvVar7 = local_100;
    if (local_108 != (void **)0x0) {
      while (ppvVar4 = ppvVar7, ppvVar4 != ppvVar3) {
        ppvVar7 = ppvVar4 + -4;
        pvVar6 = *ppvVar7;
        if (pvVar6 != (void *)0x0) {
          ppvVar4[-3] = pvVar6;
          operator_delete(pvVar6);
        }
      }
      local_100 = ppvVar3;
      operator_delete(local_108);
    }
    FUN_0086e3e0(acStack_f0);
    uVar5 = (**(code **)(*(long *)param_1 + 0x20))(param_1,acStack_f0,0);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


