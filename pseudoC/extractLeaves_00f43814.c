// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: extractLeaves
// Entry Point: 00f43814
// Size: 300 bytes
// Signature: undefined __cdecl extractLeaves(btDbvtNode * param_1, btAlignedObjectArray * param_2)


/* btDbvt::extractLeaves(btDbvtNode const*, btAlignedObjectArray<btDbvtNode const*>&) */

void btDbvt::extractLeaves(btDbvtNode *param_1,btAlignedObjectArray *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x30);
  while (lVar3 != 0) {
    extractLeaves(*(btDbvtNode **)(param_1 + 0x28),param_2);
    param_1 = *(btDbvtNode **)(param_1 + 0x30);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (uVar2 == *(uint *)(param_2 + 8)) {
    uVar1 = uVar2 << 1;
    if (uVar2 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar2 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar3 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        uVar2 = *(uint *)(param_2 + 4);
      }
      if (0 < (int)uVar2) {
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar2 * 8 - lVar4 != 0);
      }
      if ((*(long *)(param_2 + 0x10) != 0) && (param_2[0x18] != (btAlignedObjectArray)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar2 = *(uint *)(param_2 + 4);
      }
      *(long *)(param_2 + 0x10) = lVar3;
      *(uint *)(param_2 + 8) = uVar1;
      param_2[0x18] = (btAlignedObjectArray)0x1;
    }
  }
  *(btDbvtNode **)(*(long *)(param_2 + 0x10) + (long)(int)uVar2 * 8) = param_1;
  *(uint *)(param_2 + 4) = uVar2 + 1;
  return;
}


