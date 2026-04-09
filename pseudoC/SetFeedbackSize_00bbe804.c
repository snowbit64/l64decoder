// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetFeedbackSize
// Entry Point: 00bbe804
// Size: 160 bytes
// Signature: undefined __thiscall SetFeedbackSize(CipherModeBase * this, uint param_1)


/* CryptoPP::CipherModeBase::SetFeedbackSize(unsigned int) */

void __thiscall CryptoPP::CipherModeBase::SetFeedbackSize(CipherModeBase *this,uint param_1)

{
  long lVar1;
  InvalidArgument *this_00;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 != 0) && (*(uint *)(this + 0x28) != param_1)) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00bbe864 to 00bbe873 has its CatchHandler @ 00bbe8cc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,"CipherModeBase: feedback size cannot be specified for this cipher mode");
                    /* try { // try from 00bbe878 to 00bbe89f has its CatchHandler @ 00bbe8a4 */
    InvalidArgument::InvalidArgument(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


