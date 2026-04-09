// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df2734
// Entry Point: 00df2734
// Size: 724 bytes
// Signature: undefined FUN_00df2734(void)


void FUN_00df2734(long param_1,ulong param_2,long param_3,int param_4,int param_5,int param_6,
                 int *param_7,int *param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  
  lVar37 = (long)(int)param_2;
  uVar35 = -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
  uVar36 = -(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1;
  lVar34 = param_1 + (long)(int)param_2 * 6;
  lVar33 = 0;
  lVar3 = param_1 + ((-(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3) -
                    lVar37);
  lVar4 = param_1 + uVar35 + lVar37;
  lVar5 = param_1 + uVar35;
  lVar6 = param_1 + uVar36 + lVar37;
  lVar7 = param_1 + uVar36;
  do {
    while( true ) {
      pbVar8 = (byte *)(param_3 + lVar33) + param_4;
      pbVar9 = pbVar8 + param_4;
      bVar12 = *(byte *)(param_3 + lVar33);
      pbVar10 = pbVar9 + param_4;
      bVar13 = *pbVar8;
      pbVar8 = pbVar10 + param_4;
      bVar14 = *pbVar9;
      pbVar9 = pbVar8 + param_4;
      bVar15 = *pbVar10;
      pbVar10 = pbVar9 + param_4;
      pbVar11 = pbVar10 + param_4;
      bVar16 = *pbVar8;
      bVar17 = *pbVar9;
      uVar30 = (uint)bVar13;
      iVar22 = uVar30 - bVar12;
      bVar18 = *pbVar10;
      iVar2 = -iVar22;
      if (-1 < iVar22) {
        iVar2 = iVar22;
      }
      bVar19 = *pbVar11;
      bVar21 = (pbVar11 + param_4)[param_4];
      uVar29 = (uint)bVar18;
      uVar31 = (uint)bVar17;
      iVar23 = uVar31 - uVar29;
      iVar22 = -iVar23;
      if (-1 < iVar23) {
        iVar22 = iVar23;
      }
      uVar43 = (uint)bVar14;
      iVar24 = uVar43 - uVar30;
      bVar20 = pbVar11[param_4];
      iVar23 = -iVar24;
      if (-1 < iVar24) {
        iVar23 = iVar24;
      }
      uVar38 = (uint)bVar19;
      iVar25 = uVar29 - uVar38;
      iVar24 = -iVar25;
      if (-1 < iVar25) {
        iVar24 = iVar25;
      }
      uVar41 = (uint)bVar15;
      iVar26 = uVar41 - uVar43;
      iVar25 = -iVar26;
      if (-1 < iVar26) {
        iVar25 = iVar26;
      }
      uVar40 = (uint)bVar20;
      iVar27 = uVar38 - uVar40;
      iVar26 = -iVar27;
      if (-1 < iVar27) {
        iVar26 = iVar27;
      }
      uVar42 = (uint)bVar16;
      iVar28 = uVar42 - uVar41;
      iVar27 = -iVar28;
      if (-1 < iVar28) {
        iVar27 = iVar28;
      }
      uVar45 = iVar27 + iVar25 + iVar23 + iVar2;
      iVar23 = uVar40 - bVar21;
      iVar2 = -iVar23;
      if (-1 < iVar23) {
        iVar2 = iVar23;
      }
      uVar32 = uVar45;
      if (0xfe < uVar45) {
        uVar32 = 0xff;
      }
      uVar1 = iVar2 + iVar26 + iVar24 + iVar22;
      *param_7 = *param_7 + uVar32;
      uVar32 = uVar1;
      if (0xfe < uVar1) {
        uVar32 = 0xff;
      }
      *param_8 = *param_8 + uVar32;
      uVar44 = (uint)bVar14;
      uVar32 = (uint)bVar17;
      uVar39 = (uint)bVar19;
      if (((((int)uVar45 < param_6) && ((int)uVar1 < param_6)) && ((int)(uVar31 - uVar42) < param_5)
          ) && ((int)(uVar42 - uVar31) < param_5)) break;
      *(byte *)(param_1 + lVar33) = bVar13;
      *(byte *)(param_1 + lVar37 + lVar33) = bVar14;
      *(byte *)(lVar7 + lVar33) = bVar15;
      *(byte *)(lVar6 + lVar33) = bVar16;
      *(byte *)(lVar5 + lVar33) = bVar17;
      *(byte *)(lVar4 + lVar33) = bVar18;
      *(byte *)(lVar34 + lVar33) = bVar19;
      *(byte *)(lVar3 + lVar33) = bVar20;
      lVar33 = lVar33 + 1;
      if ((int)lVar33 == 8) {
        return;
      }
    }
    uVar45 = (uint)bVar12;
    iVar2 = uVar42 + 4 + uVar31;
    *(char *)(param_1 + lVar33) =
         (char)(uVar42 + 4 + uVar45 + (uint)bVar12 * 2 + uVar30 * 2 + uVar43 + uVar41 >> 3);
    uVar42 = (uint)bVar16;
    uVar31 = (uint)bVar15;
    *(char *)(param_1 + lVar37 + lVar33) =
         (char)(iVar2 + (uint)bVar13 + uVar31 + (uVar43 + uVar45) * 2 >> 3);
    *(char *)(lVar7 + lVar33) =
         (char)(uVar45 + uVar30 + uVar44 + uVar41 * 2 + uVar42 + uVar32 + uVar29 + 4 >> 3);
    uVar30 = (uint)bVar18;
    *(char *)(lVar6 + lVar33) =
         (char)(bVar13 + uVar44 + uVar31 + uVar42 * 2 + uVar32 + uVar29 + uVar38 + 4 >> 3);
    *(char *)(lVar5 + lVar33) =
         (char)(uVar44 + uVar31 + uVar42 + uVar32 * 2 + uVar30 + uVar38 + uVar40 + 4 >> 3);
    *(char *)(lVar4 + lVar33) =
         (char)(uVar31 + uVar42 + uVar32 + uVar30 * 2 + uVar39 + uVar40 + (uint)bVar21 + 4 >> 3);
    *(char *)(lVar34 + lVar33) = (char)(iVar2 + uVar30 + (uint)bVar20 + (bVar21 + uVar39) * 2 >> 3);
    *(char *)(lVar3 + lVar33) =
         (char)(uVar32 + uVar30 + uVar39 + (uint)bVar20 * 2 + (uint)bVar21 * 3 + 4 >> 3);
    lVar33 = lVar33 + 1;
  } while ((int)lVar33 != 8);
  return;
}


