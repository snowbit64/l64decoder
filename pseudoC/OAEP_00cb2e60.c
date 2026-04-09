// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OAEP
// Entry Point: 00cb2e60
// Size: 4 bytes
// Signature: undefined __thiscall ~OAEP(OAEP<CryptoPP::SHA1,CryptoPP::P1363_MGF1> * this)


/* CryptoPP::OAEP<CryptoPP::SHA1, CryptoPP::P1363_MGF1>::~OAEP() */

void __thiscall
CryptoPP::OAEP<CryptoPP::SHA1,CryptoPP::P1363_MGF1>::~OAEP
          (OAEP<CryptoPP::SHA1,CryptoPP::P1363_MGF1> *this)

{
  operator_delete(this);
  return;
}


