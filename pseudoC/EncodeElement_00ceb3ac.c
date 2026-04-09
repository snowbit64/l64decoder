// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EncodeElement
// Entry Point: 00ceb3ac
// Size: 64 bytes
// Signature: undefined __thiscall EncodeElement(DL_GroupParameters_IntegerBased * this, bool param_1, Integer * param_2, uchar * param_3)


/* CryptoPP::DL_GroupParameters_IntegerBased::EncodeElement(bool, CryptoPP::Integer const&, unsigned
   char*) const */

void __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::EncodeElement
          (DL_GroupParameters_IntegerBased *this,bool param_1,Integer *param_2,uchar *param_3)

{
  ulong uVar1;
  
  (**(code **)(*(long *)this + 0xa0))(this,param_1);
  uVar1 = Integer::ByteCount();
  Integer::Encode(param_2,param_3,uVar1 & 0xffffffff,0);
  return;
}


