// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateOverlayLayerIndexes
// Entry Point: 008e87a4
// Size: 96 bytes
// Signature: undefined updateOverlayLayerIndexes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::updateOverlayLayerIndexes() */

void BaseTerrain::updateOverlayLayerIndexes(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_x0;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(in_x0 + 0x20);
  lVar6 = *(long *)(in_x0 + 0x28) - lVar1;
  if (lVar6 != 0) {
    lVar2 = *(long *)(in_x0 + 8);
    lVar3 = *(long *)(in_x0 + 0x10);
    uVar5 = 0;
    uVar7 = (lVar6 >> 3) * -0x79435e50d79435e5;
    do {
      lVar6 = uVar5 * 0x98;
      iVar4 = (int)uVar5;
      uVar5 = (ulong)(iVar4 + 1);
      *(int *)(lVar1 + lVar6) = iVar4 + (int)((ulong)(lVar3 - lVar2) >> 4) * -0x45d1745d;
    } while (uVar5 <= uVar7 && uVar7 - uVar5 != 0);
  }
  return;
}


