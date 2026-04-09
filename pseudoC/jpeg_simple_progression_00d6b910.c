// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_simple_progression
// Entry Point: 00d6b910
// Size: 1740 bytes
// Signature: undefined jpeg_simple_progression(void)


void jpeg_simple_progression(long *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  code **ppcVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined4 *puVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar1 = *(uint *)((long)param_1 + 0x5c);
  if (*(int *)((long)param_1 + 0x24) != 100) {
    lVar13 = *param_1;
    *(int *)(lVar13 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar11 = (code **)*param_1;
    *(undefined4 *)(lVar13 + 0x28) = 0x15;
    (**ppcVar11)(param_1);
  }
  if (uVar1 == 3) {
    if ((*(uint *)(param_1 + 0xc) | 4) == 7) {
      uVar28 = 10;
      puVar3 = (undefined8 *)param_1[0x45];
    }
    else {
LAB_00d6b998:
      uVar28 = uVar1 << 2 | 2;
      puVar3 = (undefined8 *)param_1[0x45];
    }
    if (puVar3 == (undefined8 *)0x0) goto LAB_00d6b9b4;
LAB_00d6b9a8:
    if (*(int *)(param_1 + 0x46) < (int)uVar28) goto LAB_00d6b9b4;
  }
  else {
    if ((int)uVar1 < 5) goto LAB_00d6b998;
    uVar28 = uVar1 * 6;
    puVar3 = (undefined8 *)param_1[0x45];
    if (puVar3 != (undefined8 *)0x0) goto LAB_00d6b9a8;
LAB_00d6b9b4:
    uVar10 = uVar28;
    if ((int)uVar28 < 0xb) {
      uVar10 = 10;
    }
    pcVar14 = *(code **)param_1[1];
    *(uint *)(param_1 + 0x46) = uVar10;
    puVar3 = (undefined8 *)(*pcVar14)(param_1,0,(ulong)uVar10 * 0x24);
    param_1[0x45] = (long)puVar3;
  }
  param_1[0x23] = (long)puVar3;
  *(uint *)(param_1 + 0x22) = uVar28;
  if (uVar1 == 3) {
    bVar2 = (*(uint *)(param_1 + 0xc) | 4) != 7;
    if (bVar2) {
      puVar3[1] = 0x200000001;
      *puVar3 = 3;
      *(undefined8 *)((long)puVar3 + 0x1c) = 0x100000000;
      *(undefined8 *)((long)puVar3 + 0x14) = 0;
      uVar31 = 0x3f00000006;
      uVar22 = 0;
      *(undefined8 *)((long)puVar3 + 0x6c) = 0x200000001;
      uVar30 = 0x100000002;
      puVar3[8] = 0x200000000;
      puVar3[7] = 0x500000001;
      puVar3[9] = 0x100000001;
      uVar29 = 2;
      *(undefined8 *)((long)puVar3 + 100) = 0x200000000;
      *(undefined8 *)((long)puVar3 + 0x5c) = 0x500000001;
      lVar18 = 0xd;
      puVar3[0x11] = 0x200000000;
      puVar3[0x10] = 0x500000001;
      lVar23 = 0xc;
      lVar25 = 0xb;
      lVar5 = 10;
      lVar13 = 9;
      lVar6 = 8;
      lVar9 = 7;
      lVar8 = 6;
      lVar26 = 5;
      lVar7 = 4;
      uVar4 = 1;
      *(undefined8 *)((long)puVar3 + 0x24) = 1;
      puVar3[0x12] = 1;
      uVar32 = uVar31;
    }
    else {
      lVar7 = 0;
      uVar31 = 0;
      lVar8 = 2;
      uVar30 = 0x200000000;
      uVar4 = 6;
      uVar29 = 1;
      lVar18 = 9;
      lVar23 = 8;
      lVar25 = 7;
      lVar13 = 5;
      lVar6 = 4;
      lVar9 = 3;
      lVar26 = 1;
      lVar5 = 6;
      uVar22 = 2;
      puVar3[1] = 0x200000001;
      *puVar3 = 3;
      uVar32 = 0x500000001;
    }
    puVar27 = (undefined4 *)((long)puVar3 + lVar26 * 0x24);
    *(undefined8 *)((long)puVar3 + lVar7 * 0x24 + 0x14) = uVar31;
    puVar15 = (undefined8 *)((long)puVar3 + lVar8 * 0x24);
    *(undefined4 *)((long)puVar3 + lVar7 * 0x24 + 0x1c) = 0;
    *(undefined4 *)((long)puVar3 + lVar7 * 0x24 + 0x20) = uVar29;
    *puVar27 = 1;
    puVar27[1] = (uint)bVar2;
    *(undefined8 *)(puVar27 + 5) = uVar32;
    *puVar15 = 0x200000001;
    puVar21 = (undefined4 *)((long)puVar3 + lVar9 * 0x24);
    *(int *)((long)puVar15 + 0x14) = (int)uVar32;
    *(undefined4 *)(puVar15 + 4) = uVar29;
    puVar15[3] = 0x3f;
    puVar16 = (undefined4 *)((long)puVar3 + lVar6 * 0x24);
    *(undefined8 *)(puVar27 + 7) = 0x200000000;
    *puVar21 = 1;
    puVar21[1] = (uint)!bVar2;
    *(undefined8 *)(puVar21 + 5) = 0x3f00000001;
    uVar29 = (undefined4)uVar30;
    puVar21[7] = uVar29;
    puVar21[8] = 1;
    *puVar16 = 1;
    puVar16[1] = (uint)bVar2;
    puVar21 = (undefined4 *)((long)puVar3 + lVar13 * 0x24);
    *(undefined8 *)(puVar16 + 7) = uVar30;
    puVar16[5] = uVar4;
    puVar16[6] = 0x3f;
    puVar15 = (undefined8 *)((long)puVar3 + lVar5 * 0x24);
    *(undefined8 *)(puVar21 + 7) = 0x100000002;
    *(undefined8 *)(puVar21 + 5) = 0x3f00000001;
    *puVar21 = 1;
    puVar16 = (undefined4 *)((long)puVar3 + lVar25 * 0x24);
    puVar21[1] = uVar29;
    puVar21 = (undefined4 *)((long)puVar3 + lVar18 * 0x24);
    puVar15[1] = 0x200000001;
    *puVar15 = 3;
    *(undefined8 *)((long)puVar15 + 0x1c) = 1;
    *(undefined8 *)((long)puVar15 + 0x14) = 0;
    puVar3 = (undefined8 *)((long)puVar3 + lVar23 * 0x24);
    *puVar16 = 1;
    puVar16[1] = uVar22;
    *(undefined8 *)(puVar16 + 7) = 1;
    *(undefined8 *)(puVar16 + 5) = 0x3f00000001;
    *puVar21 = 1;
    *(undefined8 *)((long)puVar3 + 0x1c) = 1;
    *(undefined8 *)((long)puVar3 + 0x14) = 0x3f00000001;
    *puVar3 = 0x100000001;
    puVar21[1] = uVar29;
    *(undefined8 *)(puVar21 + 7) = 1;
    *(undefined8 *)(puVar21 + 5) = 0x3f00000001;
    return;
  }
  if ((int)uVar1 < 5) {
    *(uint *)puVar3 = uVar1;
    if ((((0 < (int)uVar1) && (*(undefined4 *)((long)puVar3 + 4) = 0, uVar1 != 1)) &&
        (*(undefined4 *)(puVar3 + 1) = 1, uVar1 != 2)) &&
       (*(undefined4 *)((long)puVar3 + 0xc) = 2, uVar1 != 3)) {
      *(undefined4 *)(puVar3 + 2) = 3;
    }
    puVar15 = (undefined8 *)((long)puVar3 + 0x24);
    *(undefined8 *)((long)puVar3 + 0x1c) = 0x100000000;
    *(undefined8 *)((long)puVar3 + 0x14) = 0;
  }
  else {
    uVar12 = (ulong)(uVar1 - 1);
    if (uVar1 - 1 != 0) {
      uVar19 = uVar12 + 1;
      uVar12 = uVar19 & 0x1fffffffe;
      uVar24 = 0;
      puVar15 = (undefined8 *)((long)puVar3 + uVar12 * 0x24);
      puVar16 = (undefined4 *)((long)puVar3 + 0x24);
      do {
        iVar17 = (int)uVar24;
        puVar16[-9] = 1;
        puVar16[-8] = iVar17;
        uVar24 = uVar24 + 2;
        *(undefined8 *)(puVar16 + -2) = 0x100000000;
        *(undefined8 *)(puVar16 + -4) = 0;
        *(undefined8 *)(puVar16 + 7) = 0x100000000;
        *(undefined8 *)(puVar16 + 5) = 0;
        *puVar16 = 1;
        puVar16[1] = iVar17 + 1;
        puVar16 = puVar16 + 0x12;
      } while (uVar12 != uVar24);
      puVar3 = puVar15;
      if (uVar19 == uVar12) goto LAB_00d6bcd8;
    }
    do {
      *(undefined4 *)puVar3 = 1;
      *(int *)((long)puVar3 + 4) = (int)uVar12;
      uVar28 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar28;
      *(undefined8 *)((long)puVar3 + 0x1c) = 0x100000000;
      *(undefined8 *)((long)puVar3 + 0x14) = 0;
      puVar15 = (undefined8 *)((long)puVar3 + 0x24);
      puVar3 = puVar15;
    } while (uVar1 != uVar28);
  }
LAB_00d6bcd8:
  uVar28 = uVar1 - 1;
  if ((int)uVar1 < 1) {
    *(uint *)puVar15 = uVar1;
  }
  else {
    uVar12 = (ulong)uVar28 + 1;
    if (uVar28 == 0) {
      uVar19 = 0;
LAB_00d6bd4c:
      do {
        *(undefined4 *)puVar15 = 1;
        *(int *)((long)puVar15 + 4) = (int)uVar19;
        uVar10 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar10;
        *(undefined8 *)((long)puVar15 + 0x1c) = 0x200000000;
        *(undefined8 *)((long)puVar15 + 0x14) = 0x500000001;
        puVar3 = (undefined8 *)((long)puVar15 + 0x24);
        puVar15 = puVar3;
      } while (uVar1 != uVar10);
    }
    else {
      uVar19 = uVar12 & 0x1fffffffe;
      uVar24 = 0;
      puVar3 = (undefined8 *)((long)puVar15 + uVar19 * 0x24);
      puVar16 = (undefined4 *)((long)puVar15 + 0x24);
      do {
        iVar17 = (int)uVar24;
        puVar16[-9] = 1;
        puVar16[-8] = iVar17;
        uVar24 = uVar24 + 2;
        *(undefined8 *)(puVar16 + -2) = 0x200000000;
        *(undefined8 *)(puVar16 + -4) = 0x500000001;
        *(undefined8 *)(puVar16 + 7) = 0x200000000;
        *(undefined8 *)(puVar16 + 5) = 0x500000001;
        *puVar16 = 1;
        puVar16[1] = iVar17 + 1;
        puVar16 = puVar16 + 0x12;
      } while (uVar19 != uVar24);
      puVar15 = puVar3;
      if (uVar12 != uVar19) goto LAB_00d6bd4c;
    }
    if (uVar28 == 0) {
      uVar19 = 0;
LAB_00d6bdc4:
      do {
        *(undefined4 *)puVar3 = 1;
        *(int *)((long)puVar3 + 4) = (int)uVar19;
        uVar10 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar10;
        *(undefined8 *)((long)puVar3 + 0x1c) = 0x200000000;
        *(undefined8 *)((long)puVar3 + 0x14) = 0x3f00000006;
        puVar20 = (undefined8 *)((long)puVar3 + 0x24);
        puVar3 = puVar20;
      } while (uVar1 != uVar10);
    }
    else {
      uVar19 = uVar12 & 0x1fffffffe;
      uVar24 = 0;
      puVar20 = (undefined8 *)((long)puVar3 + uVar19 * 0x24);
      puVar16 = (undefined4 *)((long)puVar3 + 0x24);
      do {
        iVar17 = (int)uVar24;
        puVar16[-9] = 1;
        puVar16[-8] = iVar17;
        uVar24 = uVar24 + 2;
        *(undefined8 *)(puVar16 + -2) = 0x200000000;
        *(undefined8 *)(puVar16 + -4) = 0x3f00000006;
        *(undefined8 *)(puVar16 + 7) = 0x200000000;
        *(undefined8 *)(puVar16 + 5) = 0x3f00000006;
        *puVar16 = 1;
        puVar16[1] = iVar17 + 1;
        puVar16 = puVar16 + 0x12;
      } while (uVar19 != uVar24);
      puVar3 = puVar20;
      if (uVar12 != uVar19) goto LAB_00d6bdc4;
    }
    if (uVar28 == 0) {
      uVar19 = 0;
      puVar15 = puVar20;
LAB_00d6bea0:
      do {
        *(undefined4 *)puVar15 = 1;
        *(int *)((long)puVar15 + 4) = (int)uVar19;
        uVar10 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar10;
        *(undefined8 *)((long)puVar15 + 0x1c) = 0x100000002;
        *(undefined8 *)((long)puVar15 + 0x14) = 0x3f00000001;
        puVar15 = (undefined8 *)((long)puVar15 + 0x24);
        puVar3 = puVar15;
      } while (uVar1 != uVar10);
    }
    else {
      uVar19 = uVar12 & 0x1fffffffe;
      uVar24 = 0;
      puVar15 = (undefined8 *)((long)puVar20 + uVar19 * 0x24);
      puVar16 = (undefined4 *)((long)puVar20 + 0x24);
      do {
        iVar17 = (int)uVar24;
        puVar16[-9] = 1;
        puVar16[-8] = iVar17;
        uVar24 = uVar24 + 2;
        *(undefined8 *)(puVar16 + -2) = 0x100000002;
        *(undefined8 *)(puVar16 + -4) = 0x3f00000001;
        *(undefined8 *)(puVar16 + 7) = 0x100000002;
        *(undefined8 *)(puVar16 + 5) = 0x3f00000001;
        *puVar16 = 1;
        puVar16[1] = iVar17 + 1;
        puVar16 = puVar16 + 0x12;
      } while (uVar19 != uVar24);
      if (uVar12 != uVar19) goto LAB_00d6bea0;
      puVar3 = (undefined8 *)((long)puVar20 + uVar19 * 0x24);
    }
    if (4 < (int)uVar1) {
      if (uVar28 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = uVar12 & 0x1fffffffe;
        uVar24 = 0;
        puVar3 = (undefined8 *)((long)puVar15 + uVar19 * 0x24);
        puVar16 = (undefined4 *)((long)puVar15 + 0x24);
        do {
          iVar17 = (int)uVar24;
          puVar16[-9] = 1;
          puVar16[-8] = iVar17;
          uVar24 = uVar24 + 2;
          *(undefined8 *)(puVar16 + -2) = 1;
          *(undefined8 *)(puVar16 + -4) = 0;
          *(undefined8 *)(puVar16 + 7) = 1;
          *(undefined8 *)(puVar16 + 5) = 0;
          *puVar16 = 1;
          puVar16[1] = iVar17 + 1;
          puVar16 = puVar16 + 0x12;
        } while (uVar19 != uVar24);
        puVar15 = puVar3;
        if (uVar12 == uVar19) goto LAB_00d6bf44;
      }
      do {
        *(undefined4 *)puVar15 = 1;
        *(int *)((long)puVar15 + 4) = (int)uVar19;
        uVar28 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar28;
        *(undefined8 *)((long)puVar15 + 0x1c) = 1;
        *(undefined8 *)((long)puVar15 + 0x14) = 0;
        puVar3 = (undefined8 *)((long)puVar15 + 0x24);
        puVar15 = puVar3;
      } while (uVar1 != uVar28);
      goto LAB_00d6bf44;
    }
    *(uint *)puVar15 = uVar1;
    if (((0 < (int)uVar1) && (*(undefined4 *)((long)puVar3 + 4) = 0, uVar1 != 1)) &&
       ((*(undefined4 *)(puVar3 + 1) = 1, uVar1 != 2 &&
        (*(undefined4 *)((long)puVar3 + 0xc) = 2, uVar1 != 3)))) {
      *(undefined4 *)(puVar3 + 2) = 3;
    }
  }
  puVar3 = (undefined8 *)((long)puVar15 + 0x24);
  *(undefined8 *)((long)puVar15 + 0x1c) = 1;
  *(undefined8 *)((long)puVar15 + 0x14) = 0;
LAB_00d6bf44:
  if (0 < (int)uVar1) {
    if (uVar1 - 1 == 0) {
      uVar12 = 0;
    }
    else {
      uVar19 = (ulong)(uVar1 - 1) + 1;
      uVar12 = uVar19 & 0x1fffffffe;
      uVar24 = 0;
      puVar16 = (undefined4 *)((long)puVar3 + 0x24);
      do {
        iVar17 = (int)uVar24;
        puVar16[-9] = 1;
        puVar16[-8] = iVar17;
        uVar24 = uVar24 + 2;
        *(undefined8 *)(puVar16 + -2) = 1;
        *(undefined8 *)(puVar16 + -4) = 0x3f00000001;
        *(undefined8 *)(puVar16 + 7) = 1;
        *(undefined8 *)(puVar16 + 5) = 0x3f00000001;
        *puVar16 = 1;
        puVar16[1] = iVar17 + 1;
        puVar16 = puVar16 + 0x12;
      } while (uVar12 != uVar24);
      puVar3 = (undefined8 *)((long)puVar3 + uVar12 * 0x24);
      if (uVar19 == uVar12) {
        return;
      }
    }
    do {
      *(undefined4 *)puVar3 = 1;
      *(int *)((long)puVar3 + 4) = (int)uVar12;
      uVar28 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar28;
      *(undefined8 *)((long)puVar3 + 0x1c) = 1;
      *(undefined8 *)((long)puVar3 + 0x14) = 0x3f00000001;
      puVar3 = (undefined8 *)((long)puVar3 + 0x24);
    } while (uVar1 != uVar28);
  }
  return;
}


