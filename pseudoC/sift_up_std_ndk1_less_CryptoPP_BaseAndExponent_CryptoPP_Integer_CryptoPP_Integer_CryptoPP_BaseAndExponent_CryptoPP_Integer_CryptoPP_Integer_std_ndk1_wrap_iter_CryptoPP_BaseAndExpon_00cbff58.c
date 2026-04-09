// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
// Entry Point: 00cbff58
// Size: 392 bytes
// Signature: void __cdecl __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>(__wrap_iter param_1, __wrap_iter param_2, __less * param_3, difference_type param_4)


/* void std::__ndk1::__sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,
   CryptoPP::Integer>, CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer> >&,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>*>
   >(std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>*>,
   std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>*>,
   std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>,
   CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer> >&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,
   CryptoPP::Integer>*> >::difference_type) */

void std::__ndk1::
     __sift_up<std::__ndk1::__less<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
               (__wrap_iter param_1,__wrap_iter param_2,__less *param_3,difference_type param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Integer *pIVar4;
  Integer *this;
  Integer *this_00;
  ulong uVar5;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  uVar3 = (ulong)param_1;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (1 < (ulong)param_4) {
    uVar5 = (ulong)param_4 - 2 >> 1;
    pIVar4 = (Integer *)((ulong)param_2 - 0x30);
    iVar2 = CryptoPP::Integer::Compare((Integer *)(uVar3 + uVar5 * 0x60 + 0x30),pIVar4);
    if (iVar2 < 0) {
      this_00 = (Integer *)((ulong)param_2 - 0x60);
      CryptoPP::Integer::Integer((Integer *)local_b8,this_00);
                    /* try { // try from 00cbffc8 to 00cbffd3 has its CatchHandler @ 00cc00e8 */
      CryptoPP::Integer::Integer((Integer *)local_88,pIVar4);
      do {
        this = (Integer *)(uVar3 + uVar5 * 0x60);
                    /* try { // try from 00cbffdc to 00cc001f has its CatchHandler @ 00cc0100 */
        CryptoPP::Integer::operator=(this_00,this);
        pIVar4 = (Integer *)(uVar3 + uVar5 * 0x60 + 0x30);
        CryptoPP::Integer::operator=(this_00 + 0x30,pIVar4);
        if (uVar5 == 0) break;
        if (-1 < (long)(uVar5 - 1)) {
          uVar5 = uVar5 - 1;
        }
        uVar5 = (long)uVar5 >> 1;
        iVar2 = CryptoPP::Integer::Compare
                          ((Integer *)(uVar3 + uVar5 * 0x60 + 0x30),(Integer *)local_88);
        this_00 = this;
      } while (iVar2 < 0);
                    /* try { // try from 00cc0028 to 00cc003f has its CatchHandler @ 00cc00fc */
      CryptoPP::Integer::operator=(this,(Integer *)local_b8);
      CryptoPP::Integer::operator=(pIVar4,(Integer *)local_88);
      if (uStack_70 <= local_78) {
        local_78 = uStack_70;
      }
      local_88[0] = &PTR__Integer_0100c890;
      for (; local_78 != 0; local_78 = local_78 - 1) {
        *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc0078 to 00cc007b has its CatchHandler @ 00cc00e4 */
      CryptoPP::UnalignedDeallocate(local_68);
      local_b8[0] = &PTR__Integer_0100c890;
      if (uStack_a0 <= local_a8) {
        local_a8 = uStack_a0;
      }
      for (; local_a8 != 0; local_a8 = local_a8 - 1) {
        *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc00ac to 00cc00af has its CatchHandler @ 00cc00e0 */
      CryptoPP::UnalignedDeallocate(local_98);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


