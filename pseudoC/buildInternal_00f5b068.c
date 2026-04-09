// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildInternal
// Entry Point: 00f5b068
// Size: 736 bytes
// Signature: undefined buildInternal(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btQuantizedBvh::buildInternal() */

void btQuantizedBvh::buildInternal(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  btQuantizedBvh *in_x0;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar6 = *(int *)(in_x0 + 0x8c);
  uVar3 = *(uint *)(in_x0 + 0xac);
  iVar9 = (int)((long)iVar6 << 1);
  in_x0[0x40] = (btQuantizedBvh)0x1;
  if ((int)uVar3 < iVar9) {
    lVar11 = (long)(int)uVar3;
    if (*(int *)(in_x0 + 0xb0) < iVar9) {
      if (iVar6 == 0) {
        lVar5 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar5 = (*(code *)PTR_FUN_01048e38)((long)iVar6 << 5,0x10);
        uVar3 = *(uint *)(in_x0 + 0xac);
      }
      if (0 < (int)uVar3) {
        lVar7 = 0;
        do {
          uVar12 = *(undefined8 *)(*(long *)(in_x0 + 0xb8) + lVar7);
          ((undefined8 *)(lVar5 + lVar7))[1] = ((undefined8 *)(*(long *)(in_x0 + 0xb8) + lVar7))[1];
          *(undefined8 *)(lVar5 + lVar7) = uVar12;
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar3 * 0x10 - lVar7 != 0);
      }
      if ((*(long *)(in_x0 + 0xb8) != 0) && (in_x0[0xc0] != (btQuantizedBvh)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(in_x0 + 0xb8) = lVar5;
      *(int *)(in_x0 + 0xb0) = iVar9;
      in_x0[0xc0] = (btQuantizedBvh)0x1;
    }
    lVar5 = lVar11 << 4;
    lVar11 = iVar9 - lVar11;
    do {
      lVar11 = lVar11 + -1;
      puVar1 = (undefined8 *)(*(long *)(in_x0 + 0xb8) + lVar5);
      lVar5 = lVar5 + 0x10;
      *puVar1 = 0;
      puVar1[1] = 0;
    } while (lVar11 != 0);
  }
  *(int *)(in_x0 + 0xac) = iVar9;
  *(undefined4 *)(in_x0 + 0x3c) = 0;
  buildTree(in_x0,0,iVar6);
  iVar6 = *(int *)(in_x0 + 0xd4);
  if ((in_x0[0x40] != (btQuantizedBvh)0x0) && (iVar6 == 0)) {
    if (*(int *)(in_x0 + 0xd8) == 0) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      puVar10 = (undefined2 *)(*(code *)PTR_FUN_01048e38)(0x20,0x10);
      uVar3 = *(uint *)(in_x0 + 0xd4);
      if (0 < (int)uVar3) {
        lVar11 = 0;
        do {
          puVar1 = (undefined8 *)((long)puVar10 + lVar11);
          puVar2 = (undefined8 *)(*(long *)(in_x0 + 0xe0) + lVar11);
          lVar11 = lVar11 + 0x20;
          uVar14 = *puVar2;
          uVar13 = puVar2[3];
          uVar12 = puVar2[2];
          puVar1[1] = puVar2[1];
          *puVar1 = uVar14;
          puVar1[3] = uVar13;
          puVar1[2] = uVar12;
        } while ((ulong)uVar3 * 0x20 - lVar11 != 0);
      }
      if ((*(long *)(in_x0 + 0xe0) != 0) && (in_x0[0xe8] != (btQuantizedBvh)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined2 **)(in_x0 + 0xe0) = puVar10;
      iVar6 = *(int *)(in_x0 + 0xd4) + 1;
      in_x0[0xe8] = (btQuantizedBvh)0x1;
      *(undefined4 *)(in_x0 + 0xd8) = 1;
    }
    else {
      puVar10 = *(undefined2 **)(in_x0 + 0xe0);
      iVar6 = 1;
    }
    puVar8 = *(undefined2 **)(in_x0 + 0xb8);
    *(int *)(in_x0 + 0xd4) = iVar6;
    iVar4 = *(int *)(puVar8 + 6);
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
    puVar10[2] = puVar8[2];
    puVar10[3] = puVar8[3];
    puVar10[4] = puVar8[4];
    iVar9 = 1;
    if (iVar4 < 0) {
      iVar9 = -iVar4;
    }
    puVar10[5] = puVar8[5];
    *(undefined4 *)(puVar10 + 6) = 0;
    *(int *)(puVar10 + 8) = iVar9;
  }
  *(int *)(in_x0 + 0xf0) = iVar6;
  if ((*(long *)(in_x0 + 0x98) != 0) && (in_x0[0xa0] != (btQuantizedBvh)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(in_x0 + 0x98) = 0;
  *(undefined4 *)(in_x0 + 0x8c) = 0;
  *(undefined4 *)(in_x0 + 0x90) = 0;
  in_x0[0xa0] = (btQuantizedBvh)0x1;
  if ((*(long *)(in_x0 + 0x58) != 0) && (in_x0[0x60] != (btQuantizedBvh)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  in_x0[0x60] = (btQuantizedBvh)0x1;
  *(undefined8 *)(in_x0 + 0x58) = 0;
  *(undefined4 *)(in_x0 + 0x4c) = 0;
  *(undefined4 *)(in_x0 + 0x50) = 0;
  return;
}


