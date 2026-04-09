// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00cdb4ac
// Size: 28 bytes
// Signature: undefined __thiscall Put2(FilterWithBufferedInput * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::FilterWithBufferedInput::Put2(unsigned char const*, unsigned long, int, bool) */

undefined8 __thiscall
CryptoPP::FilterWithBufferedInput::Put2
          (FilterWithBufferedInput *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  PutMaybeModifiable(this,param_1,param_2,param_3,param_4,false);
  return 0;
}


