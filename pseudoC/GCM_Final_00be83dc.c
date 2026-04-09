// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GCM_Final
// Entry Point: 00be83dc
// Size: 40 bytes
// Signature: undefined __thiscall ~GCM_Final(GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,true> * this)


/* non-virtual thunk to CryptoPP::GCM_Final<CryptoPP::Rijndael, (CryptoPP::GCM_TablesOption)0,
   true>::~GCM_Final() */

void __thiscall
CryptoPP::GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,true>::~GCM_Final
          (GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,true> *this)

{
  ~GCM_Final(this + -8);
  operator_delete(this + -8);
  return;
}


