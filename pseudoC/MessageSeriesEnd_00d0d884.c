// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MessageSeriesEnd
// Entry Point: 00d0d884
// Size: 32 bytes
// Signature: undefined __thiscall MessageSeriesEnd(Multichannel<CryptoPP::Filter> * this, int param_1, bool param_2)


/* CryptoPP::Multichannel<CryptoPP::Filter>::MessageSeriesEnd(int, bool) */

void __thiscall
CryptoPP::Multichannel<CryptoPP::Filter>::MessageSeriesEnd
          (Multichannel<CryptoPP::Filter> *this,int param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00d0d8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x148))(this,&DEFAULT_CHANNEL,param_1,param_2);
  return;
}


