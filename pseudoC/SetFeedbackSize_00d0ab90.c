// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetFeedbackSize
// Entry Point: 00d0ab90
// Size: 168 bytes
// Signature: undefined __thiscall SetFeedbackSize(CFB_ModePolicy * this, uint param_1)


/* CryptoPP::CFB_ModePolicy::SetFeedbackSize(unsigned int) */

void __thiscall CryptoPP::CFB_ModePolicy::SetFeedbackSize(CFB_ModePolicy *this,uint param_1)

{
  uint uVar1;
  long lVar2;
  InvalidArgument *this_00;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(uint *)(this + 0x28) < param_1) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0abf8 to 00d0ac07 has its CatchHandler @ 00d0ac60 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,"CFB_Mode: invalid feedback size");
                    /* try { // try from 00d0ac0c to 00d0ac33 has its CatchHandler @ 00d0ac38 */
    InvalidArgument::InvalidArgument(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  uVar1 = *(uint *)(this + 0x28);
  if (param_1 != 0) {
    uVar1 = param_1;
  }
  *(uint *)(this + 0x60) = uVar1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


