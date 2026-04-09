// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreatePutSpace
// Entry Point: 00d0d7f0
// Size: 24 bytes
// Signature: undefined __thiscall CreatePutSpace(Multichannel<CryptoPP::Filter> * this, ulong * param_1)


/* CryptoPP::Multichannel<CryptoPP::Filter>::CreatePutSpace(unsigned long&) */

void __thiscall
CryptoPP::Multichannel<CryptoPP::Filter>::CreatePutSpace
          (Multichannel<CryptoPP::Filter> *this,ulong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d0d804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x128))(this,&DEFAULT_CHANNEL,param_1);
  return;
}


