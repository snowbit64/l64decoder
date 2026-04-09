// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00caada0
// Size: 16 bytes
// Signature: undefined __thiscall AssignFrom(DL_PrivateKey_ECGDSA<CryptoPP::ECP> * this, NameValuePairs * param_1)


/* CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::AssignFrom(CryptoPP::NameValuePairs const&) */

bool __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::AssignFrom
          (DL_PrivateKey_ECGDSA<CryptoPP::ECP> *this,NameValuePairs *param_1)

{
  bool bVar1;
  
  bVar1 = NameValuePairs::GetThisObject<CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>>
                    (param_1,(DL_PrivateKey_ECGDSA *)this);
  return bVar1;
}


