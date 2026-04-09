// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00d0d808
// Size: 40 bytes
// Signature: undefined __thiscall Put2(Multichannel<CryptoPP::Filter> * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::Multichannel<CryptoPP::Filter>::Put2(unsigned char const*, unsigned long, int, bool) */

void __thiscall
CryptoPP::Multichannel<CryptoPP::Filter>::Put2
          (Multichannel<CryptoPP::Filter> *this,uchar *param_1,ulong param_2,int param_3,
          bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00d0d82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x130))(this,&DEFAULT_CHANNEL,param_1,param_2,param_3,param_4);
  return;
}


