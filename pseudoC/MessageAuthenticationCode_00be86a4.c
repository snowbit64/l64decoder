// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MessageAuthenticationCode
// Entry Point: 00be86a4
// Size: 4 bytes
// Signature: undefined __thiscall ~MessageAuthenticationCode(MessageAuthenticationCode * this)


/* non-virtual thunk to CryptoPP::MessageAuthenticationCode::~MessageAuthenticationCode() */

void __thiscall
CryptoPP::MessageAuthenticationCode::~MessageAuthenticationCode(MessageAuthenticationCode *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe86a8);
  (*pcVar1)();
}


