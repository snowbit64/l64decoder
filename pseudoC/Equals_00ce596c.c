// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Equals
// Entry Point: 00ce596c
// Size: 168 bytes
// Signature: undefined __thiscall Equals(PolynomialMod2 * this, PolynomialMod2 * param_1)


/* CryptoPP::PolynomialMod2::Equals(CryptoPP::PolynomialMod2 const&) const */

bool __thiscall CryptoPP::PolynomialMod2::Equals(PolynomialMod2 *this,PolynomialMod2 *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  bool bVar9;
  int *piVar10;
  long lVar11;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  piVar5 = *(int **)(param_1 + 0x18);
  uVar4 = *(ulong *)(this + 0x10);
  piVar10 = *(int **)(this + 0x18);
  piVar6 = piVar5;
  piVar7 = piVar10;
  uVar8 = uVar3;
  uVar2 = uVar3;
  if (uVar4 <= uVar3) {
    uVar8 = uVar4;
    uVar2 = uVar4;
  }
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    if (*piVar7 != *piVar6) {
      return false;
    }
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  if (uVar3 < uVar4) {
    lVar11 = uVar4 - uVar3;
    piVar10 = piVar10 + uVar3;
    do {
      if (*piVar10 != 0) {
        return false;
      }
      lVar11 = lVar11 + -1;
      piVar10 = piVar10 + 1;
    } while (lVar11 != 0);
  }
  if (uVar4 < uVar3) {
    piVar10 = piVar5 + uVar2;
    lVar11 = ~uVar2 + uVar3;
    do {
      bVar9 = *piVar10 == 0;
      if (*piVar10 != 0) {
        return bVar9;
      }
      bVar1 = lVar11 != 0;
      piVar10 = piVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (bVar1);
    return bVar9;
  }
  return true;
}


