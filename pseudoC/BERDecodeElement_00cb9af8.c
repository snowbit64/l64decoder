// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeElement
// Entry Point: 00cb9af8
// Size: 8 bytes
// Signature: undefined __cdecl BERDecodeElement(BufferedTransformation * param_1)


/* CryptoPP::EcPrecomputation<CryptoPP::EC2N>::BERDecodeElement(CryptoPP::BufferedTransformation&)
   const */

void CryptoPP::EcPrecomputation<CryptoPP::EC2N>::BERDecodeElement(BufferedTransformation *param_1)

{
  EC2N::BERDecodePoint(param_1 + 8);
  return;
}


