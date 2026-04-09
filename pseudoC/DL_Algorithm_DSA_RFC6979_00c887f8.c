// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_Algorithm_DSA_RFC6979
// Entry Point: 00c887f8
// Size: 164 bytes
// Signature: undefined __thiscall ~DL_Algorithm_DSA_RFC6979(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1> * this)


/* CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA1>::~DL_Algorithm_DSA_RFC6979() */

void __thiscall
CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1>::~DL_Algorithm_DSA_RFC6979
          (DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1> *this)

{
  ulong uVar1;
  DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1> *pDVar2;
  
  *(undefined ***)this = &PTR__DL_Algorithm_DSA_RFC6979_00ff2640;
  *(undefined ***)(this + 8) = &PTR__DL_Algorithm_DSA_RFC6979_00ff2698;
  HMAC<CryptoPP::SHA1>::~HMAC((HMAC<CryptoPP::SHA1> *)(this + 0xe0));
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1> **)(this + 0xd8);
  uVar1 = *(ulong *)(this + 200);
  if (*(ulong *)(this + 0xd0) <= *(ulong *)(this + 200)) {
    uVar1 = *(ulong *)(this + 0xd0);
  }
  if (pDVar2 == this + 0x80) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pDVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1> **)(this + 0x78);
  uVar1 = *(ulong *)(this + 0x68);
  if (*(ulong *)(this + 0x70) <= *(ulong *)(this + 0x68)) {
    uVar1 = *(ulong *)(this + 0x70);
  }
  if (pDVar2 == this + 0x20) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pDVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  operator_delete(this);
  return;
}


