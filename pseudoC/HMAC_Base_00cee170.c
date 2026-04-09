// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HMAC_Base
// Entry Point: 00cee170
// Size: 4 bytes
// Signature: undefined __thiscall ~HMAC_Base(HMAC_Base * this)


/* non-virtual thunk to CryptoPP::HMAC_Base::~HMAC_Base() */

void __thiscall CryptoPP::HMAC_Base::~HMAC_Base(HMAC_Base *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xcee174);
  (*pcVar1)();
}


