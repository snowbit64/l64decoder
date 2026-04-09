// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deSerializeDouble
// Entry Point: 00f5abe0
// Size: 1160 bytes
// Signature: undefined __thiscall deSerializeDouble(btQuantizedBvh * this, btQuantizedBvhDoubleData * param_1)


/* btQuantizedBvh::deSerializeDouble(btQuantizedBvhDoubleData&) */

void __thiscall
btQuantizedBvh::deSerializeDouble(btQuantizedBvh *this,btQuantizedBvhDoubleData *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  
  dVar19 = *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x20);
  dVar23 = *(double *)(param_1 + 8);
  dVar9 = *(double *)param_1;
  dVar29 = *(double *)(param_1 + 0x18);
  dVar28 = *(double *)(param_1 + 0x10);
  dVar24 = *(double *)(param_1 + 0x48);
  dVar21 = *(double *)(param_1 + 0x40);
  dVar31 = *(double *)(param_1 + 0x58);
  dVar30 = *(double *)(param_1 + 0x50);
  *(ulong *)(this + 0x20) =
       CONCAT44((float)*(double *)(param_1 + 0x38),(float)*(double *)(param_1 + 0x30));
  *(ulong *)(this + 0x18) = CONCAT44((float)dVar19,(float)dVar7);
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 100);
  uVar4 = *(uint *)(param_1 + 0x68);
  uVar17 = (ulong)uVar4;
  *(ulong *)(this + 0x10) = CONCAT44((float)dVar29,(float)dVar28);
  *(ulong *)(this + 8) = CONCAT44((float)dVar23,(float)dVar9);
  uVar5 = *(uint *)(this + 0x6c);
  *(undefined4 *)(this + 0x3c) = uVar2;
  *(ulong *)(this + 0x30) = CONCAT44((float)dVar31,(float)dVar30);
  *(ulong *)(this + 0x28) = CONCAT44((float)dVar24,(float)dVar21);
  this[0x40] = (btQuantizedBvh)(iVar3 != 0);
  if ((int)uVar5 < (int)uVar4) {
    lVar18 = (long)(int)uVar5;
    if (*(int *)(this + 0x70) < (int)uVar4) {
      if (uVar4 == 0) {
        lVar11 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar11 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar4 << 6,0x10);
        uVar5 = *(uint *)(this + 0x6c);
      }
      if (0 < (int)uVar5) {
        lVar16 = 0;
        do {
          puVar12 = (undefined8 *)(lVar11 + lVar16);
          puVar15 = (undefined8 *)(*(long *)(this + 0x78) + lVar16);
          lVar16 = lVar16 + 0x40;
          uVar10 = puVar15[4];
          uVar20 = puVar15[7];
          uVar8 = puVar15[6];
          uVar27 = puVar15[1];
          uVar26 = *puVar15;
          uVar25 = puVar15[3];
          uVar22 = puVar15[2];
          puVar12[5] = puVar15[5];
          puVar12[4] = uVar10;
          puVar12[7] = uVar20;
          puVar12[6] = uVar8;
          puVar12[1] = uVar27;
          *puVar12 = uVar26;
          puVar12[3] = uVar25;
          puVar12[2] = uVar22;
        } while ((ulong)uVar5 * 0x40 - lVar16 != 0);
      }
      if ((*(long *)(this + 0x78) != 0) && (this[0x80] != (btQuantizedBvh)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x78) = lVar11;
      *(uint *)(this + 0x70) = uVar4;
      this[0x80] = (btQuantizedBvh)0x1;
    }
    lVar11 = (int)uVar4 - lVar18;
    lVar18 = lVar18 << 6;
    do {
      lVar11 = lVar11 + -1;
      puVar12 = (undefined8 *)(*(long *)(this + 0x78) + lVar18);
      lVar18 = lVar18 + 0x40;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[7] = 0;
      puVar12[6] = 0;
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
    } while (lVar11 != 0);
  }
  *(uint *)(this + 0x6c) = uVar4;
  if ((uVar4 != 0) && (0 < (int)uVar4)) {
    puVar12 = (undefined8 *)(*(long *)(this + 0x78) + 0x20);
    puVar15 = (undefined8 *)(*(long *)(param_1 + 0x70) + 0x40);
    do {
      dVar21 = (double)puVar15[-3];
      dVar7 = (double)puVar15[-4];
      dVar24 = (double)puVar15[-1];
      dVar23 = (double)puVar15[-2];
      uVar17 = uVar17 - 1;
      dVar19 = (double)puVar15[-7];
      dVar9 = (double)puVar15[-8];
      dVar29 = (double)puVar15[-5];
      dVar28 = (double)puVar15[-6];
      *puVar12 = *puVar15;
      uVar2 = *(undefined4 *)(puVar15 + 1);
      puVar15 = puVar15 + 10;
      puVar12[-3] = CONCAT44((float)dVar29,(float)dVar28);
      puVar12[-4] = CONCAT44((float)dVar19,(float)dVar9);
      puVar12[-1] = CONCAT44((float)dVar24,(float)dVar23);
      puVar12[-2] = CONCAT44((float)dVar21,(float)dVar7);
      *(undefined4 *)(puVar12 + 1) = uVar2;
      puVar12 = puVar12 + 8;
    } while (uVar17 != 0);
  }
  uVar4 = *(uint *)(param_1 + 0x6c);
  uVar17 = (ulong)uVar4;
  uVar5 = *(uint *)(this + 0xac);
  if ((int)uVar5 < (int)uVar4) {
    lVar18 = (long)(int)uVar5;
    if (*(int *)(this + 0xb0) < (int)uVar4) {
      if (uVar4 == 0) {
        lVar11 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar11 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar4 << 4,0x10);
        uVar5 = *(uint *)(this + 0xac);
      }
      if (0 < (int)uVar5) {
        lVar16 = 0;
        do {
          uVar8 = *(undefined8 *)(*(long *)(this + 0xb8) + lVar16);
          ((undefined8 *)(lVar11 + lVar16))[1] =
               ((undefined8 *)(*(long *)(this + 0xb8) + lVar16))[1];
          *(undefined8 *)(lVar11 + lVar16) = uVar8;
          lVar16 = lVar16 + 0x10;
        } while ((ulong)uVar5 * 0x10 - lVar16 != 0);
      }
      if ((*(long *)(this + 0xb8) != 0) && (this[0xc0] != (btQuantizedBvh)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0xb8) = lVar11;
      *(uint *)(this + 0xb0) = uVar4;
      this[0xc0] = (btQuantizedBvh)0x1;
    }
    lVar11 = (int)uVar4 - lVar18;
    lVar18 = lVar18 << 4;
    do {
      lVar11 = lVar11 + -1;
      puVar12 = (undefined8 *)(*(long *)(this + 0xb8) + lVar18);
      lVar18 = lVar18 + 0x10;
      *puVar12 = 0;
      puVar12[1] = 0;
    } while (lVar11 != 0);
  }
  *(uint *)(this + 0xac) = uVar4;
  if ((uVar4 != 0) && (0 < (int)uVar4)) {
    puVar14 = (undefined2 *)(*(long *)(this + 0xb8) + 6);
    puVar13 = (undefined2 *)(*(long *)(param_1 + 0x78) + 6);
    do {
      uVar17 = uVar17 - 1;
      uVar2 = *(undefined4 *)(puVar13 + 3);
      *puVar14 = *puVar13;
      uVar6 = puVar13[1];
      *(undefined4 *)(puVar14 + 3) = uVar2;
      puVar14[1] = uVar6;
      puVar14[2] = puVar13[2];
      puVar14[-3] = puVar13[-3];
      puVar14[-2] = puVar13[-2];
      puVar1 = puVar13 + -1;
      puVar13 = puVar13 + 8;
      puVar14[-1] = *puVar1;
      puVar14 = puVar14 + 8;
    } while (uVar17 != 0);
  }
  uVar4 = *(uint *)(param_1 + 0x84);
  uVar17 = (ulong)uVar4;
  uVar5 = *(uint *)(this + 0xd4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 0x80);
  if (((int)uVar5 < (int)uVar4) && (*(int *)(this + 0xd8) < (int)uVar4)) {
    if (uVar4 == 0) {
      lVar18 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      lVar18 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar4 << 5,0x10);
      uVar5 = *(uint *)(this + 0xd4);
    }
    if (0 < (int)uVar5) {
      lVar11 = 0;
      do {
        puVar12 = (undefined8 *)(lVar18 + lVar11);
        puVar15 = (undefined8 *)(*(long *)(this + 0xe0) + lVar11);
        lVar11 = lVar11 + 0x20;
        uVar10 = *puVar15;
        uVar22 = puVar15[3];
        uVar8 = puVar15[2];
        puVar12[1] = puVar15[1];
        *puVar12 = uVar10;
        puVar12[3] = uVar22;
        puVar12[2] = uVar8;
      } while ((ulong)uVar5 * 0x20 - lVar11 != 0);
    }
    if ((*(long *)(this + 0xe0) != 0) && (this[0xe8] != (btQuantizedBvh)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(long *)(this + 0xe0) = lVar18;
    *(uint *)(this + 0xd8) = uVar4;
    this[0xe8] = (btQuantizedBvh)0x1;
  }
  *(uint *)(this + 0xd4) = uVar4;
  if ((uVar4 != 0) && (0 < (int)uVar4)) {
    puVar14 = (undefined2 *)(*(long *)(this + 0xe0) + 6);
    puVar13 = (undefined2 *)(*(long *)(param_1 + 0x88) + 10);
    do {
      uVar17 = uVar17 - 1;
      uVar8 = *(undefined8 *)(puVar13 + -5);
      *puVar14 = puVar13[2];
      uVar6 = puVar13[3];
      *(undefined8 *)(puVar14 + 3) = uVar8;
      puVar14[1] = uVar6;
      puVar14[2] = puVar13[4];
      puVar14[-3] = puVar13[-1];
      puVar14[-2] = *puVar13;
      puVar1 = puVar13 + 1;
      puVar13 = puVar13 + 10;
      puVar14[-1] = *puVar1;
      puVar14 = puVar14 + 0x10;
    } while (uVar17 != 0);
  }
  return;
}


