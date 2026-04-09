// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_Algorithm_DSA_RFC6979
// Entry Point: 00c8c1b0
// Size: 184 bytes
// Signature: undefined __thiscall ~DL_Algorithm_DSA_RFC6979(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA512> * this)


/* non-virtual thunk to CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA512>::~DL_Algorithm_DSA_RFC6979() */

void __thiscall
CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA512>::~DL_Algorithm_DSA_RFC6979
          (DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA512> *this)

{
  ulong uVar1;
  DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA512> *pDVar2;
  
  *(undefined ***)(this + -8) = &PTR__DL_Algorithm_DSA_RFC6979_00ff2840;
  *(undefined ***)this = &PTR__DL_Algorithm_DSA_RFC6979_00ff2898;
  HMAC<CryptoPP::SHA512>::~HMAC((HMAC<CryptoPP::SHA512> *)(this + 0x168));
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA512> **)(this + 0x160);
  uVar1 = *(ulong *)(this + 0x150);
  if (*(ulong *)(this + 0x158) <= *(ulong *)(this + 0x150)) {
    uVar1 = *(ulong *)(this + 0x158);
  }
  if (this + 0xc0 + ((ulong)(uint)-(int)(this + 0xc0) & 8) == pDVar2) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined8 *)(pDVar2 + uVar1 * 8 + -8) = 0;
    }
  }
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA512> **)(this + 0xb8);
  uVar1 = *(ulong *)(this + 0xa8);
  if (*(ulong *)(this + 0xb0) <= *(ulong *)(this + 0xa8)) {
    uVar1 = *(ulong *)(this + 0xb0);
  }
  if (pDVar2 == this + 0x20) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined8 *)(pDVar2 + uVar1 * 8 + -8) = 0;
    }
  }
  operator_delete(this + -8);
  return;
}


