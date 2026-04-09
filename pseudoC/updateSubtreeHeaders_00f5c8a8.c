// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSubtreeHeaders
// Entry Point: 00f5c8a8
// Size: 732 bytes
// Signature: undefined __thiscall updateSubtreeHeaders(btQuantizedBvh * this, int param_1, int param_2)


/* btQuantizedBvh::updateSubtreeHeaders(int, int) */

void __thiscall btQuantizedBvh::updateSubtreeHeaders(btQuantizedBvh *this,int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar14 = *(long *)(this + 0xb8);
  iVar5 = *(int *)(lVar14 + (long)param_1 * 0x10 + 0xc);
  iVar6 = *(int *)(lVar14 + (long)param_2 * 0x10 + 0xc);
  uVar10 = 1;
  uVar12 = uVar10;
  if (iVar5 < 0) {
    uVar12 = -iVar5;
  }
  if (iVar6 < 0) {
    uVar10 = -iVar6;
  }
  if (uVar12 < 0x81) {
    uVar11 = *(uint *)(this + 0xd4);
    lVar15 = (long)(int)uVar11;
    if (uVar11 == *(uint *)(this + 0xd8)) {
      uVar8 = uVar11 << 1;
      if (uVar11 == 0) {
        uVar8 = 1;
      }
      if ((int)uVar11 < (int)uVar8) {
        if (uVar8 == 0) {
          lVar9 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar9 = (*(code *)PTR_FUN_01048e38)
                            (-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar8 << 5,0x10);
          uVar11 = *(uint *)(this + 0xd4);
        }
        if (0 < (int)uVar11) {
          lVar13 = 0;
          do {
            puVar3 = (undefined8 *)(lVar9 + lVar13);
            puVar4 = (undefined8 *)(*(long *)(this + 0xe0) + lVar13);
            lVar13 = lVar13 + 0x20;
            uVar18 = *puVar4;
            uVar17 = puVar4[3];
            uVar16 = puVar4[2];
            puVar3[1] = puVar4[1];
            *puVar3 = uVar18;
            puVar3[3] = uVar17;
            puVar3[2] = uVar16;
          } while ((ulong)uVar11 * 0x20 - lVar13 != 0);
        }
        if ((*(long *)(this + 0xe0) != 0) && (this[0xe8] != (btQuantizedBvh)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        uVar11 = *(uint *)(this + 0xd4);
        *(long *)(this + 0xe0) = lVar9;
        *(uint *)(this + 0xd8) = uVar8;
        this[0xe8] = (btQuantizedBvh)0x1;
      }
    }
    puVar1 = (undefined2 *)(lVar14 + (long)param_1 * 0x10);
    puVar2 = (undefined2 *)(*(long *)(this + 0xe0) + lVar15 * 0x20);
    uVar7 = *puVar1;
    *(uint *)(this + 0xd4) = uVar11 + 1;
    *puVar2 = uVar7;
    uVar7 = puVar1[1];
    *(int *)(puVar2 + 6) = param_1;
    *(uint *)(puVar2 + 8) = uVar12;
    puVar2[1] = uVar7;
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    puVar2[5] = puVar1[5];
  }
  uVar12 = *(uint *)(this + 0xd4);
  if ((int)uVar10 < 0x81) {
    lVar15 = (long)(int)uVar12;
    if (uVar12 == *(uint *)(this + 0xd8)) {
      uVar11 = uVar12 << 1;
      if (uVar12 == 0) {
        uVar11 = 1;
      }
      if ((int)uVar12 < (int)uVar11) {
        if (uVar11 == 0) {
          lVar9 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar9 = (*(code *)PTR_FUN_01048e38)
                            (-(ulong)(uVar11 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar11 << 5,0x10
                            );
          uVar12 = *(uint *)(this + 0xd4);
        }
        if (0 < (int)uVar12) {
          lVar13 = 0;
          do {
            puVar3 = (undefined8 *)(lVar9 + lVar13);
            puVar4 = (undefined8 *)(*(long *)(this + 0xe0) + lVar13);
            lVar13 = lVar13 + 0x20;
            uVar18 = *puVar4;
            uVar17 = puVar4[3];
            uVar16 = puVar4[2];
            puVar3[1] = puVar4[1];
            *puVar3 = uVar18;
            puVar3[3] = uVar17;
            puVar3[2] = uVar16;
          } while ((ulong)uVar12 * 0x20 - lVar13 != 0);
        }
        if ((*(long *)(this + 0xe0) != 0) && (this[0xe8] != (btQuantizedBvh)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        uVar12 = *(uint *)(this + 0xd4);
        *(long *)(this + 0xe0) = lVar9;
        *(uint *)(this + 0xd8) = uVar11;
        this[0xe8] = (btQuantizedBvh)0x1;
      }
    }
    puVar1 = (undefined2 *)(lVar14 + (long)param_2 * 0x10);
    uVar12 = uVar12 + 1;
    uVar7 = *puVar1;
    puVar2 = (undefined2 *)(*(long *)(this + 0xe0) + lVar15 * 0x20);
    *(uint *)(this + 0xd4) = uVar12;
    *puVar2 = uVar7;
    uVar7 = puVar1[1];
    *(int *)(puVar2 + 6) = param_2;
    *(uint *)(puVar2 + 8) = uVar10;
    puVar2[1] = uVar7;
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    puVar2[5] = puVar1[5];
  }
  *(uint *)(this + 0xf0) = uVar12;
  return;
}


