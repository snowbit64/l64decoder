// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df2c1c
// Entry Point: 00df2c1c
// Size: 1996 bytes
// Signature: undefined FUN_00df2c1c(void)


void FUN_00df2c1c(byte *param_1,uint param_2,ulong param_3,int param_4,uint param_5,ulong param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  bool bVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte bVar17;
  uint uVar18;
  uint *puVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  byte *pbVar23;
  uint uVar24;
  int *piVar25;
  uint local_288 [16];
  int local_248 [8];
  int local_228 [8];
  int local_208 [8];
  int local_1e8 [8];
  int local_1c8 [8];
  int local_1a8 [8];
  int local_188 [8];
  uint local_168 [72];
  long local_48;
  
  lVar13 = tpidr_el0;
  uVar22 = 0;
  iVar1 = param_4 + 0x20;
  uVar2 = (uint)(byte)(&DAT_0054bc48)[param_6 & 0xffffffff];
  if (param_4 * 3 <= (int)(uint)(byte)(&DAT_0054bc48)[param_6 & 0xffffffff]) {
    uVar2 = param_4 * 3;
  }
  local_48 = *(long *)(lVar13 + 0x28);
  bVar8 = (&DAT_00502755)[param_6 & 0xffffffff];
  uVar18 = (uint)param_3;
  uVar5 = (uVar18 >> 3 ^ 0xffffffff) & 1;
  puVar19 = local_168 + 4;
  uVar21 = (ulong)(int)param_2;
  pbVar16 = param_1 + -(long)(int)(((uint)(param_3 >> 2) & 0x3fffffff | 0xfffffffe) + 1 & param_2);
  pbVar20 = param_1;
  do {
    iVar11 = (uint)*pbVar20 - (uint)*pbVar16;
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar9 = iVar1 - (iVar7 << (ulong)(bVar8 & 0x1f));
    uVar12 = uVar2;
    if ((int)uVar9 <= (int)uVar2) {
      uVar12 = uVar9;
    }
    uVar24 = param_5;
    if ((int)(uVar9 + 0x40) < 0 == SCARRY4(uVar9,0x40)) {
      uVar24 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    }
    puVar19[-4] = uVar24;
    iVar11 = (uint)pbVar20[1] - (uint)pbVar16[1];
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar9 = iVar1 - (iVar7 << (ulong)(bVar8 & 0x1f));
    uVar12 = uVar2;
    if ((int)uVar9 <= (int)uVar2) {
      uVar12 = uVar9;
    }
    uVar24 = param_5;
    if ((int)(uVar9 + 0x40) < 0 == SCARRY4(uVar9,0x40)) {
      uVar24 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    }
    puVar19[-3] = uVar24;
    iVar11 = (uint)pbVar20[2] - (uint)pbVar16[2];
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar24 = (uint)bVar8;
    uVar9 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar12 = uVar2;
    if ((int)uVar9 <= (int)uVar2) {
      uVar12 = uVar9;
    }
    uVar10 = param_5;
    if ((int)(uVar9 + 0x40) < 0 == SCARRY4(uVar9,0x40)) {
      uVar10 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    }
    puVar19[-2] = uVar10;
    iVar11 = (uint)pbVar20[3] - (uint)pbVar16[3];
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar9 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar12 = uVar2;
    if ((int)uVar9 <= (int)uVar2) {
      uVar12 = uVar9;
    }
    uVar10 = param_5;
    if ((int)(uVar9 + 0x40) < 0 == SCARRY4(uVar9,0x40)) {
      uVar10 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    }
    puVar19[-1] = uVar10;
    iVar11 = (uint)pbVar20[4] - (uint)pbVar16[4];
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar9 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar12 = uVar2;
    if ((int)uVar9 <= (int)uVar2) {
      uVar12 = uVar9;
    }
    uVar10 = param_5;
    if ((int)(uVar9 + 0x40) < 0 == SCARRY4(uVar9,0x40)) {
      uVar10 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    }
    *puVar19 = uVar10;
    iVar11 = (uint)pbVar20[5] - (uint)pbVar16[5];
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar9 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar12 = uVar2;
    if ((int)uVar9 <= (int)uVar2) {
      uVar12 = uVar9;
    }
    uVar24 = param_5;
    if ((int)(uVar9 + 0x40) < 0 == SCARRY4(uVar9,0x40)) {
      uVar24 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    }
    puVar19[1] = uVar24;
    iVar11 = (uint)pbVar20[6] - (uint)pbVar16[6];
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar24 = (uint)bVar8;
    uVar9 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar12 = uVar2;
    if ((int)uVar9 <= (int)uVar2) {
      uVar12 = uVar9;
    }
    uVar10 = param_5;
    if ((int)(uVar9 + 0x40) < 0 == SCARRY4(uVar9,0x40)) {
      uVar10 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    }
    puVar19[2] = uVar10;
    iVar11 = (uint)pbVar20[7] - (uint)pbVar16[7];
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar9 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar12 = uVar2;
    if ((int)uVar9 <= (int)uVar2) {
      uVar12 = uVar9;
    }
    uVar10 = param_5;
    if ((int)(uVar9 + 0x40) < 0 == SCARRY4(uVar9,0x40)) {
      uVar10 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    }
    bVar14 = uVar22 < 7;
    uVar22 = uVar22 + 1;
    puVar19[3] = uVar10;
    puVar19 = puVar19 + 8;
    pbVar16 = pbVar20;
    pbVar20 = pbVar20 + (-(ulong)(uVar5 | bVar14) & uVar21);
  } while (uVar22 != 9);
  uVar12 = uVar18 >> 1 & 1;
  uVar22 = 0;
  puVar19 = local_288 + 4;
  pbVar16 = param_1;
  pbVar20 = param_1 + -(ulong)(~uVar18 & 1);
  do {
    pbVar23 = pbVar16;
    pbVar16 = pbVar20 + uVar21;
    iVar11 = (uint)*pbVar23 - (uint)*pbVar20;
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar10 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar9 = uVar2;
    if ((int)uVar10 <= (int)uVar2) {
      uVar9 = uVar10;
    }
    uVar6 = param_5;
    if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
      uVar6 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    }
    pbVar20 = pbVar23 + uVar21;
    puVar19[-4] = uVar6;
    pbVar15 = pbVar20 + uVar21;
    pbVar4 = pbVar16 + uVar21;
    iVar11 = (uint)*pbVar20 - (uint)*pbVar16;
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar10 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar9 = uVar2;
    if ((int)uVar10 <= (int)uVar2) {
      uVar9 = uVar10;
    }
    uVar6 = param_5;
    if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
      uVar6 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    }
    puVar19[-3] = uVar6;
    pbVar16 = pbVar15 + uVar21;
    pbVar20 = pbVar4 + uVar21;
    iVar11 = (uint)*pbVar15 - (uint)*pbVar4;
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar10 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar9 = uVar2;
    if ((int)uVar10 <= (int)uVar2) {
      uVar9 = uVar10;
    }
    uVar6 = param_5;
    if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
      uVar6 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    }
    puVar19[-2] = uVar6;
    pbVar15 = pbVar16 + uVar21;
    pbVar4 = pbVar20 + uVar21;
    iVar11 = (uint)*pbVar16 - (uint)*pbVar20;
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar10 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar9 = uVar2;
    if ((int)uVar10 <= (int)uVar2) {
      uVar9 = uVar10;
    }
    uVar6 = param_5;
    if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
      uVar6 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    }
    puVar19[-1] = uVar6;
    pbVar16 = pbVar15 + uVar21;
    pbVar20 = pbVar4 + uVar21;
    iVar11 = (uint)*pbVar15 - (uint)*pbVar4;
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar10 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar9 = uVar2;
    if ((int)uVar10 <= (int)uVar2) {
      uVar9 = uVar10;
    }
    uVar6 = param_5;
    if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
      uVar6 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    }
    *puVar19 = uVar6;
    iVar11 = (uint)*pbVar16 - (uint)*pbVar20;
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar10 = iVar1 - (iVar7 << (ulong)(uVar24 & 0x1f));
    uVar9 = uVar2;
    if ((int)uVar10 <= (int)uVar2) {
      uVar9 = uVar10;
    }
    uVar6 = param_5;
    if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
      uVar6 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    }
    puVar19[1] = uVar6;
    iVar11 = (uint)pbVar16[uVar21] - (uint)pbVar20[uVar21];
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar10 = iVar1 - (iVar7 << (ulong)(bVar8 & 0x1f));
    uVar9 = uVar2;
    if ((int)uVar10 <= (int)uVar2) {
      uVar9 = uVar10;
    }
    uVar6 = param_5;
    if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
      uVar6 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    }
    puVar19[2] = uVar6;
    iVar11 = (uint)(pbVar16 + uVar21)[uVar21] - (uint)(pbVar20 + uVar21)[uVar21];
    iVar7 = -iVar11;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    uVar10 = iVar1 - (iVar7 << (ulong)(bVar8 & 0x1f));
    uVar9 = uVar2;
    if ((int)uVar10 <= (int)uVar2) {
      uVar9 = uVar10;
    }
    uVar6 = param_5;
    if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
      uVar6 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    }
    bVar14 = uVar22 < 7;
    uVar22 = uVar22 + 1;
    puVar19[3] = uVar6;
    puVar19 = puVar19 + 8;
    pbVar16 = pbVar23 + (uVar12 ^ 1 | (uint)bVar14);
    pbVar20 = pbVar23;
  } while (uVar22 != 9);
  pbVar16 = param_1 + 3;
  puVar19 = local_168;
  piVar25 = local_208;
  uVar22 = 0;
  pbVar20 = param_1 + -(long)(int)(((uint)(param_3 >> 2) & 0x3fffffff | 0xfffffffe) + 1 & param_2);
  pbVar23 = param_1 + uVar21;
  do {
    pbVar15 = param_1;
    puVar19 = puVar19 + 8;
    uVar9 = puVar19[-7];
    iVar1 = piVar25[-0x18];
    uVar24 = puVar19[1];
    iVar7 = piVar25[-0x10];
    uVar2 = puVar19[-8] * (uint)*pbVar20 + piVar25[-0x20] * (uint)pbVar15[-(ulong)(~uVar18 & 1)] +
            *puVar19 * (uint)*pbVar23 + iVar1 * (uint)pbVar15[1] +
            (0x80 - (piVar25[-0x20] + puVar19[-8] + *puVar19 + iVar1)) * (uint)*pbVar15 + 0x40;
    bVar8 = 0xff;
    if ((int)uVar2 < 0x8000) {
      bVar8 = (byte)(uVar2 >> 7);
    }
    pbVar16[-3] = 0xffU - (char)((int)uVar2 >> 0x1f) & bVar8;
    uVar2 = uVar9 * pbVar20[1] + iVar1 * (uint)*pbVar15 + uVar24 * pbVar23[1] +
            iVar7 * (uint)pbVar15[2] + (0x80 - (iVar1 + uVar9 + uVar24 + iVar7)) * (uint)pbVar15[1]
            + 0x40;
    bVar8 = 0xff;
    if ((int)uVar2 < 0x8000) {
      bVar8 = (byte)(uVar2 >> 7);
    }
    iVar11 = piVar25[-8];
    uVar9 = puVar19[-6];
    uVar24 = puVar19[-5];
    pbVar16[-2] = 0xffU - (char)((int)uVar2 >> 0x1f) & bVar8;
    uVar10 = puVar19[3];
    iVar1 = *piVar25;
    uVar2 = uVar9 * pbVar20[2] + iVar7 * (uint)pbVar15[1] + puVar19[2] * (uint)pbVar23[2] +
            iVar11 * (uint)pbVar15[3] +
            (0x80 - (iVar7 + uVar9 + puVar19[2] + iVar11)) * (uint)pbVar15[2] + 0x40;
    bVar17 = 0xff;
    bVar8 = bVar17;
    if ((int)uVar2 < 0x8000) {
      bVar8 = (byte)(uVar2 >> 7);
    }
    pbVar16[-1] = 0xffU - (char)((int)uVar2 >> 0x1f) & bVar8;
    uVar2 = uVar24 * pbVar20[3] + iVar11 * (uint)pbVar15[2] + uVar10 * pbVar23[3] +
            iVar1 * (uint)pbVar15[4] +
            (0x80 - (iVar11 + uVar24 + uVar10 + iVar1)) * (uint)pbVar15[3] + 0x40;
    bVar8 = bVar17;
    if ((int)uVar2 < 0x8000) {
      bVar8 = (byte)(uVar2 >> 7);
    }
    iVar7 = piVar25[8];
    uVar9 = puVar19[-4];
    uVar24 = puVar19[-3];
    *pbVar16 = 0xffU - (char)((int)uVar2 >> 0x1f) & bVar8;
    uVar10 = puVar19[5];
    iVar11 = piVar25[0x10];
    uVar2 = uVar9 * pbVar20[4] + iVar1 * (uint)pbVar15[3] + puVar19[4] * (uint)pbVar23[4] +
            iVar7 * (uint)pbVar15[5] +
            (0x80 - (iVar1 + uVar9 + puVar19[4] + iVar7)) * (uint)pbVar15[4] + 0x40;
    bVar8 = bVar17;
    if ((int)uVar2 < 0x8000) {
      bVar8 = (byte)(uVar2 >> 7);
    }
    pbVar16[1] = 0xffU - (char)((int)uVar2 >> 0x1f) & bVar8;
    uVar2 = uVar24 * pbVar20[5] + iVar7 * (uint)pbVar15[4] + uVar10 * pbVar23[5] +
            iVar11 * (uint)pbVar15[6] +
            (0x80 - (iVar7 + uVar24 + uVar10 + iVar11)) * (uint)pbVar15[5] + 0x40;
    if ((int)uVar2 < 0x8000) {
      bVar17 = (byte)(uVar2 >> 7);
    }
    iVar1 = piVar25[0x18];
    uVar9 = puVar19[-2];
    uVar24 = puVar19[-1];
    pbVar16[2] = 0xffU - (char)((int)uVar2 >> 0x1f) & bVar17;
    uVar10 = puVar19[7];
    uVar2 = uVar9 * pbVar20[6] + iVar11 * (uint)pbVar15[5] + puVar19[6] * (uint)pbVar23[6] +
            iVar1 * (uint)pbVar15[7] +
            (0x80 - (iVar11 + uVar9 + puVar19[6] + iVar1)) * (uint)pbVar15[6] + 0x40;
    bVar8 = 0xff;
    if ((int)uVar2 < 0x8000) {
      bVar8 = (byte)(uVar2 >> 7);
    }
    iVar7 = piVar25[0x20];
    piVar25 = piVar25 + 1;
    pbVar16[3] = 0xffU - (char)((int)uVar2 >> 0x1f) & bVar8;
    uVar3 = uVar22 + 1;
    uVar2 = uVar24 * pbVar20[7] + iVar1 * (uint)pbVar15[6] + uVar10 * pbVar23[7] +
            iVar7 * (uint)pbVar15[8 - (ulong)uVar12] +
            (0x80 - (iVar1 + uVar24 + uVar10 + iVar7)) * (uint)pbVar15[7] + 0x40;
    bVar8 = 0xff;
    if ((int)uVar2 < 0x8000) {
      bVar8 = (byte)(uVar2 >> 7);
    }
    bVar14 = uVar22 < 6;
    pbVar16[4] = 0xffU - (char)((int)uVar2 >> 0x1f) & bVar8;
    pbVar16 = pbVar16 + uVar21;
    param_1 = pbVar23;
    uVar22 = uVar3;
    pbVar20 = pbVar15;
    pbVar23 = pbVar23 + (-(ulong)(uVar5 | bVar14) & uVar21);
  } while (uVar3 != 8);
  if (*(long *)(lVar13 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


