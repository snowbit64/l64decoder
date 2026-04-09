// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_CNG_Reset
// Entry Point: 00e6082c
// Size: 212 bytes
// Signature: undefined silk_CNG_Reset(void)


void silk_CNG_Reset(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  ulong uVar19;
  short sVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  
  uVar1 = *(uint *)(param_1 + 0x924);
  uVar13 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    iVar3 = 0;
    if (uVar1 + 1 != 0) {
      iVar3 = 0x7fff / (int)(uVar1 + 1);
    }
    if (uVar1 < 0x10) {
      uVar16 = 0;
      iVar15 = 0;
    }
    else {
      uVar16 = uVar13 & 0xfffffff0;
      iVar2 = iVar3 * 8;
      iVar15 = iVar3 * (int)uVar16;
      puVar17 = (undefined8 *)(param_1 + 0xffc);
      sVar7 = (short)iVar3;
      sVar20 = sVar7 * 4;
      iVar4 = iVar3 * 5;
      iVar5 = iVar3 * 6;
      iVar6 = iVar3 * 7;
      iVar21 = 0;
      iVar23 = iVar3 * 2;
      iVar24 = iVar3 * 3;
      uVar19 = uVar16;
      iVar22 = iVar3;
      do {
        iVar25 = iVar21 + iVar2;
        iVar26 = iVar22 + iVar2;
        iVar27 = iVar23 + iVar2;
        iVar28 = iVar24 + iVar2;
        uVar19 = uVar19 - 0x10;
        sVar12 = sVar20 + (short)iVar2;
        sVar10 = (short)iVar21;
        sVar11 = (short)iVar22;
        sVar9 = (short)iVar23;
        sVar8 = (short)iVar24;
        iVar21 = iVar25 + iVar2;
        iVar22 = iVar26 + iVar2;
        iVar23 = iVar27 + iVar2;
        iVar24 = iVar28 + iVar2;
        puVar17[-1] = CONCAT26((short)(iVar6 + iVar3),
                               CONCAT24((short)(iVar5 + iVar3),
                                        CONCAT22((short)(iVar4 + iVar3),sVar20 + sVar7)));
        puVar17[-2] = CONCAT26(sVar8 + sVar7,
                               CONCAT24(sVar9 + sVar7,CONCAT22(sVar11 + sVar7,sVar10 + sVar7)));
        puVar17[1] = CONCAT26((short)(iVar6 + iVar2) + sVar7,
                              CONCAT24((short)(iVar5 + iVar2) + sVar7,
                                       CONCAT22((short)(iVar4 + iVar2) + sVar7,sVar12 + sVar7)));
        *puVar17 = CONCAT26((short)(iVar28 + iVar3),
                            CONCAT24((short)(iVar27 + iVar3),
                                     CONCAT22((short)(iVar26 + iVar3),(short)iVar25 + sVar7)));
        puVar17 = puVar17 + 4;
        sVar20 = sVar12 + (short)iVar2;
        iVar4 = iVar4 + iVar2 + iVar2;
        iVar5 = iVar5 + iVar2 + iVar2;
        iVar6 = iVar6 + iVar2 + iVar2;
      } while (uVar19 != 0);
      if (uVar16 == uVar13) goto LAB_00e608ec;
    }
    lVar14 = uVar13 - uVar16;
    puVar18 = (undefined2 *)(param_1 + uVar16 * 2 + 0xfec);
    do {
      iVar15 = iVar15 + iVar3;
      *puVar18 = (short)iVar15;
      lVar14 = lVar14 + -1;
      puVar18 = puVar18 + 1;
    } while (lVar14 != 0);
  }
LAB_00e608ec:
  *(undefined8 *)(param_1 + 0x104c) = 0x30788000000000;
  return;
}


