// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ValidateParameters
// Entry Point: 00cd09b4
// Size: 176 bytes
// Signature: undefined __thiscall ValidateParameters(EC2N * this, RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::EC2N::ValidateParameters(CryptoPP::RandomNumberGenerator&, unsigned int) const */

ulong __thiscall
CryptoPP::EC2N::ValidateParameters(EC2N *this,RandomNumberGenerator *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = PolynomialMod2::operator!((PolynomialMod2 *)(this + 0x38));
  if ((uVar2 & 1) == 0) {
    uVar1 = PolynomialMod2::BitCount();
    if (*(uint *)(*(long *)(this + 0x10) + 0x90) < uVar1) {
      return 0;
    }
    uVar1 = PolynomialMod2::BitCount();
    uVar2 = (ulong)(param_2 == 0 && uVar1 <= *(uint *)(*(long *)(this + 0x10) + 0x90));
    if ((param_2 != 0) && (uVar1 <= *(uint *)(*(long *)(this + 0x10) + 0x90))) {
      uVar2 = PolynomialMod2::IsIrreducible();
      return uVar2;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


