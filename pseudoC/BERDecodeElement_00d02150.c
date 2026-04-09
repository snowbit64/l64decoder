// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeElement
// Entry Point: 00d02150
// Size: 48 bytes
// Signature: undefined __thiscall BERDecodeElement(ModularArithmetic * this, BufferedTransformation * param_1, Integer * param_2)


/* CryptoPP::ModularArithmetic::BERDecodeElement(CryptoPP::BufferedTransformation&,
   CryptoPP::Integer&) const */

void __thiscall
CryptoPP::ModularArithmetic::BERDecodeElement
          (ModularArithmetic *this,BufferedTransformation *param_1,Integer *param_2)

{
  ulong uVar1;
  
  uVar1 = MaxElementByteLength();
  Integer::BERDecodeAsOctetString(param_2,param_1,uVar1 & 0xffffffff);
  return;
}


