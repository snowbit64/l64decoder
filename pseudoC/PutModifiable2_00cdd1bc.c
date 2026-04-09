// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PutModifiable2
// Entry Point: 00cdd1bc
// Size: 28 bytes
// Signature: undefined __thiscall PutModifiable2(FilterWithBufferedInput * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::FilterWithBufferedInput::PutModifiable2(unsigned char*, unsigned long, int, bool) */

undefined8 __thiscall
CryptoPP::FilterWithBufferedInput::PutModifiable2
          (FilterWithBufferedInput *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  PutMaybeModifiable(this,param_1,param_2,param_3,param_4,true);
  return 0;
}


