// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AuthenticatedSymmetricCipher
// Entry Point: 00c7bc84
// Size: 4 bytes
// Signature: undefined __thiscall ~AuthenticatedSymmetricCipher(AuthenticatedSymmetricCipher * this)


/* non-virtual thunk to CryptoPP::AuthenticatedSymmetricCipher::~AuthenticatedSymmetricCipher() */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipher::~AuthenticatedSymmetricCipher
          (AuthenticatedSymmetricCipher *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc7bc88);
  (*pcVar1)();
}


