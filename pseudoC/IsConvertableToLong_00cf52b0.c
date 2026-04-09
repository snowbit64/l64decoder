// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsConvertableToLong
// Entry Point: 00cf52b0
// Size: 152 bytes
// Signature: undefined IsConvertableToLong(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Integer::IsConvertableToLong() const */

bool CryptoPP::Integer::IsConvertableToLong(void)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  long in_x0;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  plVar3 = *(long **)(in_x0 + 0x20);
  iVar6 = (int)*(ulong *)(in_x0 + 0x18) * -4;
  uVar8 = *(ulong *)(in_x0 + 0x18);
  do {
    if (uVar8 == 0) goto LAB_00cf5328;
    uVar11 = uVar8 - 1;
    lVar1 = uVar8 * 4;
    iVar6 = iVar6 + 4;
    uVar8 = uVar11;
  } while (*(int *)((long)plVar3 + lVar1 + -4) == 0);
  if ((int)uVar11 != -1) {
    uVar7 = *(uint *)((long)plVar3 + (uVar11 & 0xffffffff) * 4);
    if (uVar7 != 0) {
      uVar9 = 0;
      uVar10 = 0x20;
      do {
        uVar4 = uVar9 + uVar10 >> 1;
        uVar2 = uVar4;
        if (uVar7 >> (ulong)(uVar4 & 0x1f) != 0) {
          uVar2 = uVar10;
          uVar9 = uVar4;
        }
        uVar10 = uVar2;
      } while (8 < uVar2 - uVar9);
      uVar7 = uVar2 >> 3;
    }
    if (8 < uVar7 - iVar6) {
      return false;
    }
  }
LAB_00cf5328:
  bVar5 = -1 < *plVar3;
  if (*(int *)(in_x0 + 0x28) != 0) {
    bVar5 = 0 < *plVar3;
  }
  return bVar5;
}


