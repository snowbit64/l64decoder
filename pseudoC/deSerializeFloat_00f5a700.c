// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deSerializeFloat
// Entry Point: 00f5a700
// Size: 1248 bytes
// Signature: undefined __thiscall deSerializeFloat(btQuantizedBvh * this, btQuantizedBvhFloatData * param_1)


/* btQuantizedBvh::deSerializeFloat(btQuantizedBvhFloatData&) */

void __thiscall
btQuantizedBvh::deSerializeFloat(btQuantizedBvh *this,btQuantizedBvhFloatData *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  iVar5 = *(int *)(param_1 + 0x34);
  uVar6 = *(uint *)(param_1 + 0x38);
  uVar15 = (ulong)uVar6;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x10);
  uVar17 = *(undefined4 *)(param_1 + 0x14);
  uVar7 = *(uint *)(this + 0x6c);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x1c) = uVar17;
  uVar17 = *(undefined4 *)(param_1 + 0x18);
  this[0x40] = (btQuantizedBvh)(iVar5 != 0);
  *(undefined4 *)(this + 0x20) = uVar17;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  if ((int)uVar7 < (int)uVar6) {
    lVar16 = (long)(int)uVar7;
    if (*(int *)(this + 0x70) < (int)uVar6) {
      if (uVar6 == 0) {
        lVar9 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar9 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar6 << 6,0x10);
        uVar7 = *(uint *)(this + 0x6c);
      }
      if (0 < (int)uVar7) {
        lVar14 = 0;
        do {
          puVar3 = (undefined8 *)(lVar9 + lVar14);
          puVar4 = (undefined8 *)(*(long *)(this + 0x78) + lVar14);
          lVar14 = lVar14 + 0x40;
          uVar20 = puVar4[4];
          uVar19 = puVar4[7];
          uVar21 = puVar4[6];
          uVar25 = puVar4[1];
          uVar24 = *puVar4;
          uVar23 = puVar4[3];
          uVar22 = puVar4[2];
          puVar3[5] = puVar4[5];
          puVar3[4] = uVar20;
          puVar3[7] = uVar19;
          puVar3[6] = uVar21;
          puVar3[1] = uVar25;
          *puVar3 = uVar24;
          puVar3[3] = uVar23;
          puVar3[2] = uVar22;
        } while ((ulong)uVar7 * 0x40 - lVar14 != 0);
      }
      if ((*(long *)(this + 0x78) != 0) && (this[0x80] != (btQuantizedBvh)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x78) = lVar9;
      *(uint *)(this + 0x70) = uVar6;
      this[0x80] = (btQuantizedBvh)0x1;
    }
    lVar9 = (int)uVar6 - lVar16;
    lVar16 = lVar16 << 6;
    do {
      lVar9 = lVar9 + -1;
      puVar3 = (undefined8 *)(*(long *)(this + 0x78) + lVar16);
      lVar16 = lVar16 + 0x40;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
    } while (lVar9 != 0);
  }
  *(uint *)(this + 0x6c) = uVar6;
  if ((uVar6 != 0) && (0 < (int)uVar6)) {
    puVar10 = (undefined4 *)(*(long *)(this + 0x78) + 0x14);
    puVar13 = (undefined4 *)(*(long *)(param_1 + 0x40) + 0x14);
    do {
      uVar15 = uVar15 - 1;
      uVar21 = *(undefined8 *)(puVar13 + 3);
      puVar10[-1] = puVar13[-1];
      uVar18 = *puVar13;
      *(undefined8 *)(puVar10 + 3) = uVar21;
      uVar17 = puVar13[5];
      *puVar10 = uVar18;
      uVar18 = puVar13[1];
      puVar10[5] = uVar17;
      puVar10[1] = uVar18;
      puVar10[2] = puVar13[2];
      puVar10[-5] = puVar13[-5];
      puVar10[-4] = puVar13[-4];
      puVar10[-3] = puVar13[-3];
      puVar1 = puVar13 + -2;
      puVar13 = puVar13 + 0xc;
      puVar10[-2] = *puVar1;
      puVar10 = puVar10 + 0x10;
    } while (uVar15 != 0);
  }
  uVar6 = *(uint *)(param_1 + 0x3c);
  uVar15 = (ulong)uVar6;
  uVar7 = *(uint *)(this + 0xac);
  if ((int)uVar7 < (int)uVar6) {
    lVar16 = (long)(int)uVar7;
    if (*(int *)(this + 0xb0) < (int)uVar6) {
      if (uVar6 == 0) {
        lVar9 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar9 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar6 << 4,0x10);
        uVar7 = *(uint *)(this + 0xac);
      }
      if (0 < (int)uVar7) {
        lVar14 = 0;
        do {
          uVar21 = *(undefined8 *)(*(long *)(this + 0xb8) + lVar14);
          ((undefined8 *)(lVar9 + lVar14))[1] = ((undefined8 *)(*(long *)(this + 0xb8) + lVar14))[1]
          ;
          *(undefined8 *)(lVar9 + lVar14) = uVar21;
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar7 * 0x10 - lVar14 != 0);
      }
      if ((*(long *)(this + 0xb8) != 0) && (this[0xc0] != (btQuantizedBvh)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0xb8) = lVar9;
      *(uint *)(this + 0xb0) = uVar6;
      this[0xc0] = (btQuantizedBvh)0x1;
    }
    lVar9 = (int)uVar6 - lVar16;
    lVar16 = lVar16 << 4;
    do {
      lVar9 = lVar9 + -1;
      puVar3 = (undefined8 *)(*(long *)(this + 0xb8) + lVar16);
      lVar16 = lVar16 + 0x10;
      *puVar3 = 0;
      puVar3[1] = 0;
    } while (lVar9 != 0);
  }
  *(uint *)(this + 0xac) = uVar6;
  if ((uVar6 != 0) && (0 < (int)uVar6)) {
    puVar12 = (undefined2 *)(*(long *)(this + 0xb8) + 6);
    puVar11 = (undefined2 *)(*(long *)(param_1 + 0x48) + 6);
    do {
      uVar15 = uVar15 - 1;
      uVar17 = *(undefined4 *)(puVar11 + 3);
      *puVar12 = *puVar11;
      uVar8 = puVar11[1];
      *(undefined4 *)(puVar12 + 3) = uVar17;
      puVar12[1] = uVar8;
      puVar12[2] = puVar11[2];
      puVar12[-3] = puVar11[-3];
      puVar12[-2] = puVar11[-2];
      puVar2 = puVar11 + -1;
      puVar11 = puVar11 + 8;
      puVar12[-1] = *puVar2;
      puVar12 = puVar12 + 8;
    } while (uVar15 != 0);
  }
  uVar6 = *(uint *)(param_1 + 0x5c);
  uVar15 = (ulong)uVar6;
  uVar7 = *(uint *)(this + 0xd4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 0x58);
  if (((int)uVar7 < (int)uVar6) && (*(int *)(this + 0xd8) < (int)uVar6)) {
    if (uVar6 == 0) {
      lVar16 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      lVar16 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar6 << 5,0x10);
      uVar7 = *(uint *)(this + 0xd4);
    }
    if (0 < (int)uVar7) {
      lVar9 = 0;
      do {
        puVar3 = (undefined8 *)(lVar16 + lVar9);
        puVar4 = (undefined8 *)(*(long *)(this + 0xe0) + lVar9);
        lVar9 = lVar9 + 0x20;
        uVar20 = *puVar4;
        uVar19 = puVar4[3];
        uVar21 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar20;
        puVar3[3] = uVar19;
        puVar3[2] = uVar21;
      } while ((ulong)uVar7 * 0x20 - lVar9 != 0);
    }
    if ((*(long *)(this + 0xe0) != 0) && (this[0xe8] != (btQuantizedBvh)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(long *)(this + 0xe0) = lVar16;
    *(uint *)(this + 0xd8) = uVar6;
    this[0xe8] = (btQuantizedBvh)0x1;
  }
  *(uint *)(this + 0xd4) = uVar6;
  if ((uVar6 != 0) && (0 < (int)uVar6)) {
    puVar12 = (undefined2 *)(*(long *)(this + 0xe0) + 6);
    puVar11 = (undefined2 *)(*(long *)(param_1 + 0x50) + 10);
    do {
      uVar15 = uVar15 - 1;
      uVar21 = *(undefined8 *)(puVar11 + -5);
      *puVar12 = puVar11[2];
      uVar8 = puVar11[3];
      *(undefined8 *)(puVar12 + 3) = uVar21;
      puVar12[1] = uVar8;
      puVar12[2] = puVar11[4];
      puVar12[-3] = puVar11[-1];
      puVar12[-2] = *puVar11;
      puVar2 = puVar11 + 1;
      puVar11 = puVar11 + 10;
      puVar12[-1] = *puVar2;
      puVar12 = puVar12 + 0x10;
    } while (uVar15 != 0);
  }
  return;
}


