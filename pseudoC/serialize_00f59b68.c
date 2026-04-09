// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f59b68
// Size: 2148 bytes
// Signature: undefined __thiscall serialize(btQuantizedBvh * this, void * param_1, uint param_2, bool param_3)


/* btQuantizedBvh::serialize(void*, unsigned int, bool) const */

undefined8 __thiscall
btQuantizedBvh::serialize(btQuantizedBvh *this,void *param_1,uint param_2,bool param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  btQuantizedBvh bVar8;
  undefined2 uVar9;
  int iVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  ushort *puVar19;
  undefined2 *puVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  char *pcVar25;
  undefined8 *puVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  char *pcVar31;
  undefined8 uVar32;
  
  *(undefined4 *)((long)param_1 + 0x38) = 0x11c;
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0xd4);
  *(undefined ***)param_1 = &PTR__btQuantizedBvh_0101a090;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  puVar24 = (undefined8 *)((long)param_1 + 0x6c);
  *puVar24 = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  puVar26 = (undefined8 *)((long)param_1 + 0xac);
  *puVar26 = 0;
  *(undefined8 *)((long)param_1 + 0x10) = 0xff7fffff;
  *(undefined8 *)((long)param_1 + 8) = 0xff7fffffff7fffff;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  uVar18 = *(uint *)(this + 0x3c);
  *(undefined *)((long)param_1 + 0x40) = 0;
  pcVar25 = (char *)((long)param_1 + 0x80);
  *pcVar25 = '\x01';
  *(undefined *)((long)param_1 + 0x60) = 1;
  *(undefined8 *)((long)param_1 + 0x58) = 0;
  plVar27 = (long *)((long)param_1 + 0x78);
  *plVar27 = 0;
  pcVar31 = (char *)((long)param_1 + 0xc0);
  *pcVar31 = '\x01';
  *(undefined *)((long)param_1 + 0xa0) = 1;
  *(undefined8 *)((long)param_1 + 0x98) = 0;
  plVar30 = (long *)((long)param_1 + 0xb8);
  *plVar30 = 0;
  *(undefined4 *)((long)param_1 + 200) = 0;
  *(undefined *)((long)param_1 + 0xe8) = 1;
  *(undefined8 *)((long)param_1 + 0xe0) = 0;
  *(undefined4 *)((long)param_1 + 0xf0) = 0;
  *(undefined8 *)((long)param_1 + 0x20) = 0x7f7fffff;
  *(undefined8 *)((long)param_1 + 0x18) = 0x7f7fffff7f7fffff;
  if (param_3) {
    uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    *(uint *)((long)param_1 + 0x3c) = uVar18 >> 0x10 | uVar18 << 0x10;
    *(btQuantizedBvh *)((long)param_1 + 8) = this[0xb];
    *(btQuantizedBvh *)((long)param_1 + 9) = this[10];
    *(btQuantizedBvh *)((long)param_1 + 10) = this[9];
    *(btQuantizedBvh *)((long)param_1 + 0xb) = this[8];
    *(btQuantizedBvh *)((long)param_1 + 0xc) = this[0xf];
    *(btQuantizedBvh *)((long)param_1 + 0xd) = this[0xe];
    *(btQuantizedBvh *)((long)param_1 + 0xe) = this[0xd];
    *(btQuantizedBvh *)((long)param_1 + 0xf) = this[0xc];
    *(btQuantizedBvh *)((long)param_1 + 0x10) = this[0x13];
    *(btQuantizedBvh *)((long)param_1 + 0x11) = this[0x12];
    *(btQuantizedBvh *)((long)param_1 + 0x12) = this[0x11];
    *(btQuantizedBvh *)((long)param_1 + 0x13) = this[0x10];
    *(btQuantizedBvh *)((long)param_1 + 0x14) = this[0x17];
    *(btQuantizedBvh *)((long)param_1 + 0x15) = this[0x16];
    *(btQuantizedBvh *)((long)param_1 + 0x16) = this[0x15];
    *(btQuantizedBvh *)((long)param_1 + 0x17) = this[0x14];
    *(btQuantizedBvh *)((long)param_1 + 0x18) = this[0x1b];
    *(btQuantizedBvh *)((long)param_1 + 0x19) = this[0x1a];
    *(btQuantizedBvh *)((long)param_1 + 0x1a) = this[0x19];
    *(btQuantizedBvh *)((long)param_1 + 0x1b) = this[0x18];
    *(btQuantizedBvh *)((long)param_1 + 0x1c) = this[0x1f];
    *(btQuantizedBvh *)((long)param_1 + 0x1d) = this[0x1e];
    *(btQuantizedBvh *)((long)param_1 + 0x1e) = this[0x1d];
    *(btQuantizedBvh *)((long)param_1 + 0x1f) = this[0x1c];
    *(btQuantizedBvh *)((long)param_1 + 0x20) = this[0x23];
    *(btQuantizedBvh *)((long)param_1 + 0x21) = this[0x22];
    *(btQuantizedBvh *)((long)param_1 + 0x22) = this[0x21];
    *(btQuantizedBvh *)((long)param_1 + 0x23) = this[0x20];
    *(btQuantizedBvh *)((long)param_1 + 0x24) = this[0x27];
    *(btQuantizedBvh *)((long)param_1 + 0x25) = this[0x26];
    *(btQuantizedBvh *)((long)param_1 + 0x26) = this[0x25];
    *(btQuantizedBvh *)((long)param_1 + 0x27) = this[0x24];
    *(btQuantizedBvh *)((long)param_1 + 0x28) = this[0x2b];
    *(btQuantizedBvh *)((long)param_1 + 0x29) = this[0x2a];
    *(btQuantizedBvh *)((long)param_1 + 0x2a) = this[0x29];
    *(btQuantizedBvh *)((long)param_1 + 0x2b) = this[0x28];
    *(btQuantizedBvh *)((long)param_1 + 0x2c) = this[0x2f];
    *(btQuantizedBvh *)((long)param_1 + 0x2d) = this[0x2e];
    *(btQuantizedBvh *)((long)param_1 + 0x2e) = this[0x2d];
    *(btQuantizedBvh *)((long)param_1 + 0x2f) = this[0x2c];
    *(btQuantizedBvh *)((long)param_1 + 0x30) = this[0x33];
    *(btQuantizedBvh *)((long)param_1 + 0x31) = this[0x32];
    *(btQuantizedBvh *)((long)param_1 + 0x32) = this[0x31];
    *(btQuantizedBvh *)((long)param_1 + 0x33) = this[0x30];
    *(btQuantizedBvh *)((long)param_1 + 0x34) = this[0x37];
    *(btQuantizedBvh *)((long)param_1 + 0x35) = this[0x36];
    *(btQuantizedBvh *)((long)param_1 + 0x36) = this[0x35];
    *(btQuantizedBvh *)((long)param_1 + 0x37) = this[0x34];
    uVar12 = (*(uint *)(this + 200) & 0xff00ff00) >> 8 | (*(uint *)(this + 200) & 0xff00ff) << 8;
    uVar18 = (*(uint *)(this + 0xf0) & 0xff00ff00) >> 8 | (*(uint *)(this + 0xf0) & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    *(uint *)((long)param_1 + 200) = uVar12 >> 0x10 | uVar12 << 0x10;
  }
  else {
    *(uint *)((long)param_1 + 0x3c) = uVar18;
    uVar32 = *(undefined8 *)(this + 8);
    *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)((long)param_1 + 8) = uVar32;
    uVar32 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)((long)param_1 + 0x20) = *(undefined8 *)(this + 0x20);
    *(undefined8 *)((long)param_1 + 0x18) = uVar32;
    uVar32 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)(this + 0x30);
    *(undefined8 *)((long)param_1 + 0x28) = uVar32;
    uVar18 = *(uint *)(this + 0xf0);
    *(undefined4 *)((long)param_1 + 200) = *(undefined4 *)(this + 200);
  }
  bVar8 = this[0x40];
  lVar22 = (long)param_1 + 0xf8;
  uVar12 = *(uint *)(this + 0x3c);
  uVar28 = (ulong)uVar12;
  *(uint *)((long)param_1 + 0xf0) = uVar18;
  *(btQuantizedBvh *)((long)param_1 + 0x40) = bVar8;
  if (this[0x40] == (btQuantizedBvh)0x0) {
    puVar21 = (uint *)((long)param_1 + 0x70);
    if ((*plVar27 != 0) && (*pcVar25 != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)(*plVar27,param_1,param_2);
    }
    *pcVar25 = '\0';
    *plVar27 = lVar22;
    *(uint *)puVar24 = uVar12;
    *puVar21 = uVar12;
    lVar15 = lVar22;
    if (param_3) {
      if (0 < (int)uVar12) {
        lVar29 = 0;
        lVar23 = *(long *)(this + 0x78);
        do {
          puVar3 = (undefined *)(lVar23 + lVar29);
          puVar4 = (undefined *)(lVar15 + lVar29);
          *puVar4 = puVar3[3];
          puVar4[1] = puVar3[2];
          puVar4[2] = puVar3[1];
          puVar4[3] = *puVar3;
          puVar4[4] = puVar3[7];
          puVar4[5] = puVar3[6];
          puVar4[6] = puVar3[5];
          puVar4[7] = puVar3[4];
          puVar4[8] = puVar3[0xb];
          puVar4[9] = puVar3[10];
          puVar4[10] = puVar3[9];
          puVar4[0xb] = puVar3[8];
          puVar4[0xc] = puVar3[0xf];
          puVar4[0xd] = puVar3[0xe];
          puVar4[0xe] = puVar3[0xd];
          puVar4[0xf] = puVar3[0xc];
          lVar15 = *(long *)(this + 0x78) + lVar29;
          lVar23 = *plVar27 + lVar29;
          *(undefined *)(lVar23 + 0x10) = *(undefined *)(lVar15 + 0x13);
          *(undefined *)(lVar23 + 0x11) = *(undefined *)(lVar15 + 0x12);
          *(undefined *)(lVar23 + 0x12) = *(undefined *)(lVar15 + 0x11);
          *(undefined *)(lVar23 + 0x13) = *(undefined *)(lVar15 + 0x10);
          *(undefined *)(lVar23 + 0x14) = *(undefined *)(lVar15 + 0x17);
          *(undefined *)(lVar23 + 0x15) = *(undefined *)(lVar15 + 0x16);
          *(undefined *)(lVar23 + 0x16) = *(undefined *)(lVar15 + 0x15);
          *(undefined *)(lVar23 + 0x17) = *(undefined *)(lVar15 + 0x14);
          *(undefined *)(lVar23 + 0x18) = *(undefined *)(lVar15 + 0x1b);
          *(undefined *)(lVar23 + 0x19) = *(undefined *)(lVar15 + 0x1a);
          *(undefined *)(lVar23 + 0x1a) = *(undefined *)(lVar15 + 0x19);
          *(undefined *)(lVar23 + 0x1b) = *(undefined *)(lVar15 + 0x18);
          *(undefined *)(lVar23 + 0x1c) = *(undefined *)(lVar15 + 0x1f);
          *(undefined *)(lVar23 + 0x1d) = *(undefined *)(lVar15 + 0x1e);
          *(undefined *)(lVar23 + 0x1e) = *(undefined *)(lVar15 + 0x1d);
          *(undefined *)(lVar23 + 0x1f) = *(undefined *)(lVar15 + 0x1c);
          lVar23 = *(long *)(this + 0x78);
          lVar15 = *plVar27;
          lVar5 = lVar23 + lVar29;
          lVar6 = lVar15 + lVar29;
          lVar29 = lVar29 + 0x40;
          uVar18 = (*(uint *)(lVar5 + 0x20) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar5 + 0x20) & 0xff00ff) << 8;
          uVar13 = (*(uint *)(lVar5 + 0x24) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar5 + 0x24) & 0xff00ff) << 8;
          uVar14 = (*(uint *)(lVar5 + 0x28) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar5 + 0x28) & 0xff00ff) << 8;
          *(uint *)(lVar6 + 0x20) = uVar18 >> 0x10 | uVar18 << 0x10;
          *(uint *)(lVar6 + 0x24) = uVar13 >> 0x10 | uVar13 << 0x10;
          *(uint *)(lVar6 + 0x28) = uVar14 >> 0x10 | uVar14 << 0x10;
        } while (uVar28 * 0x40 - lVar29 != 0);
      }
    }
    else if (0 < (int)uVar12) {
      lVar29 = 0;
      lVar23 = *(long *)(this + 0x78);
      do {
        uVar32 = *(undefined8 *)(lVar23 + lVar29);
        ((undefined8 *)(lVar15 + lVar29))[1] = ((undefined8 *)(lVar23 + lVar29))[1];
        *(undefined8 *)(lVar15 + lVar29) = uVar32;
        lVar15 = *plVar27;
        uVar32 = *(undefined8 *)(*(long *)(this + 0x78) + lVar29 + 0x10);
        *(undefined8 *)(lVar15 + lVar29 + 0x18) =
             *(undefined8 *)(*(long *)(this + 0x78) + lVar29 + 0x18);
        *(undefined8 *)(lVar15 + lVar29 + 0x10) = uVar32;
        lVar23 = *(long *)(this + 0x78);
        lVar15 = *plVar27;
        lVar5 = lVar23 + lVar29;
        lVar6 = lVar15 + lVar29;
        lVar29 = lVar29 + 0x40;
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
        *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar5 + 0x28);
      } while (uVar28 * 0x40 - lVar29 != 0);
    }
    lVar29 = (long)(int)uVar12 << 6;
    if (*pcVar25 != '\0') {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)(lVar15);
    }
  }
  else {
    puVar21 = (uint *)((long)param_1 + 0xb0);
    if ((*plVar30 != 0) && (*pcVar31 != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *pcVar31 = '\0';
    *plVar30 = lVar22;
    *(uint *)puVar26 = uVar12;
    *puVar21 = uVar12;
    if (param_3) {
      if (0 < (int)uVar12) {
        puVar16 = (uint *)((long)param_1 + 0x104);
        puVar19 = (ushort *)(*(long *)(this + 0xb8) + 6);
        do {
          uVar28 = uVar28 - 1;
          uVar18 = (*(uint *)(puVar19 + 3) & 0xff00ff00) >> 8 |
                   (*(uint *)(puVar19 + 3) & 0xff00ff) << 8;
          *(ushort *)(puVar16 + -3) = puVar19[-3] >> 8 | (ushort)((puVar19[-3] & 0xff00ff) << 8);
          uVar11 = puVar19[-2];
          *puVar16 = uVar18 >> 0x10 | uVar18 << 0x10;
          *(ushort *)((long)puVar16 + -10) = uVar11 >> 8 | (ushort)((uVar11 & 0xff00ff) << 8);
          *(ushort *)(puVar16 + -2) = puVar19[-1] >> 8 | (ushort)((puVar19[-1] & 0xff00ff) << 8);
          *(ushort *)((long)puVar16 + -6) = *puVar19 >> 8 | (ushort)((*puVar19 & 0xff00ff) << 8);
          *(ushort *)(puVar16 + -1) = puVar19[1] >> 8 | (ushort)((puVar19[1] & 0xff00ff) << 8);
          puVar1 = puVar19 + 2;
          puVar19 = puVar19 + 8;
          *(ushort *)((long)puVar16 + -2) = *puVar1 >> 8 | (ushort)((*puVar1 & 0xff00ff) << 8);
          puVar16 = puVar16 + 4;
        } while (uVar28 != 0);
      }
    }
    else if (0 < (int)uVar12) {
      puVar17 = (undefined4 *)((long)param_1 + 0x104);
      puVar20 = (undefined2 *)(*(long *)(this + 0xb8) + 6);
      do {
        uVar28 = uVar28 - 1;
        uVar7 = *(undefined4 *)(puVar20 + 3);
        *(undefined2 *)(puVar17 + -3) = puVar20[-3];
        uVar9 = puVar20[-2];
        *puVar17 = uVar7;
        *(undefined2 *)((long)puVar17 + -10) = uVar9;
        *(undefined2 *)(puVar17 + -2) = puVar20[-1];
        *(undefined2 *)((long)puVar17 + -6) = *puVar20;
        *(undefined2 *)(puVar17 + -1) = puVar20[1];
        puVar2 = puVar20 + 2;
        puVar20 = puVar20 + 8;
        *(undefined2 *)((long)puVar17 + -2) = *puVar2;
        puVar17 = puVar17 + 4;
      } while (uVar28 != 0);
    }
    lVar29 = (long)(int)uVar12 << 4;
    puVar24 = puVar26;
    plVar27 = plVar30;
    pcVar25 = pcVar31;
  }
  *(undefined4 *)puVar24 = 0;
  lVar15 = *(long *)((long)param_1 + 0xe0);
  *puVar21 = 0;
  uVar7 = *(undefined4 *)(this + 0xf0);
  *pcVar25 = '\0';
  *plVar27 = 0;
  if ((lVar15 != 0) && (*(char *)((long)param_1 + 0xe8) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined *)((long)param_1 + 0xe8) = 0;
  *(long *)((long)param_1 + 0xe0) = lVar22 + lVar29;
  *(undefined4 *)((long)param_1 + 0xd4) = uVar7;
  *(undefined4 *)((long)param_1 + 0xd8) = uVar7;
  if (param_3) {
    uVar28 = (ulong)*(uint *)(this + 0xf0);
    if (0 < (int)*(uint *)(this + 0xf0)) {
      puVar21 = (uint *)((long)param_1 + lVar29 + 0x108);
      puVar19 = (ushort *)(*(long *)(this + 0xe0) + 8);
      do {
        uVar28 = uVar28 - 1;
        uVar18 = (*(uint *)(puVar19 + 2) & 0xff00ff00) >> 8 |
                 (*(uint *)(puVar19 + 2) & 0xff00ff) << 8;
        uVar12 = (*(uint *)(puVar19 + 4) & 0xff00ff00) >> 8 |
                 (*(uint *)(puVar19 + 4) & 0xff00ff) << 8;
        *(ushort *)(puVar21 + -4) = puVar19[-4] >> 8 | (ushort)((puVar19[-4] & 0xff00ff) << 8);
        uVar11 = puVar19[-3];
        puVar21[-1] = uVar18 >> 0x10 | uVar18 << 0x10;
        *puVar21 = uVar12 >> 0x10 | uVar12 << 0x10;
        *(ushort *)((long)puVar21 + -0xe) = uVar11 >> 8 | (ushort)((uVar11 & 0xff00ff) << 8);
        *(ushort *)(puVar21 + -3) = puVar19[-2] >> 8 | (ushort)((puVar19[-2] & 0xff00ff) << 8);
        *(ushort *)((long)puVar21 + -10) =
             puVar19[-1] >> 8 | (ushort)((puVar19[-1] & 0xff00ff) << 8);
        *(ushort *)(puVar21 + -2) = *puVar19 >> 8 | (ushort)((*puVar19 & 0xff00ff) << 8);
        puVar1 = puVar19 + 1;
        puVar19 = puVar19 + 0x10;
        *(ushort *)((long)puVar21 + -6) = *puVar1 >> 8 | (ushort)((*puVar1 & 0xff00ff) << 8);
        puVar21 = puVar21 + 8;
      } while (uVar28 != 0);
    }
  }
  else if (0 < *(int *)(this + 0xf0)) {
    lVar15 = 0;
    lVar22 = 0;
    lVar23 = *(long *)(this + 0xe0);
    do {
      puVar20 = (undefined2 *)(lVar23 + lVar15);
      lVar5 = lVar15 + lVar29;
      lVar22 = lVar22 + 1;
      lVar15 = lVar15 + 0x20;
      uVar32 = *(undefined8 *)(puVar20 + 6);
      *(undefined2 *)((long)param_1 + lVar5 + 0xf8) = *puVar20;
      uVar9 = puVar20[1];
      *(undefined8 *)((long)param_1 + lVar5 + 0x104) = uVar32;
      *(undefined2 *)((long)param_1 + lVar5 + 0xfa) = uVar9;
      *(undefined2 *)((long)param_1 + lVar5 + 0xfc) = puVar20[2];
      *(undefined2 *)((long)param_1 + lVar5 + 0xfe) = puVar20[3];
      *(undefined2 *)((long)param_1 + lVar5 + 0x100) = puVar20[4];
      uVar9 = puVar20[5];
      *(undefined4 *)((long)param_1 + lVar5 + 0x10c) = 0;
      *(undefined8 *)((long)param_1 + lVar5 + 0x110) = 0;
      iVar10 = *(int *)(this + 0xf0);
      *(undefined2 *)((long)param_1 + lVar5 + 0x102) = uVar9;
    } while (lVar22 < iVar10);
  }
  if (*(char *)((long)param_1 + 0xe8) != '\0') {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(lVar22 + lVar29);
  }
  *(undefined *)((long)param_1 + 0xe8) = 0;
  *(undefined8 *)((long)param_1 + 0xe0) = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)((long)param_1 + 0xd8) = 0;
  *(undefined8 *)param_1 = 0;
  return 1;
}


