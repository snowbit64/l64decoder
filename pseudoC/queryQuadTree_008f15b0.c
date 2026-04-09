// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: queryQuadTree
// Entry Point: 008f15b0
// Size: 72 bytes
// Signature: undefined __thiscall queryQuadTree(GeoQuadTree * this, uint param_1, uint param_2)


/* GeoQuadTree::queryQuadTree(unsigned int, unsigned int) */

void __thiscall GeoQuadTree::queryQuadTree(GeoQuadTree *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  lVar3 = *(long *)(this + 8);
  if (*(char *)(lVar3 + 0x38) != '\0') {
    uVar5 = 0x20 - *(int *)(lVar3 + 0x28);
    uVar4 = param_2 << (ulong)(uVar5 & 0x1f);
    uVar5 = param_1 << (ulong)(uVar5 & 0x1f);
    do {
      uVar1 = uVar4 >> 0x1f;
      uVar2 = uVar5 >> 0x1f;
      uVar5 = uVar5 << 1;
      uVar4 = uVar4 << 1;
      lVar3 = *(long *)(lVar3 + (ulong)uVar1 * 0x10 + (ulong)uVar2 * 8 + 0x40);
    } while (*(char *)(lVar3 + 0x38) != '\0');
  }
  return;
}


