// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PutModifiable2
// Entry Point: 00d0d830
// Size: 40 bytes
// Signature: undefined __thiscall PutModifiable2(Multichannel<CryptoPP::Filter> * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::Multichannel<CryptoPP::Filter>::PutModifiable2(unsigned char*, unsigned long, int,
   bool) */

void __thiscall
CryptoPP::Multichannel<CryptoPP::Filter>::PutModifiable2
          (Multichannel<CryptoPP::Filter> *this,uchar *param_1,ulong param_2,int param_3,
          bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00d0d854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x138))(this,&DEFAULT_CHANNEL,param_1,param_2,param_3,param_4);
  return;
}


