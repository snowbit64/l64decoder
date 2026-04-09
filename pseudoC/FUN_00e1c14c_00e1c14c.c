// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1c14c
// Entry Point: 00e1c14c
// Size: 4700 bytes
// Signature: undefined FUN_00e1c14c(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined8 param_10)


void FUN_00e1c14c(uint param_1,int param_2,int param_3,uint param_4,undefined4 *param_5,long param_6
                 ,ulong param_7,undefined4 *param_8,undefined8 *param_9,long param_10)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  float *pfVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  float *pfVar27;
  float *pfVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  uint uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  uint uVar46;
  ulong uVar47;
  ulong uVar48;
  long lVar49;
  float *pfVar50;
  ulong uVar51;
  int iVar52;
  int iVar53;
  long lVar54;
  undefined4 *puVar55;
  int iVar56;
  int iVar57;
  long lVar58;
  long lVar59;
  int iVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  undefined8 *puVar64;
  undefined4 *puVar65;
  undefined8 *puVar66;
  float *pfVar67;
  float *pfVar68;
  float *pfVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  float fVar73;
  undefined8 uVar72;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined4 uVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  double local_78;
  double adStack_70 [2];
  
  uVar29 = param_2 * param_1;
  uVar62 = (ulong)uVar29;
  uVar9 = param_3 * param_1;
  uVar63 = (ulong)param_4;
  sincos((double)(6.283185 / (float)param_2),adStack_70,&local_78);
  if ((int)param_1 < param_3) {
    if ((0 < (int)param_1) && (0 < param_3)) {
      uVar30 = 0;
      puVar20 = param_8;
      puVar14 = param_5;
      iVar40 = param_3;
      puVar55 = param_5;
      puVar65 = param_8;
      do {
        do {
          iVar40 = iVar40 + -1;
          *puVar20 = *puVar14;
          puVar20 = puVar20 + param_1;
          puVar14 = (undefined4 *)
                    ((long)puVar14 + (-(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2));
        } while (iVar40 != 0);
        uVar30 = uVar30 + 1;
        puVar14 = puVar55 + 1;
        puVar20 = puVar65 + 1;
        iVar40 = param_3;
        puVar55 = puVar14;
        puVar65 = puVar20;
      } while (uVar30 != param_1);
    }
  }
  else if (0 < param_3) {
    if (0 < (int)param_1) {
      uVar30 = (ulong)(param_1 - 1) + 1;
      lVar35 = 0;
      lVar49 = 0;
      iVar40 = 0;
      uVar43 = uVar30 & 0x1fffffff8;
      puVar39 = (undefined8 *)(param_8 + 4);
      puVar12 = (undefined8 *)(param_5 + 4);
      do {
        if ((param_1 - 1 < 7) ||
           ((param_8 + lVar49 < param_5 + uVar30 + lVar35 &&
            (param_5 + lVar35 < param_8 + uVar30 + lVar49)))) {
          iVar56 = 0;
          lVar54 = lVar35;
          lVar58 = lVar49;
LAB_00e1c2cc:
          iVar56 = param_1 - iVar56;
          puVar14 = param_5 + lVar54;
          puVar20 = param_8 + lVar58;
          do {
            iVar56 = iVar56 + -1;
            *puVar20 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar20 = puVar20 + 1;
          } while (iVar56 != 0);
        }
        else {
          lVar54 = lVar35 + uVar43;
          lVar58 = lVar49 + uVar43;
          puVar23 = puVar12;
          puVar24 = puVar39;
          uVar36 = uVar43;
          do {
            puVar6 = puVar23 + -1;
            uVar70 = puVar23[-2];
            uVar72 = puVar23[1];
            uVar71 = *puVar23;
            uVar36 = uVar36 - 8;
            puVar23 = puVar23 + 4;
            puVar24[-1] = *puVar6;
            puVar24[-2] = uVar70;
            puVar24[1] = uVar72;
            *puVar24 = uVar71;
            puVar24 = puVar24 + 4;
          } while (uVar36 != 0);
          iVar56 = (int)uVar43;
          if (uVar30 != uVar43) goto LAB_00e1c2cc;
        }
        lVar49 = lVar49 + (ulong)param_1;
        lVar35 = lVar35 + (int)uVar29;
        iVar40 = iVar40 + 1;
        puVar39 = (undefined8 *)((long)puVar39 + (ulong)param_1 * 4);
        puVar12 = (undefined8 *)
                  ((long)puVar12 + (-(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2));
      } while (iVar40 != param_3);
    }
  }
  iVar40 = param_2 + 1 >> 1;
  uVar32 = param_1 * 2;
  uVar30 = (ulong)uVar32;
  if (2 < param_2) {
    iVar57 = uVar9 * (param_2 + -1);
    uVar43 = -(ulong)(uVar32 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2;
    iVar56 = iVar40;
    if (iVar40 < 3) {
      iVar56 = 2;
    }
    pfVar15 = (float *)((long)param_5 + uVar43);
    iVar52 = 1;
    uVar34 = uVar9;
    do {
      pfVar13 = pfVar15;
      puVar14 = param_8;
      iVar11 = param_3;
      if (0 < param_3) {
        do {
          iVar11 = iVar11 + -1;
          puVar14[(int)uVar34] = pfVar13[-1] + pfVar13[-1];
          puVar14[iVar57] = *pfVar13 + *pfVar13;
          pfVar13 = (float *)((long)pfVar13 +
                             (-(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2));
          puVar14 = (undefined4 *)
                    ((long)puVar14 +
                    (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
        } while (iVar11 != 0);
      }
      iVar52 = iVar52 + 1;
      uVar34 = uVar34 + uVar9;
      iVar57 = iVar57 - uVar9;
      pfVar15 = (float *)((long)pfVar15 + uVar43);
    } while (iVar52 != iVar56);
  }
  iVar56 = (int)(param_1 - 1) >> 1;
  if (param_1 == 1) {
LAB_00e1c3fc:
    bVar1 = 0 < (int)param_4;
    iVar57 = param_2 + -1;
    if (2 < param_2) {
      iVar52 = iVar40;
      if (iVar40 < 4) {
        iVar52 = 3;
      }
      iVar11 = iVar40;
      if (iVar40 < 3) {
        iVar11 = 2;
      }
      uVar62 = (ulong)(param_4 - 1) + 1;
      uVar51 = (ulong)param_4;
      lVar58 = (long)(int)param_4;
      lVar35 = uVar62 * 4;
      uVar29 = iVar57 * param_4;
      uVar30 = (ulong)uVar29;
      lVar49 = param_7 + uVar51 * 4;
      puVar39 = (undefined8 *)((long)param_9 + uVar51 * 4);
      lVar54 = (long)(int)uVar29;
      fVar74 = 0.0;
      uVar43 = -(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar63 << 2;
      uVar61 = uVar62 & 0x1fffffffc;
      fVar75 = 1.0;
      iVar41 = 1;
      puVar12 = (undefined8 *)((long)param_9 + uVar43);
      puVar23 = (undefined8 *)((long)param_9 + (lVar58 + uVar51) * 4);
      uVar47 = -(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2;
      puVar24 = (undefined8 *)((long)param_9 + uVar47);
      puVar6 = (undefined8 *)((long)param_9 + (lVar54 + uVar51) * 4);
      uVar48 = uVar51 & 0xfffffffc;
      uVar36 = (ulong)param_4;
      do {
        fVar79 = -fVar74;
        lVar59 = (long)(int)uVar30;
        lVar33 = (long)(int)uVar36;
        fVar74 = (float)NEON_fmadd((float)local_78,fVar74,fVar75 * (float)adStack_70[0]);
        fVar75 = (float)NEON_fmadd((float)local_78,fVar75,(float)adStack_70[0] * fVar79);
        if (0 < (int)param_4) {
          uVar18 = -(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2;
          uVar25 = -(uVar36 >> 0x1f) & 0xfffffffc00000000 | uVar36 << 2;
          puVar7 = (undefined8 *)(param_7 + uVar18);
          puVar8 = (undefined8 *)(param_7 + uVar25);
          lVar16 = lVar54;
          lVar37 = lVar33;
          lVar21 = lVar59;
          lVar26 = lVar58;
          if (param_4 < 4) {
LAB_00e1c578:
            uVar45 = 0;
LAB_00e1c584:
            lVar44 = uVar51 - uVar45;
            pfVar15 = (float *)((long)param_9 + lVar16 * 4);
            puVar14 = (undefined4 *)(param_7 + lVar37 * 4);
            pfVar13 = (float *)(param_7 + lVar21 * 4);
            puVar20 = (undefined4 *)((long)param_9 + uVar45 * 4);
            puVar55 = (undefined4 *)((long)param_9 + lVar26 * 4);
            do {
              lVar44 = lVar44 + -1;
              uVar80 = NEON_fmadd(fVar75,*puVar55,*puVar20);
              *puVar14 = uVar80;
              *pfVar13 = fVar74 * *pfVar15;
              pfVar15 = pfVar15 + 1;
              puVar14 = puVar14 + 1;
              pfVar13 = pfVar13 + 1;
              puVar20 = puVar20 + 1;
              puVar55 = puVar55 + 1;
            } while (lVar44 != 0);
          }
          else {
            uVar45 = 0;
            puVar17 = (undefined8 *)(lVar49 + uVar18);
            puVar38 = (undefined8 *)(lVar49 + uVar25);
            if ((((puVar8 < puVar17 && puVar7 < puVar38) || (puVar8 < puVar39 && param_9 < puVar38))
                || (puVar8 < puVar23 && puVar12 < puVar38)) ||
               (puVar8 < puVar6 && puVar24 < puVar38)) goto LAB_00e1c584;
            if ((puVar7 < puVar39 && param_9 < puVar17) || (puVar7 < puVar23 && puVar12 < puVar17))
            goto LAB_00e1c578;
            if (puVar7 < puVar6 && puVar24 < puVar17) goto LAB_00e1c584;
            puVar17 = param_9;
            puVar38 = puVar8;
            puVar19 = puVar7;
            uVar45 = uVar48;
            do {
              puVar66 = (undefined8 *)((long)puVar17 + uVar43);
              uVar72 = puVar66[1];
              uVar71 = *puVar66;
              uVar45 = uVar45 - 4;
              puVar66 = (undefined8 *)((long)puVar17 + uVar47);
              uVar94 = puVar66[1];
              uVar93 = *puVar66;
              uVar70 = *puVar17;
              puVar38[1] = CONCAT44((float)((ulong)puVar17[1] >> 0x20) +
                                    (float)((ulong)uVar72 >> 0x20) * fVar75,
                                    (float)puVar17[1] + (float)uVar72 * fVar75);
              *puVar38 = CONCAT44((float)((ulong)uVar70 >> 0x20) +
                                  (float)((ulong)uVar71 >> 0x20) * fVar75,
                                  (float)uVar70 + (float)uVar71 * fVar75);
              puVar19[1] = CONCAT44((float)((ulong)uVar94 >> 0x20) * fVar74,(float)uVar94 * fVar74);
              *puVar19 = CONCAT44((float)((ulong)uVar93 >> 0x20) * fVar74,(float)uVar93 * fVar74);
              puVar17 = puVar17 + 2;
              puVar38 = puVar38 + 2;
              puVar19 = puVar19 + 2;
            } while (uVar45 != 0);
            lVar16 = uVar48 + lVar54;
            uVar45 = uVar48;
            lVar37 = uVar48 + lVar33;
            lVar21 = uVar48 + lVar59;
            lVar26 = uVar48 + lVar58;
            if (uVar48 != uVar51) goto LAB_00e1c584;
          }
          if (0 < (int)param_4 && 4 < param_2) {
            puVar17 = (undefined8 *)(param_7 + lVar35 + uVar18);
            puVar38 = (undefined8 *)(param_7 + lVar35 + uVar25);
            iVar53 = 2;
            fVar79 = fVar75;
            fVar84 = fVar74;
            uVar32 = (param_2 + -2) * param_4;
            uVar29 = param_4 << 1;
            do {
              fVar95 = fVar74 * fVar79;
              lVar37 = (long)(int)uVar32;
              lVar16 = (long)(int)uVar29;
              fVar79 = (float)NEON_fmadd(fVar75,fVar79,fVar84 * -fVar74);
              fVar84 = (float)NEON_fmadd(fVar75,fVar84,fVar95);
              lVar21 = lVar33;
              lVar26 = lVar59;
              if (param_4 - 1 < 3) {
LAB_00e1c648:
                iVar60 = 0;
LAB_00e1c658:
                iVar60 = param_4 - iVar60;
                puVar14 = (undefined4 *)((long)param_9 + lVar16 * 4);
                puVar20 = (undefined4 *)((long)param_9 + lVar37 * 4);
                puVar55 = (undefined4 *)(param_7 + lVar21 * 4);
                puVar65 = (undefined4 *)(param_7 + lVar26 * 4);
                do {
                  iVar60 = iVar60 + -1;
                  uVar80 = NEON_fmadd(fVar79,*puVar14,*puVar55);
                  *puVar55 = uVar80;
                  uVar80 = NEON_fmadd(fVar84,*puVar20,*puVar65);
                  *puVar65 = uVar80;
                  puVar14 = puVar14 + 1;
                  puVar20 = puVar20 + 1;
                  puVar55 = puVar55 + 1;
                  puVar65 = puVar65 + 1;
                } while (iVar60 != 0);
              }
              else {
                uVar25 = -(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar29 << 2;
                uVar18 = -(ulong)(uVar32 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar32 << 2;
                puVar19 = (undefined8 *)((long)param_9 + uVar25 + lVar35);
                puVar66 = (undefined8 *)((long)param_9 + uVar25);
                puVar22 = (undefined8 *)((long)param_9 + uVar18 + lVar35);
                puVar64 = (undefined8 *)((long)param_9 + uVar18);
                iVar60 = 0;
                if (((puVar8 < puVar17 && puVar7 < puVar38 || puVar8 < puVar19 && puVar66 < puVar38)
                    || (puVar8 < puVar22 && puVar64 < puVar38)) ||
                   (puVar7 < puVar19 && puVar66 < puVar17)) goto LAB_00e1c648;
                if (puVar7 < puVar22 && puVar64 < puVar17) goto LAB_00e1c658;
                lVar16 = uVar61 + lVar16;
                lVar37 = uVar61 + lVar37;
                puVar19 = puVar8;
                puVar22 = puVar7;
                uVar18 = uVar61;
                do {
                  uVar70 = *puVar66;
                  uVar18 = uVar18 - 4;
                  uVar72 = puVar64[1];
                  uVar71 = *puVar64;
                  uVar94 = puVar22[1];
                  uVar93 = *puVar22;
                  puVar19[1] = CONCAT44((float)((ulong)puVar19[1] >> 0x20) +
                                        (float)((ulong)puVar66[1] >> 0x20) * fVar79,
                                        (float)puVar19[1] + (float)puVar66[1] * fVar79);
                  *puVar19 = CONCAT44((float)((ulong)*puVar19 >> 0x20) +
                                      (float)((ulong)uVar70 >> 0x20) * fVar79,
                                      (float)*puVar19 + (float)uVar70 * fVar79);
                  puVar22[1] = CONCAT44((float)((ulong)uVar94 >> 0x20) +
                                        (float)((ulong)uVar72 >> 0x20) * fVar84,
                                        (float)uVar94 + (float)uVar72 * fVar84);
                  *puVar22 = CONCAT44((float)((ulong)uVar93 >> 0x20) +
                                      (float)((ulong)uVar71 >> 0x20) * fVar84,
                                      (float)uVar93 + (float)uVar71 * fVar84);
                  puVar19 = puVar19 + 2;
                  puVar22 = puVar22 + 2;
                  puVar64 = puVar64 + 2;
                  puVar66 = puVar66 + 2;
                } while (uVar18 != 0);
                iVar60 = (int)uVar61;
                lVar21 = uVar61 + lVar33;
                lVar26 = uVar61 + lVar59;
                if (uVar62 != uVar61) goto LAB_00e1c658;
              }
              iVar53 = iVar53 + 1;
              uVar32 = uVar32 - param_4;
              uVar29 = uVar29 + param_4;
            } while (iVar53 != iVar52);
          }
        }
        uVar36 = (ulong)((int)uVar36 + param_4);
        uVar30 = (ulong)((int)uVar30 - param_4);
        iVar41 = iVar41 + 1;
      } while (iVar41 != iVar11);
      if (2 < param_2) {
        if ((int)param_4 < 1) {
          bVar1 = false;
        }
        else {
          uVar62 = (long)param_9 + uVar51 * 4;
          iVar52 = iVar40;
          if (iVar40 < 3) {
            iVar52 = 2;
          }
          uVar43 = uVar51 & 0xfffffff8;
          iVar11 = 1;
          uVar30 = uVar63;
          do {
            lVar49 = (long)(int)uVar30;
            if ((param_4 < 8) ||
               ((param_9 < (undefined8 *)(uVar62 + lVar49 * 4) &&
                ((ulong)((long)param_9 + lVar49 * 4) < uVar62)))) {
              uVar36 = 0;
LAB_00e1caf0:
              lVar35 = uVar51 - uVar36;
              pfVar15 = (float *)((long)param_9 + lVar49 * 4);
              pfVar13 = (float *)((long)param_9 + uVar36 * 4);
              do {
                lVar35 = lVar35 + -1;
                *pfVar13 = *pfVar15 + *pfVar13;
                pfVar15 = pfVar15 + 1;
                pfVar13 = pfVar13 + 1;
              } while (lVar35 != 0);
            }
            else {
              lVar49 = uVar43 + lVar49;
              uVar36 = uVar43;
              puVar39 = param_9;
              do {
                puVar12 = (undefined8 *)
                          ((long)puVar39 + (-(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2));
                uVar36 = uVar36 - 8;
                uVar70 = *puVar12;
                uVar72 = puVar12[3];
                uVar71 = puVar12[2];
                puVar39[1] = CONCAT44((float)((ulong)puVar12[1] >> 0x20) +
                                      (float)((ulong)puVar39[1] >> 0x20),
                                      (float)puVar12[1] + (float)puVar39[1]);
                *puVar39 = CONCAT44((float)((ulong)uVar70 >> 0x20) +
                                    (float)((ulong)*puVar39 >> 0x20),(float)uVar70 + (float)*puVar39
                                   );
                puVar39[3] = CONCAT44((float)((ulong)uVar72 >> 0x20) +
                                      (float)((ulong)puVar39[3] >> 0x20),
                                      (float)uVar72 + (float)puVar39[3]);
                puVar39[2] = CONCAT44((float)((ulong)uVar71 >> 0x20) +
                                      (float)((ulong)puVar39[2] >> 0x20),
                                      (float)uVar71 + (float)puVar39[2]);
                puVar39 = puVar39 + 4;
              } while (uVar36 != 0);
              uVar36 = uVar43;
              if (uVar43 != uVar51) goto LAB_00e1caf0;
            }
            iVar11 = iVar11 + 1;
            uVar30 = (ulong)((int)uVar30 + param_4);
          } while (iVar11 != iVar52);
          if (param_2 < 3) goto LAB_00e1cd3c;
        }
        if (0 < param_3) {
          uVar29 = uVar9 * iVar57;
          iVar52 = iVar40;
          if (iVar40 < 3) {
            iVar52 = 2;
          }
          iVar11 = 1;
          uVar32 = uVar9;
          do {
            uVar30 = -(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar29 << 2;
            uVar62 = -(ulong)(uVar32 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar32 << 2;
            lVar54 = 0;
            lVar49 = param_6 + uVar30;
            lVar35 = param_6 + uVar62;
            iVar41 = param_3;
            do {
              iVar41 = iVar41 + -1;
              *(float *)((long)param_8 + lVar54 + uVar62) =
                   *(float *)(lVar35 + lVar54) - *(float *)(lVar49 + lVar54);
              *(float *)((long)param_8 + lVar54 + uVar30) =
                   *(float *)(lVar35 + lVar54) + *(float *)(lVar49 + lVar54);
              lVar54 = lVar54 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 |
                                (ulong)param_1 << 2);
            } while (iVar41 != 0);
            iVar11 = iVar11 + 1;
            uVar32 = uVar32 + uVar9;
            uVar29 = uVar29 - uVar9;
          } while (iVar11 != iVar52);
        }
      }
    }
LAB_00e1cd3c:
    if (param_1 == 1) {
      return;
    }
    if (iVar56 < param_3) {
      if (2 < param_2) {
        if (iVar40 < 3) {
          iVar40 = 2;
        }
        uVar29 = uVar9 * iVar57 + 2;
        uVar32 = uVar9 + 2;
        iVar57 = 1;
        do {
          if (2 < (int)param_1 && 0 < param_3) {
            iVar52 = 2;
            uVar46 = uVar32;
            uVar34 = uVar29;
            do {
              uVar62 = -(ulong)(uVar46 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar46 << 2;
              uVar30 = -(ulong)(uVar34 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar34 << 2;
              lVar49 = 0;
              iVar11 = param_3;
              do {
                pfVar15 = (float *)(param_6 + -4 + uVar62 + lVar49);
                pfVar13 = (float *)(param_6 + uVar30 + lVar49);
                pfVar27 = (float *)((long)param_8 + lVar49 + (uVar62 - 4));
                pfVar28 = (float *)((long)param_8 + lVar49 + uVar30);
                iVar11 = iVar11 + -1;
                lVar49 = lVar49 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)param_1 << 2);
                *pfVar27 = *pfVar15 - *pfVar13;
                pfVar28[-1] = *pfVar15 + *pfVar13;
                pfVar27[1] = pfVar15[1] + pfVar13[-1];
                *pfVar28 = pfVar15[1] - pfVar13[-1];
              } while (iVar11 != 0);
              iVar52 = iVar52 + 2;
              uVar34 = uVar34 + 2;
              uVar46 = uVar46 + 2;
            } while (iVar52 < (int)param_1);
          }
          iVar57 = iVar57 + 1;
          uVar29 = uVar29 - uVar9;
          uVar32 = uVar32 + uVar9;
        } while (iVar57 != iVar40);
      }
    }
    else if (2 < param_2) {
      uVar29 = uVar9 * iVar57;
      if (iVar40 < 3) {
        iVar40 = 2;
      }
      uVar62 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
      iVar57 = 1;
      uVar32 = uVar9;
      do {
        if (0 < param_3 && 2 < (int)param_1) {
          iVar52 = 0;
          lVar49 = (-(ulong)(uVar32 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar32 << 2) + 8;
          lVar35 = (-(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar29 << 2) + 8;
          do {
            iVar11 = 2;
            puVar14 = param_8;
            lVar54 = param_6;
            do {
              pfVar15 = (float *)(lVar54 + lVar49);
              pfVar13 = (float *)(lVar54 + lVar35);
              pfVar27 = (float *)((long)puVar14 + lVar49);
              pfVar28 = (float *)((long)puVar14 + lVar35);
              iVar11 = iVar11 + 2;
              lVar54 = lVar54 + 8;
              puVar14 = puVar14 + 2;
              pfVar27[-1] = pfVar15[-1] - *pfVar13;
              pfVar28[-1] = pfVar15[-1] + *pfVar13;
              *pfVar27 = *pfVar15 + pfVar13[-1];
              *pfVar28 = *pfVar15 - pfVar13[-1];
            } while (iVar11 < (int)param_1);
            iVar52 = iVar52 + 1;
            lVar49 = lVar49 + uVar62;
            lVar35 = lVar35 + uVar62;
          } while (iVar52 != param_3);
        }
        iVar57 = iVar57 + 1;
        uVar29 = uVar29 - uVar9;
        uVar32 = uVar32 + uVar9;
      } while (iVar57 != iVar40);
    }
    if (bVar1) {
LAB_00e1cf5c:
      if ((param_4 < 8) ||
         ((param_7 < (long)param_9 + uVar63 * 4 && (param_9 < (undefined8 *)(param_7 + uVar63 * 4)))
         )) {
        uVar62 = 0;
      }
      else {
        uVar62 = uVar63 & 0xfffffff8;
        puVar39 = param_9 + 2;
        puVar12 = (undefined8 *)(param_7 + 0x10);
        uVar30 = uVar62;
        do {
          puVar23 = puVar39 + -1;
          uVar70 = puVar39[-2];
          uVar72 = puVar39[1];
          uVar71 = *puVar39;
          puVar39 = puVar39 + 4;
          uVar30 = uVar30 - 8;
          puVar12[-1] = *puVar23;
          puVar12[-2] = uVar70;
          puVar12[1] = uVar72;
          *puVar12 = uVar71;
          puVar12 = puVar12 + 4;
        } while (uVar30 != 0);
        if (uVar62 == uVar63) goto LAB_00e1cfa8;
      }
      lVar49 = uVar63 - uVar62;
      puVar14 = (undefined4 *)((long)param_9 + uVar62 * 4);
      puVar20 = (undefined4 *)(param_7 + uVar62 * 4);
      do {
        lVar49 = lVar49 + -1;
        *puVar20 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar20 = puVar20 + 1;
      } while (lVar49 != 0);
    }
  }
  else {
    if (param_3 <= iVar56) {
      if (param_2 < 3) goto LAB_00e1cc80;
      iVar52 = uVar9 * (param_2 + -1);
      iVar57 = iVar40;
      if (iVar40 < 3) {
        iVar57 = 2;
      }
      uVar43 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
      uVar62 = -(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2;
      iVar11 = 1;
      uVar29 = uVar9;
      do {
        if (0 < param_3 && 2 < (int)param_1) {
          uVar36 = -(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2;
          iVar41 = 0;
          pfVar15 = (float *)(param_8 + (long)(int)uVar29 + 2);
          pfVar13 = (float *)(param_8 + (long)iVar52 + 2);
          pfVar27 = (float *)((long)param_5 + (uVar36 - 0xc));
          pfVar28 = (float *)((long)param_5 + uVar36 + 8);
          do {
            iVar53 = 2;
            pfVar50 = pfVar28;
            pfVar67 = pfVar27;
            pfVar68 = pfVar13;
            pfVar69 = pfVar15;
            do {
              iVar53 = iVar53 + 2;
              pfVar69[-1] = pfVar50[-1] + *pfVar67;
              pfVar68[-1] = pfVar50[-1] - *pfVar67;
              *pfVar69 = *pfVar50 - pfVar67[1];
              pfVar2 = pfVar67 + 1;
              pfVar67 = pfVar67 + -2;
              *pfVar68 = *pfVar50 + *pfVar2;
              pfVar50 = pfVar50 + 2;
              pfVar68 = pfVar68 + 2;
              pfVar69 = pfVar69 + 2;
            } while (iVar53 < (int)param_1);
            iVar41 = iVar41 + 1;
            pfVar15 = (float *)((long)pfVar15 + uVar43);
            pfVar13 = (float *)((long)pfVar13 + uVar43);
            pfVar27 = (float *)((long)pfVar27 + uVar62);
            pfVar28 = (float *)((long)pfVar28 + uVar62);
          } while (iVar41 != param_3);
        }
        iVar11 = iVar11 + 1;
        uVar30 = (ulong)((int)uVar30 + uVar32);
        iVar52 = iVar52 - uVar9;
        uVar29 = uVar29 + uVar9;
      } while (iVar11 != iVar57);
      goto LAB_00e1c3fc;
    }
    if (2 < param_2) {
      iVar57 = iVar40;
      if (iVar40 < 3) {
        iVar57 = 2;
      }
      uVar31 = uVar32 - 2;
      uVar34 = uVar32 + 2;
      uVar46 = uVar9 + 2;
      uVar42 = uVar9 * (param_2 + -1) + 2;
      iVar52 = 1;
      do {
        if (2 < (int)param_1 && 0 < param_3) {
          iVar11 = 2;
          uVar5 = uVar46;
          uVar4 = uVar42;
          uVar3 = uVar34;
          uVar10 = uVar31;
          do {
            puVar14 = param_8;
            puVar20 = param_5;
            iVar41 = param_3;
            do {
              pfVar15 = (float *)((long)puVar20 +
                                 ((-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2)
                                 - 4));
              pfVar13 = (float *)((long)puVar20 +
                                 (-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2
                                 ));
              pfVar27 = (float *)((long)puVar14 +
                                 ((-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2)
                                 - 4));
              pfVar28 = (float *)((long)puVar14 +
                                 ((-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2)
                                 - 4));
              puVar14 = (undefined4 *)
                        ((long)puVar14 +
                        (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
              iVar41 = iVar41 + -1;
              puVar20 = (undefined4 *)
                        ((long)puVar20 +
                        (-(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar62 << 2));
              *pfVar27 = *pfVar15 + pfVar13[-1];
              *pfVar28 = *pfVar15 - pfVar13[-1];
              pfVar27[1] = pfVar15[1] - *pfVar13;
              pfVar28[1] = pfVar15[1] + *pfVar13;
            } while (iVar41 != 0);
            iVar11 = iVar11 + 2;
            uVar10 = uVar10 - 2;
            uVar3 = uVar3 + 2;
            uVar4 = uVar4 + 2;
            uVar5 = uVar5 + 2;
          } while (iVar11 < (int)param_1);
        }
        iVar52 = iVar52 + 1;
        uVar31 = uVar31 + uVar32;
        uVar34 = uVar34 + uVar32;
        uVar42 = uVar42 - uVar9;
        uVar46 = uVar46 + uVar9;
      } while (iVar52 != iVar57);
      goto LAB_00e1c3fc;
    }
LAB_00e1cc80:
    if (0 < (int)param_4) goto LAB_00e1cf5c;
  }
LAB_00e1cfa8:
  if (param_2 < 2) {
    return;
  }
  if (param_3 < 1) {
    if (iVar56 <= param_3) goto LAB_00e1d294;
  }
  else {
    iVar40 = 1;
    uVar29 = uVar9;
    do {
      uVar62 = -(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar29 << 2;
      iVar57 = param_3;
      do {
        iVar57 = iVar57 + -1;
        *(undefined4 *)(param_6 + uVar62) = *(undefined4 *)((long)param_8 + uVar62);
        uVar62 = uVar62 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2);
      } while (iVar57 != 0);
      iVar40 = iVar40 + 1;
      uVar29 = uVar29 + uVar9;
    } while (iVar40 != param_2);
    if (iVar56 <= param_3) {
      if (param_2 < 2) {
        return;
      }
LAB_00e1d294:
      uVar29 = uVar9 + 2;
      iVar40 = 1;
      iVar56 = -1;
      do {
        if (2 < (int)param_1 && 0 < param_3) {
          lVar49 = (long)iVar56;
          iVar57 = 2;
          uVar32 = uVar29;
          do {
            uVar62 = -(ulong)(uVar32 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar32 << 2;
            lVar35 = lVar49 + 1;
            lVar49 = lVar49 + 2;
            iVar52 = param_3;
            do {
              pfVar15 = (float *)((long)param_8 + uVar62);
              lVar54 = lVar35 * 4;
              puVar14 = (undefined4 *)(param_6 + uVar62);
              uVar62 = uVar62 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 |
                                (ulong)param_1 << 2);
              iVar52 = iVar52 + -1;
              uVar80 = NEON_fmadd(*(undefined4 *)(param_10 + lVar54),pfVar15[-1],
                                  *pfVar15 * -*(float *)(param_10 + lVar49 * 4));
              puVar14[-1] = uVar80;
              uVar80 = NEON_fmadd(*(undefined4 *)(param_10 + lVar54),*pfVar15,
                                  *(float *)(param_10 + lVar49 * 4) * pfVar15[-1]);
              *puVar14 = uVar80;
            } while (iVar52 != 0);
            iVar57 = iVar57 + 2;
            uVar32 = uVar32 + 2;
          } while (iVar57 < (int)param_1);
        }
        iVar40 = iVar40 + 1;
        uVar29 = uVar29 + uVar9;
        iVar56 = iVar56 + param_1;
      } while (iVar40 != param_2);
      return;
    }
    if (param_2 < 2) {
      return;
    }
  }
  uVar29 = param_1;
  if ((int)param_1 < 5) {
    uVar29 = 4;
  }
  uVar29 = uVar29 - 3;
  uVar30 = (ulong)((uVar29 >> 1) + 1);
  lVar49 = (ulong)(uVar29 & 0xfffffffe) + 3;
  uVar43 = uVar30 & 0xfffffffc;
  uVar62 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
  iVar40 = 1;
  uVar63 = 0xffffffff;
  uVar32 = uVar9;
  do {
    lVar35 = (long)(int)uVar63;
    if (0 < param_3 && 2 < (int)param_1) {
      uVar36 = -(uVar63 >> 0x1f) & 0xfffffffc00000000 | uVar63 << 2;
      lVar54 = 0;
      pfVar15 = (float *)(param_10 + 4 + uVar36);
      uVar47 = -(ulong)(uVar32 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar32 << 2;
      pfVar13 = (float *)(param_6 + 4 + uVar47);
      pfVar27 = (float *)((long)param_8 + uVar47 + 4);
      lVar58 = (long)(int)uVar32;
      do {
        lVar59 = lVar35;
        lVar33 = lVar58;
        if (uVar29 < 6) {
LAB_00e1d22c:
          uVar34 = 2;
LAB_00e1d234:
          pfVar28 = (float *)(param_10 + 8 + lVar59 * 4);
          puVar14 = (undefined4 *)(param_6 + 8 + lVar33 * 4);
          pfVar50 = (float *)(param_8 + lVar33 + 2);
          do {
            uVar34 = uVar34 + 2;
            uVar80 = NEON_fmadd(pfVar28[-1],pfVar50[-1],*pfVar50 * -*pfVar28);
            puVar14[-1] = uVar80;
            pfVar67 = pfVar28 + -1;
            fVar74 = *pfVar28;
            pfVar28 = pfVar28 + 2;
            uVar80 = NEON_fmadd(*pfVar67,*pfVar50,fVar74 * pfVar50[-1]);
            *puVar14 = uVar80;
            puVar14 = puVar14 + 2;
            pfVar50 = pfVar50 + 2;
          } while ((int)uVar34 < (int)param_1);
        }
        else {
          lVar37 = lVar54 * (int)param_1;
          lVar16 = (long)(int)uVar32 + 1 + lVar37;
          lVar37 = lVar49 + (int)uVar32 + lVar37;
          puVar14 = (undefined4 *)(param_6 + lVar16 * 4);
          pfVar28 = (float *)(param_6 + lVar37 * 4);
          if (puVar14 < (undefined4 *)(param_10 + lVar49 * 4 + uVar36) && pfVar15 < pfVar28)
          goto LAB_00e1d22c;
          uVar34 = 2;
          if (puVar14 < param_8 + lVar37 && param_8 + lVar16 < pfVar28) goto LAB_00e1d234;
          lVar33 = lVar58 + uVar43 * 2;
          pfVar28 = pfVar15;
          uVar47 = uVar43;
          pfVar50 = pfVar27;
          pfVar67 = pfVar13;
          do {
            fVar74 = pfVar28[2];
            fVar84 = pfVar28[3];
            fVar75 = pfVar28[4];
            fVar95 = pfVar28[5];
            fVar79 = pfVar28[6];
            fVar73 = pfVar28[7];
            uVar47 = uVar47 - 4;
            fVar76 = pfVar50[2];
            fVar81 = pfVar50[3];
            fVar77 = pfVar50[4];
            fVar82 = pfVar50[5];
            fVar78 = pfVar50[6];
            fVar83 = pfVar50[7];
            fVar85 = *pfVar28;
            fVar89 = pfVar28[1];
            fVar86 = pfVar28[2];
            fVar90 = pfVar28[3];
            fVar87 = pfVar28[4];
            fVar91 = pfVar28[5];
            fVar88 = pfVar28[6];
            fVar92 = pfVar28[7];
            fVar96 = *pfVar50;
            fVar100 = pfVar50[1];
            fVar97 = pfVar50[2];
            fVar101 = pfVar50[3];
            fVar98 = pfVar50[4];
            fVar102 = pfVar50[5];
            fVar99 = pfVar50[6];
            fVar103 = pfVar50[7];
            *pfVar67 = pfVar50[1] * -pfVar28[1] + *pfVar50 * *pfVar28;
            pfVar67[1] = fVar89 * fVar96 + fVar100 * fVar85;
            pfVar67[2] = fVar81 * -fVar84 + fVar76 * fVar74;
            pfVar67[3] = fVar90 * fVar97 + fVar101 * fVar86;
            pfVar67[4] = fVar82 * -fVar95 + fVar77 * fVar75;
            pfVar67[5] = fVar91 * fVar98 + fVar102 * fVar87;
            pfVar67[6] = fVar83 * -fVar73 + fVar78 * fVar79;
            pfVar67[7] = fVar92 * fVar99 + fVar103 * fVar88;
            pfVar67 = pfVar67 + 8;
            pfVar28 = pfVar28 + 8;
            pfVar50 = pfVar50 + 8;
          } while (uVar47 != 0);
          lVar59 = uVar43 * 2 + lVar35;
          uVar34 = (int)(uVar43 >> 2) << 3 | 2;
          if (uVar43 != uVar30) goto LAB_00e1d234;
        }
        lVar58 = lVar58 + (int)param_1;
        lVar54 = lVar54 + 1;
        pfVar13 = (float *)((long)pfVar13 + uVar62);
        pfVar27 = (float *)((long)pfVar27 + uVar62);
      } while ((int)lVar54 != param_3);
    }
    iVar40 = iVar40 + 1;
    uVar63 = (ulong)((int)uVar63 + param_1);
    uVar32 = uVar32 + uVar9;
    if (iVar40 == param_2) {
      return;
    }
  } while( true );
}


