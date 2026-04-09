// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GCM_Final
// Entry Point: 00be8a30
// Size: 36 bytes
// Signature: undefined __thiscall ~GCM_Final(GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,false> * this)


/* CryptoPP::GCM_Final<CryptoPP::Rijndael, (CryptoPP::GCM_TablesOption)0, false>::~GCM_Final() */

void __thiscall
CryptoPP::GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,false>::~GCM_Final
          (GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,false> *this)

{
  ~GCM_Final(this);
  operator_delete(this);
  return;
}


