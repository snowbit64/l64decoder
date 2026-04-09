// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00c84b74
// Size: 188 bytes
// Signature: undefined __thiscall IsolatedInitialize(StringSinkTemplate<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>> * this, NameValuePairs * param_1)


/* CryptoPP::StringSinkTemplate<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned
   char> > >::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::
StringSinkTemplate<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>>::
IsolatedInitialize(StringSinkTemplate<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>>
                   *this,NameValuePairs *param_1)

{
  long lVar1;
  ulong uVar2;
  InvalidArgument *this_00;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,"OutputStringPointer",
                     &std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>*::
                      typeinfo,this + 0x18);
  if ((uVar2 & 1) == 0) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c84bf0 to 00c84bff has its CatchHandler @ 00c84c58 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,"StringSink: OutputStringPointer not specified");
                    /* try { // try from 00c84c04 to 00c84c2b has its CatchHandler @ 00c84c30 */
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


