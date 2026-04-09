// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildMipMap<unsigned_char>
// Entry Point: 00ab2050
// Size: 1644 bytes
// Signature: void __cdecl buildMipMap<unsigned_char>(uchar * param_1, uchar * param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* void MipMapUtil::buildMipMap<unsigned char>(unsigned char*, unsigned char const*, unsigned int,
   unsigned int, unsigned int, unsigned int) */

void MipMapUtil::buildMipMap<unsigned_char>
               (uchar *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uchar *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint3 uVar12;
  uint3 uVar13;
  uint3 uVar14;
  uint3 uVar15;
  uint3 uVar16;
  uint3 uVar17;
  uint3 uVar18;
  undefined8 *puVar19;
  int iVar20;
  byte *pbVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  byte *pbVar29;
  byte *pbVar30;
  undefined8 *puVar31;
  long lVar32;
  int iVar33;
  ulong uVar34;
  uint uVar35;
  uchar *puVar36;
  uchar *puVar37;
  ulong uVar38;
  ushort uVar40;
  ushort uVar41;
  undefined8 uVar39;
  undefined8 uVar42;
  ushort uVar44;
  ushort uVar45;
  undefined8 uVar43;
  undefined8 uVar46;
  ushort uVar50;
  ushort uVar51;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  uint local_cc;
  
  iVar33 = param_6 * param_3;
  uVar23 = 0;
  if (1 < param_3) {
    uVar23 = param_6;
  }
  iVar20 = 0;
  if (1 < param_4) {
    iVar20 = iVar33;
  }
  uVar9 = param_4 & 0xfffffffe;
  if (param_5 < 2) {
    uVar10 = param_3 & 0xfffffffe;
    if (param_4 < 2) {
      uVar9 = 1;
    }
    if (param_3 < 2) {
      uVar10 = 1;
    }
    if (uVar9 != 0) {
      lVar25 = (long)(int)uVar23;
      lVar27 = (long)iVar20;
      uVar34 = (ulong)(param_6 - 1);
      lVar3 = lVar27 + lVar25;
      uVar4 = uVar34 + 1;
      uVar23 = 0;
      uVar28 = uVar4 & 0x1ffffffe0;
      do {
        if (uVar10 != 0) {
          uVar35 = 0;
          pbVar29 = param_2;
          do {
            if (param_6 != 0) {
              if (param_6 - 1 < 0x1f) {
LAB_00ab265c:
                iVar20 = 0;
                pbVar21 = param_1;
                pbVar30 = pbVar29;
              }
              else {
                pbVar30 = param_1 + uVar4;
                if ((((param_1 < pbVar29 + lVar3 + uVar34 + 1 && pbVar29 + lVar3 < pbVar30) ||
                     (param_1 < pbVar29 + lVar27 + uVar34 + 1 && pbVar29 + lVar27 < pbVar30)) ||
                    (param_1 < pbVar29 + lVar25 + uVar34 + 1 && pbVar29 + lVar25 < pbVar30)) ||
                   (param_1 < pbVar29 + uVar4 && pbVar29 < pbVar30)) goto LAB_00ab265c;
                pbVar30 = pbVar29 + uVar28;
                pbVar21 = param_1 + uVar28;
                puVar19 = (undefined8 *)(param_1 + 0x10);
                puVar31 = (undefined8 *)(pbVar29 + 0x10);
                uVar38 = uVar28;
                do {
                  puVar7 = (undefined8 *)((long)puVar31 + lVar25);
                  puVar8 = (undefined8 *)((long)puVar31 + lVar27);
                  uVar42 = puVar31[-1];
                  uVar39 = puVar31[-2];
                  uVar46 = puVar31[1];
                  uVar43 = *puVar31;
                  uVar38 = uVar38 - 0x20;
                  uVar49 = puVar7[-1];
                  uVar47 = puVar7[-2];
                  uVar55 = puVar7[1];
                  uVar53 = *puVar7;
                  puVar7 = (undefined8 *)((long)puVar31 + lVar3);
                  puVar31 = puVar31 + 4;
                  uVar12 = CONCAT12((char)((ulong)uVar47 >> 8),(short)uVar47) & 0xff00ff;
                  uVar59 = puVar8[-1];
                  uVar57 = puVar8[-2];
                  uVar52 = puVar8[1];
                  uVar48 = *puVar8;
                  uVar13 = CONCAT12((char)((ulong)uVar53 >> 8),(short)uVar53) & 0xff00ff;
                  uVar14 = CONCAT12((char)((ulong)uVar57 >> 8),(short)uVar57) & 0xff00ff;
                  uVar56 = puVar7[-1];
                  uVar54 = puVar7[-2];
                  uVar60 = puVar7[1];
                  uVar58 = *puVar7;
                  uVar15 = CONCAT12((char)((ulong)uVar48 >> 8),(short)uVar48) & 0xff00ff;
                  uVar16 = CONCAT12((char)((ulong)uVar54 >> 8),(short)uVar54) & 0xff00ff;
                  uVar50 = (ushort)(byte)(uVar12 >> 0x10) + (ushort)(byte)((ulong)uVar39 >> 8) +
                           (ushort)(byte)(uVar14 >> 0x10) + (ushort)(byte)(uVar16 >> 0x10);
                  uVar51 = (ushort)(byte)((ulong)uVar47 >> 0x10) +
                           (ushort)(byte)((ulong)uVar39 >> 0x10) +
                           (ushort)(byte)((ulong)uVar57 >> 0x10) +
                           (ushort)(byte)((ulong)uVar54 >> 0x10);
                  uVar40 = (ushort)(byte)((ulong)uVar49 >> 8) + (ushort)(byte)((ulong)uVar42 >> 8) +
                           (ushort)(byte)((ulong)uVar59 >> 8) + (ushort)(byte)((ulong)uVar56 >> 8);
                  uVar41 = (ushort)(byte)((ulong)uVar49 >> 0x10) +
                           (ushort)(byte)((ulong)uVar42 >> 0x10) +
                           (ushort)(byte)((ulong)uVar59 >> 0x10) +
                           (ushort)(byte)((ulong)uVar56 >> 0x10);
                  uVar17 = CONCAT12((char)((ulong)uVar58 >> 8),(short)uVar58) & 0xff00ff;
                  uVar44 = (ushort)(byte)((ulong)uVar55 >> 8) + (ushort)(byte)((ulong)uVar46 >> 8) +
                           (ushort)(byte)((ulong)uVar52 >> 8) + (ushort)(byte)((ulong)uVar60 >> 8);
                  uVar45 = (ushort)(byte)((ulong)uVar55 >> 0x10) +
                           (ushort)(byte)((ulong)uVar46 >> 0x10) +
                           (ushort)(byte)((ulong)uVar52 >> 0x10) +
                           (ushort)(byte)((ulong)uVar60 >> 0x10);
                  puVar19[-1] = CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar49 >> 0x38) +
                                                         (ushort)(byte)((ulong)uVar42 >> 0x38) +
                                                         (ushort)(byte)((ulong)uVar59 >> 0x38) +
                                                        (ushort)(byte)((ulong)uVar56 >> 0x38)) >> 2)
                                         ,CONCAT16((char)((ushort)((ushort)(byte)((ulong)uVar49 >>
                                                                                 0x30) +
                                                                   (ushort)(byte)((ulong)uVar42 >>
                                                                                 0x30) +
                                                                   (ushort)(byte)((ulong)uVar59 >>
                                                                                 0x30) +
                                                                  (ushort)(byte)((ulong)uVar56 >>
                                                                                0x30)) >> 2),
                                                   CONCAT15((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar49 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar42 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar59 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar56 >> 0x28)) >> 2),
                                                  CONCAT14((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar49 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar42 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar59 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar56 >> 0x20)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar49 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar42 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar59 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar56 >> 0x18)) >> 2),
                                                  CONCAT12((char)(uVar41 >> 2),
                                                           CONCAT11((char)(uVar40 >> 2),
                                                                    (char)(((ulong)CONCAT24(uVar41,
                                                  CONCAT22(uVar40,(ushort)(byte)uVar49 +
                                                                  (ushort)(byte)uVar42 +
                                                                  (ushort)(byte)uVar59 +
                                                                  (ushort)(byte)uVar56)) & 0xfffc)
                                                  >> 2))))))));
                  puVar19[-2] = CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar47 >> 0x38) +
                                                         (ushort)(byte)((ulong)uVar39 >> 0x38) +
                                                         (ushort)(byte)((ulong)uVar57 >> 0x38) +
                                                        (ushort)(byte)((ulong)uVar54 >> 0x38)) >> 2)
                                         ,CONCAT16((char)((ushort)((ushort)(byte)((ulong)uVar47 >>
                                                                                 0x30) +
                                                                   (ushort)(byte)((ulong)uVar39 >>
                                                                                 0x30) +
                                                                   (ushort)(byte)((ulong)uVar57 >>
                                                                                 0x30) +
                                                                  (ushort)(byte)((ulong)uVar54 >>
                                                                                0x30)) >> 2),
                                                   CONCAT15((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar47 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar39 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar57 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar54 >> 0x28)) >> 2),
                                                  CONCAT14((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar47 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar39 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar57 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar54 >> 0x20)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar47 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar39 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar57 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar54 >> 0x18)) >> 2),
                                                  CONCAT12((char)(uVar51 >> 2),
                                                           CONCAT11((char)(uVar50 >> 2),
                                                                    (char)(((ulong)CONCAT24(uVar51,
                                                  CONCAT22(uVar50,(short)uVar12 +
                                                                  (ushort)(byte)uVar39 +
                                                                  (short)uVar14 + (short)uVar16)) &
                                                  0xfffc) >> 2))))))));
                  puVar19[1] = CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar55 >> 0x38) +
                                                        (ushort)(byte)((ulong)uVar46 >> 0x38) +
                                                        (ushort)(byte)((ulong)uVar52 >> 0x38) +
                                                       (ushort)(byte)((ulong)uVar60 >> 0x38)) >> 2),
                                        CONCAT16((char)((ushort)((ushort)(byte)((ulong)uVar55 >>
                                                                               0x30) +
                                                                 (ushort)(byte)((ulong)uVar46 >>
                                                                               0x30) +
                                                                 (ushort)(byte)((ulong)uVar52 >>
                                                                               0x30) +
                                                                (ushort)(byte)((ulong)uVar60 >> 0x30
                                                                              )) >> 2),
                                                 CONCAT15((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar55 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar46 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar52 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar60 >> 0x28)) >> 2),
                                                  CONCAT14((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar55 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar46 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar52 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar60 >> 0x20)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar55 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar46 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar52 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar60 >> 0x18)) >> 2),
                                                  CONCAT12((char)(uVar45 >> 2),
                                                           CONCAT11((char)(uVar44 >> 2),
                                                                    (char)(((ulong)CONCAT24(uVar45,
                                                  CONCAT22(uVar44,(ushort)(byte)uVar55 +
                                                                  (ushort)(byte)uVar46 +
                                                                  (ushort)(byte)uVar52 +
                                                                  (ushort)(byte)uVar60)) & 0xfffc)
                                                  >> 2))))))));
                  *puVar19 = CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar53 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar43 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar48 >> 0x38) +
                                                     (ushort)(byte)((ulong)uVar58 >> 0x38)) >> 2),
                                      CONCAT16((char)((ushort)((ushort)(byte)((ulong)uVar53 >> 0x30)
                                                               + (ushort)(byte)((ulong)uVar43 >>
                                                                               0x30) +
                                                               (ushort)(byte)((ulong)uVar48 >> 0x30)
                                                              + (ushort)(byte)((ulong)uVar58 >> 0x30
                                                                              )) >> 2),
                                               CONCAT15((char)((ushort)((ushort)(byte)((ulong)uVar53
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar43
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar48
                                                                                      >> 0x28) +
                                                                       (ushort)(byte)((ulong)uVar58
                                                                                     >> 0x28)) >> 2)
                                                        ,CONCAT14((char)((ushort)((ushort)(byte)((
                                                  ulong)uVar53 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar43 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar48 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar58 >> 0x20)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar53 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar43 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar48 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar58 >> 0x18)) >> 2),
                                                  CONCAT12((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar53 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar43 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar48 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar58 >> 0x10)) >> 2),
                                                  CONCAT11((char)((ushort)((ushort)(byte)(uVar13 >>
                                                                                         0x10) +
                                                                           (ushort)(byte)((ulong)
                                                  uVar43 >> 8) + (ushort)(byte)(uVar15 >> 0x10) +
                                                  (ushort)(byte)(uVar17 >> 0x10)) >> 2),
                                                  (char)((ushort)((short)uVar13 +
                                                                  (ushort)(byte)uVar43 +
                                                                  (short)uVar15 + (short)uVar17) >>
                                                        2))))))));
                  puVar19 = puVar19 + 4;
                } while (uVar38 != 0);
                iVar20 = (int)uVar28;
                param_1 = pbVar21;
                pbVar29 = pbVar30;
                if (uVar4 == uVar28) goto LAB_00ab2514;
              }
              iVar20 = param_6 - iVar20;
              pbVar29 = pbVar30;
              do {
                pbVar30 = pbVar29 + lVar25;
                iVar20 = iVar20 + -1;
                bVar11 = *pbVar29;
                pbVar1 = pbVar29 + lVar27;
                pbVar2 = pbVar29 + lVar3;
                pbVar29 = pbVar29 + 1;
                param_1 = pbVar21 + 1;
                *pbVar21 = (byte)((uint)*pbVar30 + (uint)bVar11 + (uint)*pbVar1 + (uint)*pbVar2 >> 2
                                 );
                pbVar21 = param_1;
              } while (iVar20 != 0);
            }
LAB_00ab2514:
            pbVar29 = pbVar29 + lVar25;
            uVar35 = uVar35 + 2;
          } while (uVar35 < uVar10);
        }
        param_2 = param_2 + (uint)(iVar33 * 2);
        uVar23 = uVar23 + 2;
      } while (uVar23 < uVar9);
    }
  }
  else {
    if (param_4 < 2) {
      uVar9 = 1;
    }
    uVar10 = param_3 & 0xfffffffe;
    if (param_3 < 2) {
      uVar10 = 1;
    }
    if ((param_5 & 0xfffffffe) != 0) {
      lVar24 = (long)iVar20;
      uVar28 = (ulong)(param_6 - 1);
      lVar26 = (long)(int)uVar23;
      lVar32 = (long)(int)(iVar33 * param_4);
      lVar25 = lVar24 + lVar26;
      lVar27 = lVar32 + lVar24;
      lVar5 = lVar32 + lVar26;
      lVar3 = lVar26 + (int)lVar27;
      uVar4 = uVar28 + 1;
      uVar34 = uVar4 & 0x1fffffff0;
      local_cc = 0;
      do {
        if (uVar9 != 0) {
          uVar23 = 0;
          do {
            if (uVar10 != 0) {
              uVar35 = 0;
              do {
                if (param_6 != 0) {
                  puVar36 = param_1;
                  puVar37 = param_2;
                  if (param_6 - 1 < 0xf) {
                    iVar33 = 0;
                  }
                  else {
                    puVar6 = param_1 + uVar4;
                    iVar33 = 0;
                    if (((((param_2 + lVar3 + uVar28 + 1 <= param_1 || puVar6 <= param_2 + lVar3) &&
                          (param_2 + lVar27 + uVar28 + 1 <= param_1 || puVar6 <= param_2 + lVar27))
                         && ((param_2 + lVar5 + uVar28 + 1 <= param_1 || puVar6 <= param_2 + lVar5
                             && ((param_2 + lVar32 + uVar28 + 1 <= param_1 ||
                                  puVar6 <= param_2 + lVar32 &&
                                 (param_2 + lVar25 + uVar28 + 1 <= param_1 ||
                                  puVar6 <= param_2 + lVar25)))))) &&
                        (param_2 + lVar24 + uVar28 + 1 <= param_1 || puVar6 <= param_2 + lVar24)) &&
                       ((param_2 + lVar26 + uVar28 + 1 <= param_1 || puVar6 <= param_2 + lVar26 &&
                        (param_2 + uVar4 <= param_1 || puVar6 <= param_2)))) {
                      uVar38 = 0;
                      puVar36 = param_1 + uVar34;
                      puVar37 = param_2 + uVar34;
                      do {
                        uVar42 = *(undefined8 *)((long)(param_2 + uVar38) + 8);
                        uVar39 = *(undefined8 *)(param_2 + uVar38);
                        uVar46 = *(undefined8 *)((long)(param_2 + uVar38 + lVar26) + 8);
                        uVar43 = *(undefined8 *)(param_2 + uVar38 + lVar26);
                        uVar58 = *(undefined8 *)((long)(param_2 + uVar38 + lVar24) + 8);
                        uVar55 = *(undefined8 *)(param_2 + uVar38 + lVar24);
                        uVar12 = CONCAT12((char)((ulong)uVar43 >> 8),(short)uVar43) & 0xff00ff;
                        uVar13 = CONCAT12((char)((ulong)uVar55 >> 8),(short)uVar55) & 0xff00ff;
                        uVar52 = *(undefined8 *)((long)(param_2 + uVar38 + lVar25) + 8);
                        uVar47 = *(undefined8 *)(param_2 + uVar38 + lVar25);
                        uVar59 = *(undefined8 *)((long)(param_2 + uVar38 + lVar32) + 8);
                        uVar56 = *(undefined8 *)(param_2 + uVar38 + lVar32);
                        uVar14 = CONCAT12((char)((ulong)uVar47 >> 8),(short)uVar47) & 0xff00ff;
                        uVar53 = *(undefined8 *)((long)(param_2 + uVar38 + lVar5) + 8);
                        uVar48 = *(undefined8 *)(param_2 + uVar38 + lVar5);
                        uVar15 = CONCAT12((char)((ulong)uVar56 >> 8),(short)uVar56) & 0xff00ff;
                        uVar60 = *(undefined8 *)((long)(param_2 + uVar38 + lVar27) + 8);
                        uVar57 = *(undefined8 *)(param_2 + uVar38 + lVar27);
                        uVar16 = CONCAT12((char)((ulong)uVar48 >> 8),(short)uVar48) & 0xff00ff;
                        uVar54 = *(undefined8 *)((long)(param_2 + uVar38 + lVar3) + 8);
                        uVar49 = *(undefined8 *)(param_2 + uVar38 + lVar3);
                        uVar17 = CONCAT12((char)((ulong)uVar57 >> 8),(short)uVar57) & 0xff00ff;
                        uVar18 = CONCAT12((char)((ulong)uVar49 >> 8),(short)uVar49) & 0xff00ff;
                        uVar44 = (ushort)(byte)(uVar12 >> 0x10) + (ushort)(byte)((ulong)uVar39 >> 8)
                                 + (ushort)(byte)(uVar13 >> 0x10) + (ushort)(byte)(uVar14 >> 0x10) +
                                 (ushort)(byte)(uVar15 >> 0x10) + (ushort)(byte)(uVar16 >> 0x10) +
                                 (ushort)(byte)(uVar17 >> 0x10) + (ushort)(byte)(uVar18 >> 0x10);
                        uVar45 = (ushort)(byte)((ulong)uVar43 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar39 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar55 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar47 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar56 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar48 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar57 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar49 >> 0x10);
                        uVar40 = (ushort)(byte)((ulong)uVar46 >> 8) +
                                 (ushort)(byte)((ulong)uVar42 >> 8) +
                                 (ushort)(byte)((ulong)uVar58 >> 8) +
                                 (ushort)(byte)((ulong)uVar52 >> 8) +
                                 (ushort)(byte)((ulong)uVar59 >> 8) +
                                 (ushort)(byte)((ulong)uVar53 >> 8) +
                                 (ushort)(byte)((ulong)uVar60 >> 8) +
                                 (ushort)(byte)((ulong)uVar54 >> 8);
                        uVar41 = (ushort)(byte)((ulong)uVar46 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar42 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar58 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar52 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar59 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar53 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar60 >> 0x10) +
                                 (ushort)(byte)((ulong)uVar54 >> 0x10);
                        *(ulong *)((long)(param_1 + uVar38) + 8) =
                             CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar46 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar42 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar58 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar52 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar59 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar53 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar60 >> 0x38) +
                                                     (ushort)(byte)((ulong)uVar54 >> 0x38)) >> 3),
                                      CONCAT16((char)((ushort)((ushort)(byte)((ulong)uVar46 >> 0x30)
                                                               + (ushort)(byte)((ulong)uVar42 >>
                                                                               0x30) +
                                                               (ushort)(byte)((ulong)uVar58 >> 0x30)
                                                               + (ushort)(byte)((ulong)uVar52 >>
                                                                               0x30) +
                                                               (ushort)(byte)((ulong)uVar59 >> 0x30)
                                                               + (ushort)(byte)((ulong)uVar53 >>
                                                                               0x30) +
                                                               (ushort)(byte)((ulong)uVar60 >> 0x30)
                                                              + (ushort)(byte)((ulong)uVar54 >> 0x30
                                                                              )) >> 3),
                                               CONCAT15((char)((ushort)((ushort)(byte)((ulong)uVar46
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar42
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar58
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar52
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar59
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar53
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar60
                                                                                      >> 0x28) +
                                                                       (ushort)(byte)((ulong)uVar54
                                                                                     >> 0x28)) >> 3)
                                                        ,CONCAT14((char)((ushort)((ushort)(byte)((
                                                  ulong)uVar46 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar42 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar58 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar52 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar59 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar53 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar60 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar54 >> 0x20)) >> 3),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar46 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar42 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar58 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar52 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar59 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar53 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar60 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar54 >> 0x18)) >> 3),
                                                  CONCAT12((char)(uVar41 >> 3),
                                                           CONCAT11((char)(uVar40 >> 3),
                                                                    (char)(((ulong)CONCAT24(uVar41,
                                                  CONCAT22(uVar40,(ushort)(byte)uVar46 +
                                                                  (ushort)(byte)uVar42 +
                                                                  (ushort)(byte)uVar58 +
                                                                  (ushort)(byte)uVar52 +
                                                                  (ushort)(byte)uVar59 +
                                                                  (ushort)(byte)uVar53 +
                                                                  (ushort)(byte)uVar60 +
                                                                  (ushort)(byte)uVar54)) & 0xfff8)
                                                  >> 3))))))));
                        *(ulong *)(param_1 + uVar38) =
                             CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar43 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar39 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar55 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar47 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar56 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar48 >> 0x38) +
                                                      (ushort)(byte)((ulong)uVar57 >> 0x38) +
                                                     (ushort)(byte)((ulong)uVar49 >> 0x38)) >> 3),
                                      CONCAT16((char)((ushort)((ushort)(byte)((ulong)uVar43 >> 0x30)
                                                               + (ushort)(byte)((ulong)uVar39 >>
                                                                               0x30) +
                                                               (ushort)(byte)((ulong)uVar55 >> 0x30)
                                                               + (ushort)(byte)((ulong)uVar47 >>
                                                                               0x30) +
                                                               (ushort)(byte)((ulong)uVar56 >> 0x30)
                                                               + (ushort)(byte)((ulong)uVar48 >>
                                                                               0x30) +
                                                               (ushort)(byte)((ulong)uVar57 >> 0x30)
                                                              + (ushort)(byte)((ulong)uVar49 >> 0x30
                                                                              )) >> 3),
                                               CONCAT15((char)((ushort)((ushort)(byte)((ulong)uVar43
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar39
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar55
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar47
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar56
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar48
                                                                                      >> 0x28) +
                                                                        (ushort)(byte)((ulong)uVar57
                                                                                      >> 0x28) +
                                                                       (ushort)(byte)((ulong)uVar49
                                                                                     >> 0x28)) >> 3)
                                                        ,CONCAT14((char)((ushort)((ushort)(byte)((
                                                  ulong)uVar43 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar39 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar55 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar47 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar56 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar48 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar57 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar49 >> 0x20)) >> 3),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar43 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar39 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar55 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar47 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar56 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar48 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar57 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar49 >> 0x18)) >> 3),
                                                  CONCAT12((char)(uVar45 >> 3),
                                                           CONCAT11((char)(uVar44 >> 3),
                                                                    (char)(((ulong)CONCAT24(uVar45,
                                                  CONCAT22(uVar44,(short)uVar12 +
                                                                  (ushort)(byte)uVar39 +
                                                                  (short)uVar13 + (short)uVar14 +
                                                                  (short)uVar15 + (short)uVar16 +
                                                                  (short)uVar17 + (short)uVar18)) &
                                                  0xfff8) >> 3))))))));
                        uVar38 = uVar38 + 0x10;
                      } while (uVar34 != uVar38);
                      iVar33 = (int)uVar34;
                      param_1 = puVar36;
                      param_2 = puVar37;
                      if (uVar4 == uVar34) goto LAB_00ab21a4;
                    }
                  }
                  lVar22 = 0;
                  do {
                    puVar36[lVar22] =
                         (uchar)((uint)puVar37[lVar22 + lVar26] + (uint)puVar37[lVar22] +
                                 (uint)puVar37[lVar22 + lVar24] + (uint)puVar37[lVar22 + lVar25] +
                                 (uint)puVar37[lVar22 + lVar32] + (uint)puVar37[lVar22 + lVar5] +
                                 (uint)puVar37[lVar22 + lVar27] + (uint)puVar37[lVar22 + lVar3] >> 3
                                );
                    lVar22 = lVar22 + 1;
                  } while (param_6 - iVar33 != (int)lVar22);
                  param_1 = puVar36 + lVar22;
                  param_2 = puVar37 + lVar22;
                }
LAB_00ab21a4:
                param_2 = param_2 + lVar26;
                uVar35 = uVar35 + 2;
              } while (uVar35 < uVar10);
            }
            param_2 = param_2 + lVar24;
            uVar23 = uVar23 + 2;
          } while (uVar23 < uVar9);
        }
        param_2 = param_2 + lVar32;
        local_cc = local_cc + 2;
      } while (local_cc < (param_5 & 0xfffffffe));
    }
  }
  return;
}


