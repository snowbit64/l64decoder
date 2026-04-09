// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00cabb8c
// Size: 16 bytes
// Signature: undefined __thiscall AssignFrom(DL_PrivateKey_ECGDSA<CryptoPP::EC2N> * this, NameValuePairs * param_1)


/* CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::EC2N>::AssignFrom(CryptoPP::NameValuePairs const&) */

bool __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::EC2N>::AssignFrom
          (DL_PrivateKey_ECGDSA<CryptoPP::EC2N> *this,NameValuePairs *param_1)

{
  bool bVar1;
  
  bVar1 = NameValuePairs::GetThisObject<CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::EC2N>>
                    (param_1,(DL_PrivateKey_ECGDSA *)this);
  return bVar1;
}


