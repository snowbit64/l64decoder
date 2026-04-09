// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exp_rotation
// Entry Point: 00e769dc
// Size: 2300 bytes
// Signature: undefined exp_rotation(void)


void exp_rotation(long param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  short *psVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  ulong uVar19;
  ushort *puVar20;
  ulong uVar21;
  ushort *puVar22;
  short *psVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ushort *puVar28;
  int iVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  short *psVar35;
  ushort *puVar36;
  uint uVar37;
  undefined8 uVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  int iVar44;
  int iVar45;
  undefined8 uVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  
  if ((param_2 != param_5 * 2 && (int)(param_2 + param_5 * -2) < 0 == SBORROW4(param_2,param_5 * 2))
     && (param_6 != 0)) {
    iVar18 = celt_rcp(param_2 + *(int *)(&DAT_00567994 + (long)param_6 * 4) * param_5);
    iVar18 = (int)((ulong)((long)iVar18 *
                          (long)(int)((-(param_2 >> 0xf & 1) & 0x80000000 |
                                      (param_2 & 0xffff) << 0xf) - (int)(short)param_2)) >> 0xf) >>
             0x10;
    uVar32 = (uint)(iVar18 * iVar18) >> 0x10;
    sVar16 = celt_cos_norm(uVar32);
    sVar17 = celt_cos_norm(uVar32 ^ 0x7fff);
    if ((int)(param_2 + param_4 * -8) < 0 == SBORROW4(param_2,param_4 * 8)) {
      uVar32 = 0;
      do {
        uVar32 = uVar32 + 1;
      } while ((int)(((int)param_4 >> 2) + (uVar32 + uVar32 * uVar32) * param_4) < (int)param_2);
    }
    else {
      uVar32 = 0;
    }
    if (0 < (int)param_4) {
      uVar14 = 0;
      if (param_4 != 0) {
        uVar14 = param_2 / param_4;
      }
      iVar10 = (int)-sVar17;
      iVar11 = (int)sVar16;
      iVar12 = (int)sVar17;
      iVar13 = (int)-sVar16;
      uVar27 = (ulong)uVar32;
      uVar26 = (ulong)param_4;
      iVar18 = uVar14 - 1;
      uVar8 = uVar14 - 3;
      uVar24 = (ulong)uVar8;
      iVar29 = uVar14 - uVar32;
      uVar9 = iVar18 + uVar32 * -2;
      uVar19 = (ulong)uVar9;
      lVar25 = (long)(int)uVar14;
      if (param_3 < 0) {
        uVar14 = uVar14 + ~uVar32;
        uVar1 = uVar19 + 1;
        uVar31 = uVar1 & 0x1fffffffe;
        uVar21 = 0;
        uVar2 = (ulong)uVar14 + 1;
        uVar30 = uVar2 & 0x1fffffff8;
        do {
          lVar33 = uVar21 * lVar25;
          if (uVar32 != 0) {
            psVar4 = (short *)(param_1 + lVar33 * 2);
            if (0 < iVar29) {
              if ((uVar14 < 7) ||
                 ((param_1 + (lVar33 + uVar27) * 2 < param_1 + (lVar33 + uVar2) * 2 &&
                  (psVar4 < (short *)(param_1 + (lVar33 + uVar27 + uVar14 + 1) * 2))))) {
                iVar39 = 0;
                psVar35 = psVar4;
              }
              else {
                uVar34 = 0;
                psVar35 = psVar4 + uVar30;
                do {
                  puVar3 = (undefined8 *)(psVar4 + uVar34);
                  uVar34 = uVar34 + 8;
                  puVar15 = (undefined8 *)((long)puVar3 + uVar27 * 2);
                  uVar42 = puVar15[1];
                  uVar38 = *puVar15;
                  uVar46 = puVar3[1];
                  uVar43 = *puVar3;
                  sVar16 = (short)((ulong)uVar38 >> 0x10);
                  iVar48 = (int)(short)((ulong)uVar38 >> 0x20);
                  iVar49 = (int)(short)((ulong)uVar38 >> 0x30);
                  iVar50 = (int)(short)((ulong)uVar43 >> 0x10);
                  iVar51 = (int)(short)((ulong)uVar43 >> 0x20);
                  iVar52 = (int)(short)((ulong)uVar43 >> 0x30);
                  iVar39 = (int)(short)((ulong)uVar42 >> 0x10);
                  iVar40 = (int)(short)((ulong)uVar42 >> 0x20);
                  iVar41 = (int)(short)((ulong)uVar42 >> 0x30);
                  iVar44 = (int)(short)((ulong)uVar46 >> 0x10);
                  iVar45 = (int)(short)((ulong)uVar46 >> 0x20);
                  iVar47 = (int)(short)((ulong)uVar46 >> 0x30);
                  puVar15 = (undefined8 *)((long)puVar3 + uVar27 * 2);
                  puVar15[1] = CONCAT26((short)(iVar12 * iVar41 + iVar11 * iVar47 + 0x4000U >> 0xf),
                                        CONCAT24((short)(iVar12 * iVar40 + iVar11 * iVar45 + 0x4000U
                                                        >> 0xf),
                                                 CONCAT22((short)(iVar12 * iVar39 + iVar11 * iVar44
                                                                  + 0x4000U >> 0xf),
                                                          (short)(iVar12 * (short)uVar42 +
                                                                  iVar11 * (short)uVar46 + 0x4000U
                                                                 >> 0xf))));
                  *puVar15 = CONCAT26((short)(iVar12 * iVar49 + iVar11 * iVar52 + 0x4000U >> 0xf),
                                      CONCAT24((short)(iVar12 * iVar48 + iVar11 * iVar51 + 0x4000U
                                                      >> 0xf),
                                               CONCAT22((short)(iVar12 * sVar16 + iVar11 * iVar50 +
                                                                0x4000U >> 0xf),
                                                        (short)(iVar12 * (short)uVar38 +
                                                                iVar11 * (short)uVar43 + 0x4000U >>
                                                               0xf))));
                  puVar3[1] = CONCAT26((short)(iVar13 * iVar41 + iVar12 * iVar47 + 0x4000U >> 0xf),
                                       CONCAT24((short)(iVar13 * iVar40 + iVar12 * iVar45 + 0x4000U
                                                       >> 0xf),
                                                CONCAT22((short)(iVar13 * iVar39 + iVar12 * iVar44 +
                                                                 0x4000U >> 0xf),
                                                         (short)(iVar13 * (short)uVar42 +
                                                                 iVar12 * (short)uVar46 + 0x4000U >>
                                                                0xf))));
                  *puVar3 = CONCAT26((short)(iVar13 * iVar49 + iVar12 * iVar52 + 0x4000U >> 0xf),
                                     CONCAT24((short)(iVar13 * iVar48 + iVar12 * iVar51 + 0x4000U >>
                                                     0xf),
                                              CONCAT22((short)(iVar13 * sVar16 + iVar12 * iVar50 +
                                                               0x4000U >> 0xf),
                                                       (short)(iVar13 * (short)uVar38 +
                                                               iVar12 * (short)uVar43 + 0x4000U >>
                                                              0xf))));
                } while (uVar34 != uVar30);
                iVar39 = (int)uVar30;
                if (uVar2 == uVar30) goto LAB_00e76f70;
              }
              do {
                sVar16 = *psVar35;
                iVar39 = iVar39 + 1;
                sVar17 = psVar35[uVar27];
                psVar35[uVar27] = (short)(sVar17 * iVar12 + sVar16 * iVar11 + 0x4000U >> 0xf);
                *psVar35 = (short)(sVar17 * iVar13 + sVar16 * iVar12 + 0x4000U >> 0xf);
                psVar35 = psVar35 + 1;
              } while (iVar39 != iVar29);
            }
LAB_00e76f70:
            if (-1 < (int)uVar9) {
              psVar35 = psVar4 + uVar19;
              uVar37 = uVar9;
              if ((((uVar9 != 0) &&
                   (uVar34 = param_1 + (uVar27 + uVar19 + lVar33) * 2,
                   uVar34 + uVar19 * -2 <= uVar34)) && (psVar35 + -uVar19 <= psVar35)) &&
                 ((param_1 + (uVar1 + lVar33) * 2 <= param_1 + (lVar33 + uVar27) * 2 ||
                  ((short *)(param_1 + (uVar27 + uVar19 + 1 + lVar33) * 2) <= psVar4)))) {
                uVar34 = 0;
                do {
                  psVar23 = psVar35 + -uVar34;
                  uVar34 = uVar34 + 2;
                  psVar4 = psVar23 + uVar27;
                  uVar38 = NEON_rev64(CONCAT44(iVar12 * psVar4[-1] + iVar11 * psVar23[-1] + 0x4000U
                                               >> 0xf,iVar12 * *psVar4 + iVar11 * *psVar23 + 0x4000U
                                                      >> 0xf),4);
                  uVar42 = NEON_rev64(CONCAT44(iVar13 * psVar4[-1] + iVar12 * psVar23[-1] + 0x4000U
                                               >> 0xf,iVar13 * *psVar4 + iVar12 * *psVar23 + 0x4000U
                                                      >> 0xf),4);
                  psVar4[-1] = (short)uVar38;
                  *psVar4 = (short)((ulong)uVar38 >> 0x20);
                  psVar23[-1] = (short)uVar42;
                  *psVar23 = (short)((ulong)uVar42 >> 0x20);
                } while (uVar34 != uVar31);
                psVar35 = psVar35 + -uVar31;
                uVar37 = uVar9 - (int)uVar31;
                if (uVar1 == uVar31) goto LAB_00e770c4;
              }
              iVar39 = uVar37 + 1;
              do {
                sVar16 = *psVar35;
                iVar39 = iVar39 + -1;
                sVar17 = psVar35[uVar27];
                psVar35[uVar27] = (short)(sVar17 * iVar12 + sVar16 * iVar11 + 0x4000U >> 0xf);
                *psVar35 = (short)(sVar17 * iVar13 + sVar16 * iVar12 + 0x4000U >> 0xf);
                psVar35 = psVar35 + -1;
              } while (iVar39 != 0);
            }
          }
LAB_00e770c4:
          puVar28 = (ushort *)(param_1 + lVar33 * 2);
          if (0 < iVar18) {
            iVar39 = 0;
            uVar37 = (uint)*puVar28;
            puVar20 = puVar28;
            do {
              puVar36 = puVar20 + 1;
              sVar16 = (short)uVar37;
              iVar39 = iVar39 + 1;
              uVar37 = (short)*puVar36 * iVar11 + sVar16 * iVar12 + 0x4000U >> 0xf;
              *puVar20 = (ushort)((short)*puVar36 * iVar10 + sVar16 * iVar11 + 0x4000U >> 0xf);
              *puVar36 = (ushort)uVar37;
              puVar20 = puVar36;
            } while (iVar39 != iVar18);
          }
          if (-1 < (int)uVar8) {
            puVar28 = puVar28 + uVar24;
            uVar34 = uVar24;
            do {
              uVar6 = puVar28[1];
              puVar28[1] = (ushort)((short)uVar6 * iVar11 + (short)*puVar28 * iVar12 + 0x4000U >>
                                   0xf);
              iVar39 = (int)uVar34;
              uVar34 = (ulong)(iVar39 - 1);
              *puVar28 = (ushort)((short)uVar6 * iVar10 + (short)*puVar28 * iVar11 + 0x4000U >> 0xf)
              ;
              puVar28 = puVar28 + -1;
            } while (iVar39 != 0);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar26);
      }
      else if (uVar32 == 0) {
        uVar19 = 0;
        do {
          puVar28 = (ushort *)(param_1 + uVar19 * lVar25 * 2);
          if (0 < iVar18) {
            iVar29 = 0;
            uVar32 = (uint)*puVar28;
            puVar20 = puVar28;
            do {
              puVar36 = puVar20 + 1;
              sVar16 = (short)uVar32;
              iVar29 = iVar29 + 1;
              uVar32 = (short)*puVar36 * iVar11 + sVar16 * iVar10 + 0x4000U >> 0xf;
              *puVar20 = (ushort)((short)*puVar36 * iVar12 + sVar16 * iVar11 + 0x4000U >> 0xf);
              *puVar36 = (ushort)uVar32;
              puVar20 = puVar36;
            } while (iVar29 != iVar18);
          }
          if (-1 < (int)uVar8) {
            puVar28 = puVar28 + uVar24;
            uVar27 = uVar24;
            do {
              uVar6 = puVar28[1];
              puVar28[1] = (ushort)((short)uVar6 * iVar11 + (short)*puVar28 * iVar10 + 0x4000U >>
                                   0xf);
              iVar29 = (int)uVar27;
              uVar27 = (ulong)(iVar29 - 1);
              *puVar28 = (ushort)((short)uVar6 * iVar12 + (short)*puVar28 * iVar11 + 0x4000U >> 0xf)
              ;
              puVar28 = puVar28 + -1;
            } while (iVar29 != 0);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar26);
      }
      else {
        uVar14 = uVar14 + ~uVar32;
        uVar1 = uVar19 + 1;
        uVar31 = uVar1 & 0x1fffffffe;
        uVar21 = 0;
        uVar2 = (ulong)uVar14 + 1;
        uVar30 = uVar2 & 0x1fffffff8;
        do {
          lVar33 = uVar21 * lVar25;
          puVar28 = (ushort *)(param_1 + lVar33 * 2);
          if (0 < iVar18) {
            iVar39 = 0;
            uVar32 = (uint)*puVar28;
            puVar20 = puVar28;
            do {
              puVar36 = puVar20 + 1;
              sVar16 = (short)uVar32;
              iVar39 = iVar39 + 1;
              uVar32 = (short)*puVar36 * iVar11 + sVar16 * iVar10 + 0x4000U >> 0xf;
              *puVar20 = (ushort)((short)*puVar36 * iVar12 + sVar16 * iVar11 + 0x4000U >> 0xf);
              *puVar36 = (ushort)uVar32;
              puVar20 = puVar36;
            } while (iVar39 != iVar18);
          }
          if (-1 < (int)uVar8) {
            puVar20 = puVar28 + uVar24;
            uVar32 = uVar8;
            do {
              uVar6 = puVar20[1];
              puVar20[1] = (ushort)((short)uVar6 * iVar11 + (short)*puVar20 * iVar10 + 0x4000U >>
                                   0xf);
              *puVar20 = (ushort)((short)uVar6 * iVar12 + (short)*puVar20 * iVar11 + 0x4000U >> 0xf)
              ;
              bVar5 = uVar32 != 0;
              puVar20 = puVar20 + -1;
              uVar32 = uVar32 - 1;
            } while (bVar5);
          }
          if (0 < iVar29) {
            if ((uVar14 < 7) ||
               ((param_1 + (lVar33 + uVar27) * 2 < param_1 + (lVar33 + uVar2) * 2 &&
                (puVar28 < (ushort *)(param_1 + (lVar33 + uVar27 + uVar14 + 1) * 2))))) {
              iVar39 = 0;
              puVar20 = puVar28;
            }
            else {
              uVar34 = 0;
              puVar20 = puVar28 + uVar30;
              do {
                puVar3 = (undefined8 *)(puVar28 + uVar34);
                uVar34 = uVar34 + 8;
                puVar15 = (undefined8 *)((long)puVar3 + uVar27 * 2);
                uVar42 = puVar15[1];
                uVar38 = *puVar15;
                uVar46 = puVar3[1];
                uVar43 = *puVar3;
                sVar16 = (short)((ulong)uVar38 >> 0x10);
                iVar48 = (int)(short)((ulong)uVar38 >> 0x20);
                iVar49 = (int)(short)((ulong)uVar38 >> 0x30);
                iVar50 = (int)(short)((ulong)uVar43 >> 0x10);
                iVar51 = (int)(short)((ulong)uVar43 >> 0x20);
                iVar52 = (int)(short)((ulong)uVar43 >> 0x30);
                iVar39 = (int)(short)((ulong)uVar42 >> 0x10);
                iVar40 = (int)(short)((ulong)uVar42 >> 0x20);
                iVar41 = (int)(short)((ulong)uVar42 >> 0x30);
                iVar44 = (int)(short)((ulong)uVar46 >> 0x10);
                iVar45 = (int)(short)((ulong)uVar46 >> 0x20);
                iVar47 = (int)(short)((ulong)uVar46 >> 0x30);
                puVar15 = (undefined8 *)((long)puVar3 + uVar27 * 2);
                puVar15[1] = CONCAT26((short)(iVar12 * iVar41 + iVar13 * iVar47 + 0x4000U >> 0xf),
                                      CONCAT24((short)(iVar12 * iVar40 + iVar13 * iVar45 + 0x4000U
                                                      >> 0xf),
                                               CONCAT22((short)(iVar12 * iVar39 + iVar13 * iVar44 +
                                                                0x4000U >> 0xf),
                                                        (short)(iVar12 * (short)uVar42 +
                                                                iVar13 * (short)uVar46 + 0x4000U >>
                                                               0xf))));
                *puVar15 = CONCAT26((short)(iVar12 * iVar49 + iVar13 * iVar52 + 0x4000U >> 0xf),
                                    CONCAT24((short)(iVar12 * iVar48 + iVar13 * iVar51 + 0x4000U >>
                                                    0xf),
                                             CONCAT22((short)(iVar12 * sVar16 + iVar13 * iVar50 +
                                                              0x4000U >> 0xf),
                                                      (short)(iVar12 * (short)uVar38 +
                                                              iVar13 * (short)uVar43 + 0x4000U >>
                                                             0xf))));
                puVar3[1] = CONCAT26((short)(iVar11 * iVar41 + iVar12 * iVar47 + 0x4000U >> 0xf),
                                     CONCAT24((short)(iVar11 * iVar40 + iVar12 * iVar45 + 0x4000U >>
                                                     0xf),
                                              CONCAT22((short)(iVar11 * iVar39 + iVar12 * iVar44 +
                                                               0x4000U >> 0xf),
                                                       (short)(iVar11 * (short)uVar42 +
                                                               iVar12 * (short)uVar46 + 0x4000U >>
                                                              0xf))));
                *puVar3 = CONCAT26((short)(iVar11 * iVar49 + iVar12 * iVar52 + 0x4000U >> 0xf),
                                   CONCAT24((short)(iVar11 * iVar48 + iVar12 * iVar51 + 0x4000U >>
                                                   0xf),
                                            CONCAT22((short)(iVar11 * sVar16 + iVar12 * iVar50 +
                                                             0x4000U >> 0xf),
                                                     (short)(iVar11 * (short)uVar38 +
                                                             iVar12 * (short)uVar43 + 0x4000U >> 0xf
                                                            ))));
              } while (uVar34 != uVar30);
              iVar39 = (int)uVar30;
              if (uVar2 == uVar30) goto LAB_00e76c84;
            }
            do {
              uVar7 = puVar20[uVar27];
              iVar39 = iVar39 + 1;
              uVar6 = *puVar20;
              puVar20[uVar27] =
                   (ushort)((short)uVar7 * iVar12 + (short)uVar6 * iVar13 + 0x4000U >> 0xf);
              *puVar20 = (ushort)((short)uVar7 * iVar11 + (short)uVar6 * iVar12 + 0x4000U >> 0xf);
              puVar20 = puVar20 + 1;
            } while (iVar39 != iVar29);
          }
LAB_00e76c84:
          if (-1 < (int)uVar9) {
            puVar20 = puVar28 + uVar19;
            puVar36 = puVar20;
            uVar32 = uVar9;
            if ((((uVar9 != 0) &&
                 (uVar34 = param_1 + (uVar27 + uVar19 + lVar33) * 2,
                 uVar34 + (ulong)uVar9 * -2 <= uVar34)) && (puVar20 + -(ulong)uVar9 <= puVar20)) &&
               ((param_1 + (uVar1 + lVar33) * 2 <= param_1 + (lVar33 + uVar27) * 2 ||
                ((ushort *)(param_1 + (uVar27 + uVar19 + 1 + lVar33) * 2) <= puVar28)))) {
              uVar34 = 0;
              puVar36 = puVar20 + -uVar31;
              do {
                puVar22 = puVar20 + -uVar34;
                uVar34 = uVar34 + 2;
                puVar28 = puVar22 + uVar27;
                uVar38 = NEON_rev64(CONCAT44(iVar12 * (short)puVar28[-1] +
                                             iVar13 * (short)puVar22[-1] + 0x4000U >> 0xf,
                                             iVar12 * (short)*puVar28 + iVar13 * (short)*puVar22 +
                                             0x4000U >> 0xf),4);
                uVar42 = NEON_rev64(CONCAT44(iVar11 * (short)puVar28[-1] +
                                             iVar12 * (short)puVar22[-1] + 0x4000U >> 0xf,
                                             iVar11 * (short)*puVar28 + iVar12 * (short)*puVar22 +
                                             0x4000U >> 0xf),4);
                puVar28[-1] = (ushort)uVar38;
                *puVar28 = (ushort)((ulong)uVar38 >> 0x20);
                puVar22[-1] = (ushort)uVar42;
                *puVar22 = (ushort)((ulong)uVar42 >> 0x20);
              } while (uVar34 != uVar31);
              uVar32 = uVar9 - (int)uVar31;
              if (uVar1 == uVar31) goto LAB_00e76b44;
            }
            iVar39 = uVar32 + 1;
            do {
              uVar7 = puVar36[uVar27];
              iVar39 = iVar39 + -1;
              uVar6 = *puVar36;
              puVar36[uVar27] =
                   (ushort)((short)uVar7 * iVar12 + (short)uVar6 * iVar13 + 0x4000U >> 0xf);
              *puVar36 = (ushort)((short)uVar7 * iVar11 + (short)uVar6 * iVar12 + 0x4000U >> 0xf);
              puVar36 = puVar36 + -1;
            } while (iVar39 != 0);
          }
LAB_00e76b44:
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar26);
      }
    }
  }
  return;
}


