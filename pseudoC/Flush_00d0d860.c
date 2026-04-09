// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Flush
// Entry Point: 00d0d860
// Size: 36 bytes
// Signature: undefined __thiscall Flush(Unflushable<CryptoPP::Multichannel<CryptoPP::Filter>> * this, bool param_1, int param_2, bool param_3)


/* CryptoPP::Unflushable<CryptoPP::Multichannel<CryptoPP::Filter> >::Flush(bool, int, bool) */

void __thiscall
CryptoPP::Unflushable<CryptoPP::Multichannel<CryptoPP::Filter>>::Flush
          (Unflushable<CryptoPP::Multichannel<CryptoPP::Filter>> *this,bool param_1,int param_2,
          bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00d0d880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x140))(this,&DEFAULT_CHANNEL,param_1,param_2,param_3);
  return;
}


