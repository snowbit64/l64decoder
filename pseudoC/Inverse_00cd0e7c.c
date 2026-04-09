// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Inverse
// Entry Point: 00cd0e7c
// Size: 132 bytes
// Signature: undefined __thiscall Inverse(EC2N * this, EC2NPoint * param_1)


/* CryptoPP::EC2N::Inverse(CryptoPP::EC2NPoint const&) const */

EC2NPoint * __thiscall CryptoPP::EC2N::Inverse(EC2N *this,EC2NPoint *param_1)

{
  PolynomialMod2 *pPVar1;
  long lVar2;
  
  if (param_1[0x48] != (EC2NPoint)0x0) {
    return param_1;
  }
  lVar2 = **(long **)(this + 0x10);
  this[0xa0] = (EC2N)0x0;
  pPVar1 = (PolynomialMod2 *)
           (**(code **)(lVar2 + 0x20))
                     (*(long **)(this + 0x10),(PolynomialMod2 *)(param_1 + 8),param_1 + 0x28);
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x80),pPVar1);
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x60),(PolynomialMod2 *)(param_1 + 8));
  return (EC2NPoint *)(this + 0x58);
}


