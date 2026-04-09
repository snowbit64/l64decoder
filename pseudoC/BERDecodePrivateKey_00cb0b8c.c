// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePrivateKey
// Entry Point: 00cb0b8c
// Size: 8 bytes
// Signature: undefined __cdecl BERDecodePrivateKey(BufferedTransformation * param_1, bool param_2, ulong param_3)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::BERDecodePrivateKey(CryptoPP::BufferedTransformation&,
   bool, unsigned long) */

void CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::BERDecodePrivateKey
               (BufferedTransformation *param_1,bool param_2,ulong param_3)

{
  Integer::BERDecode((Integer *)(param_1 + 0x140),(BufferedTransformation *)(ulong)param_2);
  return;
}


