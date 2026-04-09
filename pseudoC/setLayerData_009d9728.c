// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLayerData
// Entry Point: 009d9728
// Size: 624 bytes
// Signature: undefined __thiscall setLayerData(ProceduralPlacementMask * this, int param_1, int param_2, uint param_3, uint param_4, uchar * param_5)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProceduralPlacementMask::setLayerData(int, int, unsigned int, unsigned int, unsigned char*) */

void __thiscall
ProceduralPlacementMask::setLayerData
          (ProceduralPlacementMask *this,int param_1,int param_2,uint param_3,uint param_4,
          uchar *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined (*pauVar16) [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  long lVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  
  auVar20 = _DAT_004c4f40;
  auVar19 = _DAT_004c4d70;
  auVar18 = _DAT_004c4a50;
  auVar17 = _DAT_004c37b0;
  iVar11 = *(int *)(this + 0x50);
  iVar24 = *(int *)(this + 0x54);
  iVar2 = param_3 + param_1;
  iVar23 = param_4 + param_2;
  uVar3 = iVar11 - 1U;
  if (param_1 <= (int)(iVar11 - 1U)) {
    uVar3 = param_1;
  }
  uVar9 = 0;
  if (-1 < param_1) {
    uVar9 = uVar3;
  }
  iVar21 = iVar24 + -1;
  if (param_2 <= iVar24 + -1) {
    iVar21 = param_2;
  }
  iVar22 = 0;
  if (-1 < param_2) {
    iVar22 = iVar21;
  }
  iVar21 = iVar11;
  if (iVar2 <= iVar11) {
    iVar21 = iVar2;
  }
  iVar10 = 0;
  if (-1 < iVar2) {
    iVar10 = iVar21;
  }
  if (iVar23 <= iVar24) {
    iVar24 = iVar23;
  }
  iVar2 = 0;
  if (-1 < iVar23) {
    iVar2 = iVar24;
  }
  if (iVar22 < iVar2) {
    iVar24 = iVar22 * iVar11;
    iVar21 = (iVar22 - param_2) * param_3;
    uVar13 = iVar10 - uVar9;
    uVar3 = iVar10 + ~uVar9;
    uVar4 = uVar9 + iVar24;
    uVar14 = (uVar9 + iVar21) - param_1;
    uVar7 = uVar13 & 0xfffffff0;
    iVar21 = iVar21 - param_1;
    uVar8 = uVar13 & 0xfffffff8;
    iVar23 = 0;
    uVar6 = uVar4;
    uVar5 = uVar14;
    do {
      if ((int)uVar9 < iVar10) {
        lVar25 = *(long *)(this + 0x58);
        uVar29 = uVar9;
        if (7 < uVar13) {
          uVar12 = uVar4 + iVar11 * iVar23;
          uVar26 = uVar14 + iVar23 * param_3;
          if (((CARRY4(uVar12,uVar3) == false) && (CARRY4(uVar26,uVar3) == false)) &&
             ((lVar28 = (ulong)uVar12 * 4,
              param_5 + (ulong)uVar26 + (ulong)uVar3 + 1 <= (uchar *)(lVar25 + lVar28) ||
              ((uchar *)(lVar25 + ((ulong)uVar3 + 1) * 4 + lVar28) <= param_5 + uVar26)))) {
            uVar29 = uVar7;
            uVar26 = uVar6;
            uVar12 = uVar5;
            if (uVar13 < 0x10) {
              uVar26 = 0;
            }
            else {
              do {
                pauVar16 = (undefined (*) [16])(param_5 + uVar12);
                puVar1 = (undefined8 *)(lVar25 + (ulong)uVar26 * 4);
                uVar29 = uVar29 - 0x10;
                auVar31 = a64_TBL(ZEXT816(0),*pauVar16,ZEXT816(0),auVar18);
                auVar33 = a64_TBL(ZEXT816(0),*pauVar16,ZEXT816(0),auVar17);
                auVar32 = a64_TBL(ZEXT816(0),*pauVar16,ZEXT816(0),auVar19);
                auVar34 = a64_TBL(ZEXT816(0),*pauVar16,ZEXT816(0),auVar20);
                auVar31 = NEON_ucvtf(auVar31,4);
                auVar33 = NEON_ucvtf(auVar33,4);
                auVar32 = NEON_ucvtf(auVar32,4);
                auVar34 = NEON_ucvtf(auVar34,4);
                puVar1[5] = auVar33._8_8_;
                puVar1[4] = auVar33._0_8_;
                puVar1[7] = auVar31._8_8_;
                puVar1[6] = auVar31._0_8_;
                puVar1[1] = auVar34._8_8_;
                *puVar1 = auVar34._0_8_;
                puVar1[3] = auVar32._8_8_;
                puVar1[2] = auVar32._0_8_;
                uVar26 = uVar26 + 0x10;
                uVar12 = uVar12 + 0x10;
              } while (uVar29 != 0);
              if (uVar13 == uVar7) goto LAB_009d9810;
              uVar26 = uVar7;
              uVar29 = uVar9 + uVar7;
              if ((uVar13 >> 3 & 1) == 0) goto LAB_009d9950;
            }
            do {
              auVar31._0_8_ = *(ulong *)(param_5 + (uVar5 + uVar26));
              auVar31._8_8_ = 0;
              uVar29 = uVar26 + 8;
              puVar1 = (undefined8 *)(lVar25 + (ulong)(uVar6 + uVar26) * 4);
              auVar33 = a64_TBL(ZEXT816(0),auVar31,ZEXT816(0),auVar19);
              auVar31 = a64_TBL(ZEXT816(0),auVar31,ZEXT816(0),auVar20);
              auVar33 = NEON_ucvtf(auVar33,4);
              auVar31 = NEON_ucvtf(auVar31,4);
              puVar1[1] = auVar31._8_8_;
              *puVar1 = auVar31._0_8_;
              puVar1[3] = auVar33._8_8_;
              puVar1[2] = auVar33._0_8_;
              uVar26 = uVar29;
            } while (uVar8 != uVar29);
            uVar29 = uVar9 + uVar8;
            if (uVar13 == uVar8) goto LAB_009d9810;
          }
        }
LAB_009d9950:
        iVar27 = iVar10 - uVar29;
        uVar26 = uVar29 + iVar24;
        uVar29 = uVar29 + iVar21;
        do {
          uVar15 = (ulong)uVar29;
          iVar27 = iVar27 + -1;
          uVar29 = uVar29 + 1;
          uVar30 = NEON_ucvtf((uint)param_5[uVar15]);
          *(undefined4 *)(lVar25 + (ulong)uVar26 * 4) = uVar30;
          uVar26 = uVar26 + 1;
        } while (iVar27 != 0);
      }
LAB_009d9810:
      iVar22 = iVar22 + 1;
      iVar23 = iVar23 + 1;
      uVar5 = uVar5 + param_3;
      uVar6 = uVar6 + iVar11;
      iVar24 = iVar24 + iVar11;
      iVar21 = iVar21 + param_3;
    } while (iVar22 != iVar2);
  }
  return;
}


