// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EncodedPointSize
// Entry Point: 00cd146c
// Size: 40 bytes
// Signature: undefined __thiscall EncodedPointSize(EC2N * this, bool param_1)


/* CryptoPP::EC2N::EncodedPointSize(bool) const */

int __thiscall CryptoPP::EC2N::EncodedPointSize(EC2N *this,bool param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (!param_1) {
    iVar1 = 2;
  }
  return iVar1 * (int)((ulong)*(uint *)(*(long *)(this + 0x10) + 0x90) + 7 >> 3) + 1;
}


