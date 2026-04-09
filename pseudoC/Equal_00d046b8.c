// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Equal
// Entry Point: 00d046b8
// Size: 36 bytes
// Signature: undefined __thiscall Equal(ModularArithmetic * this, Integer * param_1, Integer * param_2)


/* CryptoPP::ModularArithmetic::Equal(CryptoPP::Integer const&, CryptoPP::Integer const&) const */

bool __thiscall
CryptoPP::ModularArithmetic::Equal(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  int iVar1;
  
  iVar1 = Integer::Compare(param_1,param_2);
  return iVar1 == 0;
}


