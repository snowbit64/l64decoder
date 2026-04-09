// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CanIterate
// Entry Point: 00cae8fc
// Size: 20 bytes
// Signature: undefined __thiscall CanIterate(CFB_ModePolicy * this)


/* non-virtual thunk to CryptoPP::CFB_ModePolicy::CanIterate() const */

bool __thiscall CryptoPP::CFB_ModePolicy::CanIterate(CFB_ModePolicy *this)

{
  return *(int *)(this + 0x28) == *(int *)(this + -0x10);
}


