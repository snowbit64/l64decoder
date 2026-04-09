// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParameterSupported
// Entry Point: 00d1cf18
// Size: 52 bytes
// Signature: undefined __thiscall ParameterSupported(TF_CryptoSystemBase<CryptoPP::PK_Decryptor,CryptoPP::TF_Base<CryptoPP::TrapdoorFunctionInverse,CryptoPP::PK_EncryptionMessageEncodingMethod>> * this, char * param_1)


/* CryptoPP::TF_CryptoSystemBase<CryptoPP::PK_Decryptor,
   CryptoPP::TF_Base<CryptoPP::TrapdoorFunctionInverse,
   CryptoPP::PK_EncryptionMessageEncodingMethod> >::ParameterSupported(char const*) const */

void __thiscall
CryptoPP::
TF_CryptoSystemBase<CryptoPP::PK_Decryptor,CryptoPP::TF_Base<CryptoPP::TrapdoorFunctionInverse,CryptoPP::PK_EncryptionMessageEncodingMethod>>
::ParameterSupported
          (TF_CryptoSystemBase<CryptoPP::PK_Decryptor,CryptoPP::TF_Base<CryptoPP::TrapdoorFunctionInverse,CryptoPP::PK_EncryptionMessageEncodingMethod>>
           *this,char *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + 0x10) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00d1cf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  return;
}


