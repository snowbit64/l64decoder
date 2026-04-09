// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Squared
// Entry Point: 00ce4af4
// Size: 352 bytes
// Signature: undefined Squared(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PolynomialMod2::Squared() const */

void CryptoPP::PolynomialMod2::Squared(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long in_x0;
  undefined4 *puVar5;
  long in_x8;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  uVar6 = (*(ulong *)(in_x0 + 0x10) & 0x3ffffffffffffff) << 1;
  uVar9 = *(ulong *)(in_x0 + 0x10) << 6;
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = uVar6;
  AllocatorBase<unsigned_int>::CheckSize(uVar6);
  if (uVar9 == 0) {
    *(undefined8 *)(in_x8 + 0x18) = 0;
    uVar6 = *(ulong *)(in_x0 + 0x10);
    puVar5 = (undefined4 *)0x0;
  }
  else {
    uVar9 = uVar9 >> 3;
    puVar5 = (undefined4 *)UnalignedAllocate(uVar9);
    *(undefined4 **)(in_x8 + 0x18) = puVar5;
    *puVar5 = 0;
    memset(puVar5 + 1,0,uVar9 - 4);
    uVar6 = *(ulong *)(in_x0 + 0x10);
  }
  if (uVar6 != 0) {
    uVar9 = 0;
    lVar8 = *(long *)(in_x0 + 0x18);
    do {
      puVar1 = (uint *)(lVar8 + uVar9 * 4);
      iVar7 = (int)uVar9;
      uVar4 = iVar7 << 1;
      uVar2 = puVar5[uVar4];
      uVar3 = *(uint *)(&DAT_00543bc0 + ((ulong)*puVar1 & 0xf) * 4);
      puVar5[uVar4] = uVar2 | uVar3;
      uVar2 = uVar2 | uVar3 | *(int *)(&DAT_00543bc0 + ((ulong)(*puVar1 >> 4) & 0xf) * 4) << 8;
      puVar5[uVar4] = uVar2;
      uVar2 = uVar2 | *(int *)(&DAT_00543bc0 + ((ulong)(*puVar1 >> 8) & 0xf) * 4) << 0x10;
      puVar5[uVar4] = uVar2;
      puVar5[uVar4] = uVar2 | *(int *)(&DAT_00543bc0 + ((ulong)(*puVar1 >> 0xc) & 0xf) * 4) << 0x18;
      uVar2 = iVar7 << 1 | 1;
      uVar9 = (ulong)(iVar7 + 1);
      uVar3 = puVar5[uVar2];
      uVar4 = *(uint *)(&DAT_00543bc0 + ((ulong)*(ushort *)((long)puVar1 + 2) & 0xf) * 4);
      puVar5[uVar2] = uVar3 | uVar4;
      uVar3 = uVar3 | uVar4 | *(int *)(&DAT_00543bc0 + ((ulong)(*puVar1 >> 0x14) & 0xf) * 4) << 8;
      puVar5[uVar2] = uVar3;
      uVar3 = uVar3 | *(int *)(&DAT_00543bc0 + ((ulong)*(byte *)((long)puVar1 + 3) & 0xf) * 4) <<
                      0x10;
      puVar5[uVar2] = uVar3;
      puVar5[uVar2] = uVar3 | *(int *)(&DAT_00543bc0 + ((ulong)(*puVar1 >> 0x1a) & 0x3c)) << 0x18;
    } while (uVar9 < uVar6);
  }
  return;
}


