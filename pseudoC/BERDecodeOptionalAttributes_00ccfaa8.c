// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeOptionalAttributes
// Entry Point: 00ccfaa8
// Size: 16 bytes
// Signature: undefined __thiscall BERDecodeOptionalAttributes(PKCS8PrivateKey * this, BufferedTransformation * param_1)


/* CryptoPP::PKCS8PrivateKey::BERDecodeOptionalAttributes(CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::PKCS8PrivateKey::BERDecodeOptionalAttributes
          (PKCS8PrivateKey *this,BufferedTransformation *param_1)

{
  DERReencode(param_1,(BufferedTransformation *)(this + 0x10));
  return;
}


