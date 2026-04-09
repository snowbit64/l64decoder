// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GeneralCascadeMultiplication<CryptoPP::ECPPoint,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
// Entry Point: 00c98bd0
// Size: 884 bytes
// Signature: ECPPoint __thiscall GeneralCascadeMultiplication<CryptoPP::ECPPoint,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>(CryptoPP * this, AbstractGroup * param_1, __wrap_iter param_2, __wrap_iter param_3)


/* CryptoPP::ECPPoint CryptoPP::GeneralCascadeMultiplication<CryptoPP::ECPPoint,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*>
   >(CryptoPP::AbstractGroup<CryptoPP::ECPPoint> const&,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*>,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*>) */

void __thiscall
CryptoPP::
GeneralCascadeMultiplication<CryptoPP::ECPPoint,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
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
  undefined **local_140;
  undefined **local_138;
  ulong local_128;
  ulong uStack_120;
  void *local_118;
  undefined **local_108;
  ulong local_f8;
  ulong uStack_f0;
  void *local_e8;
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
  lVar2 = (long)uVar7 / 0xa0;
  if (lVar2 - 2U == 0) {
    (**(code **)(*(long *)this + 0x60))(this,param_1,param_1 + 0x70,param_1 + 0xa0,param_1 + 0x110);
  }
  else if (lVar2 == 1) {
    (**(code **)(*(long *)this + 0x58))(this,param_1,param_1 + 0x70);
  }
  else {
    Integer::Integer((Integer *)local_a0);
                    /* try { // try from 00c98c80 to 00c98c87 has its CatchHandler @ 00c98f4c */
    Integer::Integer((Integer *)local_d0);
    lVar8 = param_4 + -0xa0;
    _Var5 = (__wrap_iter)param_1;
    if (0xa0 < (long)uVar7) {
      uVar6 = lVar2 - 2U >> 1;
      lVar11 = uVar6 + 1;
      lVar9 = param_1 + uVar6 * 0xa0;
      do {
                    /* try { // try from 00c98ca4 to 00c98cbb has its CatchHandler @ 00c98f58 */
        std::__ndk1::
        __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
                  (_Var5,(__wrap_iter)param_4,(__less *)&local_140,(difference_type)lVar2,
                   (__wrap_iter)lVar9);
        lVar11 = lVar11 + -1;
        lVar9 = lVar9 + -0xa0;
      } while (lVar11 != 0);
                    /* try { // try from 00c98cc8 to 00c98cfb has its CatchHandler @ 00c98f54 */
      FUN_00cc4ce0(param_1,lVar8);
      std::__ndk1::
      __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
                (_Var5,(__wrap_iter)lVar8,(__less *)&local_140,(int)(uVar7 / 0xa0) - 1,_Var5);
    }
    pIVar10 = (Integer *)(param_4 + -0x30);
                    /* try { // try from 00c98d34 to 00c98d6f has its CatchHandler @ 00c98f78 */
    while (uVar6 = Integer::operator!((Integer *)(param_1 + 0x70)), (uVar6 & 1) == 0) {
      Integer::operator=((Integer *)local_d0,pIVar10);
      Integer::Divide(pIVar10,(Integer *)local_a0,(Integer *)local_d0,(Integer *)(param_1 + 0x70));
      pIVar4 = (Integer *)Integer::One();
      iVar3 = Integer::Compare((Integer *)local_a0,pIVar4);
      if (iVar3 == 0) {
                    /* try { // try from 00c98e24 to 00c98e73 has its CatchHandler @ 00c98f78 */
        (**(code **)(*(long *)this + 0x48))(this,param_1,lVar8);
      }
      else {
                    /* try { // try from 00c98d7c to 00c98d8f has its CatchHandler @ 00c98f5c */
        (**(code **)(*(long *)this + 0x58))(&local_140,this,lVar8,local_a0);
                    /* try { // try from 00c98d98 to 00c98da7 has its CatchHandler @ 00c98f64 */
        (**(code **)(*(long *)this + 0x48))(this,param_1,&local_140);
        uVar6 = local_f8;
        if (uStack_f0 <= local_f8) {
          uVar6 = uStack_f0;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_e8 + uVar6 * 4 + -4) = 0;
        }
        local_140 = &PTR__ECPPoint_00fe9fd8;
        local_108 = &PTR__Integer_0100c890;
                    /* try { // try from 00c98dd8 to 00c98ddb has its CatchHandler @ 00c98f60 */
        UnalignedDeallocate(local_e8);
        uVar6 = local_128;
        if (uStack_120 <= local_128) {
          uVar6 = uStack_120;
        }
        local_138 = &PTR__Integer_0100c890;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_118 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c98e14 to 00c98e17 has its CatchHandler @ 00c98f74 */
        UnalignedDeallocate(local_118);
      }
      std::__ndk1::
      __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
                (_Var5,(__wrap_iter)param_4,(__less *)&local_140,(difference_type)lVar2);
      if (0xa0 < (long)uVar7) {
        FUN_00cc4ce0(param_1,lVar8);
        std::__ndk1::
        __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
                  (_Var5,(__wrap_iter)lVar8,(__less *)&local_140,(int)(uVar7 / 0xa0) - 1,_Var5);
      }
    }
                    /* try { // try from 00c98e80 to 00c98e93 has its CatchHandler @ 00c98f54 */
    (**(code **)(*(long *)this + 0x58))(param_1_00,this,lVar8,pIVar10);
    if (uStack_b8 <= local_c0) {
      local_c0 = uStack_b8;
    }
    local_d0[0] = &PTR__Integer_0100c890;
    for (; local_c0 != 0; local_c0 = local_c0 - 1) {
      *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
    }
                    /* try { // try from 00c98ecc to 00c98ecf has its CatchHandler @ 00c98f48 */
    UnalignedDeallocate(local_b0);
    if (uStack_88 <= local_90) {
      local_90 = uStack_88;
    }
    local_a0[0] = &PTR__Integer_0100c890;
    for (; local_90 != 0; local_90 = local_90 - 1) {
      *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
    }
                    /* try { // try from 00c98f08 to 00c98f0b has its CatchHandler @ 00c98f44 */
    UnalignedDeallocate(local_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


