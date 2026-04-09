// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CheckSize
// Entry Point: 00c7d25c
// Size: 152 bytes
// Signature: undefined __cdecl CheckSize(ulong param_1)


/* CryptoPP::AllocatorBase<unsigned long>::CheckSize(unsigned long) */

void CryptoPP::AllocatorBase<unsigned_long>::CheckSize(ulong param_1)

{
  long lVar1;
  InvalidArgument *this;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 >> 0x3d != 0) {
    this = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c7d2b4 to 00c7d2c3 has its CatchHandler @ 00c7d31c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,"AllocatorBase: requested size would cause integer overflow");
                    /* try { // try from 00c7d2c8 to 00c7d2ef has its CatchHandler @ 00c7d2f4 */
    InvalidArgument::InvalidArgument(this,abStack_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


