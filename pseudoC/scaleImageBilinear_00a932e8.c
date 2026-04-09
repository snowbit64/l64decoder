// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scaleImageBilinear
// Entry Point: 00a932e8
// Size: 1260 bytes
// Signature: undefined __cdecl scaleImageBilinear(uchar * param_1, uint param_2, uint param_3, uint param_4, uchar * param_5, uint param_6, uint param_7, uint param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageScale::scaleImageBilinear(unsigned char const*, unsigned int, unsigned int, unsigned int,
   unsigned char*, unsigned int, unsigned int, unsigned int) */

void ImageScale::scaleImageBilinear
               (uchar *param_1,uint param_2,uint param_3,uint param_4,uchar *param_5,uint param_6,
               uint param_7,uint param_8)

{
  int iVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined (*pauVar15) [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  ulong uVar21;
  undefined8 *puVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  
  auVar20 = _DAT_004c4f40;
  auVar19 = _DAT_004c4d70;
  auVar18 = _DAT_004c4a50;
  auVar17 = _DAT_004c3bd0;
  auVar16 = _DAT_004c37b0;
  uVar3 = 0;
  if (param_6 != 0) {
    uVar3 = param_6 - param_7 * param_4;
  }
  if (param_8 != 0) {
    uVar30 = 0;
    uVar13 = 0;
    if ((ulong)param_7 != 0) {
      uVar13 = ((ulong)param_2 << 0x30) / (ulong)param_7;
    }
    uVar21 = (ulong)param_4;
    uVar14 = 0;
    if ((ulong)param_8 != 0) {
      uVar14 = ((ulong)param_3 << 0x30) / (ulong)param_8;
    }
    lVar31 = (uVar14 >> 1) - 1;
    uVar28 = uVar21 & 0xfffffff0;
    do {
      uVar26 = (uint)((ulong)lVar31 >> 0x24);
      uVar4 = 0;
      if (0x7ff < uVar26) {
        uVar4 = uVar26 - 0x800;
      }
      uVar7 = uVar4 >> 0xc;
      uVar26 = param_3 - 1;
      if (uVar7 + 1 <= param_3 - 1) {
        uVar26 = uVar7 + 1;
      }
      if (param_7 != 0) {
        uVar32 = 0;
        iVar5 = (uVar4 & 0xfff) * 0x1000;
        lVar33 = (uVar13 >> 1) - 1;
        do {
          uVar27 = (uint)((ulong)lVar33 >> 0x24);
          uVar10 = 0;
          if (0x7ff < uVar27) {
            uVar10 = uVar27 - 0x800;
          }
          uVar8 = uVar10 >> 0xc;
          uVar27 = param_2 - 1;
          if (uVar8 + 1 <= param_2 - 1) {
            uVar27 = uVar8 + 1;
          }
          if (param_4 != 0) {
            iVar9 = (uVar10 & 0xfff) * (uVar4 & 0xfff);
            iVar6 = (uVar10 & 0xfff) * 0x1000;
            uVar10 = (uVar8 + uVar7 * param_2) * param_4;
            uVar11 = (uVar27 + uVar7 * param_2) * param_4;
            iVar1 = (iVar9 - (iVar5 + iVar6)) + 0x1000000;
            uVar8 = (uVar8 + uVar26 * param_2) * param_4;
            iVar6 = iVar6 - iVar9;
            uVar27 = (uVar27 + uVar26 * param_2) * param_4;
            iVar12 = iVar5 - iVar9;
            if (param_4 < 0x10) {
              uVar24 = 0;
            }
            else {
              uVar25 = (uint)(uVar21 - 1);
              uVar24 = 0;
              if ((((CARRY4(uVar10,uVar25) == false) && (uVar21 - 1 >> 0x20 == 0)) &&
                  (CARRY4(uVar11,uVar25) == false)) &&
                 ((CARRY4(uVar8,uVar25) == false && (CARRY4(uVar27,uVar25) == false)))) {
                puVar2 = (uchar *)((long)param_5 + uVar21);
                uVar24 = 0;
                if (((param_1 + uVar27 + uVar21 <= param_5 || puVar2 <= param_1 + uVar27) &&
                    ((param_1 + uVar8 + uVar21 <= param_5 || puVar2 <= param_1 + uVar8 &&
                     (param_1 + uVar11 + uVar21 <= param_5 || puVar2 <= param_1 + uVar11)))) &&
                   (param_1 + uVar10 + uVar21 <= param_5 || puVar2 <= param_1 + uVar10)) {
                  iVar23 = 0;
                  puVar22 = (undefined8 *)((long)param_5 + uVar28);
                  uVar24 = uVar28;
                  do {
                    uVar24 = uVar24 - 0x10;
                    auVar36 = *(undefined (*) [16])(param_1 + (uVar11 + iVar23));
                    pauVar15 = (undefined (*) [16])(param_1 + (uVar10 + iVar23));
                    uVar25 = uVar27 + iVar23;
                    auVar35 = ZEXT816(0);
                    auVar37 = *(undefined (*) [16])(param_1 + (uVar8 + iVar23));
                    auVar38 = ZEXT816(0);
                    iVar23 = iVar23 + 0x10;
                    auVar43 = *(undefined (*) [16])(param_1 + uVar25);
                    auVar44 = a64_TBL(ZEXT816(0),*pauVar15,ZEXT816(0),auVar18);
                    auVar49 = a64_TBL(ZEXT816(0),auVar36,auVar35,auVar18);
                    auVar50 = a64_TBL(ZEXT816(0),auVar36,auVar35,auVar16);
                    auVar34 = a64_TBL(ZEXT816(0),auVar36,auVar35,auVar19);
                    auVar39 = a64_TBL(ZEXT816(0),auVar36,auVar35,auVar20);
                    auVar45 = a64_TBL(ZEXT816(0),*pauVar15,ZEXT816(0),auVar16);
                    auVar47 = a64_TBL(ZEXT816(0),*pauVar15,ZEXT816(0),auVar19);
                    auVar48 = a64_TBL(ZEXT816(0),*pauVar15,ZEXT816(0),auVar20);
                    auVar40 = a64_TBL(ZEXT816(0),auVar37,auVar38,auVar20);
                    auVar35 = a64_TBL(ZEXT816(0),auVar37,auVar38,auVar19);
                    auVar36 = a64_TBL(ZEXT816(0),auVar37,auVar38,auVar16);
                    auVar41 = a64_TBL(ZEXT816(0),auVar37,auVar38,auVar18);
                    auVar42 = a64_TBL(ZEXT816(0),auVar43,ZEXT816(0),auVar18);
                    auVar37 = a64_TBL(ZEXT816(0),auVar43,ZEXT816(0),auVar16);
                    auVar38 = a64_TBL(ZEXT816(0),auVar43,ZEXT816(0),auVar19);
                    auVar43 = a64_TBL(ZEXT816(0),auVar43,ZEXT816(0),auVar20);
                    auVar46._0_4_ =
                         iVar6 * auVar49._0_4_ + iVar1 * auVar44._0_4_ + iVar12 * auVar41._0_4_ +
                         iVar9 * auVar42._0_4_ + 0x800000U >> 0x18;
                    auVar46._4_4_ =
                         iVar6 * auVar49._4_4_ + iVar1 * auVar44._4_4_ + iVar12 * auVar41._4_4_ +
                         iVar9 * auVar42._4_4_ + 0x800000U >> 0x18;
                    auVar46._8_4_ =
                         iVar6 * auVar49._8_4_ + iVar1 * auVar44._8_4_ + iVar12 * auVar41._8_4_ +
                         iVar9 * auVar42._8_4_ + 0x800000U >> 0x18;
                    auVar46._12_4_ =
                         iVar6 * auVar49._12_4_ + iVar1 * auVar44._12_4_ + iVar12 * auVar41._12_4_ +
                         iVar9 * auVar42._12_4_ + 0x800000U >> 0x18;
                    auVar41._0_4_ =
                         iVar6 * auVar50._0_4_ + iVar1 * auVar45._0_4_ + iVar12 * auVar36._0_4_ +
                         iVar9 * auVar37._0_4_ + 0x800000U >> 0x18;
                    auVar41._4_4_ =
                         iVar6 * auVar50._4_4_ + iVar1 * auVar45._4_4_ + iVar12 * auVar36._4_4_ +
                         iVar9 * auVar37._4_4_ + 0x800000U >> 0x18;
                    auVar41._8_4_ =
                         iVar6 * auVar50._8_4_ + iVar1 * auVar45._8_4_ + iVar12 * auVar36._8_4_ +
                         iVar9 * auVar37._8_4_ + 0x800000U >> 0x18;
                    auVar41._12_4_ =
                         iVar6 * auVar50._12_4_ + iVar1 * auVar45._12_4_ + iVar12 * auVar36._12_4_ +
                         iVar9 * auVar37._12_4_ + 0x800000U >> 0x18;
                    auVar37._0_4_ =
                         iVar6 * auVar39._0_4_ + iVar1 * auVar48._0_4_ + iVar12 * auVar40._0_4_ +
                         iVar9 * auVar43._0_4_ + 0x800000U >> 0x18;
                    auVar37._4_4_ =
                         iVar6 * auVar39._4_4_ + iVar1 * auVar48._4_4_ + iVar12 * auVar40._4_4_ +
                         iVar9 * auVar43._4_4_ + 0x800000U >> 0x18;
                    auVar37._8_4_ =
                         iVar6 * auVar39._8_4_ + iVar1 * auVar48._8_4_ + iVar12 * auVar40._8_4_ +
                         iVar9 * auVar43._8_4_ + 0x800000U >> 0x18;
                    auVar37._12_4_ =
                         iVar6 * auVar39._12_4_ + iVar1 * auVar48._12_4_ + iVar12 * auVar40._12_4_ +
                         iVar9 * auVar43._12_4_ + 0x800000U >> 0x18;
                    auVar36._4_4_ =
                         iVar6 * auVar34._4_4_ + iVar1 * auVar47._4_4_ + iVar12 * auVar35._4_4_ +
                         iVar9 * auVar38._4_4_ + 0x800000U >> 0x18;
                    auVar36._0_4_ =
                         iVar6 * auVar34._0_4_ + iVar1 * auVar47._0_4_ + iVar12 * auVar35._0_4_ +
                         iVar9 * auVar38._0_4_ + 0x800000U >> 0x18;
                    auVar36._8_4_ =
                         iVar6 * auVar34._8_4_ + iVar1 * auVar47._8_4_ + iVar12 * auVar35._8_4_ +
                         iVar9 * auVar38._8_4_ + 0x800000U >> 0x18;
                    auVar36._12_4_ =
                         iVar6 * auVar34._12_4_ + iVar1 * auVar47._12_4_ + iVar12 * auVar35._12_4_ +
                         iVar9 * auVar38._12_4_ + 0x800000U >> 0x18;
                    auVar36 = a64_TBL(ZEXT816(0),auVar37,auVar36,auVar41,auVar46,auVar17);
                    *(long *)((long)param_5 + 8) = auVar36._8_8_;
                    *(long *)param_5 = auVar36._0_8_;
                    param_5 = (uchar *)((long)param_5 + 0x10);
                  } while (uVar24 != 0);
                  param_5 = (uchar *)puVar22;
                  uVar24 = uVar28;
                  if (uVar28 == uVar21) goto LAB_00a93450;
                }
              }
            }
            lVar29 = uVar21 - uVar24;
            puVar22 = (undefined8 *)param_5;
            do {
              iVar23 = (int)uVar24;
              uVar24 = uVar24 + 1;
              lVar29 = lVar29 + -1;
              param_5 = (uchar *)((long)puVar22 + 1);
              *(uchar *)puVar22 =
                   (uchar)(iVar6 * (uint)param_1[uVar11 + iVar23] +
                           iVar1 * (uint)param_1[uVar10 + iVar23] +
                           iVar12 * (uint)param_1[uVar8 + iVar23] +
                           iVar9 * (uint)param_1[uVar27 + iVar23] + 0x800000 >> 0x18);
              puVar22 = (undefined8 *)param_5;
            } while (lVar29 != 0);
          }
LAB_00a93450:
          uVar32 = uVar32 + 1;
          lVar33 = lVar33 + uVar13;
        } while (uVar32 != param_7);
      }
      param_5 = (uchar *)((long)param_5 + (ulong)uVar3);
      uVar30 = uVar30 + 1;
      lVar31 = lVar31 + uVar14;
    } while (uVar30 != param_8);
  }
  return;
}


