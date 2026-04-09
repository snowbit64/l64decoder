// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePrivateKey
// Entry Point: 00ca8664
// Size: 8 bytes
// Signature: undefined __cdecl BERDecodePrivateKey(BufferedTransformation * param_1, bool param_2, ulong param_3)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::BERDecodePrivateKey(CryptoPP::BufferedTransformation&, bool, unsigned long) */

void CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::
     BERDecodePrivateKey(BufferedTransformation *param_1,bool param_2,ulong param_3)

{
  Integer::BERDecode((Integer *)(param_1 + 0x1d8),(BufferedTransformation *)(ulong)param_2);
  return;
}


