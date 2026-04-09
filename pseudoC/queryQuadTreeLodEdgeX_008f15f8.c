// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: queryQuadTreeLodEdgeX
// Entry Point: 008f15f8
// Size: 76 bytes
// Signature: undefined __cdecl queryQuadTreeLodEdgeX(QuadTreeNode * param_1, uint param_2, uint param_3, uint param_4)


/* GeoQuadTree::queryQuadTreeLodEdgeX(GeoQuadTree::QuadTreeNode const*, unsigned int, unsigned int,
   unsigned int) */

undefined4
GeoQuadTree::queryQuadTreeLodEdgeX(QuadTreeNode *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(char *)(lVar3 + 0x38) != '\0') {
    uVar5 = 0x20 - *(int *)(lVar3 + 0x28);
    uVar4 = param_4 << (ulong)(uVar5 & 0x1f);
    uVar5 = param_3 << (ulong)(uVar5 & 0x1f);
    do {
      uVar1 = uVar4 >> 0x1f;
      uVar2 = uVar5 >> 0x1f;
      uVar5 = uVar5 << 1;
      uVar4 = uVar4 << 1;
      lVar3 = *(long *)(lVar3 + (ulong)uVar1 * 0x10 + (ulong)uVar2 * 8 + 0x40);
    } while (*(char *)(lVar3 + 0x38) != '\0');
  }
  return *(undefined4 *)(lVar3 + 0x30);
}


