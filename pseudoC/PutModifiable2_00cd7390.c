// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PutModifiable2
// Entry Point: 00cd7390
// Size: 8 bytes
// Signature: undefined __thiscall PutModifiable2(MeterFilter * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::MeterFilter::PutModifiable2(unsigned char*, unsigned long, int, bool) */

void __thiscall
CryptoPP::MeterFilter::PutModifiable2
          (MeterFilter *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  PutMaybeModifiable(this,param_1,param_2,param_3,param_4,true);
  return;
}


