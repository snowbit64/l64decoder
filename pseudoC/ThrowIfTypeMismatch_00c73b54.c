// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThrowIfTypeMismatch
// Entry Point: 00c73b54
// Size: 176 bytes
// Signature: undefined __cdecl ThrowIfTypeMismatch(char * param_1, type_info * param_2, type_info * param_3)


/* CryptoPP::NameValuePairs::ThrowIfTypeMismatch(char const*, std::type_info const&, std::type_info
   const&) */

void CryptoPP::NameValuePairs::ThrowIfTypeMismatch
               (char *param_1,type_info *param_2,type_info *param_3)

{
  long lVar1;
  ValueTypeMismatch *this;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 8) != *(long *)(param_3 + 8)) {
    this = (ValueTypeMismatch *)__cxa_allocate_exception(0x38);
                    /* try { // try from 00c73bc0 to 00c73bcb has its CatchHandler @ 00c73c2c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,param_1);
                    /* try { // try from 00c73bd0 to 00c73bff has its CatchHandler @ 00c73c04 */
    ValueTypeMismatch::ValueTypeMismatch(this,abStack_50,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&ValueTypeMismatch::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


