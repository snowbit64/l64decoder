// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_Algorithm_DSA_RFC6979
// Entry Point: 00c8a274
// Size: 196 bytes
// Signature: undefined __thiscall ~DL_Algorithm_DSA_RFC6979(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA256> * this)


/* CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA256>::~DL_Algorithm_DSA_RFC6979() */

void __thiscall
CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA256>::~DL_Algorithm_DSA_RFC6979
          (DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA256> *this)

{
  ulong uVar1;
  DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA256> *pDVar2;
  
  *(undefined ***)this = &PTR__DL_Algorithm_DSA_RFC6979_00ff2740;
  *(undefined ***)(this + 8) = &PTR__DL_Algorithm_DSA_RFC6979_00ff2798;
  HMAC<CryptoPP::SHA256>::~HMAC((HMAC<CryptoPP::SHA256> *)(this + 0xe8));
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA256> **)(this + 0xe0);
  uVar1 = *(ulong *)(this + 0xd0);
  if (*(ulong *)(this + 0xd8) <= *(ulong *)(this + 0xd0)) {
    uVar1 = *(ulong *)(this + 0xd8);
  }
  if (this + 0x80 + ((ulong)(uint)-(int)(this + 0x80) & 8) == pDVar2) {
    this[0xc9] = (DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA256>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pDVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA256> **)(this + 0x78);
  *(undefined ***)(this + 0x10) = &PTR__IteratedHash_00fe9de8;
  uVar1 = *(ulong *)(this + 0x68);
  if (*(ulong *)(this + 0x70) <= *(ulong *)(this + 0x68)) {
    uVar1 = *(ulong *)(this + 0x70);
  }
  if (pDVar2 == this + 0x20) {
    this[0x61] = (DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA256>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pDVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  return;
}


