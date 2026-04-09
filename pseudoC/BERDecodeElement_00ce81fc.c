// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeElement
// Entry Point: 00ce81fc
// Size: 24 bytes
// Signature: undefined __thiscall BERDecodeElement(GF2NP * this, BufferedTransformation * param_1, PolynomialMod2 * param_2)


/* CryptoPP::GF2NP::BERDecodeElement(CryptoPP::BufferedTransformation&, CryptoPP::PolynomialMod2&)
   const */

void __thiscall
CryptoPP::GF2NP::BERDecodeElement
          (GF2NP *this,BufferedTransformation *param_1,PolynomialMod2 *param_2)

{
  PolynomialMod2::BERDecodeAsOctetString(param_2,param_1,(ulong)*(uint *)(this + 0x90) + 7 >> 3);
  return;
}


