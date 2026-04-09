// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetEncodedElementSize
// Entry Point: 00c9e498
// Size: 36 bytes
// Signature: undefined __thiscall GetEncodedElementSize(DL_GroupParameters_EC<CryptoPP::ECP> * this, bool param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::GetEncodedElementSize(bool) const */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::GetEncodedElementSize
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,bool param_1)

{
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00c9e4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x78))(*(long **)(this + 0x20),this[0x170]);
    return;
  }
  ModularArithmetic::MaxElementByteLength();
  return;
}


