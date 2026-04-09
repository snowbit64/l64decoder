// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f16e6c
// Entry Point: 00f16e6c
// Size: 444 bytes
// Signature: undefined FUN_00f16e6c(void)


undefined * FUN_00f16e6c(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar7 = (undefined *)FUN_00f10278(param_1,0x30,*(undefined *)(param_1 + 4));
  uVar3 = *(undefined *)(param_1 + 4);
  bVar4 = *(byte *)(*(long *)(param_1 + 0x18) + 0x20);
  *puVar7 = 6;
  puVar7[3] = 0xff;
  puVar7[1] = bVar4 & 3;
  puVar7[2] = uVar3;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined4 *)(puVar7 + 4) = 0;
  *(undefined1 **)(puVar7 + 0x20) = luaH_dummynode;
  if (0 < (int)param_2) {
    if (0x4000000 < param_2) goto LAB_00f17018;
    uVar15 = (ulong)param_2;
    lVar8 = FUN_00f10724(param_1,0,0,uVar15 << 4);
    lVar13 = (long)*(int *)(puVar7 + 8);
    *(long *)(puVar7 + 0x18) = lVar8;
    if (*(int *)(puVar7 + 8) < (int)param_2) {
      uVar10 = uVar15 - lVar13;
      lVar9 = lVar13;
      if (1 < uVar10) {
        uVar12 = uVar10 & 0xfffffffffffffffe;
        lVar9 = uVar12 + lVar13;
        puVar11 = (undefined4 *)(lVar8 + lVar13 * 0x10 + 0x1c);
        uVar14 = uVar12;
        do {
          uVar14 = uVar14 - 2;
          puVar11[-4] = 0;
          *puVar11 = 0;
          puVar11 = puVar11 + 8;
        } while (uVar14 != 0);
        if (uVar10 == uVar12) goto LAB_00f16f70;
      }
      lVar13 = uVar15 - lVar9;
      puVar11 = (undefined4 *)(lVar8 + lVar9 * 0x10 + 0xc);
      do {
        lVar13 = lVar13 + -1;
        *puVar11 = 0;
        puVar11 = puVar11 + 4;
      } while (lVar13 != 0);
    }
LAB_00f16f70:
    *(uint *)(puVar7 + 8) = param_2;
  }
  if (0 < param_3) {
    iVar6 = FUN_00f10ffc(param_3 + -1);
    if (0x19 < iVar6) {
LAB_00f17018:
                    /* WARNING: Subroutine does not return */
      FUN_00f09b70(param_1,"table overflow");
    }
    uVar1 = iVar6 + 1;
    uVar5 = 1 << (ulong)(uVar1 & 0x1f);
    lVar8 = FUN_00f10090(param_1,-(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5,
                         puVar7[2]);
    *(long *)(puVar7 + 0x20) = lVar8;
    uVar2 = uVar5;
    if ((int)uVar5 < 2) {
      uVar2 = 1;
    }
    *(undefined4 *)(lVar8 + 0x1c) = 0;
    *(undefined4 *)(lVar8 + 0xc) = 0;
    if (1 < (int)uVar5) {
      lVar8 = 0;
      do {
        lVar13 = *(long *)(puVar7 + 0x20) + lVar8;
        lVar8 = lVar8 + 0x20;
        *(undefined4 *)(lVar13 + 0x3c) = 0;
        *(undefined4 *)(lVar13 + 0x2c) = 0;
      } while ((ulong)uVar2 * 0x20 + -0x20 != lVar8);
    }
    puVar7[6] = (char)uVar1;
    *(uint *)(puVar7 + 0xc) = uVar5;
    puVar7[7] = ~(byte)(-1 << (ulong)(uVar1 & 0x1f));
  }
  return puVar7;
}


