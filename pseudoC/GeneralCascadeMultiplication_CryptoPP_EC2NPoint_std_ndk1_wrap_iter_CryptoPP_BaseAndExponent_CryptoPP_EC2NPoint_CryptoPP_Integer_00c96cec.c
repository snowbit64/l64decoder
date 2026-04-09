// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GeneralCascadeMultiplication<CryptoPP::EC2NPoint,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
// Entry Point: 00c96cec
// Size: 792 bytes
// Signature: EC2NPoint __thiscall GeneralCascadeMultiplication<CryptoPP::EC2NPoint,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>(CryptoPP * this, AbstractGroup * param_1, __wrap_iter param_2, __wrap_iter param_3)


/* CryptoPP::EC2NPoint CryptoPP::GeneralCascadeMultiplication<CryptoPP::EC2NPoint,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*>
   >(CryptoPP::AbstractGroup<CryptoPP::EC2NPoint> const&,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*>,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*>) */

void __thiscall
CryptoPP::
GeneralCascadeMultiplication<CryptoPP::EC2NPoint,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
          (undefined8 param_1_00,CryptoPP *this,long param_1,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Integer *pIVar4;
  __wrap_iter _Var5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  Integer *pIVar11;
  long lVar12;
  undefined **local_120 [2];
  ulong local_110;
  ulong uStack_108;
  void *local_100;
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
  
  lVar1 = tpidr_el0;
  uVar7 = param_4 - param_1;
  lVar8 = (long)uVar7 >> 7;
  local_70 = *(long *)(lVar1 + 0x28);
  if (lVar8 - 2U == 0) {
    (**(code **)(*(long *)this + 0x60))(this,param_1,param_1 + 0x50,param_1 + 0x80,param_1 + 0xd0);
  }
  else if (lVar8 == 1) {
    (**(code **)(*(long *)this + 0x58))(this,param_1,param_1 + 0x50);
  }
  else {
    Integer::Integer((Integer *)local_a0);
                    /* try { // try from 00c96d8c to 00c96d93 has its CatchHandler @ 00c9700c */
    Integer::Integer((Integer *)local_d0);
    lVar9 = param_4 + -0x80;
    _Var5 = (__wrap_iter)param_1;
    iVar2 = (int)(uVar7 >> 7);
    if (0x80 < (long)uVar7) {
      uVar6 = lVar8 - 2U >> 1;
      lVar12 = uVar6 + 1;
      lVar10 = param_1 + uVar6 * 0x80;
      do {
                    /* try { // try from 00c96db0 to 00c96dc7 has its CatchHandler @ 00c97018 */
        std::__ndk1::
        __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
                  (_Var5,(__wrap_iter)param_4,(__less *)local_120,(difference_type)lVar8,
                   (__wrap_iter)lVar10);
        lVar12 = lVar12 + -1;
        lVar10 = lVar10 + -0x80;
      } while (lVar12 != 0);
                    /* try { // try from 00c96dd4 to 00c96df7 has its CatchHandler @ 00c97014 */
      FUN_00cc3c08(param_1,lVar9);
      std::__ndk1::
      __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
                (_Var5,(__wrap_iter)lVar9,(__less *)local_120,iVar2 - 1,_Var5);
    }
    pIVar11 = (Integer *)(param_4 + -0x30);
                    /* try { // try from 00c96e10 to 00c96e4b has its CatchHandler @ 00c97038 */
    while (uVar6 = Integer::operator!((Integer *)(param_1 + 0x50)), (uVar6 & 1) == 0) {
      Integer::operator=((Integer *)local_d0,pIVar11);
      Integer::Divide(pIVar11,(Integer *)local_a0,(Integer *)local_d0,(Integer *)(param_1 + 0x50));
      pIVar4 = (Integer *)Integer::One();
      iVar3 = Integer::Compare((Integer *)local_a0,pIVar4);
      if (iVar3 == 0) {
                    /* try { // try from 00c96eec to 00c96f3b has its CatchHandler @ 00c97038 */
        (**(code **)(*(long *)this + 0x48))(this,param_1,lVar9);
      }
      else {
                    /* try { // try from 00c96e58 to 00c96e6b has its CatchHandler @ 00c9701c */
        (**(code **)(*(long *)this + 0x58))(local_120,this,lVar9,local_a0);
                    /* try { // try from 00c96e74 to 00c96e83 has its CatchHandler @ 00c97024 */
        (**(code **)(*(long *)this + 0x48))(this,param_1,local_120);
        uVar6 = local_f0;
        if (uStack_e8 <= local_f0) {
          uVar6 = uStack_e8;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_e0 + uVar6 * 4 + -4) = 0;
        }
        local_120[0] = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00c96eb0 to 00c96eb3 has its CatchHandler @ 00c97020 */
        UnalignedDeallocate(local_e0);
        uVar6 = local_110;
        if (uStack_108 <= local_110) {
          uVar6 = uStack_108;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_100 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c96edc to 00c96edf has its CatchHandler @ 00c97034 */
        UnalignedDeallocate(local_100);
      }
      std::__ndk1::
      __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
                (_Var5,(__wrap_iter)param_4,(__less *)local_120,(difference_type)lVar8);
      if (0x80 < (long)uVar7) {
        FUN_00cc3c08(param_1,lVar9);
        std::__ndk1::
        __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
                  (_Var5,(__wrap_iter)lVar9,(__less *)local_120,iVar2 - 1,_Var5);
      }
    }
                    /* try { // try from 00c96f48 to 00c96f5b has its CatchHandler @ 00c97014 */
    (**(code **)(*(long *)this + 0x58))(param_1_00,this,lVar9,pIVar11);
    if (uStack_b8 <= local_c0) {
      local_c0 = uStack_b8;
    }
    local_d0[0] = &PTR__Integer_0100c890;
    for (; local_c0 != 0; local_c0 = local_c0 - 1) {
      *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
    }
                    /* try { // try from 00c96f94 to 00c96f97 has its CatchHandler @ 00c97008 */
    UnalignedDeallocate(local_b0);
    local_a0[0] = &PTR__Integer_0100c890;
    if (uStack_88 <= local_90) {
      local_90 = uStack_88;
    }
    for (; local_90 != 0; local_90 = local_90 - 1) {
      *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
    }
                    /* try { // try from 00c96fc8 to 00c96fcb has its CatchHandler @ 00c97004 */
    UnalignedDeallocate(local_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


