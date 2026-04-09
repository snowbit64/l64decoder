// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetEncodedElementSize
// Entry Point: 00ceb448
// Size: 28 bytes
// Signature: undefined __thiscall GetEncodedElementSize(DL_GroupParameters_IntegerBased * this, bool param_1)


/* non-virtual thunk to CryptoPP::DL_GroupParameters_IntegerBased::GetEncodedElementSize(bool) const
    */

void __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::GetEncodedElementSize
          (DL_GroupParameters_IntegerBased *this,bool param_1)

{
  (**(code **)(*(long *)(this + -8) + 0xa0))(this + -8,param_1);
  Integer::ByteCount();
  return;
}


