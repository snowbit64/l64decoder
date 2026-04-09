// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsUnit
// Entry Point: 00ce9534
// Size: 56 bytes
// Signature: undefined __thiscall IsUnit(GF2NP * this, PolynomialMod2 * param_1)


/* CryptoPP::GF2NP::IsUnit(CryptoPP::PolynomialMod2 const&) const */

bool __thiscall CryptoPP::GF2NP::IsUnit(GF2NP *this,PolynomialMod2 *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      iVar1 = *(int *)(*(long *)(param_1 + 0x18) + uVar3 * 4);
      uVar3 = (ulong)((int)uVar3 + 1);
    } while ((iVar1 == 0 && uVar3 <= uVar2) && (iVar1 != 0 || uVar2 != uVar3));
    return iVar1 != 0;
  }
  return false;
}


