// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
// Entry Point: 00cc3e18
// Size: 540 bytes
// Signature: void __cdecl __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>(__wrap_iter param_1, __wrap_iter param_2, __less * param_3, difference_type param_4)


/* void std::__ndk1::__sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,
   CryptoPP::Integer>, CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer> >&,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*>
   >(std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*>,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*>,
   std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>,
   CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer> >&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,
   CryptoPP::Integer>*> >::difference_type) */

void std::__ndk1::
     __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
               (__wrap_iter param_1,__wrap_iter param_2,__less *param_3,difference_type param_4)

{
  Integer *this;
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  PolynomialMod2 aPStack_e0 [8];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  PolynomialMod2 aPStack_c0 [8];
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined local_a0;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  uVar6 = (ulong)param_2;
  uVar5 = (ulong)param_1;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (1 < (ulong)param_4) {
    uVar9 = (ulong)param_4 - 2 >> 1;
    iVar4 = CryptoPP::Integer::Compare
                      ((Integer *)(uVar5 + uVar9 * 0x80 + 0x50),(Integer *)(uVar6 - 0x30));
    if (iVar4 < 0) {
      CryptoPP::PolynomialMod2::PolynomialMod2(aPStack_e0,(PolynomialMod2 *)(uVar6 - 0x78));
                    /* try { // try from 00cc3e9c to 00cc3ea3 has its CatchHandler @ 00cc4054 */
      CryptoPP::PolynomialMod2::PolynomialMod2(aPStack_c0,(PolynomialMod2 *)(uVar6 - 0x58));
      local_a0 = *(undefined *)(uVar6 - 0x38);
                    /* try { // try from 00cc3eb4 to 00cc3ebf has its CatchHandler @ 00cc4040 */
      CryptoPP::Integer::Integer((Integer *)local_98,(Integer *)(uVar6 - 0x30));
      lVar7 = uVar6 - 0x80;
      do {
        lVar1 = uVar5 + uVar9 * 0x80;
                    /* try { // try from 00cc3ed0 to 00cc3f27 has its CatchHandler @ 00cc406c */
        CryptoPP::PolynomialMod2::operator=
                  ((PolynomialMod2 *)(lVar7 + 8),(PolynomialMod2 *)(lVar1 + 8));
        CryptoPP::PolynomialMod2::operator=
                  ((PolynomialMod2 *)(lVar7 + 0x28),(PolynomialMod2 *)(lVar1 + 0x28));
        lVar2 = uVar5 + uVar9 * 0x80;
        puVar8 = (undefined *)(lVar2 + 0x48);
        this = (Integer *)(lVar2 + 0x50);
        *(undefined *)(lVar7 + 0x48) = *puVar8;
        CryptoPP::Integer::operator=((Integer *)(lVar7 + 0x50),this);
        if (uVar9 == 0) break;
        if (-1 < (long)(uVar9 - 1)) {
          uVar9 = uVar9 - 1;
        }
        uVar9 = (long)uVar9 >> 1;
        iVar4 = CryptoPP::Integer::Compare
                          ((Integer *)(uVar5 + uVar9 * 0x80 + 0x50),(Integer *)local_98);
        lVar7 = lVar1;
      } while (iVar4 < 0);
                    /* try { // try from 00cc3f30 to 00cc3f5b has its CatchHandler @ 00cc4068 */
      CryptoPP::PolynomialMod2::operator=((PolynomialMod2 *)(lVar1 + 8),aPStack_e0);
      CryptoPP::PolynomialMod2::operator=((PolynomialMod2 *)(lVar1 + 0x28),aPStack_c0);
      *puVar8 = local_a0;
      CryptoPP::Integer::operator=(this,(Integer *)local_98);
      if (uStack_80 <= local_88) {
        local_88 = uStack_80;
      }
      local_98[0] = &PTR__Integer_0100c890;
      for (; local_88 != 0; local_88 = local_88 - 1) {
        *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc3f94 to 00cc3f97 has its CatchHandler @ 00cc403c */
      CryptoPP::UnalignedDeallocate(local_78);
      if (uStack_b0 <= local_b8) {
        local_b8 = uStack_b0;
      }
      for (; local_b8 != 0; local_b8 = local_b8 - 1) {
        *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc3fd0 to 00cc3fd3 has its CatchHandler @ 00cc4038 */
      CryptoPP::UnalignedDeallocate(local_a8);
      if (uStack_d0 <= local_d8) {
        local_d8 = uStack_d0;
      }
      for (; local_d8 != 0; local_d8 = local_d8 - 1) {
        *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc3ffc to 00cc3fff has its CatchHandler @ 00cc4034 */
      CryptoPP::UnalignedDeallocate(local_c8);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


