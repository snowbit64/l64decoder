// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AuthenticatedEncryption
// Entry Point: 00be6de0
// Size: 48 bytes
// Signature: undefined __thiscall ~AuthenticatedEncryption(AuthenticatedEncryption * this)


/* AuthenticatedEncryption::~AuthenticatedEncryption() */

void __thiscall AuthenticatedEncryption::~AuthenticatedEncryption(AuthenticatedEncryption *this)

{
  CryptoPP::GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,false>::~GCM_Final
            ((GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,false> *)(this + 600));
  CryptoPP::GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,true>::~GCM_Final
            ((GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,true> *)(this + 0x118));
  CryptoPP::HMAC<CryptoPP::SHA256>::~HMAC((HMAC<CryptoPP::SHA256> *)(this + 8));
  return;
}


