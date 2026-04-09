// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_do_swap
// Entry Point: 00dc4174
// Size: 236 bytes
// Signature: undefined png_do_swap(void)


void png_do_swap(int *param_1,undefined *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined uVar34;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined uVar39;
  
  if (*(char *)((long)param_1 + 0x11) != '\x10') {
    return;
  }
  iVar3 = *param_1 * (uint)*(byte *)((long)param_1 + 0x12);
  if (iVar3 == 0) {
    return;
  }
  uVar1 = iVar3 - 1;
  if (uVar1 < 7) {
    uVar6 = 0;
  }
  else {
    if (uVar1 < 0x1f) {
      uVar4 = 0;
    }
    else {
      uVar6 = (ulong)uVar1 + 1;
      uVar4 = uVar6 & 0x1ffffffe0;
      puVar2 = param_2 + 0x20;
      uVar7 = uVar4;
      do {
        uVar8 = *puVar2;
        uVar9 = puVar2[2];
        uVar10 = puVar2[4];
        uVar11 = puVar2[6];
        uVar12 = puVar2[8];
        uVar13 = puVar2[10];
        uVar14 = puVar2[0xc];
        uVar15 = puVar2[0xe];
        uVar16 = puVar2[0x10];
        uVar17 = puVar2[0x12];
        uVar18 = puVar2[0x14];
        uVar19 = puVar2[0x16];
        uVar20 = puVar2[0x18];
        uVar21 = puVar2[0x1a];
        uVar22 = puVar2[0x1c];
        uVar23 = puVar2[0x1e];
        uVar7 = uVar7 - 0x20;
        uVar24 = puVar2[-0x20];
        uVar25 = puVar2[-0x1e];
        uVar26 = puVar2[-0x1c];
        uVar27 = puVar2[-0x1a];
        uVar28 = puVar2[-0x18];
        uVar29 = puVar2[-0x16];
        uVar30 = puVar2[-0x14];
        uVar31 = puVar2[-0x12];
        uVar32 = puVar2[-0x10];
        uVar33 = puVar2[-0xe];
        uVar34 = puVar2[-0xc];
        uVar35 = puVar2[-10];
        uVar36 = puVar2[-8];
        uVar37 = puVar2[-6];
        uVar38 = puVar2[-4];
        uVar39 = puVar2[-2];
        *puVar2 = puVar2[1];
        puVar2[1] = uVar8;
        puVar2[2] = puVar2[3];
        puVar2[3] = uVar9;
        puVar2[4] = puVar2[5];
        puVar2[5] = uVar10;
        puVar2[6] = puVar2[7];
        puVar2[7] = uVar11;
        puVar2[8] = puVar2[9];
        puVar2[9] = uVar12;
        puVar2[10] = puVar2[0xb];
        puVar2[0xb] = uVar13;
        puVar2[0xc] = puVar2[0xd];
        puVar2[0xd] = uVar14;
        puVar2[0xe] = puVar2[0xf];
        puVar2[0xf] = uVar15;
        puVar2[0x10] = puVar2[0x11];
        puVar2[0x11] = uVar16;
        puVar2[0x12] = puVar2[0x13];
        puVar2[0x13] = uVar17;
        puVar2[0x14] = puVar2[0x15];
        puVar2[0x15] = uVar18;
        puVar2[0x16] = puVar2[0x17];
        puVar2[0x17] = uVar19;
        puVar2[0x18] = puVar2[0x19];
        puVar2[0x19] = uVar20;
        puVar2[0x1a] = puVar2[0x1b];
        puVar2[0x1b] = uVar21;
        puVar2[0x1c] = puVar2[0x1d];
        puVar2[0x1d] = uVar22;
        puVar2[0x1e] = puVar2[0x1f];
        puVar2[0x1f] = uVar23;
        puVar2[-0x20] = puVar2[-0x1f];
        puVar2[-0x1f] = uVar24;
        puVar2[-0x1e] = puVar2[-0x1d];
        puVar2[-0x1d] = uVar25;
        puVar2[-0x1c] = puVar2[-0x1b];
        puVar2[-0x1b] = uVar26;
        puVar2[-0x1a] = puVar2[-0x19];
        puVar2[-0x19] = uVar27;
        puVar2[-0x18] = puVar2[-0x17];
        puVar2[-0x17] = uVar28;
        puVar2[-0x16] = puVar2[-0x15];
        puVar2[-0x15] = uVar29;
        puVar2[-0x14] = puVar2[-0x13];
        puVar2[-0x13] = uVar30;
        puVar2[-0x12] = puVar2[-0x11];
        puVar2[-0x11] = uVar31;
        puVar2[-0x10] = puVar2[-0xf];
        puVar2[-0xf] = uVar32;
        puVar2[-0xe] = puVar2[-0xd];
        puVar2[-0xd] = uVar33;
        puVar2[-0xc] = puVar2[-0xb];
        puVar2[-0xb] = uVar34;
        puVar2[-10] = puVar2[-9];
        puVar2[-9] = uVar35;
        puVar2[-8] = puVar2[-7];
        puVar2[-7] = uVar36;
        puVar2[-6] = puVar2[-5];
        puVar2[-5] = uVar37;
        puVar2[-4] = puVar2[-3];
        puVar2[-3] = uVar38;
        puVar2[-2] = puVar2[-1];
        puVar2[-1] = uVar39;
        puVar2 = puVar2 + 0x40;
      } while (uVar7 != 0);
      if (uVar6 == uVar4) {
        return;
      }
      if ((uVar6 & 0x18) == 0) {
        param_2 = param_2 + uVar4 * 2;
        uVar6 = uVar6 & 0xffffffe0;
        goto LAB_00dc423c;
      }
    }
    uVar7 = (ulong)uVar1 + 1;
    puVar2 = param_2 + uVar4 * 2;
    uVar6 = uVar7 & 0x1fffffff8;
    lVar5 = uVar4 - uVar6;
    param_2 = param_2 + uVar6 * 2;
    do {
      uVar8 = *puVar2;
      uVar9 = puVar2[2];
      uVar10 = puVar2[4];
      uVar11 = puVar2[6];
      uVar12 = puVar2[8];
      uVar13 = puVar2[10];
      uVar14 = puVar2[0xc];
      uVar15 = puVar2[0xe];
      lVar5 = lVar5 + 8;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar8;
      puVar2[2] = puVar2[3];
      puVar2[3] = uVar9;
      puVar2[4] = puVar2[5];
      puVar2[5] = uVar10;
      puVar2[6] = puVar2[7];
      puVar2[7] = uVar11;
      puVar2[8] = puVar2[9];
      puVar2[9] = uVar12;
      puVar2[10] = puVar2[0xb];
      puVar2[0xb] = uVar13;
      puVar2[0xc] = puVar2[0xd];
      puVar2[0xd] = uVar14;
      puVar2[0xe] = puVar2[0xf];
      puVar2[0xf] = uVar15;
      puVar2 = puVar2 + 0x10;
    } while (lVar5 != 0);
    if (uVar7 == uVar6) {
      return;
    }
  }
LAB_00dc423c:
  iVar3 = iVar3 - (int)uVar6;
  do {
    iVar3 = iVar3 + -1;
    uVar8 = *param_2;
    *param_2 = param_2[1];
    param_2[1] = uVar8;
    param_2 = param_2 + 2;
  } while (iVar3 != 0);
  return;
}


