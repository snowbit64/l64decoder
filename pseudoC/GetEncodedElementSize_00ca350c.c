// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetEncodedElementSize
// Entry Point: 00ca350c
// Size: 40 bytes
// Signature: undefined __thiscall GetEncodedElementSize(DL_GroupParameters_EC<CryptoPP::EC2N> * this, bool param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::GetEncodedElementSize(bool) const */

ulong __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::GetEncodedElementSize
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,bool param_1)

{
  ulong uVar1;
  
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00ca351c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)(this + 0x18) + 0x78))(this + 0x18,this[0x1e8]);
    return uVar1;
  }
  return (ulong)*(uint *)(*(long *)(this + 0x28) + 0x90) + 7 >> 3;
}


