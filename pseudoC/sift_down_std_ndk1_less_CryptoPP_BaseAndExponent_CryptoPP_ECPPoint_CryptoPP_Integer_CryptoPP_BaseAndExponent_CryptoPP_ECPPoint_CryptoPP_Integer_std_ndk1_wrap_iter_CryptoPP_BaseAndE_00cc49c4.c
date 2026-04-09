// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
// Entry Point: 00cc49c4
// Size: 716 bytes
// Signature: void __cdecl __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>(__wrap_iter param_1, __wrap_iter param_2, __less * param_3, difference_type param_4, __wrap_iter param_5)


/* void std::__ndk1::__sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,
   CryptoPP::Integer>, CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer> >&,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*>
   >(std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*>,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*>,
   std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>,
   CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer> >&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,
   CryptoPP::Integer>*> >::difference_type,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*>) */

void std::__ndk1::
     __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
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
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined auVar14 [16];
  undefined **local_108 [2];
  ulong local_f8;
  ulong uStack_f0;
  void *local_e8;
  undefined **local_d8 [2];
  ulong local_c8;
  ulong uStack_c0;
  void *local_b8;
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
  auVar14._8_4_ = param_2;
  auVar14._0_8_ = uVar5;
  auVar14._12_4_ = 0;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (1 < uVar6) {
    lVar8 = (long)(uVar7 - uVar5) >> 5;
    uVar9 = uVar6 - 2 >> 1;
    auVar14 = auVar3;
    if (lVar8 * -0x3333333333333333 <= (long)uVar9) {
      uVar1 = lVar8 * -0x6666666666666666 | 1;
      uVar11 = lVar8 * -0x6666666666666666 + 2;
      uVar10 = uVar5 + uVar1 * 0xa0;
      uVar12 = uVar10;
      uVar13 = uVar1;
      if ((long)uVar11 < (long)uVar6) {
        iVar4 = CryptoPP::Integer::Compare
                          ((Integer *)(uVar5 + uVar1 * 0xa0 + 0x70),(Integer *)(uVar10 + 0x110));
        uVar12 = uVar10 + 0xa0;
        uVar13 = uVar11;
        if (-1 < iVar4) {
          uVar12 = uVar10;
          uVar13 = uVar1;
        }
      }
      auVar14 = CryptoPP::Integer::Compare((Integer *)(uVar12 + 0x70),(Integer *)(uVar7 + 0x70));
      if (-1 < auVar14._0_4_) {
        CryptoPP::Integer::Integer((Integer *)local_108,(Integer *)(uVar7 + 8));
                    /* try { // try from 00cc4ab0 to 00cc4ab7 has its CatchHandler @ 00cc4cb0 */
        CryptoPP::Integer::Integer((Integer *)local_d8,(Integer *)(uVar7 + 0x38));
        local_a8 = *(undefined *)(uVar7 + 0x68);
                    /* try { // try from 00cc4ac8 to 00cc4ad3 has its CatchHandler @ 00cc4c9c */
        CryptoPP::Integer::Integer((Integer *)local_a0,(Integer *)(uVar7 + 0x70));
        do {
          uVar11 = uVar12;
                    /* try { // try from 00cc4ae0 to 00cc4b0f has its CatchHandler @ 00cc4ccc */
          CryptoPP::Integer::operator=((Integer *)(uVar7 + 8),(Integer *)(uVar11 + 8));
          CryptoPP::Integer::operator=((Integer *)(uVar7 + 0x38),(Integer *)(uVar11 + 0x38));
          *(undefined *)(uVar7 + 0x68) = *(undefined *)(uVar11 + 0x68);
          CryptoPP::Integer::operator=((Integer *)(uVar7 + 0x70),(Integer *)(uVar11 + 0x70));
          if ((long)uVar9 < (long)uVar13) break;
          uVar1 = uVar13 << 1 | 1;
          uVar7 = uVar13 * 2 + 2;
          uVar10 = uVar5 + uVar1 * 0xa0;
          uVar12 = uVar10;
          uVar13 = uVar1;
          if ((long)uVar7 < (long)uVar6) {
                    /* try { // try from 00cc4b48 to 00cc4b4b has its CatchHandler @ 00cc4cc8 */
            iVar4 = CryptoPP::Integer::Compare
                              ((Integer *)(uVar5 + uVar1 * 0xa0 + 0x70),(Integer *)(uVar10 + 0x110))
            ;
            uVar12 = uVar10 + 0xa0;
            uVar13 = uVar7;
            if (-1 < iVar4) {
              uVar12 = uVar10;
              uVar13 = uVar1;
            }
          }
                    /* try { // try from 00cc4b68 to 00cc4b6f has its CatchHandler @ 00cc4ccc */
          iVar4 = CryptoPP::Integer::Compare((Integer *)(uVar12 + 0x70),(Integer *)local_a0);
          uVar7 = uVar11;
        } while (-1 < iVar4);
                    /* try { // try from 00cc4b78 to 00cc4ba3 has its CatchHandler @ 00cc4cc4 */
        CryptoPP::Integer::operator=((Integer *)(uVar11 + 8),(Integer *)local_108);
        CryptoPP::Integer::operator=((Integer *)(uVar11 + 0x38),(Integer *)local_d8);
        *(undefined *)(uVar11 + 0x68) = local_a8;
        CryptoPP::Integer::operator=((Integer *)(uVar11 + 0x70),(Integer *)local_a0);
        if (uStack_88 <= local_90) {
          local_90 = uStack_88;
        }
        local_a0[0] = &PTR__Integer_0100c890;
        for (; local_90 != 0; local_90 = local_90 - 1) {
          *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
        }
                    /* try { // try from 00cc4bdc to 00cc4bdf has its CatchHandler @ 00cc4c98 */
        CryptoPP::UnalignedDeallocate(local_80);
        local_d8[0] = &PTR__Integer_0100c890;
        if (uStack_c0 <= local_c8) {
          local_c8 = uStack_c0;
        }
        for (; local_c8 != 0; local_c8 = local_c8 - 1) {
          *(undefined4 *)((long)local_b8 + local_c8 * 4 + -4) = 0;
        }
                    /* try { // try from 00cc4c20 to 00cc4c23 has its CatchHandler @ 00cc4c94 */
        CryptoPP::UnalignedDeallocate(local_b8);
        local_108[0] = &PTR__Integer_0100c890;
        if (uStack_f0 <= local_f8) {
          local_f8 = uStack_f0;
        }
        for (; local_f8 != 0; local_f8 = local_f8 - 1) {
          *(undefined4 *)((long)local_e8 + local_f8 * 4 + -4) = 0;
        }
                    /* try { // try from 00cc4c54 to 00cc4c57 has its CatchHandler @ 00cc4c90 */
        auVar14 = CryptoPP::UnalignedDeallocate(local_e8);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(auVar14._0_8_,auVar14._8_8_);
  }
  return;
}


