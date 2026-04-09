// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
// Entry Point: 00cc4f00
// Size: 576 bytes
// Signature: void __cdecl __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>(__wrap_iter param_1, __wrap_iter param_2, __less * param_3, difference_type param_4)


/* void std::__ndk1::__sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,
   CryptoPP::Integer>, CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer> >&,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*>
   >(std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*>,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*>,
   std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>,
   CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer> >&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,
   CryptoPP::Integer>*> >::difference_type) */

void std::__ndk1::
     __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
               (__wrap_iter param_1,__wrap_iter param_2,__less *param_3,difference_type param_4)

{
  Integer *this;
  Integer *this_00;
  Integer *this_01;
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
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
  
  uVar4 = (ulong)param_2;
  uVar3 = (ulong)param_1;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (1 < (ulong)param_4) {
    uVar9 = (ulong)param_4 - 2 >> 1;
    iVar2 = CryptoPP::Integer::Compare
                      ((Integer *)(uVar3 + uVar9 * 0xa0 + 0x70),(Integer *)(uVar4 - 0x30));
    if (iVar2 < 0) {
      CryptoPP::Integer::Integer((Integer *)local_108,(Integer *)(uVar4 - 0x98));
                    /* try { // try from 00cc4f88 to 00cc4f8f has its CatchHandler @ 00cc5160 */
      CryptoPP::Integer::Integer((Integer *)local_d8,(Integer *)(uVar4 - 0x68));
      local_a8 = *(undefined *)(uVar4 - 0x38);
                    /* try { // try from 00cc4fa4 to 00cc4faf has its CatchHandler @ 00cc514c */
      CryptoPP::Integer::Integer((Integer *)local_a0,(Integer *)(uVar4 - 0x30));
      lVar7 = uVar4 - 0xa0;
      do {
        lVar8 = uVar3 + uVar9 * 0xa0;
        this = (Integer *)(lVar8 + 8);
                    /* try { // try from 00cc4fc4 to 00cc501f has its CatchHandler @ 00cc5178 */
        CryptoPP::Integer::operator=((Integer *)(lVar7 + 8),this);
        this_00 = (Integer *)(uVar3 + uVar9 * 0xa0 + 0x38);
        CryptoPP::Integer::operator=((Integer *)(lVar7 + 0x38),this_00);
        lVar5 = uVar3 + uVar9 * 0xa0;
        puVar6 = (undefined *)(lVar5 + 0x68);
        this_01 = (Integer *)(lVar5 + 0x70);
        *(undefined *)(lVar7 + 0x68) = *puVar6;
        CryptoPP::Integer::operator=((Integer *)(lVar7 + 0x70),this_01);
        if (uVar9 == 0) break;
        if (-1 < (long)(uVar9 - 1)) {
          uVar9 = uVar9 - 1;
        }
        uVar9 = (long)uVar9 >> 1;
        iVar2 = CryptoPP::Integer::Compare
                          ((Integer *)(uVar3 + uVar9 * 0xa0 + 0x70),(Integer *)local_a0);
        lVar7 = lVar8;
      } while (iVar2 < 0);
                    /* try { // try from 00cc5028 to 00cc5053 has its CatchHandler @ 00cc5174 */
      CryptoPP::Integer::operator=(this,(Integer *)local_108);
      CryptoPP::Integer::operator=(this_00,(Integer *)local_d8);
      *puVar6 = local_a8;
      CryptoPP::Integer::operator=(this_01,(Integer *)local_a0);
      if (uStack_88 <= local_90) {
        local_90 = uStack_88;
      }
      local_a0[0] = &PTR__Integer_0100c890;
      for (; local_90 != 0; local_90 = local_90 - 1) {
        *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc508c to 00cc508f has its CatchHandler @ 00cc5148 */
      CryptoPP::UnalignedDeallocate(local_80);
      local_d8[0] = &PTR__Integer_0100c890;
      if (uStack_c0 <= local_c8) {
        local_c8 = uStack_c0;
      }
      for (; local_c8 != 0; local_c8 = local_c8 - 1) {
        *(undefined4 *)((long)local_b8 + local_c8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc50d4 to 00cc50d7 has its CatchHandler @ 00cc5144 */
      CryptoPP::UnalignedDeallocate(local_b8);
      local_108[0] = &PTR__Integer_0100c890;
      if (uStack_f0 <= local_f8) {
        local_f8 = uStack_f0;
      }
      for (; local_f8 != 0; local_f8 = local_f8 - 1) {
        *(undefined4 *)((long)local_e8 + local_f8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc5108 to 00cc510b has its CatchHandler @ 00cc5140 */
      CryptoPP::UnalignedDeallocate(local_e8);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


