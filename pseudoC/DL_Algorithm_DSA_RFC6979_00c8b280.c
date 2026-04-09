// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_Algorithm_DSA_RFC6979
// Entry Point: 00c8b280
// Size: 176 bytes
// Signature: undefined __thiscall ~DL_Algorithm_DSA_RFC6979(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA384> * this)


/* CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA384>::~DL_Algorithm_DSA_RFC6979() */

void __thiscall
CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA384>::~DL_Algorithm_DSA_RFC6979
          (DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA384> *this)

{
  ulong uVar1;
  DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA384> *pDVar2;
  
  *(undefined ***)this = &PTR__DL_Algorithm_DSA_RFC6979_00ff27c0;
  *(undefined ***)(this + 8) = &PTR__DL_Algorithm_DSA_RFC6979_00ff2818;
  HMAC<CryptoPP::SHA384>::~HMAC((HMAC<CryptoPP::SHA384> *)(this + 0x170));
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA384> **)(this + 0x168);
  uVar1 = *(ulong *)(this + 0x158);
  if (*(ulong *)(this + 0x160) <= *(ulong *)(this + 0x158)) {
    uVar1 = *(ulong *)(this + 0x160);
  }
  if (this + 200 + ((ulong)(uint)-(int)(this + 200) & 8) == pDVar2) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined8 *)(pDVar2 + uVar1 * 8 + -8) = 0;
    }
  }
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA384> **)(this + 0xc0);
  uVar1 = *(ulong *)(this + 0xb0);
  if (*(ulong *)(this + 0xb8) <= *(ulong *)(this + 0xb0)) {
    uVar1 = *(ulong *)(this + 0xb8);
  }
  if (pDVar2 == this + 0x28) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined8 *)(pDVar2 + uVar1 * 8 + -8) = 0;
    }
  }
  operator_delete(this);
  return;
}


