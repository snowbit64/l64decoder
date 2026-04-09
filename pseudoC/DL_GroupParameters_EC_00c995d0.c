// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParameters_EC
// Entry Point: 00c995d0
// Size: 56 bytes
// Signature: undefined __thiscall ~DL_GroupParameters_EC(DL_GroupParameters_EC<CryptoPP::ECP> * this)


/* virtual thunk to CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC() */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
          (DL_GroupParameters_EC<CryptoPP::ECP> *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x18);
  ~DL_GroupParameters_EC(this + lVar1);
  operator_delete(this + lVar1);
  return;
}


