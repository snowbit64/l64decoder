// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKeyImpl
// Entry Point: 00ca4748
// Size: 4 bytes
// Signature: undefined __thiscall ~DL_PublicKeyImpl(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this)


/* non-virtual thunk to CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::~DL_PublicKeyImpl() */

void __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::~DL_PublicKeyImpl
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xca474c);
  (*pcVar1)();
}


