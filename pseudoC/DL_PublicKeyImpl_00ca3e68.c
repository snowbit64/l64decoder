// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKeyImpl
// Entry Point: 00ca3e68
// Size: 4 bytes
// Signature: undefined __thiscall ~DL_PublicKeyImpl(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this)


/* non-virtual thunk to CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::~DL_PublicKeyImpl() */

void __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::~DL_PublicKeyImpl
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xca3e6c);
  (*pcVar1)();
}


