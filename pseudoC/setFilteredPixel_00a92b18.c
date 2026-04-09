// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFilteredPixel
// Entry Point: 00a92b18
// Size: 1972 bytes
// Signature: undefined __thiscall setFilteredPixel(ImageScale * this, uchar * param_1, double param_2, double param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageScale::setFilteredPixel(unsigned char*, double, double) */

void __thiscall
ImageScale::setFilteredPixel(ImageScale *this,uchar *param_1,double param_2,double param_3)

{
  undefined (*pauVar1) [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  long lVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  uchar uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  undefined auVar46 [16];
  undefined auVar47 [16];
  double dVar48;
  double dVar49;
  undefined auVar50 [16];
  double dVar51;
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  undefined auVar62 [16];
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2;
  dVar51 = *(double *)(this + 0x20);
  dVar48 = *(double *)(this + 0x28);
  uVar28 = *(int *)(this + 8) - 1;
  uVar32 = *(int *)(this + 0xc) - 1;
  uVar27 = (int)(param_2 - dVar51) & ((int)(param_2 - dVar51) >> 0x1f ^ 0xffffffffU);
  if ((int)(dVar51 + param_2) <= (int)uVar28) {
    uVar28 = (int)(dVar51 + param_2);
  }
  uVar30 = (int)(param_3 - dVar48) & ((int)(param_3 - dVar48) >> 0x1f ^ 0xffffffffU);
  if ((int)(dVar48 + param_3) <= (int)uVar32) {
    uVar32 = (int)(dVar48 + param_3);
  }
  if ((int)((int)dVar51 << 1 | 1U) <= (int)(uVar28 - uVar27)) {
    if ((float)*(int *)(this + 8) + -0.5 <= (float)uVar27) {
      uVar28 = uVar28 - 1;
    }
    else {
      uVar27 = uVar27 + 1;
    }
  }
  if ((int)(uVar32 - uVar30) < (int)((int)dVar48 << 1 | 1U)) {
LAB_00a92c10:
    if ((int)uVar30 <= (int)uVar32) {
LAB_00a92c28:
      auVar50 = ZEXT816(0);
      lVar26 = 0;
      do {
        dVar49 = auVar50._0_8_;
        dVar51 = *(double *)(this + 0x38);
        dVar48 = (double)(**(code **)(this + 0x18))
                                   (SUB84((param_3 - (double)(uVar30 + (int)lVar26)) * dVar51,0));
        dVar51 = dVar51 * dVar48;
        *(double *)(*(long *)(this + 0x58) + lVar26 * 8) = dVar51;
        lVar26 = lVar26 + 1;
        auVar50._0_8_ = dVar49 + dVar51;
        auVar50._8_8_ = 0;
      } while (uVar30 + ~uVar32 + (int)lVar26 != 0);
      if (0.0 < auVar50._0_8_) {
        if ((int)uVar30 <= (int)uVar32) {
          lVar15 = (long)(int)uVar30;
          lVar11 = *(long *)(this + 0x58);
          dVar48 = 1.0 / auVar50._0_8_;
          lVar26 = lVar15;
          if (2 < uVar32 - uVar30) {
            uVar24 = (ulong)(uVar32 - uVar30) + 1;
            pdVar12 = (double *)(lVar11 + 0x10);
            uVar20 = uVar24 & 0x1fffffffc;
            lVar26 = uVar20 + lVar15;
            uVar21 = uVar20;
            do {
              uVar21 = uVar21 - 4;
              pdVar12[-1] = dVar48 * pdVar12[-1];
              pdVar12[-2] = dVar48 * pdVar12[-2];
              pdVar12[1] = pdVar12[1] * dVar48;
              *pdVar12 = *pdVar12 * dVar48;
              pdVar12 = pdVar12 + 4;
            } while (uVar21 != 0);
            if (uVar24 == uVar20) goto LAB_00a92d00;
          }
          iVar13 = (uVar32 - (int)lVar26) + 1;
          pdVar12 = (double *)(lVar11 + (lVar26 - lVar15) * 8);
          do {
            iVar13 = iVar13 + -1;
            *pdVar12 = dVar48 * *pdVar12;
            pdVar12 = pdVar12 + 1;
          } while (iVar13 != 0);
        }
      }
    }
  }
  else {
    if ((float)uVar30 < (float)*(int *)(this + 0xc) + -0.5) {
      uVar30 = uVar30 + 1;
      goto LAB_00a92c10;
    }
    uVar32 = uVar32 - 1;
    if ((int)uVar30 <= (int)uVar32) goto LAB_00a92c28;
  }
LAB_00a92d00:
  if ((int)uVar27 <= (int)uVar28) {
    dVar48 = 0.0;
    lVar26 = 0;
    do {
      dVar49 = *(double *)(this + 0x30);
      dVar51 = (double)(**(code **)(this + 0x18))
                                 (SUB84((auVar46._0_8_ - (double)(uVar27 + (int)lVar26)) * dVar49,0)
                                 );
      *(double *)(*(long *)(this + 0x50) + lVar26 * 8) = dVar49 * dVar51;
      lVar26 = lVar26 + 1;
      dVar48 = dVar48 + dVar49 * dVar51;
    } while (uVar27 + ~uVar28 + (int)lVar26 != 0);
    if (0.0 < dVar48) {
      if ((int)uVar27 <= (int)uVar28) {
        lVar15 = (long)(int)uVar27;
        lVar11 = *(long *)(this + 0x50);
        dVar48 = 1.0 / dVar48;
        lVar26 = lVar15;
        if (2 < uVar28 - uVar27) {
          uVar24 = (ulong)(uVar28 - uVar27) + 1;
          pdVar12 = (double *)(lVar11 + 0x10);
          uVar20 = uVar24 & 0x1fffffffc;
          lVar26 = uVar20 + lVar15;
          uVar21 = uVar20;
          do {
            uVar21 = uVar21 - 4;
            pdVar12[-1] = dVar48 * pdVar12[-1];
            pdVar12[-2] = dVar48 * pdVar12[-2];
            pdVar12[1] = pdVar12[1] * dVar48;
            *pdVar12 = *pdVar12 * dVar48;
            pdVar12 = pdVar12 + 4;
          } while (uVar21 != 0);
          if (uVar24 == uVar20) goto LAB_00a92de0;
        }
        iVar13 = (uVar28 - (int)lVar26) + 1;
        pdVar12 = (double *)(lVar11 + (lVar26 - lVar15) * 8);
        do {
          iVar13 = iVar13 + -1;
          *pdVar12 = dVar48 * *pdVar12;
          pdVar12 = pdVar12 + 1;
        } while (iVar13 != 0);
      }
    }
  }
LAB_00a92de0:
  if ((int)uVar30 <= (int)uVar32) {
    lVar15 = *(long *)(this + 0x48);
    lVar16 = (long)(int)uVar30;
    lVar11 = *(long *)(this + 0x58);
    lVar26 = lVar16;
    if (6 < uVar32 - uVar30) {
      uVar24 = (ulong)(uVar32 - uVar30) + 1;
      uVar20 = uVar24 & 0x1fffffff8;
      lVar26 = uVar20 + lVar16;
      puVar7 = (undefined8 *)(lVar15 + 0x10);
      pdVar12 = (double *)(lVar11 + 0x20);
      uVar21 = uVar20;
      do {
        dVar51 = pdVar12[-3];
        dVar48 = pdVar12[-4];
        uVar21 = uVar21 - 8;
        dVar36 = pdVar12[1];
        dVar35 = *pdVar12;
        dVar34 = pdVar12[3];
        dVar49 = pdVar12[2];
        puVar7[-1] = CONCAT44((int)(long)(pdVar12[-1] * 65535.0),(int)(long)(pdVar12[-2] * 65535.0))
        ;
        puVar7[-2] = CONCAT44((int)(long)(dVar51 * 65535.0),(int)(long)(dVar48 * 65535.0));
        puVar7[1] = CONCAT44((int)(long)(dVar34 * 65535.0),(int)(long)(dVar49 * 65535.0));
        *puVar7 = CONCAT44((int)(long)(dVar36 * 65535.0),(int)(long)(dVar35 * 65535.0));
        puVar7 = puVar7 + 4;
        pdVar12 = pdVar12 + 8;
      } while (uVar21 != 0);
      if (uVar24 == uVar20) goto LAB_00a92ea8;
    }
    iVar13 = (uVar32 - (int)lVar26) + 1;
    pdVar12 = (double *)(lVar11 + (lVar26 - lVar16) * 8);
    piVar9 = (int *)(lVar15 + (lVar26 - lVar16) * 4);
    do {
      iVar13 = iVar13 + -1;
      *piVar9 = (int)(*pdVar12 * 65535.0);
      pdVar12 = pdVar12 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar13 != 0);
  }
LAB_00a92ea8:
  uVar4 = uVar28 - uVar27;
  if ((int)uVar27 <= (int)uVar28) {
    lVar15 = *(long *)(this + 0x40);
    lVar16 = (long)(int)uVar27;
    lVar11 = *(long *)(this + 0x50);
    lVar26 = lVar16;
    if (6 < uVar4) {
      uVar24 = (ulong)uVar4 + 1;
      uVar20 = uVar24 & 0x1fffffff8;
      lVar26 = uVar20 + lVar16;
      puVar7 = (undefined8 *)(lVar15 + 0x10);
      pdVar12 = (double *)(lVar11 + 0x20);
      uVar21 = uVar20;
      do {
        dVar51 = pdVar12[-3];
        dVar48 = pdVar12[-4];
        uVar21 = uVar21 - 8;
        dVar36 = pdVar12[1];
        dVar35 = *pdVar12;
        dVar34 = pdVar12[3];
        dVar49 = pdVar12[2];
        puVar7[-1] = CONCAT44((int)(long)(pdVar12[-1] * 65535.0),(int)(long)(pdVar12[-2] * 65535.0))
        ;
        puVar7[-2] = CONCAT44((int)(long)(dVar51 * 65535.0),(int)(long)(dVar48 * 65535.0));
        puVar7[1] = CONCAT44((int)(long)(dVar34 * 65535.0),(int)(long)(dVar49 * 65535.0));
        *puVar7 = CONCAT44((int)(long)(dVar36 * 65535.0),(int)(long)(dVar35 * 65535.0));
        puVar7 = puVar7 + 4;
        pdVar12 = pdVar12 + 8;
      } while (uVar21 != 0);
      if (uVar24 == uVar20) goto LAB_00a92f70;
    }
    iVar13 = (uVar28 - (int)lVar26) + 1;
    pdVar12 = (double *)(lVar11 + (lVar26 - lVar16) * 8);
    piVar9 = (int *)(lVar15 + (lVar26 - lVar16) * 4);
    do {
      iVar13 = iVar13 + -1;
      *piVar9 = (int)(*pdVar12 * 65535.0);
      pdVar12 = pdVar12 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar13 != 0);
  }
LAB_00a92f70:
  auVar6 = _DAT_004c4f40;
  auVar50 = _DAT_004c4d70;
  auVar5 = _DAT_004c4a50;
  auVar46 = _DAT_004c37b0;
  uVar24 = (ulong)*(uint *)(this + 0x10);
  if (*(uint *)(this + 0x10) != 0) {
    uVar21 = (ulong)uVar4 + 1;
    lVar26 = (long)(int)uVar30;
    uVar19 = uVar21 & 0x1ffffffe0;
    uVar22 = uVar21 & 0x1fffffff8;
    lVar11 = (long)(int)uVar27;
    uVar20 = 0;
    do {
      if ((int)uVar32 < (int)uVar30) {
        uVar17 = '\0';
      }
      else {
        iVar3 = *(int *)(this + 8);
        iVar14 = (int)uVar20;
        lVar16 = *(long *)(this + 0x40);
        iVar13 = 0;
        uVar10 = 0;
        iVar31 = uVar30 * iVar3;
        lVar29 = *(long *)this;
        iVar23 = (int)uVar24;
        iVar33 = uVar27 + iVar31;
        iVar2 = uVar27 + iVar14 + iVar31;
        uVar25 = iVar14 + iVar23 * iVar33;
        lVar15 = lVar26;
        do {
          if ((int)uVar28 < (int)uVar27) {
            uVar37 = 0;
            iVar38 = *(int *)(*(long *)(this + 0x48) + (lVar15 - lVar26) * 4);
          }
          else {
            lVar8 = lVar11;
            if (uVar4 < 7) {
              uVar37 = 0;
LAB_00a93230:
              iVar38 = (uVar28 + 1) - (int)lVar8;
              uVar18 = iVar14 + iVar23 * (iVar31 + (int)lVar8);
              piVar9 = (int *)(lVar16 + lVar11 * -4 + lVar8 * 4);
              do {
                uVar24 = (ulong)uVar18;
                uVar18 = uVar18 + iVar23;
                iVar38 = iVar38 + -1;
                uVar37 = uVar37 + *piVar9 * (uint)*(byte *)(lVar29 + uVar24);
                piVar9 = piVar9 + 1;
              } while (iVar38 != 0);
            }
            else {
              uVar37 = 0;
              if ((iVar23 != 1) || (CARRY4(iVar2 + iVar3 * iVar13,uVar4) != false))
              goto LAB_00a93230;
              if (uVar4 < 0x1f) {
                uVar37 = 0;
                uVar24 = 0;
LAB_00a931c8:
                iVar39 = 0;
                iVar40 = 0;
                iVar41 = 0;
                iVar42 = 0;
                iVar43 = 0;
                iVar45 = 0;
                uVar18 = iVar14 + iVar33 + (int)uVar24;
                iVar38 = 0;
                lVar8 = uVar24 - uVar22;
                puVar7 = (undefined8 *)(lVar16 + uVar24 * 4);
                do {
                  auVar56._0_8_ = *(ulong *)(lVar29 + (ulong)uVar18);
                  auVar56._8_8_ = 0;
                  uVar18 = uVar18 + iVar23 * 8;
                  lVar8 = lVar8 + 8;
                  auVar62 = a64_TBL(ZEXT816(0),auVar56,ZEXT816(0),auVar50);
                  auVar57._12_4_ = 0x10101003;
                  auVar57._0_12_ = auVar6;
                  auVar57 = a64_TBL(ZEXT816(0),auVar56,ZEXT816(0),auVar57);
                  uVar37 = uVar37 + (int)*puVar7 * auVar57._0_4_;
                  iVar38 = iVar38 + (int)((ulong)*puVar7 >> 0x20) * auVar57._4_4_;
                  iVar39 = iVar39 + (int)puVar7[1] * auVar57._8_4_;
                  iVar40 = iVar40 + (int)((ulong)puVar7[1] >> 0x20) * auVar57._12_4_;
                  iVar41 = iVar41 + (int)puVar7[2] * auVar62._0_4_;
                  iVar42 = iVar42 + (int)((ulong)puVar7[2] >> 0x20) * auVar62._4_4_;
                  iVar43 = iVar43 + (int)puVar7[3] * auVar62._8_4_;
                  iVar45 = iVar45 + (int)((ulong)puVar7[3] >> 0x20) * auVar62._12_4_;
                  puVar7 = puVar7 + 4;
                } while (lVar8 != 0);
                uVar37 = uVar37 + iVar41 + iVar38 + iVar42 + iVar39 + iVar43 + iVar40 + iVar45;
                lVar8 = uVar22 + lVar11;
                if (uVar21 != uVar22) goto LAB_00a93230;
              }
              else {
                iVar38 = 0;
                iVar39 = 0;
                iVar40 = 0;
                iVar41 = 0;
                iVar58 = 0;
                iVar59 = 0;
                iVar60 = 0;
                iVar61 = 0;
                iVar42 = 0;
                iVar43 = 0;
                iVar45 = 0;
                iVar44 = 0;
                iVar71 = 0;
                iVar72 = 0;
                iVar73 = 0;
                iVar74 = 0;
                iVar63 = 0;
                iVar64 = 0;
                iVar65 = 0;
                iVar66 = 0;
                iVar67 = 0;
                iVar68 = 0;
                iVar69 = 0;
                iVar70 = 0;
                uVar24 = uVar19;
                puVar7 = (undefined8 *)(lVar16 + 0x40);
                auVar57 = ZEXT816(0);
                auVar56 = ZEXT816(0);
                uVar37 = uVar25;
                do {
                  pauVar1 = (undefined (*) [16])(lVar29 + (ulong)uVar37);
                  uVar37 = uVar37 + iVar23 * 0x20;
                  uVar24 = uVar24 - 0x20;
                  auVar55 = pauVar1[1];
                  auVar47._12_4_ = 0x1010100f;
                  auVar47._0_12_ = auVar5;
                  auVar76 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar47);
                  auVar77 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar46);
                  auVar47 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar50);
                  auVar62._12_4_ = 0x10101003;
                  auVar62._0_12_ = auVar6;
                  auVar62 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar62);
                  auVar52._12_4_ = 0x1010100f;
                  auVar52._0_12_ = auVar5;
                  auVar52 = a64_TBL(ZEXT816(0),auVar55,ZEXT816(0),auVar52);
                  auVar53 = a64_TBL(ZEXT816(0),auVar55,ZEXT816(0),auVar46);
                  auVar54 = a64_TBL(ZEXT816(0),auVar55,ZEXT816(0),auVar50);
                  auVar75._12_4_ = 0x10101003;
                  auVar75._0_12_ = auVar6;
                  auVar75 = a64_TBL(ZEXT816(0),auVar55,ZEXT816(0),auVar75);
                  auVar55._0_4_ = auVar57._0_4_ + (int)puVar7[-2] * auVar76._0_4_;
                  auVar55._4_4_ = auVar57._4_4_ + (int)((ulong)puVar7[-2] >> 0x20) * auVar76._4_4_;
                  auVar55._8_4_ = auVar57._8_4_ + (int)puVar7[-1] * auVar76._8_4_;
                  auVar55._12_4_ =
                       auVar57._12_4_ + (int)((ulong)puVar7[-1] >> 0x20) * auVar76._12_4_;
                  iVar42 = iVar42 + (int)puVar7[-4] * auVar77._0_4_;
                  iVar43 = iVar43 + (int)((ulong)puVar7[-4] >> 0x20) * auVar77._4_4_;
                  iVar45 = iVar45 + (int)puVar7[-3] * auVar77._8_4_;
                  iVar44 = iVar44 + (int)((ulong)puVar7[-3] >> 0x20) * auVar77._12_4_;
                  iVar58 = iVar58 + (int)puVar7[-6] * auVar47._0_4_;
                  iVar59 = iVar59 + (int)((ulong)puVar7[-6] >> 0x20) * auVar47._4_4_;
                  iVar60 = iVar60 + (int)puVar7[-5] * auVar47._8_4_;
                  iVar61 = iVar61 + (int)((ulong)puVar7[-5] >> 0x20) * auVar47._12_4_;
                  iVar38 = iVar38 + (int)puVar7[-8] * auVar62._0_4_;
                  iVar39 = iVar39 + (int)((ulong)puVar7[-8] >> 0x20) * auVar62._4_4_;
                  iVar40 = iVar40 + (int)puVar7[-7] * auVar62._8_4_;
                  iVar41 = iVar41 + (int)((ulong)puVar7[-7] >> 0x20) * auVar62._12_4_;
                  iVar67 = iVar67 + (int)puVar7[6] * auVar52._0_4_;
                  iVar68 = iVar68 + (int)((ulong)puVar7[6] >> 0x20) * auVar52._4_4_;
                  iVar69 = iVar69 + (int)puVar7[7] * auVar52._8_4_;
                  iVar70 = iVar70 + (int)((ulong)puVar7[7] >> 0x20) * auVar52._12_4_;
                  iVar63 = iVar63 + *(int *)(puVar7 + 4) * auVar53._0_4_;
                  iVar64 = iVar64 + *(int *)((long)puVar7 + 0x24) * auVar53._4_4_;
                  iVar65 = iVar65 + *(int *)(puVar7 + 5) * auVar53._8_4_;
                  iVar66 = iVar66 + *(int *)((long)puVar7 + 0x2c) * auVar53._12_4_;
                  auVar53._0_4_ = auVar56._0_4_ + (int)*puVar7 * auVar75._0_4_;
                  auVar53._4_4_ = auVar56._4_4_ + (int)((ulong)*puVar7 >> 0x20) * auVar75._4_4_;
                  auVar53._8_4_ = auVar56._8_4_ + (int)puVar7[1] * auVar75._8_4_;
                  auVar53._12_4_ = auVar56._12_4_ + (int)((ulong)puVar7[1] >> 0x20) * auVar75._12_4_
                  ;
                  iVar71 = iVar71 + (int)puVar7[2] * auVar54._0_4_;
                  iVar72 = iVar72 + (int)((ulong)puVar7[2] >> 0x20) * auVar54._4_4_;
                  iVar73 = iVar73 + (int)puVar7[3] * auVar54._8_4_;
                  iVar74 = iVar74 + (int)((ulong)puVar7[3] >> 0x20) * auVar54._12_4_;
                  puVar7 = puVar7 + 0x10;
                  auVar57 = auVar55;
                  auVar56 = auVar53;
                } while (uVar24 != 0);
                uVar37 = auVar53._0_4_ + iVar38 + iVar63 + iVar42 +
                         iVar71 + iVar58 + iVar67 + auVar55._0_4_ +
                         auVar53._4_4_ + iVar39 + iVar64 + iVar43 +
                         iVar72 + iVar59 + iVar68 + auVar55._4_4_ +
                         auVar53._8_4_ + iVar40 + iVar65 + iVar45 +
                         iVar73 + iVar60 + iVar69 + auVar55._8_4_ +
                         auVar53._12_4_ + iVar41 + iVar66 + iVar44 +
                         iVar74 + iVar61 + iVar70 + auVar55._12_4_;
                if (uVar21 != uVar19) {
                  uVar24 = uVar19;
                  lVar8 = uVar19 + lVar11;
                  if ((uVar21 & 0x18) == 0) goto LAB_00a93230;
                  goto LAB_00a931c8;
                }
              }
            }
            iVar38 = *(int *)(*(long *)(this + 0x48) + (lVar15 - lVar26) * 4);
            if (uVar37 >> 0x18 == 0) {
              uVar37 = uVar37 >> 0x10;
            }
            else {
              uVar37 = 0xff;
            }
          }
          uVar10 = uVar10 + iVar38 * uVar37;
          lVar15 = lVar15 + 1;
          iVar13 = iVar13 + 1;
          uVar25 = uVar25 + iVar23 * iVar3;
          iVar33 = iVar33 + iVar3;
          iVar31 = iVar31 + iVar3;
        } while (uVar32 + 1 != (int)lVar15);
        if (uVar10 >> 0x18 == 0) {
          uVar17 = (uchar)(uVar10 >> 0x10);
        }
        else {
          uVar17 = 0xff;
        }
      }
      param_1[uVar20] = uVar17;
      uVar20 = uVar20 + 1;
      uVar24 = (ulong)*(uint *)(this + 0x10);
    } while (uVar20 < uVar24);
  }
  return;
}


