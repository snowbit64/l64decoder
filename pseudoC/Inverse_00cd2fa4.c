// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Inverse
// Entry Point: 00cd2fa4
// Size: 128 bytes
// Signature: undefined __thiscall Inverse(ECP * this, ECPPoint * param_1)


/* CryptoPP::ECP::Inverse(CryptoPP::ECPPoint const&) const */

ECPPoint * __thiscall CryptoPP::ECP::Inverse(ECP *this,ECPPoint *param_1)

{
  Integer *pIVar1;
  
  if (param_1[0x68] != (ECPPoint)0x0) {
    return param_1;
  }
  this[0xe0] = (ECP)0x0;
  Integer::operator=((Integer *)(this + 0x80),(Integer *)(param_1 + 8));
  pIVar1 = (Integer *)
           (**(code **)(**(long **)(this + 0x10) + 0x28))(*(long **)(this + 0x10),param_1 + 0x38);
  Integer::operator=((Integer *)(this + 0xb0),pIVar1);
  return (ECPPoint *)(this + 0x78);
}


