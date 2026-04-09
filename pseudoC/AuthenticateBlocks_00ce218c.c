// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AuthenticateBlocks
// Entry Point: 00ce218c
// Size: 1384 bytes
// Signature: undefined __thiscall AuthenticateBlocks(GCM_Base * this, uchar * param_1, ulong param_2)


/* CryptoPP::GCM_Base::AuthenticateBlocks(unsigned char const*, unsigned long) */

ulong __thiscall CryptoPP::GCM_Base::AuthenticateBlocks(GCM_Base *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
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
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  
  lVar23 = *(long *)(this + 0x30);
  lVar1 = lVar23 + 0x30;
  uVar25 = *(ulong *)(lVar23 + 0x18);
  uVar26 = *(ulong *)(lVar23 + 0x10);
  if (*(ulong *)(this + 0x28) >> 0x10 == 0) {
    lVar2 = lVar23 + 0x430;
    lVar3 = lVar23 + 0x130;
    lVar4 = lVar23 + 0x530;
    lVar5 = lVar23 + 0x230;
    lVar6 = lVar23 + 0x630;
    lVar7 = lVar23 + 0x330;
    lVar8 = lVar23 + 0x730;
    do {
      param_2 = param_2 - 0x10;
      uVar26 = *(ulong *)param_1 ^ uVar26;
      puVar9 = (ulong *)(lVar1 + (uVar26 >> 0x14 & 0xf0));
      puVar10 = (ulong *)(lVar2 + (uVar26 >> 0x18 & 0xf0));
      puVar11 = (ulong *)(lVar3 + (uVar26 >> 0x34 & 0xf0));
      uVar25 = *(ulong *)((long)param_1 + 8) ^ uVar25;
      puVar12 = (ulong *)(lVar4 + (uVar26 >> 0x38 & 0xf0));
      puVar13 = (ulong *)(lVar5 + (uVar25 >> 0x14 & 0xf0));
      puVar14 = (ulong *)(lVar6 + (uVar25 >> 0x18 & 0xf0));
      puVar15 = (ulong *)(lVar7 + (uVar25 >> 0x34 & 0xf0));
      puVar16 = (ulong *)(lVar8 + (uVar25 >> 0x38 & 0xf0));
      puVar17 = (ulong *)(lVar1 + (uVar26 >> 0xc & 0xf0));
      puVar18 = (ulong *)(lVar2 + (uVar26 >> 0x10 & 0xf0));
      puVar19 = (ulong *)(lVar3 + (uVar26 >> 0x2c & 0xf0));
      uVar30 = *puVar10 ^ *puVar9 ^ *puVar11 ^ *puVar12 ^ *puVar13 ^ *puVar14 ^ *puVar15 ^ *puVar16;
      puVar20 = (ulong *)(lVar4 + (uVar26 >> 0x30 & 0xf0));
      puVar21 = (ulong *)(lVar5 + (uVar25 >> 0xc & 0xf0));
      uVar27 = puVar10[1] ^ puVar9[1] ^ puVar11[1] ^ puVar12[1] ^ puVar13[1] ^ puVar14[1] ^
               puVar15[1] ^ puVar16[1];
      puVar9 = (ulong *)(lVar6 + (uVar25 >> 0x10 & 0xf0));
      puVar10 = (ulong *)(lVar7 + (uVar25 >> 0x2c & 0xf0));
      puVar11 = (ulong *)(lVar8 + (uVar25 >> 0x30 & 0xf0));
      puVar12 = (ulong *)(lVar1 + (uVar26 >> 4 & 0xf0));
      puVar13 = (ulong *)(lVar2 + (uVar26 >> 8 & 0xf0));
      puVar14 = (ulong *)(lVar3 + (uVar26 >> 0x24 & 0xf0));
      puVar15 = (ulong *)(lVar4 + (uVar26 >> 0x28 & 0xf0));
      puVar16 = (ulong *)(lVar5 + (uVar25 >> 4 & 0xf0));
      uVar29 = *puVar18 ^ *puVar17 ^ *puVar19 ^ *puVar20 ^ *puVar21 ^ *puVar9 ^ *puVar10 ^ *puVar11
               ^ uVar30 << 8;
      puVar22 = (ulong *)(lVar6 + (uVar25 >> 8 & 0xf0));
      uVar30 = puVar18[1] ^ puVar17[1] ^ puVar19[1] ^ puVar20[1] ^ puVar21[1] ^ puVar9[1] ^
               puVar10[1] ^ puVar11[1] ^ (uVar30 >> 0x38 | uVar27 << 8);
      puVar9 = (ulong *)(lVar7 + (uVar25 >> 0x24 & 0xf0));
      puVar10 = (ulong *)(lVar8 + (uVar25 >> 0x28 & 0xf0));
      puVar11 = (ulong *)(lVar1 + ((ulong)(uint)((int)uVar26 << 4) & 0xf0));
      puVar17 = (ulong *)(lVar2 + (uVar26 & 0xf0));
      puVar18 = (ulong *)(lVar3 + (uVar26 >> 0x1c & 0xf0));
      puVar19 = (ulong *)(lVar4 + (uVar26 >> 0x20 & 0xf0));
      uVar28 = *puVar13 ^ *puVar12 ^ *puVar14 ^ *puVar15 ^ *puVar16 ^ *puVar22 ^ *puVar9 ^ *puVar10
               ^ uVar29 << 8;
      uVar26 = puVar13[1] ^ puVar12[1] ^ puVar14[1] ^ puVar15[1] ^ puVar16[1] ^ puVar22[1] ^
               puVar9[1] ^ puVar10[1] ^ (uVar29 >> 0x38 | uVar30 << 8);
      puVar9 = (ulong *)(lVar5 + ((ulong)(uint)((int)uVar25 << 4) & 0xf0));
      puVar10 = (ulong *)(lVar6 + (uVar25 & 0xf0));
      puVar12 = (ulong *)(lVar7 + (uVar25 >> 0x1c & 0xf0));
      puVar13 = (ulong *)(lVar8 + (uVar25 >> 0x20 & 0xf0));
      uVar25 = puVar17[1] ^ puVar11[1] ^ puVar18[1] ^ puVar19[1] ^ puVar9[1] ^ puVar10[1] ^
               puVar12[1] ^ puVar13[1] ^ (uVar28 >> 0x38 | uVar26 << 8);
      uVar26 = *puVar17 ^ *puVar11 ^ *puVar18 ^ *puVar19 ^ *puVar9 ^ *puVar10 ^ *puVar12 ^ *puVar13
               ^ (ulong)*(ushort *)(s_reductionTable + (uVar27 >> 0x37 & 0x1fe)) << 0x10 ^
               uVar28 << 8 ^ (ulong)*(ushort *)(s_reductionTable + (uVar30 >> 0x37 & 0x1fe)) << 8 ^
               (ulong)*(ushort *)(s_reductionTable + (uVar26 >> 0x37 & 0x1fe));
      param_1 = (uchar *)((long)param_1 + 0x10);
    } while (0xf < param_2);
  }
  else {
    do {
      param_2 = param_2 - 0x10;
      uVar26 = *(ulong *)param_1 ^ uVar26;
      puVar24 = (undefined8 *)(lVar1 + ((ulong)(uint)((int)uVar26 << 4) & 0xff0));
      uVar42 = puVar24[1];
      uVar31 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0x1030 + (uVar26 >> 4 & 0xff0));
      uVar58 = puVar24[1];
      uVar53 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0x2030 + (uVar26 >> 0xc & 0xff0));
      uVar59 = puVar24[1];
      uVar54 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0x3030 + (uVar26 >> 0x14 & 0xff0));
      uVar60 = puVar24[1];
      uVar55 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0x4030 + (uVar26 >> 0x1c & 0xff0));
      uVar61 = puVar24[1];
      uVar56 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0x5030 + (uVar26 >> 0x24 & 0xff0));
      uVar62 = puVar24[1];
      uVar57 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0x6030 + (uVar26 >> 0x2c & 0xff0));
      uVar43 = puVar24[1];
      uVar32 = *puVar24;
      uVar25 = *(ulong *)((long)param_1 + 8) ^ uVar25;
      puVar24 = (undefined8 *)(lVar23 + 0x7030 + (uVar26 >> 0x34 & 0xff0));
      uVar44 = puVar24[1];
      uVar33 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0x8030 + ((ulong)(uint)((int)uVar25 << 4) & 0xff0));
      uVar45 = puVar24[1];
      uVar34 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0x9030 + (uVar25 >> 4 & 0xff0));
      uVar46 = puVar24[1];
      uVar35 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0xa030 + (uVar25 >> 0xc & 0xff0));
      uVar47 = puVar24[1];
      uVar36 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0xb030 + (uVar25 >> 0x14 & 0xff0));
      uVar48 = puVar24[1];
      uVar37 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0xc030 + (uVar25 >> 0x1c & 0xff0));
      uVar49 = puVar24[1];
      uVar38 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0xd030 + (uVar25 >> 0x24 & 0xff0));
      uVar50 = puVar24[1];
      uVar39 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0xe030 + (uVar25 >> 0x2c & 0xff0));
      uVar51 = puVar24[1];
      uVar40 = *puVar24;
      puVar24 = (undefined8 *)(lVar23 + 0xf030 + (uVar25 >> 0x34 & 0xff0));
      uVar52 = puVar24[1];
      uVar41 = *puVar24;
      uVar26 = CONCAT17((byte)((ulong)uVar53 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38) ^
                        (byte)((ulong)uVar54 >> 0x38) ^ (byte)((ulong)uVar55 >> 0x38) ^
                        (byte)((ulong)uVar56 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38) ^
                        (byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38) ^
                        (byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38) ^
                        (byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38) ^
                        (byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar39 >> 0x38) ^
                        (byte)((ulong)uVar40 >> 0x38) ^ (byte)((ulong)uVar41 >> 0x38),
                        CONCAT16((byte)((ulong)uVar53 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30) ^
                                 (byte)((ulong)uVar54 >> 0x30) ^ (byte)((ulong)uVar55 >> 0x30) ^
                                 (byte)((ulong)uVar56 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30) ^
                                 (byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30) ^
                                 (byte)((ulong)uVar34 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30) ^
                                 (byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar37 >> 0x30) ^
                                 (byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar39 >> 0x30) ^
                                 (byte)((ulong)uVar40 >> 0x30) ^ (byte)((ulong)uVar41 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar53 >> 0x28) ^
                                          (byte)((ulong)uVar31 >> 0x28) ^
                                          (byte)((ulong)uVar54 >> 0x28) ^
                                          (byte)((ulong)uVar55 >> 0x28) ^
                                          (byte)((ulong)uVar56 >> 0x28) ^
                                          (byte)((ulong)uVar57 >> 0x28) ^
                                          (byte)((ulong)uVar32 >> 0x28) ^
                                          (byte)((ulong)uVar33 >> 0x28) ^
                                          (byte)((ulong)uVar34 >> 0x28) ^
                                          (byte)((ulong)uVar35 >> 0x28) ^
                                          (byte)((ulong)uVar36 >> 0x28) ^
                                          (byte)((ulong)uVar37 >> 0x28) ^
                                          (byte)((ulong)uVar38 >> 0x28) ^
                                          (byte)((ulong)uVar39 >> 0x28) ^
                                          (byte)((ulong)uVar40 >> 0x28) ^
                                          (byte)((ulong)uVar41 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar53 >> 0x20) ^
                                                   (byte)((ulong)uVar31 >> 0x20) ^
                                                   (byte)((ulong)uVar54 >> 0x20) ^
                                                   (byte)((ulong)uVar55 >> 0x20) ^
                                                   (byte)((ulong)uVar56 >> 0x20) ^
                                                   (byte)((ulong)uVar57 >> 0x20) ^
                                                   (byte)((ulong)uVar32 >> 0x20) ^
                                                   (byte)((ulong)uVar33 >> 0x20) ^
                                                   (byte)((ulong)uVar34 >> 0x20) ^
                                                   (byte)((ulong)uVar35 >> 0x20) ^
                                                   (byte)((ulong)uVar36 >> 0x20) ^
                                                   (byte)((ulong)uVar37 >> 0x20) ^
                                                   (byte)((ulong)uVar38 >> 0x20) ^
                                                   (byte)((ulong)uVar39 >> 0x20) ^
                                                   (byte)((ulong)uVar40 >> 0x20) ^
                                                   (byte)((ulong)uVar41 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar53 >> 0x18) ^
                                                            (byte)((ulong)uVar31 >> 0x18) ^
                                                            (byte)((ulong)uVar54 >> 0x18) ^
                                                            (byte)((ulong)uVar55 >> 0x18) ^
                                                            (byte)((ulong)uVar56 >> 0x18) ^
                                                            (byte)((ulong)uVar57 >> 0x18) ^
                                                            (byte)((ulong)uVar32 >> 0x18) ^
                                                            (byte)((ulong)uVar33 >> 0x18) ^
                                                            (byte)((ulong)uVar34 >> 0x18) ^
                                                            (byte)((ulong)uVar35 >> 0x18) ^
                                                            (byte)((ulong)uVar36 >> 0x18) ^
                                                            (byte)((ulong)uVar37 >> 0x18) ^
                                                            (byte)((ulong)uVar38 >> 0x18) ^
                                                            (byte)((ulong)uVar39 >> 0x18) ^
                                                            (byte)((ulong)uVar40 >> 0x18) ^
                                                            (byte)((ulong)uVar41 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar53 >> 0x10) ^
                                                                     (byte)((ulong)uVar31 >> 0x10) ^
                                                                     (byte)((ulong)uVar54 >> 0x10) ^
                                                                     (byte)((ulong)uVar55 >> 0x10) ^
                                                                     (byte)((ulong)uVar56 >> 0x10) ^
                                                                     (byte)((ulong)uVar57 >> 0x10) ^
                                                                     (byte)((ulong)uVar32 >> 0x10) ^
                                                                     (byte)((ulong)uVar33 >> 0x10) ^
                                                                     (byte)((ulong)uVar34 >> 0x10) ^
                                                                     (byte)((ulong)uVar35 >> 0x10) ^
                                                                     (byte)((ulong)uVar36 >> 0x10) ^
                                                                     (byte)((ulong)uVar37 >> 0x10) ^
                                                                     (byte)((ulong)uVar38 >> 0x10) ^
                                                                     (byte)((ulong)uVar39 >> 0x10) ^
                                                                     (byte)((ulong)uVar40 >> 0x10) ^
                                                                     (byte)((ulong)uVar41 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar53
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar31
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar54
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar55
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar56
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar57
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar32
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar33
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar34
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar35
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar36
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar37
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar38
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar39
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar40
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar41
                                                                                    >> 8),
                                                                              (byte)uVar53 ^
                                                                              (byte)uVar31 ^
                                                                              (byte)uVar54 ^
                                                                              (byte)uVar55 ^
                                                                              (byte)uVar56 ^
                                                                              (byte)uVar57 ^
                                                                              (byte)uVar32 ^
                                                                              (byte)uVar33 ^
                                                                              (byte)uVar34 ^
                                                                              (byte)uVar35 ^
                                                                              (byte)uVar36 ^
                                                                              (byte)uVar37 ^
                                                                              (byte)uVar38 ^
                                                                              (byte)uVar39 ^
                                                                              (byte)uVar40 ^
                                                                              (byte)uVar41)))))));
      uVar25 = CONCAT17((byte)((ulong)uVar58 >> 0x38) ^ (byte)((ulong)uVar42 >> 0x38) ^
                        (byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar60 >> 0x38) ^
                        (byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar62 >> 0x38) ^
                        (byte)((ulong)uVar43 >> 0x38) ^ (byte)((ulong)uVar44 >> 0x38) ^
                        (byte)((ulong)uVar45 >> 0x38) ^ (byte)((ulong)uVar46 >> 0x38) ^
                        (byte)((ulong)uVar47 >> 0x38) ^ (byte)((ulong)uVar48 >> 0x38) ^
                        (byte)((ulong)uVar49 >> 0x38) ^ (byte)((ulong)uVar50 >> 0x38) ^
                        (byte)((ulong)uVar51 >> 0x38) ^ (byte)((ulong)uVar52 >> 0x38),
                        CONCAT16((byte)((ulong)uVar58 >> 0x30) ^ (byte)((ulong)uVar42 >> 0x30) ^
                                 (byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar60 >> 0x30) ^
                                 (byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar62 >> 0x30) ^
                                 (byte)((ulong)uVar43 >> 0x30) ^ (byte)((ulong)uVar44 >> 0x30) ^
                                 (byte)((ulong)uVar45 >> 0x30) ^ (byte)((ulong)uVar46 >> 0x30) ^
                                 (byte)((ulong)uVar47 >> 0x30) ^ (byte)((ulong)uVar48 >> 0x30) ^
                                 (byte)((ulong)uVar49 >> 0x30) ^ (byte)((ulong)uVar50 >> 0x30) ^
                                 (byte)((ulong)uVar51 >> 0x30) ^ (byte)((ulong)uVar52 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar58 >> 0x28) ^
                                          (byte)((ulong)uVar42 >> 0x28) ^
                                          (byte)((ulong)uVar59 >> 0x28) ^
                                          (byte)((ulong)uVar60 >> 0x28) ^
                                          (byte)((ulong)uVar61 >> 0x28) ^
                                          (byte)((ulong)uVar62 >> 0x28) ^
                                          (byte)((ulong)uVar43 >> 0x28) ^
                                          (byte)((ulong)uVar44 >> 0x28) ^
                                          (byte)((ulong)uVar45 >> 0x28) ^
                                          (byte)((ulong)uVar46 >> 0x28) ^
                                          (byte)((ulong)uVar47 >> 0x28) ^
                                          (byte)((ulong)uVar48 >> 0x28) ^
                                          (byte)((ulong)uVar49 >> 0x28) ^
                                          (byte)((ulong)uVar50 >> 0x28) ^
                                          (byte)((ulong)uVar51 >> 0x28) ^
                                          (byte)((ulong)uVar52 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar58 >> 0x20) ^
                                                   (byte)((ulong)uVar42 >> 0x20) ^
                                                   (byte)((ulong)uVar59 >> 0x20) ^
                                                   (byte)((ulong)uVar60 >> 0x20) ^
                                                   (byte)((ulong)uVar61 >> 0x20) ^
                                                   (byte)((ulong)uVar62 >> 0x20) ^
                                                   (byte)((ulong)uVar43 >> 0x20) ^
                                                   (byte)((ulong)uVar44 >> 0x20) ^
                                                   (byte)((ulong)uVar45 >> 0x20) ^
                                                   (byte)((ulong)uVar46 >> 0x20) ^
                                                   (byte)((ulong)uVar47 >> 0x20) ^
                                                   (byte)((ulong)uVar48 >> 0x20) ^
                                                   (byte)((ulong)uVar49 >> 0x20) ^
                                                   (byte)((ulong)uVar50 >> 0x20) ^
                                                   (byte)((ulong)uVar51 >> 0x20) ^
                                                   (byte)((ulong)uVar52 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar58 >> 0x18) ^
                                                            (byte)((ulong)uVar42 >> 0x18) ^
                                                            (byte)((ulong)uVar59 >> 0x18) ^
                                                            (byte)((ulong)uVar60 >> 0x18) ^
                                                            (byte)((ulong)uVar61 >> 0x18) ^
                                                            (byte)((ulong)uVar62 >> 0x18) ^
                                                            (byte)((ulong)uVar43 >> 0x18) ^
                                                            (byte)((ulong)uVar44 >> 0x18) ^
                                                            (byte)((ulong)uVar45 >> 0x18) ^
                                                            (byte)((ulong)uVar46 >> 0x18) ^
                                                            (byte)((ulong)uVar47 >> 0x18) ^
                                                            (byte)((ulong)uVar48 >> 0x18) ^
                                                            (byte)((ulong)uVar49 >> 0x18) ^
                                                            (byte)((ulong)uVar50 >> 0x18) ^
                                                            (byte)((ulong)uVar51 >> 0x18) ^
                                                            (byte)((ulong)uVar52 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar58 >> 0x10) ^
                                                                     (byte)((ulong)uVar42 >> 0x10) ^
                                                                     (byte)((ulong)uVar59 >> 0x10) ^
                                                                     (byte)((ulong)uVar60 >> 0x10) ^
                                                                     (byte)((ulong)uVar61 >> 0x10) ^
                                                                     (byte)((ulong)uVar62 >> 0x10) ^
                                                                     (byte)((ulong)uVar43 >> 0x10) ^
                                                                     (byte)((ulong)uVar44 >> 0x10) ^
                                                                     (byte)((ulong)uVar45 >> 0x10) ^
                                                                     (byte)((ulong)uVar46 >> 0x10) ^
                                                                     (byte)((ulong)uVar47 >> 0x10) ^
                                                                     (byte)((ulong)uVar48 >> 0x10) ^
                                                                     (byte)((ulong)uVar49 >> 0x10) ^
                                                                     (byte)((ulong)uVar50 >> 0x10) ^
                                                                     (byte)((ulong)uVar51 >> 0x10) ^
                                                                     (byte)((ulong)uVar52 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar58
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar42
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar59
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar60
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar61
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar62
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar43
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar44
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar45
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar46
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar47
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar48
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar49
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar50
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar51
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar52
                                                                                    >> 8),
                                                                              (byte)uVar58 ^
                                                                              (byte)uVar42 ^
                                                                              (byte)uVar59 ^
                                                                              (byte)uVar60 ^
                                                                              (byte)uVar61 ^
                                                                              (byte)uVar62 ^
                                                                              (byte)uVar43 ^
                                                                              (byte)uVar44 ^
                                                                              (byte)uVar45 ^
                                                                              (byte)uVar46 ^
                                                                              (byte)uVar47 ^
                                                                              (byte)uVar48 ^
                                                                              (byte)uVar49 ^
                                                                              (byte)uVar50 ^
                                                                              (byte)uVar51 ^
                                                                              (byte)uVar52)))))));
      param_1 = (uchar *)((long)param_1 + 0x10);
    } while (0xf < param_2);
  }
  *(ulong *)(lVar23 + 0x10) = uVar26;
  *(ulong *)(lVar23 + 0x18) = uVar25;
  return param_2;
}


