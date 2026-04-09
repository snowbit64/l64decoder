// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BitCount
// Entry Point: 00ce3ce0
// Size: 120 bytes
// Signature: undefined BitCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PolynomialMod2::BitCount() const */

int CryptoPP::PolynomialMod2::BitCount(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long in_x0;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  iVar5 = (int)*(ulong *)(in_x0 + 0x10) * -0x20;
  uVar7 = *(ulong *)(in_x0 + 0x10);
  do {
    if (uVar7 == 0) {
      return 0;
    }
    uVar9 = uVar7 - 1;
    lVar1 = uVar7 * 4;
    iVar5 = iVar5 + 0x20;
    uVar7 = uVar9;
  } while (*(int *)(*(long *)(in_x0 + 0x18) + -4 + lVar1) == 0);
  if ((int)uVar9 == -1) {
    return 0;
  }
  uVar3 = *(uint *)(*(long *)(in_x0 + 0x18) + (uVar9 & 0xffffffff) * 4);
  if (uVar3 != 0) {
    uVar8 = 0;
    uVar6 = 0x20;
    do {
      uVar4 = uVar8 + uVar6 >> 1;
      uVar2 = uVar4;
      if (uVar3 >> (ulong)(uVar4 & 0x1f) != 0) {
        uVar2 = uVar6;
        uVar8 = uVar4;
      }
      uVar6 = uVar2;
    } while (1 < uVar2 - uVar8);
    return uVar2 - iVar5;
  }
  return -iVar5;
}


