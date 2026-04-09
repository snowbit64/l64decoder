// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedMessageSeriesEnd
// Entry Point: 00cb9220
// Size: 52 bytes
// Signature: undefined __cdecl IsolatedMessageSeriesEnd(bool param_1)


/* CryptoPP::InputRejecting<CryptoPP::Filter>::IsolatedMessageSeriesEnd(bool) */

void CryptoPP::InputRejecting<CryptoPP::Filter>::IsolatedMessageSeriesEnd(bool param_1)

{
  InputRejected *this;
  
  this = (InputRejected *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cb9238 to 00cb923b has its CatchHandler @ 00cb9254 */
  InputRejected::InputRejected(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&InputRejected::typeinfo,Exception::~Exception);
}


