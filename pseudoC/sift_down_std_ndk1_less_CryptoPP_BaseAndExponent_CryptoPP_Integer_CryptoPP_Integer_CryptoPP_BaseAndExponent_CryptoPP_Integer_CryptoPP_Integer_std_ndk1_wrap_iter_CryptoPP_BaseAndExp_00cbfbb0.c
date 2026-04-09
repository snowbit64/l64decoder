// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
// Entry Point: 00cbfbb0
// Size: 544 bytes
// Signature: void __cdecl __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>(__wrap_iter param_1, __wrap_iter param_2, __less * param_3, difference_type param_4, __wrap_iter param_5)


/* void std::__ndk1::__sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,
   CryptoPP::Integer>, CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer> >&,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>*>
   >(std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>*>,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>*>,
   std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>,
   CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer> >&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,
   CryptoPP::Integer>*> >::difference_type,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>*>) */

void std::__ndk1::
     __sift_down<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
               (__wrap_iter param_1,__wrap_iter param_2,__less *param_3,difference_type param_4,
               __wrap_iter param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined auVar4 [16];
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  Integer *pIVar11;
  Integer *pIVar12;
  Integer *pIVar13;
  undefined auVar14 [16];
  undefined **local_c8 [2];
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  pIVar12 = (Integer *)(ulong)param_5;
  uVar7 = (ulong)param_4;
  uVar6 = CONCAT44(0,param_1);
  auVar4._8_4_ = param_2;
  auVar4._0_8_ = uVar6;
  auVar4._12_4_ = 0;
  auVar14._8_4_ = param_2;
  auVar14._0_8_ = uVar6;
  auVar14._12_4_ = 0;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (1 < uVar7) {
    lVar8 = (long)((long)pIVar12 - uVar6) >> 5;
    uVar9 = uVar7 - 2 >> 1;
    auVar14 = auVar4;
    if (lVar8 * -0x5555555555555555 <= (long)uVar9) {
      uVar2 = lVar8 * 0x5555555555555556 | 1;
      uVar1 = lVar8 * 0x5555555555555556 + 2;
      pIVar11 = (Integer *)(uVar6 + uVar2 * 0x60);
      uVar10 = uVar2;
      pIVar13 = pIVar11;
      if ((long)uVar1 < (long)uVar7) {
        iVar5 = CryptoPP::Integer::Compare((Integer *)(uVar6 + uVar2 * 0x60 + 0x30),pIVar11 + 0x90);
        uVar10 = uVar1;
        pIVar13 = pIVar11 + 0x60;
        if (-1 < iVar5) {
          uVar10 = uVar2;
          pIVar13 = pIVar11;
        }
      }
      auVar14 = CryptoPP::Integer::Compare(pIVar13 + 0x30,pIVar12 + 0x30);
      if (-1 < auVar14._0_4_) {
        CryptoPP::Integer::Integer((Integer *)local_c8,pIVar12);
                    /* try { // try from 00cbfc80 to 00cbfc8b has its CatchHandler @ 00cbfdd8 */
        CryptoPP::Integer::Integer((Integer *)local_98,pIVar12 + 0x30);
        do {
          pIVar11 = pIVar13;
                    /* try { // try from 00cbfc94 to 00cbfcaf has its CatchHandler @ 00cbfdf4 */
          CryptoPP::Integer::operator=(pIVar12,pIVar11);
          CryptoPP::Integer::operator=(pIVar12 + 0x30,pIVar11 + 0x30);
          if ((long)uVar9 < (long)uVar10) break;
          uVar2 = uVar10 << 1 | 1;
          uVar1 = uVar10 * 2 + 2;
          pIVar12 = (Integer *)(uVar6 + uVar2 * 0x60);
          uVar10 = uVar2;
          pIVar13 = pIVar12;
          if ((long)uVar1 < (long)uVar7) {
                    /* try { // try from 00cbfce0 to 00cbfce3 has its CatchHandler @ 00cbfdf0 */
            iVar5 = CryptoPP::Integer::Compare
                              ((Integer *)(uVar6 + uVar2 * 0x60 + 0x30),pIVar12 + 0x90);
            uVar10 = uVar1;
            pIVar13 = pIVar12 + 0x60;
            if (-1 < iVar5) {
              uVar10 = uVar2;
              pIVar13 = pIVar12;
            }
          }
                    /* try { // try from 00cbfd00 to 00cbfd07 has its CatchHandler @ 00cbfdf4 */
          iVar5 = CryptoPP::Integer::Compare(pIVar13 + 0x30,(Integer *)local_98);
          pIVar12 = pIVar11;
        } while (-1 < iVar5);
                    /* try { // try from 00cbfd10 to 00cbfd27 has its CatchHandler @ 00cbfdec */
        CryptoPP::Integer::operator=(pIVar11,(Integer *)local_c8);
        CryptoPP::Integer::operator=(pIVar11 + 0x30,(Integer *)local_98);
        if (uStack_80 <= local_88) {
          local_88 = uStack_80;
        }
        local_98[0] = &PTR__Integer_0100c890;
        for (; local_88 != 0; local_88 = local_88 - 1) {
          *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
        }
                    /* try { // try from 00cbfd64 to 00cbfd67 has its CatchHandler @ 00cbfdd4 */
        CryptoPP::UnalignedDeallocate(local_78);
        local_c8[0] = &PTR__Integer_0100c890;
        if (uStack_b0 <= local_b8) {
          local_b8 = uStack_b0;
        }
        for (; local_b8 != 0; local_b8 = local_b8 - 1) {
          *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
        }
                    /* try { // try from 00cbfd98 to 00cbfd9b has its CatchHandler @ 00cbfdd0 */
        auVar14 = CryptoPP::UnalignedDeallocate(local_a8);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(auVar14._0_8_,auVar14._8_8_);
  }
  return;
}


