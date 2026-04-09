// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
// Entry Point: 00cc3924
// Size: 660 bytes
// Signature: void __cdecl __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>(__wrap_iter param_1, __wrap_iter param_2, __less * param_3, difference_type param_4, __wrap_iter param_5)


/* void std::__ndk1::__sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,
   CryptoPP::Integer>, CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer> >&,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*>
   >(std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*>,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*>,
   std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>,
   CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer> >&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,
   CryptoPP::Integer>*> >::difference_type,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*>) */

void std::__ndk1::
     __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
               (__wrap_iter param_1,__wrap_iter param_2,__less *param_3,difference_type param_4,
               __wrap_iter param_5)

{
  ulong uVar1;
  long lVar2;
  undefined auVar3 [16];
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined auVar13 [16];
  PolynomialMod2 aPStack_e8 [8];
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  PolynomialMod2 aPStack_c8 [8];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined local_a8;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  uVar7 = (ulong)param_5;
  uVar6 = (ulong)param_4;
  uVar5 = CONCAT44(0,param_1);
  auVar3._8_4_ = param_2;
  auVar3._0_8_ = uVar5;
  auVar3._12_4_ = 0;
  auVar13._8_4_ = param_2;
  auVar13._0_8_ = uVar5;
  auVar13._12_4_ = 0;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (1 < uVar6) {
    uVar9 = uVar6 - 2 >> 1;
    auVar13 = auVar3;
    if ((long)(uVar7 - uVar5) >> 7 <= (long)uVar9) {
      uVar8 = (long)(uVar7 - uVar5) >> 6;
      uVar11 = uVar8 | 1;
      uVar8 = uVar8 + 2;
      uVar1 = uVar5 + uVar11 * 0x80;
      uVar10 = uVar1;
      uVar12 = uVar11;
      if ((long)uVar8 < (long)uVar6) {
        iVar4 = CryptoPP::Integer::Compare((Integer *)(uVar1 + 0x50),(Integer *)(uVar1 + 0xd0));
        uVar10 = uVar1 + 0x80;
        uVar12 = uVar8;
        if (-1 < iVar4) {
          uVar10 = uVar1;
          uVar12 = uVar11;
        }
      }
      auVar13 = CryptoPP::Integer::Compare((Integer *)(uVar10 + 0x50),(Integer *)(uVar7 + 0x50));
      if (-1 < auVar13._0_4_) {
        CryptoPP::PolynomialMod2::PolynomialMod2(aPStack_e8,(PolynomialMod2 *)(uVar7 + 8));
                    /* try { // try from 00cc39f0 to 00cc39f7 has its CatchHandler @ 00cc3bd8 */
        CryptoPP::PolynomialMod2::PolynomialMod2(aPStack_c8,(PolynomialMod2 *)(uVar7 + 0x28));
        local_a8 = *(undefined *)(uVar7 + 0x48);
                    /* try { // try from 00cc3a08 to 00cc3a13 has its CatchHandler @ 00cc3bc4 */
        CryptoPP::Integer::Integer((Integer *)local_a0,(Integer *)(uVar7 + 0x50));
        do {
          uVar8 = uVar10;
                    /* try { // try from 00cc3a20 to 00cc3a4f has its CatchHandler @ 00cc3bf4 */
          CryptoPP::PolynomialMod2::operator=
                    ((PolynomialMod2 *)(uVar7 + 8),(PolynomialMod2 *)(uVar8 + 8));
          CryptoPP::PolynomialMod2::operator=
                    ((PolynomialMod2 *)(uVar7 + 0x28),(PolynomialMod2 *)(uVar8 + 0x28));
          *(undefined *)(uVar7 + 0x48) = *(undefined *)(uVar8 + 0x48);
          CryptoPP::Integer::operator=((Integer *)(uVar7 + 0x50),(Integer *)(uVar8 + 0x50));
          if ((long)uVar9 < (long)uVar12) break;
          uVar11 = uVar12 << 1 | 1;
          uVar7 = uVar12 * 2 + 2;
          uVar1 = uVar5 + uVar11 * 0x80;
          uVar10 = uVar1;
          uVar12 = uVar11;
          if ((long)uVar7 < (long)uVar6) {
                    /* try { // try from 00cc3a80 to 00cc3a83 has its CatchHandler @ 00cc3bf0 */
            iVar4 = CryptoPP::Integer::Compare((Integer *)(uVar1 + 0x50),(Integer *)(uVar1 + 0xd0));
            uVar10 = uVar1 + 0x80;
            uVar12 = uVar7;
            if (-1 < iVar4) {
              uVar10 = uVar1;
              uVar12 = uVar11;
            }
          }
                    /* try { // try from 00cc3aa0 to 00cc3aa7 has its CatchHandler @ 00cc3bf4 */
          iVar4 = CryptoPP::Integer::Compare((Integer *)(uVar10 + 0x50),(Integer *)local_a0);
          uVar7 = uVar8;
        } while (-1 < iVar4);
                    /* try { // try from 00cc3ab0 to 00cc3adb has its CatchHandler @ 00cc3bec */
        CryptoPP::PolynomialMod2::operator=((PolynomialMod2 *)(uVar8 + 8),aPStack_e8);
        CryptoPP::PolynomialMod2::operator=((PolynomialMod2 *)(uVar8 + 0x28),aPStack_c8);
        *(undefined *)(uVar8 + 0x48) = local_a8;
        CryptoPP::Integer::operator=((Integer *)(uVar8 + 0x50),(Integer *)local_a0);
        if (uStack_88 <= local_90) {
          local_90 = uStack_88;
        }
        local_a0[0] = &PTR__Integer_0100c890;
        for (; local_90 != 0; local_90 = local_90 - 1) {
          *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
        }
                    /* try { // try from 00cc3b14 to 00cc3b17 has its CatchHandler @ 00cc3bc0 */
        CryptoPP::UnalignedDeallocate(local_80);
        if (uStack_b8 <= local_c0) {
          local_c0 = uStack_b8;
        }
        for (; local_c0 != 0; local_c0 = local_c0 - 1) {
          *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
        }
                    /* try { // try from 00cc3b50 to 00cc3b53 has its CatchHandler @ 00cc3bbc */
        CryptoPP::UnalignedDeallocate(local_b0);
        if (uStack_d8 <= local_e0) {
          local_e0 = uStack_d8;
        }
        for (; local_e0 != 0; local_e0 = local_e0 - 1) {
          *(undefined4 *)((long)local_d0 + local_e0 * 4 + -4) = 0;
        }
                    /* try { // try from 00cc3b7c to 00cc3b7f has its CatchHandler @ 00cc3bb8 */
        auVar13 = CryptoPP::UnalignedDeallocate(local_d0);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(auVar13._0_8_,auVar13._8_8_);
  }
  return;
}


