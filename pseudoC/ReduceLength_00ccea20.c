// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ReduceLength
// Entry Point: 00ccea20
// Size: 92 bytes
// Signature: undefined __thiscall ReduceLength(BERGeneralDecoder * this, ulong param_1)


/* CryptoPP::BERGeneralDecoder::ReduceLength(unsigned long) */

ulong __thiscall CryptoPP::BERGeneralDecoder::ReduceLength(BERGeneralDecoder *this,ulong param_1)

{
  BERDecodeErr *this_00;
  
  if (this[0x31] != (BERGeneralDecoder)0x0) {
    if (*(ulong *)(this + 0x28) < param_1) {
      this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccea60 to 00ccea63 has its CatchHandler @ 00ccea7c */
      BERDecodeErr::BERDecodeErr(this_00);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&BERDecodeErr::typeinfo,Exception::~Exception);
    }
    *(ulong *)(this + 0x28) = *(ulong *)(this + 0x28) - param_1;
  }
  return param_1;
}


