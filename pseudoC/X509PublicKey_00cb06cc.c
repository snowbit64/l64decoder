// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~X509PublicKey
// Entry Point: 00cb06cc
// Size: 4 bytes
// Signature: undefined __thiscall ~X509PublicKey(X509PublicKey * this)


/* non-virtual thunk to CryptoPP::X509PublicKey::~X509PublicKey() */

void __thiscall CryptoPP::X509PublicKey::~X509PublicKey(X509PublicKey *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xcb06d0);
  (*pcVar1)();
}


