// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_KeyImpl
// Entry Point: 00cb10ac
// Size: 4 bytes
// Signature: undefined __thiscall ~DL_KeyImpl(DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> * this)


/* non-virtual thunk to CryptoPP::DL_KeyImpl<CryptoPP::PKCS8PrivateKey,
   CryptoPP::DL_GroupParameters_DSA, CryptoPP::OID>::~DL_KeyImpl() */

void __thiscall
CryptoPP::DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::
~DL_KeyImpl(DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>
            *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xcb10b0);
  (*pcVar1)();
}


