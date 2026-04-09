// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeElement
// Entry Point: 00cb9b00
// Size: 12 bytes
// Signature: undefined __thiscall DEREncodeElement(EcPrecomputation<CryptoPP::EC2N> * this, BufferedTransformation * param_1, EC2NPoint * param_2)


/* CryptoPP::EcPrecomputation<CryptoPP::EC2N>::DEREncodeElement(CryptoPP::BufferedTransformation&,
   CryptoPP::EC2NPoint const&) const */

void __thiscall
CryptoPP::EcPrecomputation<CryptoPP::EC2N>::DEREncodeElement
          (EcPrecomputation<CryptoPP::EC2N> *this,BufferedTransformation *param_1,EC2NPoint *param_2
          )

{
  EC2N::DEREncodePoint((EC2N *)(this + 8),param_1,param_2,false);
  return;
}


