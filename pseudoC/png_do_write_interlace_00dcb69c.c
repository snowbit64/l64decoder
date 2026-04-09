// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_do_write_interlace
// Entry Point: 00dcb69c
// Size: 740 bytes
// Signature: undefined png_do_write_interlace(void)


void png_do_write_interlace(uint *param_1,undefined *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  
  if (5 < param_3) {
    return;
  }
  bVar3 = *(byte *)((long)param_1 + 0x13);
  puVar9 = param_2;
  if (bVar3 == 4) {
    uVar2 = *param_1;
    uVar14 = (uint)(byte)(&DAT_0054a182)[param_3];
    if (uVar2 <= uVar14) goto LAB_00dcb920;
    bVar3 = (&DAT_0054a189)[param_3];
    uVar8 = 0;
    uVar13 = (ulong)(byte)(&DAT_0054a182)[param_3] << 2;
    uVar7 = 4;
    uVar12 = (ulong)uVar14;
    iVar5 = (uint)bVar3 * 4;
    do {
      while( true ) {
        uVar11 = (uint)uVar13;
        uVar8 = ((byte)param_2[uVar12 >> 1] >> (ulong)(~uVar11 & 4) & 0xf) << (ulong)(uVar7 & 0x1f)
                | uVar8;
        uVar6 = (undefined)uVar8;
        if (uVar7 != 0) break;
        puVar10 = puVar9 + 1;
        *puVar9 = uVar6;
        uVar7 = 4;
        uVar8 = 0;
        uVar6 = 0;
        uVar1 = (int)uVar12 + (uint)bVar3;
        uVar12 = (ulong)uVar1;
        uVar13 = (ulong)(uVar11 + iVar5);
        puVar9 = puVar10;
        if (uVar2 <= uVar1) goto LAB_00dcb810;
      }
      uVar7 = uVar7 - 4;
      uVar1 = (int)uVar12 + (uint)bVar3;
      uVar12 = (ulong)uVar1;
      uVar13 = (ulong)(uVar11 + iVar5);
    } while (uVar1 < uVar2);
LAB_00dcb810:
    if (uVar7 == 4) goto LAB_00dcb920;
  }
  else if (bVar3 == 2) {
    uVar2 = *param_1;
    uVar14 = (uint)(byte)(&DAT_0054a182)[param_3];
    if (uVar2 <= uVar14) goto LAB_00dcb920;
    bVar3 = (&DAT_0054a189)[param_3];
    uVar8 = 0;
    uVar13 = (ulong)(byte)(&DAT_0054a182)[param_3] << 1;
    uVar7 = 6;
    uVar12 = (ulong)uVar14;
    iVar5 = (uint)bVar3 * 2;
    do {
      while( true ) {
        uVar11 = (uint)uVar13;
        uVar8 = ((byte)param_2[uVar12 >> 2] >> (ulong)(~uVar11 & 6) & 3) << (ulong)(uVar7 & 0x1f) |
                uVar8;
        uVar6 = (undefined)uVar8;
        if (uVar7 != 0) break;
        puVar10 = puVar9 + 1;
        *puVar9 = uVar6;
        uVar7 = 6;
        uVar8 = 0;
        uVar6 = 0;
        uVar1 = (int)uVar12 + (uint)bVar3;
        uVar12 = (ulong)uVar1;
        uVar13 = (ulong)(uVar11 + iVar5);
        puVar9 = puVar10;
        if (uVar2 <= uVar1) goto LAB_00dcb8b0;
      }
      uVar7 = uVar7 - 2;
      uVar1 = (int)uVar12 + (uint)bVar3;
      uVar12 = (ulong)uVar1;
      uVar13 = (ulong)(uVar11 + iVar5);
    } while (uVar1 < uVar2);
LAB_00dcb8b0:
    if (uVar7 == 6) goto LAB_00dcb920;
  }
  else {
    if (bVar3 != 1) {
      uVar2 = *param_1;
      uVar14 = (uint)(byte)(&DAT_0054a182)[param_3];
      if (uVar14 < uVar2) {
        bVar4 = (&DAT_0054a189)[param_3];
        uVar13 = (ulong)(bVar3 >> 3);
        uVar8 = uVar14;
        do {
          if (puVar9 != param_2 + uVar8 * uVar13) {
            memcpy(puVar9,param_2 + uVar8 * uVar13,uVar13);
          }
          puVar9 = puVar9 + uVar13;
          uVar8 = uVar8 + bVar4;
        } while (uVar8 < uVar2);
      }
      goto LAB_00dcb920;
    }
    uVar2 = *param_1;
    uVar14 = (uint)(byte)(&DAT_0054a182)[param_3];
    if (uVar2 <= (byte)(&DAT_0054a182)[param_3]) goto LAB_00dcb920;
    bVar3 = (&DAT_0054a189)[param_3];
    uVar7 = 0;
    uVar11 = 7;
    puVar10 = param_2;
    uVar8 = uVar14;
    do {
      while( true ) {
        uVar7 = ((byte)param_2[uVar8 >> 3] >> (ulong)(~uVar8 & 7) & 1) << (ulong)(uVar11 & 0x1f) |
                uVar7;
        uVar6 = (undefined)uVar7;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        uVar8 = uVar8 + bVar3;
        puVar9 = puVar10;
        if (uVar2 <= uVar8) goto LAB_00dcb770;
      }
      puVar9 = puVar10 + 1;
      *puVar10 = uVar6;
      uVar11 = 7;
      uVar7 = 0;
      uVar6 = 0;
      uVar8 = uVar8 + bVar3;
      puVar10 = puVar9;
    } while (uVar8 < uVar2);
LAB_00dcb770:
    if (uVar11 == 7) goto LAB_00dcb920;
  }
  *puVar9 = uVar6;
LAB_00dcb920:
  bVar3 = (&DAT_0054a189)[param_3];
  uVar2 = 0;
  if (bVar3 != 0) {
    uVar2 = (*param_1 + (uint)bVar3 + ~uVar14) / (uint)bVar3;
  }
  bVar3 = *(byte *)((long)param_1 + 0x13);
  *param_1 = uVar2;
  uVar13 = (ulong)bVar3 * (ulong)uVar2 + 7 >> 3;
  if (7 < bVar3) {
    uVar13 = (ulong)(bVar3 >> 3) * (ulong)uVar2;
  }
  *(ulong *)(param_1 + 2) = uVar13;
  return;
}


