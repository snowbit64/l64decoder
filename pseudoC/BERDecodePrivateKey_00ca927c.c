// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePrivateKey
// Entry Point: 00ca927c
// Size: 8 bytes
// Signature: undefined __cdecl BERDecodePrivateKey(BufferedTransformation * param_1, bool param_2, ulong param_3)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::BERDecodePrivateKey(CryptoPP::BufferedTransformation&, bool, unsigned long) */

void CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::
     BERDecodePrivateKey(BufferedTransformation *param_1,bool param_2,ulong param_3)

{
  Integer::BERDecode((Integer *)(param_1 + 0x250),(BufferedTransformation *)(ulong)param_2);
  return;
}


