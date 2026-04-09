// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_Algorithm_DSA_RFC6979
// Entry Point: 00c89710
// Size: 184 bytes
// Signature: undefined __thiscall ~DL_Algorithm_DSA_RFC6979(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA224> * this)


/* non-virtual thunk to CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA224>::~DL_Algorithm_DSA_RFC6979() */

void __thiscall
CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA224>::~DL_Algorithm_DSA_RFC6979
          (DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA224> *this)

{
  ulong uVar1;
  DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA224> *pDVar2;
  
  *(undefined ***)(this + -8) = &PTR__DL_Algorithm_DSA_RFC6979_00ff26c0;
  *(undefined ***)this = &PTR__DL_Algorithm_DSA_RFC6979_00ff2718;
  HMAC<CryptoPP::SHA224>::~HMAC((HMAC<CryptoPP::SHA224> *)(this + 0xe0));
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA224> **)(this + 0xd8);
  uVar1 = *(ulong *)(this + 200);
  if (*(ulong *)(this + 0xd0) <= *(ulong *)(this + 200)) {
    uVar1 = *(ulong *)(this + 0xd0);
  }
  if (this + 0x78 + ((ulong)(uint)-(int)(this + 0x78) & 8) == pDVar2) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pDVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA224> **)(this + 0x70);
  uVar1 = *(ulong *)(this + 0x60);
  if (*(ulong *)(this + 0x68) <= *(ulong *)(this + 0x60)) {
    uVar1 = *(ulong *)(this + 0x68);
  }
  if (pDVar2 == this + 0x18) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pDVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  operator_delete(this + -8);
  return;
}


