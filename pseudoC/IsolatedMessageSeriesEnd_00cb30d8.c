// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedMessageSeriesEnd
// Entry Point: 00cb30d8
// Size: 52 bytes
// Signature: undefined __cdecl IsolatedMessageSeriesEnd(bool param_1)


/* CryptoPP::InputRejecting<CryptoPP::BufferedTransformation>::IsolatedMessageSeriesEnd(bool) */

void CryptoPP::InputRejecting<CryptoPP::BufferedTransformation>::IsolatedMessageSeriesEnd
               (bool param_1)

{
  InputRejected *this;
  
  this = (InputRejected *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cb30f0 to 00cb30f3 has its CatchHandler @ 00cb310c */
  InputRejected::InputRejected(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&InputRejected::typeinfo,Exception::~Exception);
}


