// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertIn
// Entry Point: 00d04b58
// Size: 16 bytes
// Signature: undefined __thiscall ConvertIn(ModularArithmetic * this, Integer * param_1)


/* CryptoPP::ModularArithmetic::ConvertIn(CryptoPP::Integer const&) const */

void __thiscall CryptoPP::ModularArithmetic::ConvertIn(ModularArithmetic *this,Integer *param_1)

{
  Integer::Modulo(param_1);
  return;
}


