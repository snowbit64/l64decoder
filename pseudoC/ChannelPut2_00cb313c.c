// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelPut2
// Entry Point: 00cb313c
// Size: 52 bytes
// Signature: undefined __cdecl ChannelPut2(basic_string * param_1, uchar * param_2, ulong param_3, int param_4, bool param_5)


/* CryptoPP::InputRejecting<CryptoPP::BufferedTransformation>::ChannelPut2(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char const*,
   unsigned long, int, bool) */

void CryptoPP::InputRejecting<CryptoPP::BufferedTransformation>::ChannelPut2
               (basic_string *param_1,uchar *param_2,ulong param_3,int param_4,bool param_5)

{
  InputRejected *this;
  
  this = (InputRejected *)__cxa_allocate_exception(0x28,param_2,param_3,param_4,param_5);
                    /* try { // try from 00cb3154 to 00cb3157 has its CatchHandler @ 00cb3170 */
  InputRejected::InputRejected(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&InputRejected::typeinfo,Exception::~Exception);
}


