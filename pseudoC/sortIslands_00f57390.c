// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortIslands
// Entry Point: 00f57390
// Size: 188 bytes
// Signature: undefined sortIslands(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btUnionFind::sortIslands() */

void btUnionFind::sortIslands(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  btAlignedObjectArray<btElement> *in_x0;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  btUnionFindElementSortPredicate abStack_30 [8];
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(in_x0 + 4);
  if (0 < (int)uVar2) {
    uVar5 = 0;
    lVar6 = *(long *)(in_x0 + 0x10);
    do {
      puVar1 = (uint *)(lVar6 + uVar5 * 8);
      uVar7 = (uint)uVar5;
      uVar9 = (ulong)*puVar1;
      puVar8 = puVar1;
      if (uVar5 != uVar9) {
        do {
          uVar9 = -(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3;
          *puVar8 = *(uint *)(lVar6 + uVar9);
          uVar7 = *(uint *)(lVar6 + uVar9);
          puVar8 = (uint *)(lVar6 + (long)(int)uVar7 * 8);
          uVar3 = *puVar8;
          uVar9 = (ulong)uVar3;
        } while (uVar7 != uVar3);
      }
      uVar5 = uVar5 + 1;
      *puVar1 = uVar7;
    } while (uVar5 != uVar2);
    if (1 < (int)uVar2) {
      btAlignedObjectArray<btElement>::quickSortInternal<btUnionFindElementSortPredicate>
                (in_x0,abStack_30,0,uVar2 - 1);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


