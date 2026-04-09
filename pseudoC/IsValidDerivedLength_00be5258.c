// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsValidDerivedLength
// Entry Point: 00be5258
// Size: 48 bytes
// Signature: undefined __thiscall IsValidDerivedLength(KeyDerivationFunction * this, ulong param_1)


/* CryptoPP::KeyDerivationFunction::IsValidDerivedLength(unsigned long) const */

bool __thiscall
CryptoPP::KeyDerivationFunction::IsValidDerivedLength(KeyDerivationFunction *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x38))();
  return uVar1 == param_1;
}


