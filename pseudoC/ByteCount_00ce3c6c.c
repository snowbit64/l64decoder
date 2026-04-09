// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ByteCount
// Entry Point: 00ce3c6c
// Size: 116 bytes
// Signature: undefined ByteCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PolynomialMod2::ByteCount() const */

int CryptoPP::PolynomialMod2::ByteCount(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long in_x0;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  iVar4 = (int)*(ulong *)(in_x0 + 0x10) * -4;
  uVar7 = *(ulong *)(in_x0 + 0x10);
  do {
    if (uVar7 == 0) {
      return 0;
    }
    uVar9 = uVar7 - 1;
    lVar1 = uVar7 * 4;
    iVar4 = iVar4 + 4;
    uVar7 = uVar9;
  } while (*(int *)(*(long *)(in_x0 + 0x18) + -4 + lVar1) == 0);
  if ((int)uVar9 == -1) {
    return 0;
  }
  uVar5 = *(uint *)(*(long *)(in_x0 + 0x18) + (uVar9 & 0xffffffff) * 4);
  if (uVar5 != 0) {
    uVar6 = 0;
    uVar8 = 0x20;
    do {
      uVar3 = uVar6 + uVar8 >> 1;
      uVar2 = uVar3;
      if (uVar5 >> (ulong)(uVar3 & 0x1f) != 0) {
        uVar2 = uVar8;
        uVar6 = uVar3;
      }
      uVar8 = uVar2;
    } while (8 < uVar2 - uVar6);
    uVar5 = uVar2 >> 3;
  }
  return uVar5 - iVar4;
}


