// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d90df0
// Entry Point: 00d90df0
// Size: 796 bytes
// Signature: undefined FUN_00d90df0(void)


void FUN_00d90df0(long param_1,long param_2,long param_3,uint param_4)

{
  short *psVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  long *plVar26;
  int iVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  int iVar36;
  short *psVar37;
  byte *pbVar38;
  undefined *puVar39;
  int iVar40;
  long lVar41;
  
  if (0 < (int)param_4) {
    iVar6 = *(int *)(param_1 + 0x74);
    lVar35 = *(long *)(param_1 + 0x270);
    uVar29 = (ulong)(iVar6 * 3 + 3);
    if (iVar6 == 0) {
      cVar15 = *(char *)(lVar35 + 0x48);
      lVar24 = *(long *)(lVar35 + 0x40);
      do {
        cVar15 = cVar15 == '\0';
        uVar28 = 0;
        if (!(bool)cVar15) {
          uVar28 = uVar29;
        }
        puVar3 = (undefined4 *)(lVar24 + uVar28 * 2);
        param_4 = param_4 - 1;
        *puVar3 = 0;
        *(undefined2 *)(puVar3 + 1) = 0;
      } while (param_4 != 0);
      *(char *)(lVar35 + 0x48) = cVar15;
    }
    else {
      plVar26 = *(long **)(param_1 + 0x90);
      uVar28 = 0;
      lVar19 = *(long *)(lVar35 + 0x30);
      lVar24 = *plVar26;
      lVar5 = plVar26[1];
      lVar20 = *(long *)(param_1 + 0x198);
      lVar21 = *(long *)(lVar35 + 0x50);
      lVar41 = plVar26[2];
      do {
        lVar30 = *(long *)(param_2 + uVar28 * 8);
        puVar39 = *(undefined **)(param_3 + uVar28 * 8);
        bVar4 = *(char *)(lVar35 + 0x48) == '\0';
        if (bVar4) {
          lVar33 = *(long *)(lVar35 + 0x40);
          uVar31 = 3;
          lVar23 = 1;
        }
        else {
          uVar31 = 0xfffffffd;
          lVar30 = lVar30 + (ulong)(iVar6 * 3 - 3);
          puVar39 = puVar39 + (iVar6 - 1);
          lVar33 = *(long *)(lVar35 + 0x40) + uVar29 * 2;
          lVar23 = -1;
        }
        iVar27 = 0;
        iVar25 = 0;
        iVar22 = 0;
        iVar18 = 0;
        iVar17 = 0;
        iVar16 = 0;
        pbVar38 = (byte *)(lVar30 + 1);
        *(bool *)(lVar35 + 0x48) = bVar4;
        psVar37 = (short *)(lVar33 + 2);
        iVar40 = iVar6;
        iVar36 = 0;
        iVar32 = 0;
        iVar34 = 0;
        do {
          psVar1 = (short *)((long)psVar37 + (-(uVar31 >> 0x1f) & 0xfffffffe00000000 | uVar31 << 1))
          ;
          bVar7 = *(byte *)(lVar20 + (long)*(int *)(lVar21 + (long)(iVar27 + psVar1[-1] + 8 >> 4) *
                                                             4) + (ulong)pbVar38[-1]);
          bVar8 = *(byte *)(lVar20 + (long)*(int *)(lVar21 + (long)(iVar25 + *psVar1 + 8 >> 4) * 4)
                                     + (ulong)*pbVar38);
          bVar9 = *(byte *)(lVar20 + (long)*(int *)(lVar21 + (long)(iVar22 + psVar1[1] + 8 >> 4) * 4
                                                   ) + (ulong)pbVar38[1]);
          puVar2 = (ushort *)
                   (*(long *)(lVar19 + (ulong)(bVar7 >> 3) * 8) + (ulong)(bVar8 >> 2) * 0x40 +
                   (ulong)(bVar9 >> 3) * 2);
          uVar10 = *puVar2;
          if (uVar10 == 0) {
            FUN_00d91718(param_1);
            uVar10 = *puVar2;
          }
          iVar40 = iVar40 + -1;
          lVar30 = (ulong)uVar10 - 1;
          *puVar39 = (char)lVar30;
          iVar11 = (uint)bVar7 - (uint)*(byte *)(lVar24 + lVar30);
          iVar12 = (uint)bVar8 - (uint)*(byte *)(lVar5 + lVar30);
          iVar13 = (uint)bVar9 - (uint)*(byte *)(lVar41 + lVar30);
          puVar39 = puVar39 + lVar23;
          sVar14 = (short)iVar18;
          iVar18 = iVar11 * 5 + iVar32;
          psVar37[-1] = (short)iVar11 * 3 + sVar14;
          iVar25 = iVar12 * 7;
          sVar14 = (short)iVar17;
          iVar17 = iVar12 * 5 + iVar34;
          *psVar37 = (short)iVar12 * 3 + sVar14;
          sVar14 = (short)iVar16;
          iVar16 = iVar13 * 5 + iVar36;
          iVar27 = iVar11 * 7;
          iVar22 = iVar13 * 7;
          psVar37[1] = (short)iVar13 * 3 + sVar14;
          pbVar38 = pbVar38 + (int)uVar31;
          psVar37 = psVar1;
          iVar36 = iVar13;
          iVar32 = iVar11;
          iVar34 = iVar12;
        } while (iVar40 != 0);
        psVar1[-1] = (short)iVar18;
        *psVar1 = (short)iVar17;
        psVar1[1] = (short)iVar16;
        uVar28 = uVar28 + 1;
      } while (uVar28 != param_4);
    }
  }
  return;
}


