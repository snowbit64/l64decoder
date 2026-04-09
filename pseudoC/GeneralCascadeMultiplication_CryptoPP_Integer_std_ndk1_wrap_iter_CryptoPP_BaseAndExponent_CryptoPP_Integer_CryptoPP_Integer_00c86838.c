// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GeneralCascadeMultiplication<CryptoPP::Integer,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
// Entry Point: 00c86838
// Size: 800 bytes
// Signature: Integer __thiscall GeneralCascadeMultiplication<CryptoPP::Integer,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>(CryptoPP * this, AbstractGroup * param_1, __wrap_iter param_2, __wrap_iter param_3)


/* CryptoPP::Integer CryptoPP::GeneralCascadeMultiplication<CryptoPP::Integer,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>*>
   >(CryptoPP::AbstractGroup<CryptoPP::Integer> const&,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>*>,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>*>) */

void __thiscall
CryptoPP::
GeneralCascadeMultiplication<CryptoPP::Integer,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
          (undefined8 param_1_00,CryptoPP *this,long param_1,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  Integer *pIVar4;
  __wrap_iter _Var5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  Integer *pIVar10;
  long lVar11;
  undefined **local_100 [2];
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined **local_d0 [2];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  uVar7 = param_4 - param_1;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  lVar2 = (long)uVar7 / 0x60;
  if (lVar2 - 2U == 0) {
    (**(code **)(*(long *)this + 0x60))(this,param_1,param_1 + 0x30,param_1 + 0x60,param_1 + 0x90);
  }
  else if (lVar2 == 1) {
    (**(code **)(*(long *)this + 0x58))(this,param_1,param_1 + 0x30);
  }
  else {
    Integer::Integer((Integer *)local_a0);
                    /* try { // try from 00c868ec to 00c868f3 has its CatchHandler @ 00c86b60 */
    Integer::Integer((Integer *)local_d0);
    lVar8 = param_4 + -0x60;
    _Var5 = (__wrap_iter)param_1;
    if (0x60 < (long)uVar7) {
      uVar6 = lVar2 - 2U >> 1;
      lVar11 = uVar6 + 1;
      lVar9 = param_1 + uVar6 * 0x60;
      do {
                    /* try { // try from 00c86910 to 00c86927 has its CatchHandler @ 00c86b6c */
        std::__ndk1::
        __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
                  (_Var5,(__wrap_iter)param_4,(__less *)local_100,(difference_type)lVar2,
                   (__wrap_iter)lVar9);
        lVar11 = lVar11 + -1;
        lVar9 = lVar9 + -0x60;
      } while (lVar11 != 0);
                    /* try { // try from 00c86934 to 00c86967 has its CatchHandler @ 00c86b68 */
      FUN_00cbfe08(param_1,lVar8);
      std::__ndk1::
      __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
                (_Var5,(__wrap_iter)lVar8,(__less *)local_100,(int)(uVar7 / 0x60) - 1,_Var5);
    }
    pIVar10 = (Integer *)(param_4 + -0x30);
                    /* try { // try from 00c86990 to 00c869cb has its CatchHandler @ 00c86b88 */
    while (uVar6 = Integer::operator!((Integer *)(param_1 + 0x30)), (uVar6 & 1) == 0) {
      Integer::operator=((Integer *)local_d0,pIVar10);
      Integer::Divide(pIVar10,(Integer *)local_a0,(Integer *)local_d0,(Integer *)(param_1 + 0x30));
      pIVar4 = (Integer *)Integer::One();
      iVar3 = Integer::Compare((Integer *)local_a0,pIVar4);
      if (iVar3 == 0) {
                    /* try { // try from 00c86a40 to 00c86a8f has its CatchHandler @ 00c86b88 */
        (**(code **)(*(long *)this + 0x48))(this,param_1,lVar8);
      }
      else {
                    /* try { // try from 00c869d8 to 00c869eb has its CatchHandler @ 00c86b70 */
        (**(code **)(*(long *)this + 0x58))(local_100,this,lVar8,local_a0);
                    /* try { // try from 00c869f4 to 00c86a03 has its CatchHandler @ 00c86b78 */
        (**(code **)(*(long *)this + 0x48))(this,param_1,local_100);
        uVar6 = local_f0;
        if (uStack_e8 <= local_f0) {
          uVar6 = uStack_e8;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_e0 + uVar6 * 4 + -4) = 0;
        }
        local_100[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00c86a30 to 00c86a33 has its CatchHandler @ 00c86b74 */
        UnalignedDeallocate(local_e0);
      }
      std::__ndk1::
      __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
                (_Var5,(__wrap_iter)param_4,(__less *)local_100,(difference_type)lVar2);
      if (0x60 < (long)uVar7) {
        FUN_00cbfe08(param_1,lVar8);
        std::__ndk1::
        __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
                  (_Var5,(__wrap_iter)lVar8,(__less *)local_100,(int)(uVar7 / 0x60) - 1,_Var5);
      }
    }
                    /* try { // try from 00c86a9c to 00c86aaf has its CatchHandler @ 00c86b68 */
    (**(code **)(*(long *)this + 0x58))(param_1_00,this,lVar8,pIVar10);
    if (uStack_b8 <= local_c0) {
      local_c0 = uStack_b8;
    }
    local_d0[0] = &PTR__Integer_0100c890;
    for (; local_c0 != 0; local_c0 = local_c0 - 1) {
      *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
    }
                    /* try { // try from 00c86ae8 to 00c86aeb has its CatchHandler @ 00c86b5c */
    UnalignedDeallocate(local_b0);
    local_a0[0] = &PTR__Integer_0100c890;
    if (uStack_88 <= local_90) {
      local_90 = uStack_88;
    }
    for (; local_90 != 0; local_90 = local_90 - 1) {
      *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
    }
                    /* try { // try from 00c86b1c to 00c86b1f has its CatchHandler @ 00c86b58 */
    UnalignedDeallocate(local_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


