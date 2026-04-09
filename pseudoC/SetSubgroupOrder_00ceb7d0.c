// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetSubgroupOrder
// Entry Point: 00ceb7d0
// Size: 40 bytes
// Signature: undefined __thiscall SetSubgroupOrder(DL_GroupParameters_IntegerBased * this, Integer * param_1)


/* CryptoPP::DL_GroupParameters_IntegerBased::SetSubgroupOrder(CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::SetSubgroupOrder
          (DL_GroupParameters_IntegerBased *this,Integer *param_1)

{
  Integer::operator=((Integer *)(this + 0x18),param_1);
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


