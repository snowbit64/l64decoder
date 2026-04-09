// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Algorithm
// Entry Point: 00c772fc
// Size: 272 bytes
// Signature: undefined __thiscall Algorithm(Algorithm * this, bool param_1)


/* CryptoPP::Algorithm::Algorithm(bool) */

void __thiscall CryptoPP::Algorithm::Algorithm(Algorithm *this,bool param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  SelfTestFailure *pSVar4;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__Clonable_00fef500;
  if ((param_1) && (uVar3 = FIPS_140_2_ComplianceEnabled(), (uVar3 & 1) != 0)) {
    iVar2 = GetPowerUpSelfTestStatus();
    if ((iVar2 == 0) && (uVar3 = PowerUpSelfTestInProgressOnThisThread(), (uVar3 & 1) == 0)) {
      pSVar4 = (SelfTestFailure *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c773d0 to 00c773df has its CatchHandler @ 00c77420 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 abStack_50,
                 "Cryptographic algorithms are disabled before the power-up self tests are performed."
                );
                    /* try { // try from 00c773e4 to 00c7740b has its CatchHandler @ 00c77410 */
      SelfTestFailure::SelfTestFailure(pSVar4,abStack_50);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pSVar4,&SelfTestFailure::typeinfo,Exception::~Exception);
    }
    iVar2 = GetPowerUpSelfTestStatus();
    if (iVar2 == 1) {
      pSVar4 = (SelfTestFailure *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c77384 to 00c77393 has its CatchHandler @ 00c77440 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 abStack_50,
                 "Cryptographic algorithms are disabled after a power-up self test failed.");
                    /* try { // try from 00c77398 to 00c773bf has its CatchHandler @ 00c77424 */
      SelfTestFailure::SelfTestFailure(pSVar4,abStack_50);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pSVar4,&SelfTestFailure::typeinfo,Exception::~Exception);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


