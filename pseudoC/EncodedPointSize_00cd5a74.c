// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EncodedPointSize
// Entry Point: 00cd5a74
// Size: 52 bytes
// Signature: undefined __thiscall EncodedPointSize(ECP * this, bool param_1)


/* non-virtual thunk to CryptoPP::ECP::EncodedPointSize(bool) const */

int __thiscall CryptoPP::ECP::EncodedPointSize(ECP *this,bool param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (!param_1) {
    iVar2 = 2;
  }
  iVar1 = ModularArithmetic::MaxElementByteLength();
  return iVar1 * iVar2 + 1;
}


