// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelMessageSeriesEnd
// Entry Point: 00cb3184
// Size: 52 bytes
// Signature: undefined __cdecl ChannelMessageSeriesEnd(basic_string * param_1, int param_2, bool param_3)


/* CryptoPP::InputRejecting<CryptoPP::BufferedTransformation>::ChannelMessageSeriesEnd(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, bool) */

void CryptoPP::InputRejecting<CryptoPP::BufferedTransformation>::ChannelMessageSeriesEnd
               (basic_string *param_1,int param_2,bool param_3)

{
  InputRejected *this;
  
  this = (InputRejected *)__cxa_allocate_exception(0x28,param_2,param_3);
                    /* try { // try from 00cb319c to 00cb319f has its CatchHandler @ 00cb31b8 */
  InputRejected::InputRejected(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&InputRejected::typeinfo,Exception::~Exception);
}


