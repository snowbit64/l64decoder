// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00cb91c0
// Size: 52 bytes
// Signature: undefined __cdecl Put2(uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::InputRejecting<CryptoPP::Filter>::Put2(unsigned char const*, unsigned long, int, bool)
    */

void CryptoPP::InputRejecting<CryptoPP::Filter>::Put2
               (uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  InputRejected *this;
  
  this = (InputRejected *)__cxa_allocate_exception(0x28,param_2,param_3,param_4);
                    /* try { // try from 00cb91d8 to 00cb91db has its CatchHandler @ 00cb91f4 */
  InputRejected::InputRejected(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&InputRejected::typeinfo,Exception::~Exception);
}


