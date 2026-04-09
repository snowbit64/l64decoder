// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDetailLayerIndexes
// Entry Point: 008e86fc
// Size: 168 bytes
// Signature: undefined updateDetailLayerIndexes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::updateDetailLayerIndexes() */

void BaseTerrain::updateDetailLayerIndexes(void)

{
  long lVar1;
  long in_x0;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = *(long *)(in_x0 + 8);
  lVar6 = *(long *)(in_x0 + 0x10) - lVar1;
  if (lVar6 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar5 = (lVar6 >> 4) * 0x2e8ba2e8ba2e8ba3;
    do {
      *(int *)(lVar1 + uVar3 * 0xb0) = (int)uVar3;
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 <= uVar5 && uVar5 - uVar3 != 0);
    iVar2 = (int)((ulong)(*(long *)(in_x0 + 0x10) - *(long *)(in_x0 + 8)) >> 4) * -0x45d1745d;
  }
  lVar1 = *(long *)(in_x0 + 0x20);
  lVar6 = *(long *)(in_x0 + 0x28) - lVar1;
  if (lVar6 != 0) {
    uVar3 = 0;
    uVar5 = (lVar6 >> 3) * -0x79435e50d79435e5;
    do {
      lVar6 = uVar3 * 0x98;
      iVar4 = (int)uVar3;
      uVar3 = (ulong)(iVar4 + 1);
      *(int *)(lVar1 + lVar6) = iVar2 + iVar4;
    } while (uVar3 <= uVar5 && uVar5 - uVar3 != 0);
  }
  return;
}


