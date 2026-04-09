// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_Algorithm_DSA_RFC6979
// Entry Point: 00c88738
// Size: 192 bytes
// Signature: undefined __thiscall ~DL_Algorithm_DSA_RFC6979(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1> * this)


/* non-virtual thunk to CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA1>::~DL_Algorithm_DSA_RFC6979() */

void __thiscall
CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1>::~DL_Algorithm_DSA_RFC6979
          (DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1> *this)

{
  ulong uVar1;
  DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1> *pDVar2;
  
  *(undefined ***)(this + -8) = &PTR__DL_Algorithm_DSA_RFC6979_00ff2640;
  *(undefined ***)this = &PTR__DL_Algorithm_DSA_RFC6979_00ff2698;
  HMAC<CryptoPP::SHA1>::~HMAC((HMAC<CryptoPP::SHA1> *)(this + 0xd8));
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1> **)(this + 0xd0);
  uVar1 = *(ulong *)(this + 0xc0);
  if (*(ulong *)(this + 200) <= *(ulong *)(this + 0xc0)) {
    uVar1 = *(ulong *)(this + 200);
  }
  if (pDVar2 == this + 0x78) {
    this[0xb9] = (DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pDVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  pDVar2 = *(DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1> **)(this + 0x70);
  *(undefined ***)(this + 8) = &PTR__IteratedHash_00fe9de8;
  uVar1 = *(ulong *)(this + 0x60);
  if (*(ulong *)(this + 0x68) <= *(ulong *)(this + 0x60)) {
    uVar1 = *(ulong *)(this + 0x68);
  }
  if (pDVar2 == this + 0x18) {
    this[0x59] = (DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA1>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pDVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  return;
}


