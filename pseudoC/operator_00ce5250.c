// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator!
// Entry Point: 00ce5250
// Size: 64 bytes
// Signature: undefined __thiscall operator!(PolynomialMod2 * this)


/* CryptoPP::PolynomialMod2::TEMPNAMEPLACEHOLDERVALUE() const */

bool __thiscall CryptoPP::PolynomialMod2::operator!(PolynomialMod2 *this)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(ulong *)(this + 0x10) == 0) {
    return true;
  }
  uVar2 = 1;
  uVar5 = 0;
  do {
    uVar4 = uVar2;
    iVar1 = *(int *)(*(long *)(this + 0x18) + uVar5 * 4);
    bVar3 = iVar1 == 0;
    if (iVar1 != 0) {
      return bVar3;
    }
    uVar2 = (ulong)((int)uVar4 + 1);
    uVar5 = uVar4;
  } while (uVar4 < *(ulong *)(this + 0x10));
  return bVar3;
}


