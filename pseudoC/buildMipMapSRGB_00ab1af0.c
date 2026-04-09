// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildMipMapSRGB
// Entry Point: 00ab1af0
// Size: 1376 bytes
// Signature: undefined __cdecl buildMipMapSRGB(uchar * param_1, uchar * param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* MipMapUtil::buildMipMapSRGB(unsigned char*, unsigned char const*, unsigned int, unsigned int,
   unsigned int, unsigned int) */

void MipMapUtil::buildMipMapSRGB
               (uchar *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint3 uVar9;
  uint3 uVar10;
  uint3 uVar11;
  uint3 uVar12;
  uint3 uVar13;
  uint3 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  uchar uVar29;
  ulong uVar30;
  ushort uVar32;
  ushort uVar33;
  undefined8 uVar31;
  undefined8 uVar34;
  ushort uVar36;
  ushort uVar37;
  undefined8 uVar35;
  undefined8 uVar38;
  ushort uVar41;
  ushort uVar42;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  
  iVar8 = param_6 * param_3;
  uVar17 = 0;
  if (1 < param_3) {
    uVar17 = param_6;
  }
  iVar15 = 0;
  if (1 < param_4) {
    iVar15 = iVar8;
  }
  if (param_5 < 2) {
    uVar5 = param_4 & 0xfffffffe;
    if (param_4 < 2) {
      uVar5 = 1;
    }
    uVar6 = param_3 & 0xfffffffe;
    if (param_3 < 2) {
      uVar6 = 1;
    }
    if (uVar5 != 0) {
      lVar18 = (long)(int)uVar17;
      uVar21 = (ulong)(param_6 - 4);
      lVar19 = (long)iVar15;
      lVar2 = lVar19 + lVar18;
      uVar17 = 0;
      uVar24 = uVar21 + 1 & 0x1ffffffe0;
      do {
        if (uVar6 != 0) {
          uVar16 = 0;
          pbVar28 = param_2;
          do {
            pbVar26 = pbVar28;
            pbVar27 = param_1;
            if (param_6 != 0) {
              pbVar26 = pbVar28 + 1;
              *param_1 = (&ColorUtil::s_linearToSrgbTable)
                         [(ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[pbVar28[lVar18]] +
                          (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[*pbVar28] +
                          (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[pbVar28[lVar19]] +
                          (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[pbVar28[lVar2]] >> 7];
              pbVar27 = param_1 + 1;
              if (param_6 != 1) {
                pbVar3 = pbVar28 + 2;
                param_1[1] = (&ColorUtil::s_linearToSrgbTable)
                             [(ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[pbVar26[lVar18]] +
                              (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[pbVar28[1]] +
                              (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[pbVar26[lVar19]] +
                              (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[pbVar26[lVar2]] >> 7]
                ;
                if (param_6 == 2) {
                  pbVar26 = pbVar3;
                  pbVar27 = param_1 + 2;
                }
                else {
                  pbVar27 = param_1 + 3;
                  pbVar26 = pbVar28 + 3;
                  param_1[2] = (&ColorUtil::s_linearToSrgbTable)
                               [(ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[pbVar3[lVar18]] +
                                (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[pbVar28[2]] +
                                (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[pbVar3[lVar19]] +
                                (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[pbVar3[lVar2]] >> 7
                               ];
                  if (param_6 != 3) {
                    if (param_6 - 4 < 0x1f) {
                      uVar23 = 3;
                    }
                    else {
                      pbVar3 = param_1 + uVar21 + 4;
                      uVar23 = 3;
                      if ((((pbVar28 + lVar2 + uVar21 + 4 <= pbVar27 ||
                             pbVar3 <= pbVar28 + lVar2 + 3) &&
                           (pbVar28 + lVar19 + uVar21 + 4 <= pbVar27 ||
                            pbVar3 <= pbVar28 + lVar19 + 3)) &&
                          (pbVar28 + lVar18 + uVar21 + 4 <= pbVar27 ||
                           pbVar3 <= pbVar28 + lVar18 + 3)) &&
                         (pbVar28 + uVar21 + 4 <= pbVar27 || pbVar3 <= pbVar26)) {
                        uVar30 = 0;
                        pbVar27 = pbVar27 + uVar24;
                        pbVar26 = pbVar26 + uVar24;
                        do {
                          lVar20 = uVar30 + lVar18;
                          uVar34 = *(undefined8 *)(pbVar28 + uVar30 + 0xb);
                          uVar31 = *(undefined8 *)(pbVar28 + uVar30 + 3);
                          uVar38 = *(undefined8 *)(pbVar28 + uVar30 + 0x1b);
                          uVar35 = *(undefined8 *)(pbVar28 + uVar30 + 0x13);
                          lVar22 = uVar30 + lVar19;
                          uVar43 = *(undefined8 *)(pbVar28 + lVar20 + 0xb);
                          uVar39 = *(undefined8 *)(pbVar28 + lVar20 + 3);
                          uVar47 = *(undefined8 *)(pbVar28 + lVar20 + 0x1b);
                          uVar45 = *(undefined8 *)(pbVar28 + lVar20 + 0x13);
                          lVar20 = uVar30 + lVar2;
                          uVar51 = *(undefined8 *)(pbVar28 + lVar22 + 0xb);
                          uVar49 = *(undefined8 *)(pbVar28 + lVar22 + 3);
                          uVar9 = CONCAT12((char)((ulong)uVar39 >> 8),(short)uVar39) & 0xff00ff;
                          uVar10 = CONCAT12((char)((ulong)uVar45 >> 8),(short)uVar45) & 0xff00ff;
                          uVar44 = *(undefined8 *)(pbVar28 + lVar22 + 0x1b);
                          uVar40 = *(undefined8 *)(pbVar28 + lVar22 + 0x13);
                          uVar48 = *(undefined8 *)(pbVar28 + lVar20 + 0xb);
                          uVar46 = *(undefined8 *)(pbVar28 + lVar20 + 3);
                          uVar11 = CONCAT12((char)((ulong)uVar49 >> 8),(short)uVar49) & 0xff00ff;
                          puVar4 = (undefined8 *)(param_1 + uVar30 + 0x13);
                          uVar12 = CONCAT12((char)((ulong)uVar40 >> 8),(short)uVar40) & 0xff00ff;
                          uVar30 = uVar30 + 0x20;
                          uVar52 = *(undefined8 *)(pbVar28 + lVar20 + 0x1b);
                          uVar50 = *(undefined8 *)(pbVar28 + lVar20 + 0x13);
                          uVar13 = CONCAT12((char)((ulong)uVar46 >> 8),(short)uVar46) & 0xff00ff;
                          uVar41 = (ushort)(byte)(uVar9 >> 0x10) +
                                   (ushort)(byte)((ulong)uVar31 >> 8) +
                                   (ushort)(byte)(uVar11 >> 0x10) + (ushort)(byte)(uVar13 >> 0x10);
                          uVar42 = (ushort)(byte)((ulong)uVar39 >> 0x10) +
                                   (ushort)(byte)((ulong)uVar31 >> 0x10) +
                                   (ushort)(byte)((ulong)uVar49 >> 0x10) +
                                   (ushort)(byte)((ulong)uVar46 >> 0x10);
                          uVar14 = CONCAT12((char)((ulong)uVar50 >> 8),(short)uVar50) & 0xff00ff;
                          uVar32 = (ushort)(byte)((ulong)uVar43 >> 8) +
                                   (ushort)(byte)((ulong)uVar34 >> 8) +
                                   (ushort)(byte)((ulong)uVar51 >> 8) +
                                   (ushort)(byte)((ulong)uVar48 >> 8);
                          uVar33 = (ushort)(byte)((ulong)uVar43 >> 0x10) +
                                   (ushort)(byte)((ulong)uVar34 >> 0x10) +
                                   (ushort)(byte)((ulong)uVar51 >> 0x10) +
                                   (ushort)(byte)((ulong)uVar48 >> 0x10);
                          uVar36 = (ushort)(byte)((ulong)uVar47 >> 8) +
                                   (ushort)(byte)((ulong)uVar38 >> 8) +
                                   (ushort)(byte)((ulong)uVar44 >> 8) +
                                   (ushort)(byte)((ulong)uVar52 >> 8);
                          uVar37 = (ushort)(byte)((ulong)uVar47 >> 0x10) +
                                   (ushort)(byte)((ulong)uVar38 >> 0x10) +
                                   (ushort)(byte)((ulong)uVar44 >> 0x10) +
                                   (ushort)(byte)((ulong)uVar52 >> 0x10);
                          puVar4[-1] = CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar43 >> 0x38
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar34 >> 0x38
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar51 >> 0x38
                                                                              ) +
                                                               (ushort)(byte)((ulong)uVar48 >> 0x38)
                                                               ) >> 2),
                                                CONCAT16((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar43 >> 0x30) +
                                                  (ushort)(byte)((ulong)uVar34 >> 0x30) +
                                                  (ushort)(byte)((ulong)uVar51 >> 0x30) +
                                                  (ushort)(byte)((ulong)uVar48 >> 0x30)) >> 2),
                                                  CONCAT15((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar43 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar34 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar51 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar48 >> 0x28)) >> 2),
                                                  CONCAT14((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar43 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar34 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar51 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar48 >> 0x20)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar43 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar34 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar51 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar48 >> 0x18)) >> 2),
                                                  CONCAT12((char)(uVar33 >> 2),
                                                           CONCAT11((char)(uVar32 >> 2),
                                                                    (char)(((ulong)CONCAT24(uVar33,
                                                  CONCAT22(uVar32,(ushort)(byte)uVar43 +
                                                                  (ushort)(byte)uVar34 +
                                                                  (ushort)(byte)uVar51 +
                                                                  (ushort)(byte)uVar48)) & 0xfffc)
                                                  >> 2))))))));
                          puVar4[-2] = CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar39 >> 0x38
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar31 >> 0x38
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar49 >> 0x38
                                                                              ) +
                                                               (ushort)(byte)((ulong)uVar46 >> 0x38)
                                                               ) >> 2),
                                                CONCAT16((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar39 >> 0x30) +
                                                  (ushort)(byte)((ulong)uVar31 >> 0x30) +
                                                  (ushort)(byte)((ulong)uVar49 >> 0x30) +
                                                  (ushort)(byte)((ulong)uVar46 >> 0x30)) >> 2),
                                                  CONCAT15((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar39 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar31 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar49 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar46 >> 0x28)) >> 2),
                                                  CONCAT14((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar39 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar31 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar49 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar46 >> 0x20)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar39 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar31 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar49 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar46 >> 0x18)) >> 2),
                                                  CONCAT12((char)(uVar42 >> 2),
                                                           CONCAT11((char)(uVar41 >> 2),
                                                                    (char)(((ulong)CONCAT24(uVar42,
                                                  CONCAT22(uVar41,(short)uVar9 +
                                                                  (ushort)(byte)uVar31 +
                                                                  (short)uVar11 + (short)uVar13)) &
                                                  0xfffc) >> 2))))))));
                          puVar4[1] = CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar47 >> 0x38)
                                                               + (ushort)(byte)((ulong)uVar38 >>
                                                                               0x38) +
                                                               (ushort)(byte)((ulong)uVar44 >> 0x38)
                                                              + (ushort)(byte)((ulong)uVar52 >> 0x38
                                                                              )) >> 2),
                                               CONCAT16((char)((ushort)((ushort)(byte)((ulong)uVar47
                                                                                      >> 0x30) +
                                                                        (ushort)(byte)((ulong)uVar38
                                                                                      >> 0x30) +
                                                                        (ushort)(byte)((ulong)uVar44
                                                                                      >> 0x30) +
                                                                       (ushort)(byte)((ulong)uVar52
                                                                                     >> 0x30)) >> 2)
                                                        ,CONCAT15((char)((ushort)((ushort)(byte)((
                                                  ulong)uVar47 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar38 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar44 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar52 >> 0x28)) >> 2),
                                                  CONCAT14((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar47 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar38 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar44 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar52 >> 0x20)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar47 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar38 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar44 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar52 >> 0x18)) >> 2),
                                                  CONCAT12((char)(uVar37 >> 2),
                                                           CONCAT11((char)(uVar36 >> 2),
                                                                    (char)(((ulong)CONCAT24(uVar37,
                                                  CONCAT22(uVar36,(ushort)(byte)uVar47 +
                                                                  (ushort)(byte)uVar38 +
                                                                  (ushort)(byte)uVar44 +
                                                                  (ushort)(byte)uVar52)) & 0xfffc)
                                                  >> 2))))))));
                          *puVar4 = CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar45 >> 0x38) +
                                                             (ushort)(byte)((ulong)uVar35 >> 0x38) +
                                                             (ushort)(byte)((ulong)uVar40 >> 0x38) +
                                                            (ushort)(byte)((ulong)uVar50 >> 0x38))
                                                   >> 2),
                                             CONCAT16((char)((ushort)((ushort)(byte)((ulong)uVar45
                                                                                    >> 0x30) +
                                                                      (ushort)(byte)((ulong)uVar35
                                                                                    >> 0x30) +
                                                                      (ushort)(byte)((ulong)uVar40
                                                                                    >> 0x30) +
                                                                     (ushort)(byte)((ulong)uVar50 >>
                                                                                   0x30)) >> 2),
                                                      CONCAT15((char)((ushort)((ushort)(byte)((ulong
                                                  )uVar45 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar35 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar40 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar50 >> 0x28)) >> 2),
                                                  CONCAT14((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar45 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar35 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar40 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar50 >> 0x20)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar45 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar35 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar40 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar50 >> 0x18)) >> 2),
                                                  CONCAT12((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar45 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar35 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar40 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar50 >> 0x10)) >> 2),
                                                  CONCAT11((char)((ushort)((ushort)(byte)(uVar10 >>
                                                                                         0x10) +
                                                                           (ushort)(byte)((ulong)
                                                  uVar35 >> 8) + (ushort)(byte)(uVar12 >> 0x10) +
                                                  (ushort)(byte)(uVar14 >> 0x10)) >> 2),
                                                  (char)((ushort)((short)uVar10 +
                                                                  (ushort)(byte)uVar35 +
                                                                  (short)uVar12 + (short)uVar14) >>
                                                        2))))))));
                        } while (uVar24 != uVar30);
                        uVar23 = (uint)uVar24 | 3;
                        if (uVar21 + 1 == uVar24) goto LAB_00ab1da4;
                      }
                    }
                    iVar15 = param_6 - uVar23;
                    pbVar28 = pbVar27;
                    do {
                      pbVar27 = pbVar26 + lVar18;
                      iVar15 = iVar15 + -1;
                      bVar7 = *pbVar26;
                      pbVar3 = pbVar26 + lVar19;
                      pbVar1 = pbVar26 + lVar2;
                      pbVar26 = pbVar26 + 1;
                      *pbVar28 = (byte)((uint)*pbVar27 + (uint)bVar7 + (uint)*pbVar3 + (uint)*pbVar1
                                       >> 2);
                      pbVar27 = pbVar28 + 1;
                      pbVar28 = pbVar28 + 1;
                    } while (iVar15 != 0);
                  }
                }
              }
            }
LAB_00ab1da4:
            param_1 = pbVar27;
            pbVar28 = pbVar26 + lVar18;
            uVar16 = uVar16 + 2;
          } while (uVar16 < uVar6);
        }
        param_2 = param_2 + (uint)(iVar8 * 2);
        uVar17 = uVar17 + 2;
      } while (uVar17 < uVar5);
    }
  }
  else {
    uVar5 = param_4 & 0xfffffffe;
    if (param_4 < 2) {
      uVar5 = 1;
    }
    uVar6 = param_3 & 0xfffffffe;
    if (param_3 < 2) {
      uVar6 = 1;
    }
    if ((param_5 & 0xfffffffe) != 0) {
      lVar19 = (long)(int)uVar17;
      lVar20 = (long)iVar15;
      lVar18 = lVar20 + lVar19;
      uVar17 = 0;
      lVar22 = (long)(int)(iVar8 * param_4);
      lVar2 = lVar22 + (int)lVar18;
      do {
        if (uVar5 != 0) {
          uVar16 = 0;
          do {
            if (uVar6 != 0) {
              uVar23 = 0;
              do {
                if (param_6 != 0) {
                  lVar25 = 0;
                  do {
                    if ((uint)lVar25 < 3) {
                      uVar29 = (&ColorUtil::s_linearToSrgbTable)
                               [(ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)
                                               [param_2[lVar25 + lVar19]] +
                                (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)[param_2[lVar25]] +
                                (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)
                                               [param_2[lVar25 + lVar20]] +
                                (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)
                                               [param_2[lVar25 + lVar22]] +
                                (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)
                                               [param_2[lVar25 + lVar18]] +
                                (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)
                                               [param_2[lVar25 + lVar22 + lVar19]] +
                                (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)
                                               [param_2[lVar25 + lVar20 + lVar22]] +
                                (ulong)(ushort)(&ColorUtil::s_srgbToLinearTable)
                                               [param_2[lVar25 + lVar2]] >> 8];
                    }
                    else {
                      uVar29 = (uchar)((uint)param_2[lVar25 + lVar19] + (uint)param_2[lVar25] +
                                       (uint)param_2[lVar25 + lVar20] +
                                       (uint)param_2[lVar25 + lVar22] +
                                       (uint)param_2[lVar25 + lVar18] +
                                       (uint)param_2[lVar25 + lVar22 + lVar19] +
                                       (uint)param_2[lVar25 + lVar20 + lVar22] +
                                       (uint)param_2[lVar25 + lVar2] >> 3);
                    }
                    param_1[lVar25] = uVar29;
                    lVar25 = lVar25 + 1;
                  } while (param_6 != (uint)lVar25);
                  param_1 = param_1 + lVar25;
                  param_2 = param_2 + lVar25;
                }
                param_2 = param_2 + lVar19;
                uVar23 = uVar23 + 2;
              } while (uVar23 < uVar6);
            }
            param_2 = param_2 + lVar20;
            uVar16 = uVar16 + 2;
          } while (uVar16 < uVar5);
        }
        param_2 = param_2 + lVar22;
        uVar17 = uVar17 + 2;
      } while (uVar17 < (param_5 & 0xfffffffe));
    }
  }
  return;
}


