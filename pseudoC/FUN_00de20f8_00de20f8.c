// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00de20f8
// Entry Point: 00de20f8
// Size: 520 bytes
// Signature: undefined FUN_00de20f8(void)


void FUN_00de20f8(int *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  uint **ppuVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  param_2 = param_2 + *param_1 * param_3;
  puVar5 = *(undefined8 **)(param_1 + 0xe);
  if ((puVar5 == (undefined8 *)0x0) || (lVar6 = puVar5[1], lVar6 == 0)) {
    puVar4 = (undefined8 *)rcAlloc(0x8008,0);
    if (puVar4 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_00de2194;
    }
    uVar14 = *(undefined8 *)(param_1 + 0xc);
    puVar10 = *(undefined8 **)(param_1 + 0xe);
    lVar6 = 0x800;
    *(undefined8 **)(param_1 + 0xc) = puVar4;
    puVar5 = puVar4 + 1;
    *puVar4 = uVar14;
    puVar3 = puVar4 + 0xffd;
    do {
      puVar8 = puVar3;
      puVar8[3] = puVar10;
      lVar6 = lVar6 + -2;
      puVar8[1] = puVar8 + 2;
      puVar3 = puVar8 + -4;
      puVar10 = puVar8;
    } while (lVar6 != 0);
    lVar6 = puVar4[2];
  }
  *(long *)(param_1 + 0xe) = lVar6;
LAB_00de2194:
  puVar5[1] = 0;
  uVar17 = param_4 & 0x1fff | (param_5 & 0x1fff) << 0xd | param_6 << 0x1a;
  *(uint *)puVar5 = uVar17;
  ppuVar7 = (uint **)(*(long *)(param_1 + 10) + (long)param_2 * 8);
  puVar9 = *ppuVar7;
  if (puVar9 != (uint *)0x0) {
    uVar12 = *puVar9;
    param_5 = param_5 & 0x1fff;
    uVar15 = uVar12 & 0x1fff;
    if (param_5 < uVar15) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)0x0;
      do {
        uVar16 = uVar12 >> 0xd & 0x1fff;
        if (uVar16 < (uVar17 & 0x1fff)) {
          puVar13 = *(uint **)(puVar9 + 2);
          puVar11 = puVar9;
        }
        else {
          if (uVar15 < (uVar17 & 0x1fff)) {
            param_5 = uVar17 >> 0xd & 0x1fff;
            uVar17 = uVar17 & 0xffffe000 | uVar15;
            *(uint *)puVar5 = uVar17;
            uVar12 = *puVar9;
            uVar16 = uVar12 >> 0xd & 0x1fff;
          }
          if (param_5 < uVar16) {
            uVar17 = uVar17 & 0xfc000000 | uVar17 & 0x1fff | uVar16 << 0xd;
            *(uint *)puVar5 = uVar17;
            uVar12 = *puVar9;
            iVar2 = uVar16 - (uVar12 >> 0xd & 0x1fff);
            iVar1 = -iVar2;
            if (-1 < iVar2) {
              iVar1 = iVar2;
            }
          }
          else {
            iVar2 = param_5 - uVar16;
            iVar1 = -iVar2;
            if (-1 < iVar2) {
              iVar1 = iVar2;
            }
          }
          if (iVar1 <= param_7) {
            uVar15 = uVar17 >> 0x1a;
            if (uVar17 >> 0x1a <= uVar12 >> 0x1a) {
              uVar15 = uVar12 >> 0x1a;
            }
            *(uint *)puVar5 = uVar17 & 0x3ffffff | uVar15 << 0x1a;
          }
          uVar14 = *(undefined8 *)(param_1 + 0xe);
          *(uint **)(param_1 + 0xe) = puVar9;
          puVar13 = *(uint **)(puVar9 + 2);
          *(undefined8 *)(puVar9 + 2) = uVar14;
          if (puVar11 == (uint *)0x0) {
            *(uint **)(*(long *)(param_1 + 10) + (long)param_2 * 8) = puVar13;
          }
          else {
            *(uint **)(puVar11 + 2) = puVar13;
          }
        }
        puVar9 = puVar13;
        if (puVar9 == (uint *)0x0) break;
        uVar17 = *(uint *)puVar5;
        uVar12 = *puVar9;
        param_5 = uVar17 >> 0xd & 0x1fff;
        uVar15 = uVar12 & 0x1fff;
      } while (uVar15 <= param_5);
    }
    ppuVar7 = (uint **)(*(long *)(param_1 + 10) + (long)param_2 * 8);
    if (puVar11 != (uint *)0x0) {
      ppuVar7 = (uint **)(puVar11 + 2);
    }
    puVar5[1] = *ppuVar7;
  }
  *ppuVar7 = (uint *)puVar5;
  return;
}


