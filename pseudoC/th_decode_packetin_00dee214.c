// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_decode_packetin
// Entry Point: 00dee214
// Size: 16968 bytes
// Signature: undefined th_decode_packetin(void)


/* WARNING: Type propagation algorithm not settling */

void th_decode_packetin(long param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  undefined uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined8 uVar22;
  long lVar23;
  void *pvVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  char cVar28;
  byte bVar29;
  undefined4 uVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  int *piVar34;
  ulong uVar35;
  uint *puVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  long lVar40;
  code *pcVar41;
  ulong *puVar42;
  ushort **ppuVar43;
  int iVar44;
  ulong *puVar45;
  ulong uVar46;
  long lVar47;
  ulong uVar48;
  void *pvVar49;
  ulong uVar50;
  long lVar51;
  ushort *puVar52;
  int *piVar53;
  long lVar54;
  long lVar55;
  uint uVar56;
  long *plVar57;
  long lVar58;
  uint uVar59;
  size_t __size;
  char *pcVar60;
  ulong uVar61;
  long lVar62;
  long lVar63;
  byte *pbVar64;
  long lVar66;
  long lVar67;
  long lVar68;
  ulong uVar69;
  undefined8 uVar70;
  int iVar71;
  undefined8 uVar72;
  int iVar73;
  int iVar74;
  undefined8 uVar75;
  int iVar76;
  int iVar77;
  undefined8 uVar78;
  int iVar79;
  int iVar80;
  undefined8 uVar81;
  int iVar82;
  int iVar83;
  int iVar85;
  undefined8 uVar84;
  int iVar86;
  int iVar88;
  undefined8 uVar87;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  ulong uVar105;
  ulong uVar106;
  long local_14a0;
  long local_1498;
  long local_1490;
  long local_1488;
  long local_1480;
  long local_1478;
  long local_1470;
  long local_1468;
  long local_1460;
  long local_1458;
  long local_1450;
  long local_1448;
  ulong local_1440;
  long local_1420;
  undefined2 local_1404;
  ushort local_1402;
  undefined4 local_1400;
  undefined4 local_13fc;
  long lStack_13c0;
  undefined8 local_13b8;
  ulong auStack_13b0 [126];
  ulong local_fc0 [193];
  ulong local_9b8 [192];
  long local_3b8 [4];
  long local_398;
  long local_390;
  ushort *local_358 [6];
  undefined8 local_328 [6];
  undefined8 local_2f8 [6];
  int local_2c8 [6];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined4 local_290;
  int local_28c;
  uint local_288;
  uint local_284;
  undefined8 local_280;
  long lStack_278;
  long local_270;
  long lStack_268;
  long local_260;
  long lStack_258;
  long local_250;
  long lStack_248;
  long local_240;
  long lStack_238;
  long local_230;
  long lStack_228;
  long local_220;
  long lStack_218;
  long local_210;
  long lStack_208;
  long local_200;
  long lStack_1f8;
  long local_1f0;
  long lStack_1e8;
  long local_1e0;
  long lStack_1d8;
  long local_1d0;
  long lStack_1c8;
  long local_1c0;
  long lStack_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  long local_190;
  long local_188;
  long local_180;
  long lStack_178;
  long local_170;
  long local_168;
  long local_160;
  long lStack_158;
  long local_150;
  long local_148;
  long local_140;
  long lStack_138;
  long local_130;
  long local_128;
  long local_120;
  long lStack_118;
  long local_110;
  long local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_78;
  byte *pbVar65;
  
  lVar11 = tpidr_el0;
  local_78 = *(long *)(lVar11 + 0x28);
  uVar22 = 0xffffffff;
  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) goto LAB_00df2424;
  if (param_2[1] == 0) {
    if ((*(int *)(param_1 + 400) < 0) || (*(int *)(param_1 + 0x194) < 0)) {
      iVar14 = *(int *)(param_1 + 4) + 0x20;
      iVar44 = *(int *)(param_1 + 8) + 0x20;
      *(undefined8 *)(param_1 + 400) = 0;
      memset(*(void **)(param_1 + 0x2c0),0x80,
             (long)(iVar14 >> (~*(uint *)(param_1 + 0x30) & 1)) *
             (long)(iVar44 >> ((*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1)) * 2 +
             (long)iVar44 * (long)iVar14);
      lVar51 = param_1 + (long)*(int *)(param_1 + 0x194) * 0x48;
      *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x194);
      uVar81 = *(undefined8 *)(lVar51 + 0x1c8);
      uVar78 = *(undefined8 *)(lVar51 + 0x1c0);
      uVar70 = *(undefined8 *)(lVar51 + 0x1d0);
      uVar75 = *(undefined8 *)(lVar51 + 0x1b8);
      uVar72 = *(undefined8 *)(lVar51 + 0x1b0);
      uVar22 = *(undefined8 *)(lVar51 + 0x1e0);
      *(undefined8 *)(param_1 + 0xe168) = *(undefined8 *)(lVar51 + 0x1d8);
      *(undefined8 *)(param_1 + 0xe160) = uVar70;
      *(undefined8 *)(param_1 + 0xe158) = uVar81;
      *(undefined8 *)(param_1 + 0xe150) = uVar78;
      *(undefined8 *)(param_1 + 0xe170) = uVar22;
      *(undefined8 *)(param_1 + 0xe148) = uVar75;
      *(undefined8 *)(param_1 + 0xe140) = uVar72;
      uVar22 = *(undefined8 *)(lVar51 + 0x1a0);
      *(undefined8 *)(param_1 + 0xe138) = *(undefined8 *)(lVar51 + 0x1a8);
      *(undefined8 *)(param_1 + 0xe130) = uVar22;
    }
    uVar22 = 1;
    lVar51 = (*(long *)(param_1 + 0x3f0) + (ulong)*(byte *)(param_1 + 0x409) <<
             ((ulong)*(uint *)(param_1 + 0x3c) & 0x3f)) +
             (*(long *)(param_1 + 0x3f8) - *(long *)(param_1 + 0x3f0));
    *(long *)(param_1 + 0x400) = lVar51;
    *(long *)(param_1 + 0x3f8) = *(long *)(param_1 + 0x3f8) + 1;
    if (param_3 != (long *)0x0) {
      *param_3 = lVar51;
    }
    goto LAB_00df2424;
  }
  lVar51 = param_1 + 0xd058;
  oc_pack_readinit(lVar51,*param_2);
  iVar14 = oc_pack_read1(lVar51);
  if (iVar14 != 0) {
    uVar22 = 0xffffffe8;
    goto LAB_00df2424;
  }
  uVar13 = oc_pack_read1(lVar51);
  *(undefined *)(param_1 + 0x408) = uVar13;
  uVar13 = oc_pack_read(lVar51,6);
  *(undefined *)(param_1 + 0x40b) = uVar13;
  iVar14 = oc_pack_read1(lVar51);
  if (iVar14 == 0) {
    cVar28 = *(char *)(param_1 + 0x408);
    *(undefined *)(param_1 + 0x40a) = 1;
joined_r0x00dee3d4:
    if (cVar28 != '\0') goto LAB_00dee410;
LAB_00dee3ec:
    lVar23 = oc_pack_read(lVar51,3);
    if (lVar23 != 0) {
      uVar22 = 0xffffffe9;
      goto LAB_00df2424;
    }
    cVar28 = *(char *)(param_1 + 0x408);
    if (cVar28 != '\0') goto LAB_00dee410;
    iVar14 = *(int *)(param_1 + 400);
LAB_00dee420:
    for (iVar44 = 0; (iVar14 == iVar44 || (iVar44 == *(int *)(param_1 + 0x194)));
        iVar44 = iVar44 + 1) {
    }
    *(int *)(param_1 + 0x198) = iVar44;
    if (cVar28 == '\0') goto LAB_00dee45c;
LAB_00dee81c:
    uVar15 = oc_pack_read1(lVar51);
    uVar19 = *(uint *)(param_1 + 0x140);
    uVar35 = (ulong)uVar19;
    if (uVar19 == 0) {
      uVar21 = 0;
    }
    else {
      uVar25 = 0;
      uVar21 = 0;
      lVar23 = *(long *)(param_1 + 0x138);
LAB_00dee858:
      do {
        uVar16 = FUN_00df2494(lVar51);
        uVar33 = uVar25 & 0xffffffff;
        uVar17 = uVar16 - 1;
        uVar25 = uVar35;
        if (uVar35 < uVar33 + 1) {
          uVar25 = uVar33 + 1;
        }
        uVar37 = uVar25 + ~uVar33;
        if ((ulong)uVar17 <= uVar25 + ~uVar33) {
          uVar37 = (ulong)uVar17;
        }
        uVar69 = 1;
        if (uVar17 != 0) {
          uVar69 = uVar37 + 1;
        }
        bVar29 = (byte)((uVar15 & 1) << 1);
        uVar17 = uVar16;
        if (uVar69 < 0x20) {
LAB_00dee964:
          do {
            uVar21 = uVar21 + uVar15;
            *(byte *)(lVar23 + uVar33) = *(byte *)(lVar23 + uVar33) & 0xfc | bVar29;
            uVar25 = uVar33 + 1;
            bVar12 = uVar25 < uVar35;
            if (uVar17 - 1 == 0) break;
            uVar33 = uVar25;
            uVar17 = uVar17 - 1;
          } while (uVar25 < uVar35);
        }
        else {
          iVar20 = 0;
          iVar18 = 0;
          uVar61 = uVar69 & 0x1ffffffe0;
          iVar71 = 0;
          iVar73 = 0;
          iVar74 = 0;
          iVar76 = 0;
          uVar25 = uVar33 + uVar61;
          iVar77 = 0;
          iVar79 = 0;
          iVar80 = 0;
          iVar82 = 0;
          iVar83 = 0;
          iVar85 = 0;
          iVar86 = 0;
          iVar88 = 0;
          iVar14 = 0;
          iVar89 = 0;
          iVar90 = 0;
          iVar91 = 0;
          iVar92 = 0;
          iVar101 = 0;
          iVar102 = 0;
          iVar103 = 0;
          iVar104 = 0;
          iVar93 = 0;
          iVar94 = 0;
          iVar95 = 0;
          iVar96 = 0;
          iVar97 = 0;
          iVar98 = 0;
          iVar99 = 0;
          iVar100 = 0;
          uVar37 = uVar61;
          do {
            puVar42 = (ulong *)(lVar23 + uVar33);
            uVar37 = uVar37 - 0x20;
            uVar21 = uVar21 + uVar15;
            iVar14 = iVar14 + uVar15;
            iVar20 = iVar20 + uVar15;
            iVar18 = iVar18 + uVar15;
            uVar33 = uVar33 + 0x20;
            iVar71 = iVar71 + uVar15;
            iVar73 = iVar73 + uVar15;
            iVar74 = iVar74 + uVar15;
            iVar76 = iVar76 + uVar15;
            iVar77 = iVar77 + uVar15;
            iVar79 = iVar79 + uVar15;
            iVar80 = iVar80 + uVar15;
            iVar82 = iVar82 + uVar15;
            iVar83 = iVar83 + uVar15;
            iVar85 = iVar85 + uVar15;
            iVar86 = iVar86 + uVar15;
            iVar88 = iVar88 + uVar15;
            iVar89 = iVar89 + uVar15;
            iVar90 = iVar90 + uVar15;
            iVar91 = iVar91 + uVar15;
            iVar92 = iVar92 + uVar15;
            uVar48 = *puVar42 & 0xfffffffffffffffc;
            uVar50 = CONCAT62((int6)(uVar48 >> 0x10),CONCAT11((char)(*puVar42 >> 8),(char)uVar48)) &
                     0xfffffffffffffcff;
            uVar48 = CONCAT53((int5)(uVar50 >> 0x18),CONCAT12((char)(uVar48 >> 0x10),(short)uVar50))
                     & 0xfffffffffffcffff;
            uVar50 = CONCAT44((int)(uVar48 >> 0x20),CONCAT13((char)(uVar50 >> 0x18),(int3)uVar48)) &
                     0xfffffffffcffffff;
            uVar48 = CONCAT35((int3)(uVar50 >> 0x28),CONCAT14((char)(uVar48 >> 0x20),(int)uVar50)) &
                     0xfffffffcffffffff;
            uVar50 = CONCAT26((short)(uVar48 >> 0x30),CONCAT15((char)(uVar50 >> 0x28),(int5)uVar48))
                     & 0xfffffcffffffffff;
            uVar48 = CONCAT17((char)(uVar50 >> 0x38),CONCAT16((char)(uVar48 >> 0x30),(int6)uVar50))
                     & 0xfcfcffffffffffff;
            uVar38 = puVar42[1] & 0xfffffffffffffffc;
            uVar50 = CONCAT62((int6)(uVar38 >> 0x10),CONCAT11((char)(puVar42[1] >> 8),(char)uVar38))
                     & 0xfffffffffffffcff;
            uVar38 = CONCAT53((int5)(uVar50 >> 0x18),CONCAT12((char)(uVar38 >> 0x10),(short)uVar50))
                     & 0xfffffffffffcffff;
            uVar50 = CONCAT44((int)(uVar38 >> 0x20),CONCAT13((char)(uVar50 >> 0x18),(int3)uVar38)) &
                     0xfffffffffcffffff;
            uVar38 = CONCAT35((int3)(uVar50 >> 0x28),CONCAT14((char)(uVar38 >> 0x20),(int)uVar50)) &
                     0xfffffffcffffffff;
            uVar50 = CONCAT26((short)(uVar38 >> 0x30),CONCAT15((char)(uVar50 >> 0x28),(int5)uVar38))
                     & 0xfffffcffffffffff;
            uVar50 = CONCAT17((char)(uVar50 >> 0x38),CONCAT16((char)(uVar38 >> 0x30),(int6)uVar50))
                     & 0xfcfcffffffffffff;
            iVar101 = iVar101 + uVar15;
            iVar102 = iVar102 + uVar15;
            iVar103 = iVar103 + uVar15;
            iVar104 = iVar104 + uVar15;
            uVar38 = puVar42[2] & 0xfffffffffffffffc;
            uVar46 = CONCAT62((int6)(uVar38 >> 0x10),CONCAT11((char)(puVar42[2] >> 8),(char)uVar38))
                     & 0xfffffffffffffcff;
            uVar105 = CONCAT53((int5)(uVar46 >> 0x18),CONCAT12((char)(uVar38 >> 0x10),(short)uVar46)
                              ) & 0xfffffffffffcffff;
            uVar38 = CONCAT44((int)(uVar105 >> 0x20),CONCAT13((char)(uVar46 >> 0x18),(int3)uVar105))
                     & 0xfffffffffcffffff;
            uVar46 = CONCAT35((int3)(uVar38 >> 0x28),CONCAT14((char)(uVar105 >> 0x20),(int)uVar38))
                     & 0xfffffffcffffffff;
            uVar38 = CONCAT26((short)(uVar46 >> 0x30),CONCAT15((char)(uVar38 >> 0x28),(int5)uVar46))
                     & 0xfffffcffffffffff;
            uVar38 = CONCAT17((char)(uVar38 >> 0x38),CONCAT16((char)(uVar46 >> 0x30),(int6)uVar38))
                     & 0xfcfcffffffffffff;
            uVar46 = puVar42[3] & 0xfffffffffffffffc;
            uVar105 = CONCAT62((int6)(uVar46 >> 0x10),CONCAT11((char)(puVar42[3] >> 8),(char)uVar46)
                              ) & 0xfffffffffffffcff;
            uVar46 = CONCAT53((int5)(uVar105 >> 0x18),
                              CONCAT12((char)(uVar46 >> 0x10),(short)uVar105)) & 0xfffffffffffcffff;
            uVar105 = CONCAT44((int)(uVar46 >> 0x20),CONCAT13((char)(uVar105 >> 0x18),(int3)uVar46))
                      & 0xfffffffffcffffff;
            uVar106 = CONCAT35((int3)(uVar105 >> 0x28),CONCAT14((char)(uVar46 >> 0x20),(int)uVar105)
                              ) & 0xfffffffcffffffff;
            uVar46 = CONCAT26((short)(uVar106 >> 0x30),
                              CONCAT15((char)(uVar105 >> 0x28),(int5)uVar106)) & 0xfffffcffffffffff;
            uVar46 = CONCAT17((char)(uVar46 >> 0x38),CONCAT16((char)(uVar106 >> 0x30),(int6)uVar46))
                     & 0xfcfcffffffffffff;
            iVar93 = iVar93 + uVar15;
            iVar94 = iVar94 + uVar15;
            iVar95 = iVar95 + uVar15;
            iVar96 = iVar96 + uVar15;
            iVar97 = iVar97 + uVar15;
            iVar98 = iVar98 + uVar15;
            iVar99 = iVar99 + uVar15;
            iVar100 = iVar100 + uVar15;
            puVar42[1] = CONCAT17((byte)(uVar50 >> 0x38) | bVar29,
                                  CONCAT16((byte)(uVar50 >> 0x30) | bVar29,
                                           CONCAT15((byte)(uVar50 >> 0x28) | bVar29,
                                                    CONCAT14((byte)(uVar50 >> 0x20) | bVar29,
                                                             CONCAT13((byte)(uVar50 >> 0x18) |
                                                                      bVar29,CONCAT12((byte)(uVar50 
                                                  >> 0x10) | bVar29,
                                                  CONCAT11((byte)(uVar50 >> 8) | bVar29,
                                                           (byte)uVar50 | bVar29)))))));
            *puVar42 = CONCAT17((byte)(uVar48 >> 0x38) | bVar29,
                                CONCAT16((byte)(uVar48 >> 0x30) | bVar29,
                                         CONCAT15((byte)(uVar48 >> 0x28) | bVar29,
                                                  CONCAT14((byte)(uVar48 >> 0x20) | bVar29,
                                                           CONCAT13((byte)(uVar48 >> 0x18) | bVar29,
                                                                    CONCAT12((byte)(uVar48 >> 0x10)
                                                                             | bVar29,CONCAT11((byte
                                                  )(uVar48 >> 8) | bVar29,(byte)uVar48 | bVar29)))))
                                        ));
            puVar42[3] = CONCAT17((byte)(uVar46 >> 0x38) | bVar29,
                                  CONCAT16((byte)(uVar46 >> 0x30) | bVar29,
                                           CONCAT15((byte)(uVar46 >> 0x28) | bVar29,
                                                    CONCAT14((byte)(uVar46 >> 0x20) | bVar29,
                                                             CONCAT13((byte)(uVar46 >> 0x18) |
                                                                      bVar29,CONCAT12((byte)(uVar46 
                                                  >> 0x10) | bVar29,
                                                  CONCAT11((byte)(uVar46 >> 8) | bVar29,
                                                           (byte)uVar46 | bVar29)))))));
            puVar42[2] = CONCAT17((byte)(uVar38 >> 0x38) | bVar29,
                                  CONCAT16((byte)(uVar38 >> 0x30) | bVar29,
                                           CONCAT15((byte)(uVar38 >> 0x28) | bVar29,
                                                    CONCAT14((byte)(uVar38 >> 0x20) | bVar29,
                                                             CONCAT13((byte)(uVar38 >> 0x18) |
                                                                      bVar29,CONCAT12((byte)(uVar38 
                                                  >> 0x10) | bVar29,
                                                  CONCAT11((byte)(uVar38 >> 8) | bVar29,
                                                           (byte)uVar38 | bVar29)))))));
          } while (uVar37 != 0);
          bVar12 = uVar33 < uVar35;
          uVar21 = iVar89 + uVar21 + iVar93 + iVar77 + iVar101 + iVar71 + iVar97 + iVar83 +
                   iVar90 + iVar14 + iVar94 + iVar79 + iVar102 + iVar73 + iVar98 + iVar85 +
                   iVar91 + iVar20 + iVar95 + iVar80 + iVar103 + iVar74 + iVar99 + iVar86 +
                   iVar92 + iVar18 + iVar96 + iVar82 + iVar104 + iVar76 + iVar100 + iVar88;
          uVar33 = uVar25;
          uVar17 = uVar16 - (int)uVar61;
          if (uVar69 != uVar61) goto LAB_00dee964;
        }
        if ((uVar16 < 0x1021) || (!bVar12)) {
          uVar15 = (uint)(uVar15 == 0);
          if (uVar19 <= (uint)uVar25) break;
          goto LAB_00dee858;
        }
        uVar15 = oc_pack_read1(lVar51);
      } while ((uint)uVar25 < uVar19);
      uVar19 = *(uint *)(param_1 + 0x140);
      if (uVar21 < uVar19) {
        uVar35 = 0xffffffff;
        lVar23 = *(long *)(param_1 + 0x138);
        do {
          uVar15 = (int)uVar35 + 1;
          uVar35 = (ulong)uVar15;
        } while ((*(byte *)(lVar23 + uVar35) >> 1 & 1) != 0);
        uVar17 = oc_pack_read1(lVar51);
        uVar16 = FUN_00df2494(lVar51);
joined_r0x00dee9f4:
        if (uVar15 < uVar19) {
LAB_00deea20:
          uVar35 = uVar35 & 0xffffffff;
          bVar12 = true;
          uVar15 = uVar16;
          do {
            if ((*(byte *)(lVar23 + uVar35) >> 1 & 1) == 0) {
              if (uVar15 == 0) goto LAB_00deea68;
              uVar15 = uVar15 - 1;
              *(byte *)(lVar23 + uVar35) = *(byte *)(lVar23 + uVar35) & 0xfe | (byte)uVar17 & 1;
            }
            uVar35 = uVar35 + 1;
            bVar12 = uVar35 < uVar19;
            uVar25 = (ulong)uVar19;
            if (uVar19 == (uint)uVar35) goto LAB_00deea04;
          } while( true );
        }
      }
LAB_00deea98:
      if (uVar21 != 0) {
        iVar14 = oc_pack_read1(lVar51);
        uVar21 = (uint)(iVar14 == 0);
      }
    }
    lVar23 = 0;
    uVar35 = 0;
    uVar25 = 0;
    uVar19 = 0;
    lVar32 = *(long *)(param_1 + 0x130);
    lVar55 = *(long *)(param_1 + 0x138);
    local_1440 = 0;
    lVar40 = *(long *)(param_1 + 0x168);
    lVar47 = *(long *)(param_1 + 0x110);
    lVar58 = *(long *)(param_1 + 0x128);
    lVar67 = 0;
    do {
      uVar15 = *(int *)(param_1 + lVar23 * 0x28 + 0xbc) + (int)local_1440;
      local_1440 = (ulong)uVar15;
      lVar54 = lVar67;
      if ((uint)uVar25 < uVar15) {
        lVar63 = lVar32 + uVar25 * 0x80;
        uVar33 = uVar25;
        do {
          lVar27 = 0;
          lVar62 = lVar63;
          do {
            if (((*(byte *)(lVar55 + uVar33) >> 2 & 0xf) >> (ulong)((uint)lVar27 & 0x1f) & 1) != 0)
            {
              lVar68 = 0;
              do {
                lVar66 = *(long *)(lVar62 + lVar68);
                if (-1 < lVar66) {
                  bVar29 = *(byte *)(lVar55 + uVar33);
                  if ((bVar29 & 1) == 0) {
                    if ((bVar29 >> 1 & 1) != 0) {
                      if ((int)uVar19 < 1) {
                        uVar19 = oc_pack_read(lVar51,2);
                        if ((uVar19 >> 1 & 1) == 0) {
                          uVar21 = (uint)(uVar21 == 0);
                        }
                        else {
                          if ((uVar19 & 1) == 0) {
                            iVar14 = oc_pack_read1(lVar51);
                            uVar19 = iVar14 + 2;
                          }
                          else {
                            uVar19 = oc_pack_read(lVar51,2);
                            if ((uVar19 >> 1 & 1) != 0) {
                              if ((uVar19 & 1) == 0) {
                                iVar14 = oc_pack_read(lVar51,2);
                                uVar19 = iVar14 + 6;
                              }
                              else {
                                uVar19 = oc_pack_read(lVar51,3);
                                if ((uVar19 >> 2 & 1) == 0) {
                                  uVar21 = (uint)(uVar21 == 0);
                                  uVar19 = uVar19 + 10;
                                  goto joined_r0x00deecc4;
                                }
                                iVar14 = oc_pack_read(lVar51,2);
                                uVar19 = (uVar19 & 3) * 4 + iVar14 + 0xe;
                              }
                              uVar21 = (uint)(uVar21 == 0);
                              goto joined_r0x00deecc4;
                            }
                            uVar19 = uVar19 + 4;
                          }
                          uVar21 = (uint)(uVar21 == 0);
                        }
                      }
                      else {
                        uVar19 = uVar19 - 1;
                      }
joined_r0x00deecc4:
                      uVar15 = uVar21;
                      if (uVar21 != 0) goto LAB_00deec10;
                    }
                    uVar25 = ~uVar35;
                    uVar35 = uVar35 + 1;
                    uVar15 = 0;
                    plVar57 = (long *)(lVar40 + lVar58 * 8 + uVar25 * 8);
                  }
                  else {
                    uVar15 = 1;
LAB_00deec10:
                    plVar57 = (long *)(lVar40 + lVar54 * 8);
                    lVar54 = lVar54 + 1;
                  }
                  *plVar57 = lVar66;
                  *(uint *)(lVar47 + lVar66 * 4) =
                       *(uint *)(lVar47 + lVar66 * 4) & 0xfffffffe | uVar15 & 1;
                }
                lVar68 = lVar68 + 8;
              } while (lVar68 != 0x20);
            }
            lVar27 = lVar27 + 1;
            lVar62 = lVar62 + 0x20;
          } while (lVar27 != 4);
          uVar33 = uVar33 + 1;
          lVar63 = lVar63 + 0x80;
          uVar25 = local_1440;
        } while (uVar33 != local_1440);
      }
      lVar67 = lVar23 * 8;
      lVar23 = lVar23 + 1;
      *(long *)(param_1 + lVar67 + 0x170) = lVar54 - lVar67;
      lVar67 = lVar54;
    } while (lVar23 != 3);
    *(long *)(param_1 + 0x188) = lVar54;
    uVar19 = oc_pack_read(lVar51,3);
    if (uVar19 == 0) {
      puVar39 = &local_13b8;
      local_13b8 = 0;
      lVar23 = oc_pack_read(lVar51,3);
      *(undefined *)((long)puVar39 + lVar23) = 0;
      lVar23 = oc_pack_read(lVar51,3);
      *(undefined *)((long)puVar39 + lVar23) = 1;
      lVar23 = oc_pack_read(lVar51,3);
      *(undefined *)((long)puVar39 + lVar23) = 2;
      lVar23 = oc_pack_read(lVar51,3);
      *(undefined *)((long)puVar39 + lVar23) = 3;
      lVar23 = oc_pack_read(lVar51,3);
      *(undefined *)((long)puVar39 + lVar23) = 4;
      lVar23 = oc_pack_read(lVar51,3);
      *(undefined *)((long)puVar39 + lVar23) = 5;
      lVar23 = oc_pack_read(lVar51,3);
      *(undefined *)((long)puVar39 + lVar23) = 6;
      lVar23 = oc_pack_read(lVar51,3);
      *(undefined *)((long)puVar39 + lVar23) = 7;
    }
    else {
      puVar39 = (undefined8 *)
                (&UNK_0054ba8a + ((long)(((ulong)uVar19 << 0x20) + -0x100000000) >> 0x1d));
    }
    lVar23 = *(long *)(param_1 + 0x160);
    pcVar5 = FUN_00df257c;
    if (uVar19 != 7) {
      pcVar5 = FUN_00df2594;
    }
    if (lVar23 != 0) {
      pcVar60 = *(char **)(param_1 + 0x150);
      lVar32 = *(long *)(param_1 + 0x110);
      plVar57 = (long *)(*(long *)(param_1 + 0x148) + 0x10);
      do {
        if (*pcVar60 != -1) {
          if (((((*(uint *)(lVar32 + plVar57[-2] * 4) & 1) == 0) &&
               ((*(uint *)(lVar32 + plVar57[-1] * 4) & 1) == 0)) &&
              ((*(uint *)(lVar32 + *plVar57 * 4) & 1) == 0)) &&
             ((*(uint *)(lVar32 + plVar57[1] * 4) & 1) == 0)) {
            cVar28 = '\0';
          }
          else {
            iVar14 = (*pcVar5)(lVar51);
            cVar28 = *(char *)((long)puVar39 + (long)iVar14);
          }
          *pcVar60 = cVar28;
        }
        plVar57 = plVar57 + 0xc;
        lVar23 = lVar23 + -1;
        pcVar60 = pcVar60 + 1;
      } while (lVar23 != 0);
    }
    uVar19 = *(uint *)(param_1 + 0x30);
    iVar14 = oc_pack_read1(lVar51);
    lVar23 = *(long *)(param_1 + 0x160);
    pcVar5 = FUN_00df2684;
    if (iVar14 != 0) {
      pcVar5 = FUN_00df2658;
    }
    if (lVar23 != 0) {
      uVar15 = 0;
      uVar17 = 0;
      uVar21 = *(uint *)(param_1 + 0x30);
      uVar16 = 0;
      lVar32 = 0;
      bVar29 = *(byte *)((long)&OC_MB_MAP_NIDXS + (ulong)uVar21);
      pcVar41 = *(code **)(OC_SET_CHROMA_MVS_TABLE + (ulong)uVar19 * 8);
      lVar40 = *(long *)(param_1 + 0x110);
      lVar58 = *(long *)(param_1 + 0x120);
      lVar55 = *(long *)(param_1 + 0x148);
      lVar67 = *(long *)(param_1 + 0x150);
      uVar19 = (uint)bVar29;
      if (bVar29 < 2) {
        uVar19 = 1;
      }
      do {
        cVar28 = *(char *)(lVar67 + lVar32);
        if (cVar28 == -1) goto LAB_00deef48;
        uVar56 = 0;
        pbVar64 = OC_MB_MAP_IDXS + (ulong)uVar21 * 0xc;
        uVar35 = (ulong)uVar19;
        do {
          bVar29 = *pbVar64;
          if ((*(uint *)(lVar40 + *(long *)(lVar55 + lVar32 * 0x60 + ((ulong)bVar29 & 0xfc) * 8 +
                                           ((ulong)bVar29 & 3) * 8) * 4) & 1) != 0) {
            *(uint *)((long)auStack_13b0 + (long)(int)uVar56 * 4 + -8) = (uint)bVar29;
            uVar56 = uVar56 + 1;
          }
          uVar35 = uVar35 - 1;
          pbVar64 = pbVar64 + 1;
        } while (uVar35 != 0);
        if ((int)uVar56 < 1) goto LAB_00deef48;
        switch((int)cVar28) {
        case 2:
          uVar15 = uVar16 & 0xff | uVar17 << 8;
          uVar16 = (*pcVar5)(lVar51);
          local_1404 = CONCAT11(local_1404._1_1_,(char)uVar16);
          uVar17 = (*pcVar5)(lVar51);
          local_1404 = CONCAT11((char)uVar17,(undefined)local_1404);
          if (cVar28 == '\a') goto LAB_00deef48;
          goto LAB_00def338;
        case 3:
          local_1404 = (ushort)uVar16 & 0xff | (ushort)(uVar17 << 8);
          break;
        case 4:
          uVar59 = uVar16 & 0xff;
          uVar31 = uVar17 << 8;
          local_1404 = (ushort)uVar15;
          uVar17 = uVar15 >> 8 & 0xff;
          uVar16 = uVar15;
          uVar15 = uVar59 | uVar31;
          break;
        default:
          local_1404 = 0;
          break;
        case 6:
          uVar13 = (*pcVar5)(lVar51);
          local_1404 = CONCAT11(local_1404._1_1_,uVar13);
          uVar13 = (*pcVar5)(lVar51);
          local_1404 = CONCAT11(uVar13,(undefined)local_1404);
          goto joined_r0x00def334;
        case 7:
          *(undefined4 *)((long)auStack_13b0 + (ulong)uVar56 * 4 + -8) = 0xffffffff;
          if ((int)local_13b8 == 0) {
            lVar47 = *(long *)(lVar55 + lVar32 * 0x60);
            lVar54 = lVar47 * 4;
            *(uint *)(lVar40 + lVar54) = *(uint *)(lVar40 + lVar54) | 0x700;
            uVar13 = (*pcVar5)(lVar51);
            local_1400 = CONCAT31(local_1400._1_3_,uVar13);
            uVar13 = (*pcVar5)(lVar51);
            local_1400._0_2_ = CONCAT11(uVar13,(undefined)local_1400);
            uVar59 = 1;
            *(undefined2 *)(lVar58 + lVar47 * 2) = (undefined2)local_1400;
            iVar14 = local_13b8._4_4_;
            if (local_13b8._4_4_ == 1) goto LAB_00def0dc;
LAB_00def1bc:
            local_1400 = local_1400 & 0xffff;
            if (iVar14 != 2) goto LAB_00def13c;
LAB_00def1c8:
            uVar59 = uVar59 + 1;
            lVar47 = *(long *)(lVar55 + lVar32 * 0x60 + 0x10);
            lVar54 = lVar47 * 4;
            *(uint *)(lVar40 + lVar54) = *(uint *)(lVar40 + lVar54) | 0x700;
            uVar13 = (*pcVar5)(lVar51);
            local_13fc = CONCAT31(local_13fc._1_3_,uVar13);
            uVar13 = (*pcVar5)(lVar51);
            local_13fc._0_2_ = CONCAT11(uVar13,(undefined)local_13fc);
            *(undefined2 *)(lVar58 + lVar47 * 2) = (undefined2)local_13fc;
            if (*(int *)((long)auStack_13b0 + (ulong)uVar59 * 4 + -8) != 3) goto LAB_00def148;
LAB_00def228:
            uVar59 = uVar59 + 1;
            lVar47 = *(long *)(lVar55 + lVar32 * 0x60 + 0x18);
            lVar54 = lVar47 * 4;
            *(uint *)(lVar40 + lVar54) = *(uint *)(lVar40 + lVar54) | 0x700;
            uVar13 = (*pcVar5)(lVar51);
            local_13fc._0_3_ = CONCAT12(uVar13,(undefined2)local_13fc);
            uVar13 = (*pcVar5)(lVar51);
            local_13fc = CONCAT13(uVar13,(undefined3)local_13fc);
            *(undefined2 *)(lVar58 + lVar47 * 2) = local_13fc._2_2_;
LAB_00def28c:
            uVar15 = uVar16 & 0xff | uVar17 << 8;
            uVar7 = *(ushort *)
                     ((long)&local_1400 +
                     (long)*(int *)((long)auStack_13b0 + (ulong)(uVar59 - 1) * 4 + -8) * 2);
            uVar16 = (uint)uVar7;
            uVar17 = (uint)(uVar7 >> 8);
          }
          else {
            uVar59 = 0;
            local_1400 = local_1400 & 0xffff0000;
            iVar14 = (int)local_13b8;
            if ((int)local_13b8 != 1) goto LAB_00def1bc;
LAB_00def0dc:
            uVar59 = uVar59 + 1;
            lVar47 = *(long *)(lVar55 + lVar32 * 0x60 + 8);
            lVar54 = lVar47 * 4;
            *(uint *)(lVar40 + lVar54) = *(uint *)(lVar40 + lVar54) | 0x700;
            uVar13 = (*pcVar5)(lVar51);
            local_1400._0_3_ = CONCAT12(uVar13,(undefined2)local_1400);
            uVar13 = (*pcVar5)(lVar51);
            local_1400 = CONCAT13(uVar13,(undefined3)local_1400);
            *(undefined2 *)(lVar58 + lVar47 * 2) = local_1400._2_2_;
            iVar14 = *(int *)((long)auStack_13b0 + (ulong)uVar59 * 4 + -8);
            if (iVar14 == 2) goto LAB_00def1c8;
LAB_00def13c:
            local_13fc = local_13fc & 0xffff0000;
            if (iVar14 == 3) goto LAB_00def228;
LAB_00def148:
            local_13fc = local_13fc & 0xffff;
            if (uVar59 != 0) goto LAB_00def28c;
          }
          if (uVar59 < uVar56) {
            (*pcVar41)(&local_280,&local_1400);
            lVar47 = (ulong)uVar56 - (ulong)uVar59;
            puVar36 = (uint *)((long)auStack_13b0 + (ulong)uVar59 * 4 + -8);
            do {
              lVar47 = lVar47 + -1;
              uVar35 = (ulong)*puVar36 & 3;
              lVar54 = *(long *)(lVar55 + lVar32 * 0x60 +
                                 ((long)((ulong)*puVar36 << 0x20) >> 0x22) * 0x20 + uVar35 * 8);
              lVar63 = lVar54 * 4;
              *(uint *)(lVar40 + lVar63) = *(uint *)(lVar40 + lVar63) | 0x700;
              *(undefined2 *)(lVar58 + lVar54 * 2) = *(undefined2 *)((long)&local_280 + uVar35 * 2);
              puVar36 = puVar36 + 1;
            } while (lVar47 != 0);
          }
joined_r0x00def334:
          if ((int)cVar28 != 7) goto LAB_00def338;
          goto LAB_00deef48;
        }
        if (cVar28 != '\a') {
LAB_00def338:
          if (0 < (int)uVar56) {
            uVar35 = (ulong)uVar56;
            puVar39 = &local_13b8;
            do {
              uVar35 = uVar35 - 1;
              lVar47 = *(long *)(lVar55 + lVar32 * 0x60 +
                                 ((long)((ulong)*(uint *)puVar39 << 0x20) >> 0x22) * 0x20 +
                                ((ulong)*(uint *)puVar39 & 3) * 8);
              lVar54 = lVar47 * 4;
              *(uint *)(lVar40 + lVar54) =
                   *(uint *)(lVar40 + lVar54) & 0xfffff8ff | ((int)cVar28 & 7U) << 8;
              *(ushort *)(lVar58 + lVar47 * 2) = local_1404;
              puVar39 = (undefined8 *)((long)puVar39 + 4);
            } while (uVar35 != 0);
          }
        }
LAB_00deef48:
        lVar32 = lVar32 + 1;
      } while (lVar32 != lVar23);
    }
    lVar23 = *(long *)(param_1 + 0x188);
  }
  else {
    uVar13 = oc_pack_read(lVar51,6);
    *(undefined *)(param_1 + 0x40c) = uVar13;
    iVar14 = oc_pack_read1(lVar51);
    if (iVar14 == 0) {
      cVar28 = *(char *)(param_1 + 0x408);
      *(undefined *)(param_1 + 0x40a) = 2;
      goto joined_r0x00dee3d4;
    }
    uVar13 = oc_pack_read(lVar51,6);
    *(undefined *)(param_1 + 0x40d) = uVar13;
    cVar28 = *(char *)(param_1 + 0x408);
    *(undefined *)(param_1 + 0x40a) = 3;
    if (cVar28 == '\0') goto LAB_00dee3ec;
LAB_00dee410:
    iVar14 = *(int *)(param_1 + 400);
    if ((-1 < iVar14) && (-1 < *(int *)(param_1 + 0x194))) goto LAB_00dee420;
    *(undefined8 *)(param_1 + 400) = 0;
    iVar14 = *(int *)(param_1 + 4) + 0x20;
    iVar44 = *(int *)(param_1 + 8) + 0x20;
    *(undefined4 *)(param_1 + 0x198) = 1;
    memset(*(void **)(param_1 + 0x2c0),0x80,
           (long)(iVar14 >> (~*(uint *)(param_1 + 0x30) & 1)) *
           (long)(iVar44 >> ((*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1)) * 2 +
           (long)iVar44 * (long)iVar14);
    iVar44 = *(int *)(param_1 + 0x198);
    if (*(char *)(param_1 + 0x408) != '\0') goto LAB_00dee81c;
LAB_00dee45c:
    lVar55 = *(long *)(param_1 + 0x130);
    lVar67 = *(long *)(param_1 + 0x138);
    lVar32 = 0;
    uVar19 = 0;
    uVar35 = 0;
    lVar40 = *(long *)(param_1 + 0x168);
    lVar47 = *(long *)(param_1 + 0x110);
    lVar58 = 0;
    do {
      uVar15 = *(int *)(param_1 + lVar32 * 0x28 + 0xbc) + (int)uVar35;
      uVar35 = (ulong)uVar15;
      lVar23 = lVar58;
      if (uVar19 < uVar15) {
        uVar25 = (ulong)uVar19;
        lVar54 = uVar35 - uVar25;
        pbVar64 = (byte *)(lVar67 + uVar25);
        plVar57 = (long *)(lVar55 + 0x40 + uVar25 * 0x80);
        do {
          bVar29 = *pbVar64;
          if ((bVar29 >> 2 & 1) != 0) {
            lVar27 = plVar57[-8];
            lVar63 = lVar23;
            if (-1 < lVar27) {
              lVar63 = lVar23 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar23 * 8) = lVar27;
            }
            lVar27 = plVar57[-7];
            lVar23 = lVar63;
            if (-1 < lVar27) {
              lVar23 = lVar63 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar63 * 8) = lVar27;
            }
            lVar27 = plVar57[-6];
            lVar63 = lVar23;
            if (-1 < lVar27) {
              lVar63 = lVar23 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar23 * 8) = lVar27;
            }
            lVar27 = plVar57[-5];
            lVar23 = lVar63;
            if (-1 < lVar27) {
              lVar23 = lVar63 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar63 * 8) = lVar27;
            }
            bVar29 = *pbVar64;
          }
          uVar19 = bVar29 >> 2 & 0xf;
          if ((uVar19 >> 1 & 1) != 0) {
            lVar27 = plVar57[-4];
            lVar63 = lVar23;
            if (-1 < lVar27) {
              lVar63 = lVar23 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar23 * 8) = lVar27;
            }
            lVar27 = plVar57[-3];
            lVar23 = lVar63;
            if (-1 < lVar27) {
              lVar23 = lVar63 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar63 * 8) = lVar27;
            }
            lVar27 = plVar57[-2];
            lVar63 = lVar23;
            if (-1 < lVar27) {
              lVar63 = lVar23 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar23 * 8) = lVar27;
            }
            lVar27 = plVar57[-1];
            lVar23 = lVar63;
            if (-1 < lVar27) {
              lVar23 = lVar63 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar63 * 8) = lVar27;
            }
            uVar19 = *pbVar64 >> 2 & 0xf;
          }
          if ((uVar19 >> 2 & 1) != 0) {
            lVar27 = *plVar57;
            lVar63 = lVar23;
            if (-1 < lVar27) {
              lVar63 = lVar23 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar23 * 8) = lVar27;
            }
            lVar27 = plVar57[1];
            lVar23 = lVar63;
            if (-1 < lVar27) {
              lVar23 = lVar63 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar63 * 8) = lVar27;
            }
            lVar27 = plVar57[2];
            lVar63 = lVar23;
            if (-1 < lVar27) {
              lVar63 = lVar23 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar23 * 8) = lVar27;
            }
            lVar27 = plVar57[3];
            lVar23 = lVar63;
            if (-1 < lVar27) {
              lVar23 = lVar63 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar63 * 8) = lVar27;
            }
            uVar19 = *pbVar64 >> 2 & 0xf;
          }
          if (uVar19 >> 3 != 0) {
            lVar27 = plVar57[4];
            lVar63 = lVar23;
            if (-1 < lVar27) {
              lVar63 = lVar23 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar23 * 8) = lVar27;
            }
            lVar27 = plVar57[5];
            lVar23 = lVar63;
            if (-1 < lVar27) {
              lVar23 = lVar63 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar63 * 8) = lVar27;
            }
            lVar27 = plVar57[6];
            lVar63 = lVar23;
            if (-1 < lVar27) {
              lVar63 = lVar23 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar23 * 8) = lVar27;
            }
            lVar27 = plVar57[7];
            lVar23 = lVar63;
            if (-1 < lVar27) {
              lVar23 = lVar63 + 1;
              *(uint *)(lVar47 + lVar27 * 4) = *(uint *)(lVar47 + lVar27 * 4) & 0xfffff9ff | 0x101;
              *(long *)(lVar40 + lVar63 * 8) = lVar27;
            }
          }
          lVar54 = lVar54 + -1;
          pbVar64 = pbVar64 + 1;
          plVar57 = plVar57 + 0x10;
          uVar19 = uVar15;
        } while (lVar54 != 0);
      }
      lVar58 = lVar32 * 8;
      lVar32 = lVar32 + 1;
      *(long *)(param_1 + lVar58 + 0x170) = lVar23 - lVar58;
      lVar58 = lVar23;
    } while (lVar32 != 3);
    *(long *)(param_1 + 0x188) = lVar23;
    *(undefined8 *)(param_1 + 0x3f0) = *(undefined8 *)(param_1 + 0x3f8);
  }
  puVar36 = (uint *)(param_1 + 0xe130);
  if (0 < lVar23) {
    lVar32 = *(long *)(param_1 + 0x110);
    plVar57 = *(long **)(param_1 + 0x168);
    if (*(char *)(param_1 + 0x40a) == '\x01') {
      do {
        lVar23 = lVar23 + -1;
        *(uint *)(lVar32 + *plVar57 * 4) = *(uint *)(lVar32 + *plVar57 * 4) & 0xffffff03;
        plVar57 = plVar57 + 1;
      } while (lVar23 != 0);
    }
    else {
      uVar19 = oc_pack_read1(lVar51);
      lVar55 = 0;
      iVar14 = 0;
LAB_00def42c:
      do {
        iVar18 = FUN_00df2494(lVar51);
        lVar67 = lVar55;
        iVar20 = iVar18;
        do {
          lVar55 = lVar67 + 1;
          iVar14 = iVar14 + uVar19;
          *(uint *)(lVar32 + plVar57[lVar67] * 4) =
               *(uint *)(lVar32 + plVar57[lVar67] * 4) & 0xffffff03 | (uVar19 & 0x3f) << 2;
          if (iVar20 < 2) break;
          iVar20 = iVar20 + -1;
          lVar67 = lVar55;
        } while (lVar55 < lVar23);
        if ((iVar18 < 0x1021) || (lVar23 <= lVar55)) {
          uVar19 = (uint)(uVar19 == 0);
          if (lVar23 <= lVar55) break;
          goto LAB_00def42c;
        }
        uVar19 = oc_pack_read1(lVar51);
      } while (lVar55 < lVar23);
      if ((*(char *)(param_1 + 0x40a) == '\x03') && (0 < iVar14)) {
        lVar55 = 0;
        do {
          lVar67 = lVar55;
          lVar55 = lVar67 + 1;
        } while ((*(uint *)(lVar32 + plVar57[lVar67] * 4) & 0xfc) == 0);
        uVar19 = oc_pack_read1(lVar51);
        iVar14 = FUN_00df2494(lVar51);
joined_r0x00def4e4:
        if (lVar67 < lVar23) {
LAB_00def510:
          bVar12 = true;
          iVar20 = iVar14;
          do {
            uVar15 = *(uint *)(lVar32 + plVar57[lVar67] * 4);
            if ((uVar15 & 0xfc) != 0) {
              if (iVar20 < 1) goto LAB_00def560;
              *(uint *)(lVar32 + plVar57[lVar67] * 4) =
                   uVar15 & 0xffffff00 | uVar15 & 3 | (uVar15 + uVar19 * 4 >> 2 & 0x3f) << 2;
              iVar20 = iVar20 + -1;
            }
            lVar67 = lVar67 + 1;
            bVar12 = lVar67 < lVar23;
            lVar55 = lVar23;
            if (lVar23 == lVar67) goto LAB_00def4f4;
          } while( true );
        }
      }
    }
  }
LAB_00def590:
  lVar23 = 0;
  puVar42 = auStack_13b0 + 0x1f;
  do {
    uVar35 = *(ulong *)(param_1 + 0x170 + lVar23);
    lVar23 = lVar23 + 8;
    puVar42[-0x20] = uVar35;
    puVar42[-0x1f] = uVar35;
    puVar42[-0x1e] = uVar35;
    puVar42[-0x1d] = uVar35;
    puVar42[-0x1c] = uVar35;
    puVar42[-0x1b] = uVar35;
    puVar42[-0x1a] = uVar35;
    puVar42[-0x19] = uVar35;
    puVar42[-0x18] = uVar35;
    puVar42[-0x17] = uVar35;
    puVar42[-0x16] = uVar35;
    puVar42[-0x15] = uVar35;
    puVar42[-0x14] = uVar35;
    puVar42[-0x13] = uVar35;
    puVar42[-0x12] = uVar35;
    puVar42[-0x11] = uVar35;
    puVar42[-0x10] = uVar35;
    puVar42[-0xf] = uVar35;
    puVar42[-0xe] = uVar35;
    puVar42[-0xd] = uVar35;
    puVar42[-0xc] = uVar35;
    puVar42[-0xb] = uVar35;
    puVar42[-10] = uVar35;
    puVar42[-9] = uVar35;
    puVar42[-8] = uVar35;
    puVar42[-7] = uVar35;
    puVar42[-6] = uVar35;
    puVar42[-5] = uVar35;
    puVar42[-4] = uVar35;
    puVar42[-3] = uVar35;
    puVar42[-2] = uVar35;
    puVar42[-1] = uVar35;
    *puVar42 = uVar35;
    puVar42[1] = uVar35;
    puVar42[2] = uVar35;
    puVar42[3] = uVar35;
    puVar42[4] = uVar35;
    puVar42[5] = uVar35;
    puVar42[6] = uVar35;
    puVar42[7] = uVar35;
    puVar42[8] = uVar35;
    puVar42[9] = uVar35;
    puVar42[10] = uVar35;
    puVar42[0xb] = uVar35;
    puVar42[0xc] = uVar35;
    puVar42[0xd] = uVar35;
    puVar42[0xe] = uVar35;
    puVar42[0xf] = uVar35;
    puVar42[0x10] = uVar35;
    puVar42[0x11] = uVar35;
    puVar42[0x12] = uVar35;
    puVar42[0x13] = uVar35;
    puVar42[0x14] = uVar35;
    puVar42[0x15] = uVar35;
    puVar42[0x16] = uVar35;
    puVar42[0x17] = uVar35;
    puVar42[0x18] = uVar35;
    puVar42[0x19] = uVar35;
    puVar42[0x1a] = uVar35;
    puVar42[0x1b] = uVar35;
    puVar42[0x1c] = uVar35;
    puVar42[0x1d] = uVar35;
    puVar42[0x1e] = uVar35;
    puVar42[0x1f] = uVar35;
    puVar42 = puVar42 + 0x40;
  } while (lVar23 != 0x18);
  local_1400 = oc_pack_read(lVar51,4);
  local_13fc = oc_pack_read(lVar51,4);
  lVar55 = 0;
  lVar23 = 0;
  uVar35 = 0;
  lVar32 = 0;
  lVar58 = *(long *)(param_1 + 0xdef8);
  lVar40 = *(long *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0xd8f8) = 0;
  lVar47 = *(long *)(param_1 + 0x168);
  lVar67 = 0;
  do {
    lVar54 = param_1 + lVar67 * 0x200;
    lStack_278 = 0;
    local_280 = 0;
    lStack_268 = 0;
    local_270 = 0;
    lVar55 = *(long *)(param_1 + lVar67 * 8 + 0x170) + lVar55;
    lStack_258 = 0;
    local_260 = 0;
    lStack_248 = 0;
    local_250 = 0;
    lStack_238 = 0;
    local_240 = 0;
    lStack_228 = 0;
    local_230 = 0;
    *(ulong *)(lVar54 + 0xd8f8) = uVar35;
    lStack_218 = 0;
    local_220 = 0;
    lStack_208 = 0;
    local_210 = 0;
    lStack_1f8 = 0;
    local_200 = 0;
    lStack_1e8 = 0;
    local_1f0 = 0;
    *(long *)(lVar54 + 0xd2f8) = lVar32;
    lStack_1d8 = 0;
    local_1e0 = 0;
    lStack_1c8 = 0;
    local_1d0 = 0;
    lStack_1b8 = 0;
    local_1c0 = 0;
    lStack_1a8 = 0;
    local_1b0 = 0;
    lStack_198 = 0;
    local_1a0 = 0;
    local_188 = 0;
    local_190 = 0;
    lStack_178 = 0;
    local_180 = 0;
    local_168 = 0;
    local_170 = 0;
    lStack_158 = 0;
    local_160 = 0;
    local_148 = 0;
    local_150 = 0;
    lStack_138 = 0;
    local_140 = 0;
    local_128 = 0;
    local_130 = 0;
    lStack_118 = 0;
    local_120 = 0;
    local_108 = 0;
    local_110 = 0;
    lStack_f8 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_f0 = 0;
    lStack_d8 = 0;
    local_e0 = 0;
    lStack_c8 = 0;
    local_d0 = 0;
    lStack_b8 = 0;
    local_c0 = 0;
    lStack_a8 = 0;
    local_b0 = 0;
    uVar25 = lVar55 - lVar23;
    if ((long)uVar35 <= lVar55 - lVar23) {
      uVar25 = uVar35;
    }
    lStack_98 = 0;
    local_a0 = 0;
    lStack_88 = 0;
    local_90 = 0;
    if ((long)uVar25 < 1) {
      if (lVar23 < lVar55) goto LAB_00defab8;
LAB_00defc48:
      local_90 = 0;
      lStack_88 = 0;
      uVar35 = uVar35 - uVar25;
    }
    else {
      uVar33 = uVar25 + 1;
      do {
        lVar54 = lVar23 * 8;
        lVar23 = lVar23 + 1;
        uVar33 = uVar33 - 1;
        lVar54 = *(long *)(lVar47 + lVar54) * 4;
        *(uint *)(lVar40 + lVar54) = (uint)*(ushort *)(lVar40 + lVar54);
      } while (1 < uVar33);
      if (lVar55 <= lVar23) goto LAB_00defc48;
LAB_00defab8:
      iVar14 = (&local_1400)[lVar67 + 1U >> 1 & 0x7fffffff];
      lVar54 = lVar32;
      do {
        uVar19 = oc_huff_token_decode(lVar51,*(undefined8 *)(param_1 + (long)iVar14 * 8 + 0xd078));
        lVar32 = lVar54 + 1;
        lVar63 = (long)(int)uVar19;
        *(char *)(lVar58 + lVar54) = (char)uVar19;
        if (uVar19 < 0xf) {
          iVar20 = oc_pack_read(lVar51,(&DAT_0054bac7)[lVar63]);
          *(char *)(lVar58 + lVar32) = (char)iVar20;
          lVar32 = lVar54 + 2;
          if (uVar19 == 0) {
            lVar32 = lVar54 + 3;
            *(char *)(lVar58 + lVar54 + 2) = (char)((uint)iVar20 >> 8);
          }
          iVar18 = -0xd;
          if (1 < uVar19) {
            iVar18 = 0;
          }
          iVar71 = 0x15;
          if (0xb < uVar19) {
            iVar71 = 0;
          }
          uVar19 = *(int *)(&DAT_0054bad8 + lVar63 * 4) +
                   (iVar20 << (ulong)(iVar18 + iVar71 & 0x1f));
          uVar35 = 0x7fffffffffffffff;
          if (uVar19 != 0) {
            uVar35 = (ulong)(uVar19 >> 8 & 0xfff);
          }
          if (uVar35 != 0) goto LAB_00defbf0;
LAB_00defad4:
          uVar35 = 0;
          (&local_280)[uVar19 & 0xff] = (&local_280)[uVar19 & 0xff] + 1;
          lVar54 = lVar23 * 8;
          lVar23 = lVar23 + 1;
          sVar8 = (short)((ushort)(uVar19 >> 0x10) ^ (ushort)(-(uVar19 & 0x100000) >> 0x10)) >> 5;
          if ((uVar19 & 0xff) != 0) {
            sVar8 = 0;
          }
          *(short *)(lVar40 + *(long *)(lVar47 + lVar54) * 4 + 2) = sVar8;
        }
        else {
          uVar19 = *(uint *)(&DAT_0054bad8 + lVar63 * 4);
          uVar35 = 0x7fffffffffffffff;
          if (uVar19 != 0) {
            uVar35 = (ulong)(uVar19 >> 8 & 0xfff);
          }
          if (uVar35 == 0) goto LAB_00defad4;
LAB_00defbf0:
          uVar37 = lVar55 - lVar23;
          uVar33 = uVar37;
          if ((long)uVar35 <= (long)uVar37) {
            uVar33 = uVar35;
          }
          uVar25 = uVar33 + uVar25;
          uVar35 = uVar35 - uVar33;
          if (0 < (long)uVar37) {
            lVar54 = uVar33 + 1;
            do {
              lVar63 = lVar23 * 8;
              lVar23 = lVar23 + 1;
              lVar54 = lVar54 + -1;
              lVar63 = *(long *)(lVar47 + lVar63) * 4;
              *(uint *)(lVar40 + lVar63) = (uint)*(ushort *)(lVar40 + lVar63);
            } while (1 < lVar54);
          }
        }
        lVar54 = lVar32;
      } while (lVar23 < lVar55);
    }
    local_1420 = lVar67 + 1;
    lStack_88 = uVar25 + lStack_88;
    local_90 = lStack_88 + local_90;
    lStack_98 = lStack_98 + local_90;
    local_a0 = local_a0 + lStack_98;
    lStack_a8 = lStack_a8 + local_a0;
    local_b0 = local_b0 + lStack_a8;
    lStack_b8 = lStack_b8 + local_b0;
    local_c0 = local_c0 + lStack_b8;
    lStack_c8 = lStack_c8 + local_c0;
    local_d0 = local_d0 + lStack_c8;
    lStack_d8 = lStack_d8 + local_d0;
    local_e0 = local_e0 + lStack_d8;
    local_e8 = local_e8 + local_e0;
    local_f0 = local_f0 + local_e8;
    lStack_f8 = lStack_f8 + local_f0;
    local_100 = local_100 + lStack_f8;
    local_108 = local_108 + local_100;
    local_110 = local_110 + local_108;
    lStack_118 = lStack_118 + local_110;
    local_120 = local_120 + lStack_118;
    local_128 = local_128 + local_120;
    local_130 = local_130 + local_128;
    lStack_138 = lStack_138 + local_130;
    local_140 = local_140 + lStack_138;
    local_148 = local_148 + local_140;
    local_150 = local_150 + local_148;
    lStack_158 = lStack_158 + local_150;
    local_160 = local_160 + lStack_158;
    local_168 = local_168 + local_160;
    local_170 = local_170 + local_168;
    lStack_178 = lStack_178 + local_170;
    local_180 = local_180 + lStack_178;
    local_188 = local_188 + local_180;
    local_190 = local_190 + local_188;
    lStack_198 = lStack_198 + local_190;
    local_1a0 = local_1a0 + lStack_198;
    lStack_1a8 = lStack_1a8 + local_1a0;
    local_1b0 = local_1b0 + lStack_1a8;
    lStack_1b8 = lStack_1b8 + local_1b0;
    local_1c0 = local_1c0 + lStack_1b8;
    local_1d0 = local_1d0 + lStack_1c8 + local_1c0;
    lStack_1c8 = lStack_1c8 + local_1c0;
    lStack_1d8 = lStack_1d8 + local_1d0;
    local_1e0 = local_1e0 + lStack_1d8;
    lStack_1e8 = lStack_1e8 + local_1e0;
    local_1f0 = local_1f0 + lStack_1e8;
    lStack_1f8 = lStack_1f8 + local_1f0;
    local_200 = local_200 + lStack_1f8;
    lStack_208 = lStack_208 + local_200;
    local_210 = local_210 + lStack_208;
    lStack_218 = lStack_218 + local_210;
    local_220 = local_220 + lStack_218;
    lStack_228 = lStack_228 + local_220;
    local_230 = local_230 + lStack_228;
    lStack_238 = lStack_238 + local_230;
    local_240 = local_240 + lStack_238;
    lStack_248 = lStack_248 + local_240;
    local_250 = local_250 + lStack_248;
    lStack_258 = lStack_258 + local_250;
    lVar54 = local_260 + lStack_258;
    local_260 = lVar54;
    auStack_13b0[lVar67 * 0x40 + 0x3c] = auStack_13b0[lVar67 * 0x40 + 0x3c] - lStack_98;
    auStack_13b0[lVar67 * 0x40 + 0x3b] = auStack_13b0[lVar67 * 0x40 + 0x3b] - local_a0;
    auStack_13b0[lVar67 * 0x40 + 0x3e] = auStack_13b0[lVar67 * 0x40 + 0x3e] - lStack_88;
    auStack_13b0[lVar67 * 0x40 + 0x3d] = auStack_13b0[lVar67 * 0x40 + 0x3d] - local_90;
    auStack_13b0[lVar67 * 0x40 + 0x38] = auStack_13b0[lVar67 * 0x40 + 0x38] - lStack_b8;
    auStack_13b0[lVar67 * 0x40 + 0x37] = auStack_13b0[lVar67 * 0x40 + 0x37] - local_c0;
    auStack_13b0[lVar67 * 0x40 + 0x3a] = auStack_13b0[lVar67 * 0x40 + 0x3a] - lStack_a8;
    auStack_13b0[lVar67 * 0x40 + 0x39] = auStack_13b0[lVar67 * 0x40 + 0x39] - local_b0;
    auStack_13b0[lVar67 * 0x40 + 0x34] = auStack_13b0[lVar67 * 0x40 + 0x34] - lStack_d8;
    auStack_13b0[lVar67 * 0x40 + 0x33] = auStack_13b0[lVar67 * 0x40 + 0x33] - local_e0;
    auStack_13b0[lVar67 * 0x40 + 0x36] = auStack_13b0[lVar67 * 0x40 + 0x36] - lStack_c8;
    auStack_13b0[lVar67 * 0x40 + 0x35] = auStack_13b0[lVar67 * 0x40 + 0x35] - local_d0;
    auStack_13b0[lVar67 * 0x40 + 0x30] = auStack_13b0[lVar67 * 0x40 + 0x30] - lStack_f8;
    auStack_13b0[lVar67 * 0x40 + 0x2f] = auStack_13b0[lVar67 * 0x40 + 0x2f] - local_100;
    auStack_13b0[lVar67 * 0x40 + 0x32] = auStack_13b0[lVar67 * 0x40 + 0x32] - local_e8;
    auStack_13b0[lVar67 * 0x40 + 0x31] = auStack_13b0[lVar67 * 0x40 + 0x31] - local_f0;
    auStack_13b0[lVar67 * 0x40 + 0x2c] = auStack_13b0[lVar67 * 0x40 + 0x2c] - lStack_118;
    auStack_13b0[lVar67 * 0x40 + 0x2b] = auStack_13b0[lVar67 * 0x40 + 0x2b] - local_120;
    auStack_13b0[lVar67 * 0x40 + 0x2e] = auStack_13b0[lVar67 * 0x40 + 0x2e] - local_108;
    auStack_13b0[lVar67 * 0x40 + 0x2d] = auStack_13b0[lVar67 * 0x40 + 0x2d] - local_110;
    auStack_13b0[lVar67 * 0x40 + 0x28] = auStack_13b0[lVar67 * 0x40 + 0x28] - lStack_138;
    auStack_13b0[lVar67 * 0x40 + 0x27] = auStack_13b0[lVar67 * 0x40 + 0x27] - local_140;
    auStack_13b0[lVar67 * 0x40 + 0x2a] = auStack_13b0[lVar67 * 0x40 + 0x2a] - local_128;
    auStack_13b0[lVar67 * 0x40 + 0x29] = auStack_13b0[lVar67 * 0x40 + 0x29] - local_130;
    auStack_13b0[lVar67 * 0x40 + 0x24] = auStack_13b0[lVar67 * 0x40 + 0x24] - lStack_158;
    auStack_13b0[lVar67 * 0x40 + 0x23] = auStack_13b0[lVar67 * 0x40 + 0x23] - local_160;
    auStack_13b0[lVar67 * 0x40 + 0x26] = auStack_13b0[lVar67 * 0x40 + 0x26] - local_148;
    auStack_13b0[lVar67 * 0x40 + 0x25] = auStack_13b0[lVar67 * 0x40 + 0x25] - local_150;
    auStack_13b0[lVar67 * 0x40 + 0x20] = auStack_13b0[lVar67 * 0x40 + 0x20] - lStack_178;
    auStack_13b0[lVar67 * 0x40 + 0x1f] = auStack_13b0[lVar67 * 0x40 + 0x1f] - local_180;
    auStack_13b0[lVar67 * 0x40 + 0x22] = auStack_13b0[lVar67 * 0x40 + 0x22] - local_168;
    auStack_13b0[lVar67 * 0x40 + 0x21] = auStack_13b0[lVar67 * 0x40 + 0x21] - local_170;
    auStack_13b0[lVar67 * 0x40 + 0x1c] = auStack_13b0[lVar67 * 0x40 + 0x1c] - lStack_198;
    auStack_13b0[lVar67 * 0x40 + 0x1b] = auStack_13b0[lVar67 * 0x40 + 0x1b] - local_1a0;
    auStack_13b0[lVar67 * 0x40 + 0x1e] = auStack_13b0[lVar67 * 0x40 + 0x1e] - local_188;
    auStack_13b0[lVar67 * 0x40 + 0x1d] = auStack_13b0[lVar67 * 0x40 + 0x1d] - local_190;
    auStack_13b0[lVar67 * 0x40 + 0x18] = auStack_13b0[lVar67 * 0x40 + 0x18] - lStack_1b8;
    auStack_13b0[lVar67 * 0x40 + 0x17] = auStack_13b0[lVar67 * 0x40 + 0x17] - local_1c0;
    auStack_13b0[lVar67 * 0x40 + 0x1a] = auStack_13b0[lVar67 * 0x40 + 0x1a] - lStack_1a8;
    auStack_13b0[lVar67 * 0x40 + 0x19] = auStack_13b0[lVar67 * 0x40 + 0x19] - local_1b0;
    auStack_13b0[lVar67 * 0x40 + 0x14] = auStack_13b0[lVar67 * 0x40 + 0x14] - lStack_1d8;
    auStack_13b0[lVar67 * 0x40 + 0x13] = auStack_13b0[lVar67 * 0x40 + 0x13] - local_1e0;
    auStack_13b0[lVar67 * 0x40 + 0x16] = auStack_13b0[lVar67 * 0x40 + 0x16] - lStack_1c8;
    auStack_13b0[lVar67 * 0x40 + 0x15] = auStack_13b0[lVar67 * 0x40 + 0x15] - local_1d0;
    auStack_13b0[lVar67 * 0x40 + 0x10] = auStack_13b0[lVar67 * 0x40 + 0x10] - lStack_1f8;
    auStack_13b0[lVar67 * 0x40 + 0xf] = auStack_13b0[lVar67 * 0x40 + 0xf] - local_200;
    auStack_13b0[lVar67 * 0x40 + 0x12] = auStack_13b0[lVar67 * 0x40 + 0x12] - lStack_1e8;
    auStack_13b0[lVar67 * 0x40 + 0x11] = auStack_13b0[lVar67 * 0x40 + 0x11] - local_1f0;
    lStack_268 = lStack_268 + lVar54;
    auStack_13b0[lVar67 * 0x40 + 0xc] = auStack_13b0[lVar67 * 0x40 + 0xc] - lStack_218;
    auStack_13b0[lVar67 * 0x40 + 0xb] = auStack_13b0[lVar67 * 0x40 + 0xb] - local_220;
    auStack_13b0[lVar67 * 0x40 + 0xe] = auStack_13b0[lVar67 * 0x40 + 0xe] - lStack_208;
    auStack_13b0[lVar67 * 0x40 + 0xd] = auStack_13b0[lVar67 * 0x40 + 0xd] - local_210;
    local_270 = local_270 + lStack_268;
    lStack_278 = lStack_278 + local_270;
    auStack_13b0[lVar67 * 0x40 + 8] = auStack_13b0[lVar67 * 0x40 + 8] - lStack_238;
    auStack_13b0[lVar67 * 0x40 + 7] = auStack_13b0[lVar67 * 0x40 + 7] - local_240;
    auStack_13b0[lVar67 * 0x40 + 10] = auStack_13b0[lVar67 * 0x40 + 10] - lStack_228;
    auStack_13b0[lVar67 * 0x40 + 9] = auStack_13b0[lVar67 * 0x40 + 9] - local_230;
    local_280 = local_280 + lStack_278;
    auStack_13b0[lVar67 * 0x40 + 4] = auStack_13b0[lVar67 * 0x40 + 4] - lStack_258;
    auStack_13b0[lVar67 * 0x40 + 3] = auStack_13b0[lVar67 * 0x40 + 3] - local_260;
    auStack_13b0[lVar67 * 0x40 + 6] = auStack_13b0[lVar67 * 0x40 + 6] - lStack_248;
    auStack_13b0[lVar67 * 0x40 + 5] = auStack_13b0[lVar67 * 0x40 + 5] - local_250;
    uVar37 = auStack_13b0[lVar67 * 0x40 + -1];
    uVar33 = auStack_13b0[lVar67 * 0x40 + 2];
    uVar25 = auStack_13b0[lVar67 * 0x40 + 1];
    auStack_13b0[lVar67 * 0x40] = auStack_13b0[lVar67 * 0x40] - lStack_278;
    auStack_13b0[lVar67 * 0x40 + -1] = uVar37 - local_280;
    auStack_13b0[lVar67 * 0x40 + 2] = uVar33 - lStack_268;
    auStack_13b0[lVar67 * 0x40 + 1] = uVar25 - local_270;
    lVar67 = local_1420;
  } while (local_1420 != 3);
  *(int *)(param_1 + 0xdf08) = (int)lVar32;
  iVar14 = oc_pack_read(lVar51,4);
  iVar20 = oc_pack_read(lVar51,4);
  lVar32 = (long)iVar14;
  lVar55 = (long)iVar20;
  lVar23 = 1;
  uVar19 = 1;
  do {
    lVar32 = lVar32 + 0x10;
    lVar55 = lVar55 + 0x10;
    uVar15 = (uint)(byte)(&UNK_0054bac2)[lVar23];
    if (uVar19 < uVar15) {
      uVar25 = (ulong)uVar19;
      uVar33 = (ulong)*(uint *)(param_1 + 0xdf08);
      puVar39 = (undefined8 *)(param_1 + 0xd078 + lVar55 * 8);
      puVar42 = auStack_13b0 + ((ulong)uVar19 - 1);
      do {
        lVar40 = uVar25 * 8;
        lVar47 = *(long *)(param_1 + 0xdef8);
        uVar33 = (ulong)(int)uVar33;
        lVar67 = 0;
        *(ulong *)(param_1 + lVar40 + 0xd8f8) = uVar35;
        *(ulong *)(param_1 + lVar40 + 0xd2f8) = uVar33;
        uVar61 = auStack_13b0[uVar25 - 1];
        lVar58 = 0x3f00000000 - (uVar25 << 0x20);
        lStack_278 = 0;
        local_280 = 0;
        lStack_268 = 0;
        local_270 = 0;
        lStack_258 = 0;
        local_260 = 0;
        lStack_248 = 0;
        local_250 = 0;
        uVar37 = lVar58 >> 0x20;
        lStack_238 = 0;
        local_240 = 0;
        lStack_228 = 0;
        local_230 = 0;
        lStack_218 = 0;
        local_220 = 0;
        lStack_208 = 0;
        local_210 = 0;
        lStack_1f8 = 0;
        local_200 = 0;
        lStack_1e8 = 0;
        local_1f0 = 0;
        lStack_1d8 = 0;
        local_1e0 = 0;
        lStack_1c8 = 0;
        local_1d0 = 0;
        lStack_1b8 = 0;
        local_1c0 = 0;
        lStack_1a8 = 0;
        local_1b0 = 0;
        lStack_198 = 0;
        local_1a0 = 0;
        local_188 = 0;
        local_190 = 0;
        lStack_178 = 0;
        local_180 = 0;
        local_168 = 0;
        local_170 = 0;
        lStack_158 = 0;
        local_160 = 0;
        local_148 = 0;
        local_150 = 0;
        lStack_138 = 0;
        local_140 = 0;
        local_128 = 0;
        local_130 = 0;
        lStack_118 = 0;
        local_120 = 0;
        local_108 = 0;
        local_110 = 0;
        lStack_f8 = 0;
        local_100 = 0;
        local_e8 = 0;
        local_f0 = 0;
        lStack_d8 = 0;
        local_e0 = 0;
        lStack_c8 = 0;
        local_d0 = 0;
        lStack_b8 = 0;
        local_c0 = 0;
        lStack_a8 = 0;
        local_b0 = 0;
        lStack_98 = 0;
        local_a0 = 0;
        lStack_88 = 0;
        local_90 = 0;
        uVar69 = uVar35;
        if (uVar35 < uVar61) {
          do {
            while( true ) {
              uVar38 = uVar35;
              lVar54 = lVar67;
              uVar48 = uVar69;
              uVar19 = oc_huff_token_decode(lVar51,*(undefined8 *)(param_1 + 0xd078 + lVar32 * 8));
              uVar50 = uVar33 + 1;
              lVar67 = (long)(int)uVar19;
              *(char *)(lVar47 + uVar33) = (char)uVar19;
              if (0xe < uVar19) break;
              iVar14 = oc_pack_read(lVar51,(&DAT_0054bac7)[lVar67]);
              *(char *)(lVar47 + uVar50) = (char)iVar14;
              uVar50 = uVar33 + 2;
              if (uVar19 == 0) {
                uVar50 = uVar33 + 3;
                *(char *)(lVar47 + uVar33 + 2) = (char)((uint)iVar14 >> 8);
              }
              iVar20 = -0xd;
              if (1 < uVar19) {
                iVar20 = 0;
              }
              iVar18 = 0x15;
              if (0xb < uVar19) {
                iVar18 = 0;
              }
              uVar19 = *(int *)(&DAT_0054bad8 + lVar67 * 4) +
                       (iVar14 << (ulong)(iVar20 + iVar18 & 0x1f));
              uVar35 = 0x7fffffffffffffff;
              if (uVar19 != 0) {
                uVar35 = (ulong)(uVar19 >> 8 & 0xfff);
              }
              if (uVar35 != 0) goto LAB_00defe28;
LAB_00defedc:
              uVar48 = uVar48 + 1;
              (&local_280)[uVar19 & 0xff] = (&local_280)[uVar19 & 0xff] + 1;
              uVar33 = uVar50;
              uVar69 = uVar48 + uVar35;
              lVar67 = lVar54 + uVar38;
              if (uVar61 <= uVar48 + uVar35) goto LAB_00deff10;
            }
            uVar19 = *(uint *)(&DAT_0054bad8 + lVar67 * 4);
            uVar35 = 0x7fffffffffffffff;
            if (uVar19 != 0) {
              uVar35 = (ulong)(uVar19 >> 8 & 0xfff);
            }
            if (uVar35 == 0) goto LAB_00defedc;
LAB_00defe28:
            uVar33 = uVar50;
            uVar69 = uVar48 + uVar35;
            lVar67 = lVar54 + uVar38;
          } while (uVar48 + uVar35 < uVar61);
LAB_00deff10:
          local_1468 = local_120;
          local_1460 = local_128;
          lStack_88 = lStack_88 + lVar54 + uVar38;
          local_1458 = local_130;
          local_1450 = local_140;
          local_1448 = lStack_138;
          uVar33 = uVar50;
          lVar67 = local_148;
        }
        else {
          local_1450 = 0;
          local_1448 = 0;
          local_1460 = 0;
          local_1458 = 0;
          lStack_118 = 0;
          local_1468 = 0;
          local_110 = 0;
          local_108 = 0;
          local_100 = 0;
          lStack_f8 = 0;
          local_f0 = 0;
          local_e8 = 0;
          local_e0 = 0;
          lStack_d8 = 0;
          local_d0 = 0;
          lStack_c8 = 0;
          local_c0 = 0;
          lStack_b8 = 0;
          local_b0 = 0;
          lStack_a8 = 0;
          local_a0 = 0;
          lStack_98 = 0;
          local_90 = 0;
          uVar48 = 0;
          lStack_88 = 0;
        }
        lStack_88 = lStack_88 + (uVar61 - uVar48);
        local_90 = lStack_88 + local_90;
        lStack_98 = lStack_98 + local_90;
        local_a0 = local_a0 + lStack_98;
        lStack_a8 = lStack_a8 + local_a0;
        local_b0 = local_b0 + lStack_a8;
        lStack_b8 = lStack_b8 + local_b0;
        local_c0 = local_c0 + lStack_b8;
        lStack_c8 = lStack_c8 + local_c0;
        local_d0 = local_d0 + lStack_c8;
        lStack_d8 = lStack_d8 + local_d0;
        local_e0 = local_e0 + lStack_d8;
        local_e8 = local_e8 + local_e0;
        local_f0 = local_f0 + local_e8;
        lStack_f8 = lStack_f8 + local_f0;
        local_100 = local_100 + lStack_f8;
        local_108 = local_108 + local_100;
        local_110 = local_110 + local_108;
        lStack_118 = lStack_118 + local_110;
        local_120 = local_1468 + lStack_118;
        local_128 = local_1460 + local_120;
        local_130 = local_1458 + local_128;
        lStack_138 = local_1448 + local_130;
        local_140 = local_1450 + lStack_138;
        local_148 = lVar67 + local_140;
        uVar35 = uVar35 - (uVar61 - uVar48);
        local_150 = local_150 + local_148;
        lStack_158 = lStack_158 + local_150;
        local_160 = local_160 + lStack_158;
        local_168 = local_168 + local_160;
        local_170 = local_170 + local_168;
        lStack_178 = lStack_178 + local_170;
        local_180 = local_180 + lStack_178;
        local_188 = local_188 + local_180;
        local_190 = local_190 + local_188;
        lStack_198 = lStack_198 + local_190;
        local_1a0 = local_1a0 + lStack_198;
        lStack_1a8 = lStack_1a8 + local_1a0;
        local_1b0 = local_1b0 + lStack_1a8;
        lStack_1b8 = lStack_1b8 + local_1b0;
        local_1c0 = local_1c0 + lStack_1b8;
        lStack_1c8 = lStack_1c8 + local_1c0;
        local_1d0 = local_1d0 + lStack_1c8;
        lStack_1d8 = lStack_1d8 + local_1d0;
        local_1e0 = local_1e0 + lStack_1d8;
        lStack_1e8 = lStack_1e8 + local_1e0;
        local_1f0 = local_1f0 + lStack_1e8;
        lStack_1f8 = lStack_1f8 + local_1f0;
        local_200 = local_200 + lStack_1f8;
        lStack_208 = lStack_208 + local_200;
        local_210 = local_210 + lStack_208;
        lStack_218 = lStack_218 + local_210;
        local_220 = local_220 + lStack_218;
        lStack_228 = lStack_228 + local_220;
        local_230 = local_230 + lStack_228;
        lStack_238 = lStack_238 + local_230;
        local_240 = local_240 + lStack_238;
        lStack_248 = lStack_248 + local_240;
        local_250 = local_250 + lStack_248;
        lStack_258 = lStack_258 + local_250;
        local_260 = local_260 + lStack_258;
        lStack_268 = lStack_268 + local_260;
        local_270 = local_270 + lStack_268;
        lStack_278 = lStack_278 + local_270;
        local_280 = local_280 + lStack_278;
        uVar19 = (uint)((ulong)lVar58 >> 0x20);
        if (uVar25 < 0x40) {
          uVar69 = uVar37;
          if (-1 < (long)uVar37) {
            uVar69 = 0;
          }
          uVar69 = (uVar37 - uVar69) + 1;
          uVar61 = uVar37;
          if (3 < uVar69) {
            uVar48 = uVar37;
            if (-1 < (long)uVar37) {
              uVar48 = 0;
            }
            if (((uint)(uVar37 - uVar48) <= uVar19) && (uVar37 - uVar48 >> 0x20 == 0)) {
              uVar38 = uVar69 & 0xfffffffffffffffc;
              uVar61 = uVar37 - uVar38;
              plVar57 = &lStack_13c0 + uVar37 + uVar25;
              uVar48 = uVar37;
              uVar50 = uVar38;
              do {
                uVar46 = uVar48 & 0xffffffff;
                uVar50 = uVar50 - 4;
                uVar48 = uVar48 - 4;
                lVar58 = (&local_280)[uVar46];
                lVar67 = *(long *)(&local_288 + uVar46 * 2);
                lVar54 = (&lStack_298)[uVar46];
                plVar57[-1] = plVar57[-1] - *(long *)(&local_290 + uVar46 * 2);
                plVar57[-2] = plVar57[-2] - lVar54;
                plVar57[1] = plVar57[1] - lVar58;
                *plVar57 = *plVar57 - lVar67;
                plVar57 = plVar57 + -4;
              } while (uVar50 != 0);
              if (uVar69 == uVar38) goto LAB_00df0214;
            }
          }
          do {
            puVar42[uVar61] = puVar42[uVar61] - (&local_280)[uVar61 & 0xffffffff];
            bVar12 = 0 < (long)uVar61;
            uVar61 = uVar61 - 1;
          } while (bVar12);
        }
LAB_00df0214:
        lStack_278 = 0;
        local_280 = 0;
        lStack_268 = 0;
        local_270 = 0;
        lStack_258 = 0;
        local_260 = 0;
        lStack_248 = 0;
        local_250 = 0;
        lStack_238 = 0;
        local_240 = 0;
        lStack_228 = 0;
        local_230 = 0;
        lStack_218 = 0;
        local_220 = 0;
        lStack_208 = 0;
        local_210 = 0;
        lStack_1f8 = 0;
        local_200 = 0;
        lStack_1e8 = 0;
        local_1f0 = 0;
        *(ulong *)(param_1 + lVar40 + 0xdaf8) = uVar35;
        lStack_1d8 = 0;
        local_1e0 = 0;
        lStack_1c8 = 0;
        local_1d0 = 0;
        lStack_1b8 = 0;
        local_1c0 = 0;
        lStack_1a8 = 0;
        local_1b0 = 0;
        *(ulong *)(param_1 + lVar40 + 0xd4f8) = uVar33;
        lStack_198 = 0;
        local_1a0 = 0;
        local_188 = 0;
        local_190 = 0;
        lStack_178 = 0;
        local_180 = 0;
        local_168 = 0;
        local_170 = 0;
        lStack_158 = 0;
        local_160 = 0;
        local_148 = 0;
        local_150 = 0;
        uVar69 = auStack_13b0[uVar25 + 0x3f];
        lStack_138 = 0;
        local_140 = 0;
        local_128 = 0;
        local_130 = 0;
        lStack_118 = 0;
        local_120 = 0;
        local_108 = 0;
        local_110 = 0;
        lStack_f8 = 0;
        local_100 = 0;
        local_e8 = 0;
        local_f0 = 0;
        lStack_d8 = 0;
        local_e0 = 0;
        lStack_c8 = 0;
        local_d0 = 0;
        lStack_b8 = 0;
        local_c0 = 0;
        lStack_a8 = 0;
        local_b0 = 0;
        lStack_98 = 0;
        local_a0 = 0;
        lStack_88 = 0;
        local_90 = 0;
        if (uVar35 < uVar69) {
          uVar48 = uVar33;
          lVar67 = 0;
          uVar50 = uVar35;
          do {
            while( true ) {
              uVar61 = uVar50;
              uVar38 = uVar35;
              lVar58 = lVar67;
              uVar21 = oc_huff_token_decode(lVar51,*puVar39);
              uVar33 = uVar48 + 1;
              lVar67 = (long)(int)uVar21;
              *(char *)(lVar47 + uVar48) = (char)uVar21;
              if (0xe < uVar21) break;
              iVar14 = oc_pack_read(lVar51,(&DAT_0054bac7)[lVar67]);
              *(char *)(lVar47 + uVar33) = (char)iVar14;
              uVar33 = uVar48 + 2;
              if (uVar21 == 0) {
                uVar33 = uVar48 + 3;
                *(char *)(lVar47 + uVar48 + 2) = (char)((uint)iVar14 >> 8);
              }
              iVar20 = -0xd;
              if (1 < uVar21) {
                iVar20 = 0;
              }
              iVar18 = 0x15;
              if (0xb < uVar21) {
                iVar18 = 0;
              }
              uVar21 = *(int *)(&DAT_0054bad8 + lVar67 * 4) +
                       (iVar14 << (ulong)(iVar20 + iVar18 & 0x1f));
              uVar35 = 0x7fffffffffffffff;
              if (uVar21 != 0) {
                uVar35 = (ulong)(uVar21 >> 8 & 0xfff);
              }
              if (uVar35 != 0) goto LAB_00df02b8;
LAB_00df0368:
              uVar61 = uVar61 + 1;
              (&local_280)[uVar21 & 0xff] = (&local_280)[uVar21 & 0xff] + 1;
              uVar48 = uVar33;
              lVar67 = lVar58 + uVar38;
              uVar50 = uVar61 + uVar35;
              if (uVar69 <= uVar61 + uVar35) goto LAB_00df039c;
            }
            uVar21 = *(uint *)(&DAT_0054bad8 + lVar67 * 4);
            uVar35 = 0x7fffffffffffffff;
            if (uVar21 != 0) {
              uVar35 = (ulong)(uVar21 >> 8 & 0xfff);
            }
            if (uVar35 == 0) goto LAB_00df0368;
LAB_00df02b8:
            uVar48 = uVar33;
            lVar67 = lVar58 + uVar38;
            uVar50 = uVar61 + uVar35;
          } while (uVar61 + uVar35 < uVar69);
LAB_00df039c:
          local_1448 = local_e0;
          local_1498 = local_e8;
          local_1490 = lStack_f8;
          local_14a0 = local_100;
          lStack_88 = lStack_88 + lVar58 + uVar38;
          local_1488 = local_108;
          local_1480 = lStack_118;
          local_1478 = local_128;
          local_1470 = lStack_138;
          local_1468 = local_148;
          local_1460 = lStack_158;
          local_1458 = local_168;
          local_1450 = lStack_178;
        }
        else {
          local_180 = 0;
          local_1458 = 0;
          local_1450 = 0;
          local_170 = 0;
          local_160 = 0;
          local_1468 = 0;
          local_1460 = 0;
          local_150 = 0;
          local_140 = 0;
          local_1478 = 0;
          local_1470 = 0;
          local_130 = 0;
          local_120 = 0;
          local_1488 = 0;
          local_1480 = 0;
          local_110 = 0;
          local_14a0 = 0;
          local_1498 = 0;
          local_f0 = 0;
          local_1490 = 0;
          lStack_d8 = 0;
          local_1448 = 0;
          local_d0 = 0;
          lStack_c8 = 0;
          local_c0 = 0;
          lStack_b8 = 0;
          local_b0 = 0;
          lStack_a8 = 0;
          local_a0 = 0;
          lStack_98 = 0;
          local_90 = 0;
          uVar61 = 0;
          lStack_88 = 0;
        }
        lStack_88 = lStack_88 + (uVar69 - uVar61);
        local_90 = lStack_88 + local_90;
        uVar35 = uVar35 - (uVar69 - uVar61);
        lStack_98 = lStack_98 + local_90;
        local_a0 = local_a0 + lStack_98;
        lStack_a8 = lStack_a8 + local_a0;
        local_b0 = local_b0 + lStack_a8;
        lStack_b8 = lStack_b8 + local_b0;
        local_c0 = local_c0 + lStack_b8;
        lStack_c8 = lStack_c8 + local_c0;
        local_d0 = local_d0 + lStack_c8;
        lStack_d8 = lStack_d8 + local_d0;
        local_e0 = local_1448 + lStack_d8;
        local_e8 = local_1498 + local_e0;
        local_f0 = local_f0 + local_e8;
        lStack_f8 = local_1490 + local_f0;
        local_100 = local_14a0 + lStack_f8;
        local_108 = local_1488 + local_100;
        local_110 = local_110 + local_108;
        lStack_118 = local_1480 + local_110;
        local_120 = local_120 + lStack_118;
        local_128 = local_1478 + local_120;
        local_130 = local_130 + local_128;
        lStack_138 = local_1470 + local_130;
        local_140 = local_140 + lStack_138;
        local_148 = local_1468 + local_140;
        local_150 = local_150 + local_148;
        lStack_158 = local_1460 + local_150;
        local_160 = local_160 + lStack_158;
        local_168 = local_1458 + local_160;
        local_170 = local_170 + local_168;
        lStack_178 = local_1450 + local_170;
        local_180 = local_180 + lStack_178;
        local_188 = local_188 + local_180;
        local_190 = local_190 + local_188;
        lStack_198 = lStack_198 + local_190;
        local_1a0 = local_1a0 + lStack_198;
        lStack_1a8 = lStack_1a8 + local_1a0;
        local_1b0 = local_1b0 + lStack_1a8;
        lStack_1b8 = lStack_1b8 + local_1b0;
        local_1c0 = local_1c0 + lStack_1b8;
        lStack_1c8 = lStack_1c8 + local_1c0;
        local_1d0 = local_1d0 + lStack_1c8;
        lStack_1d8 = lStack_1d8 + local_1d0;
        local_1e0 = local_1e0 + lStack_1d8;
        lStack_1e8 = lStack_1e8 + local_1e0;
        local_1f0 = local_1f0 + lStack_1e8;
        lStack_1f8 = lStack_1f8 + local_1f0;
        local_200 = local_200 + lStack_1f8;
        lStack_208 = lStack_208 + local_200;
        local_210 = local_210 + lStack_208;
        lStack_218 = lStack_218 + local_210;
        local_220 = local_220 + lStack_218;
        lStack_228 = lStack_228 + local_220;
        local_230 = local_230 + lStack_228;
        lStack_238 = lStack_238 + local_230;
        local_240 = local_240 + lStack_238;
        lStack_248 = lStack_248 + local_240;
        local_250 = local_250 + lStack_248;
        lStack_258 = lStack_258 + local_250;
        local_260 = local_260 + lStack_258;
        lStack_268 = lStack_268 + local_260;
        local_270 = local_270 + lStack_268;
        lStack_278 = lStack_278 + local_270;
        local_280 = local_280 + lStack_278;
        if (uVar25 < 0x40) {
          uVar69 = uVar37;
          if (-1 < (long)uVar37) {
            uVar69 = 0;
          }
          uVar69 = (uVar37 - uVar69) + 1;
          uVar61 = uVar37;
          if (3 < uVar69) {
            uVar48 = uVar37;
            if (-1 < (long)uVar37) {
              uVar48 = 0;
            }
            if (((uint)(uVar37 - uVar48) <= uVar19) && (uVar37 - uVar48 >> 0x20 == 0)) {
              uVar38 = uVar69 & 0xfffffffffffffffc;
              uVar61 = uVar37 - uVar38;
              puVar45 = auStack_13b0 + uVar37 + uVar25 + 0x3e;
              uVar48 = uVar37;
              uVar50 = uVar38;
              do {
                uVar46 = uVar48 & 0xffffffff;
                uVar50 = uVar50 - 4;
                uVar48 = uVar48 - 4;
                lVar58 = (&local_280)[uVar46];
                lVar67 = *(long *)(&local_288 + uVar46 * 2);
                lVar54 = (&lStack_298)[uVar46];
                puVar45[-1] = puVar45[-1] - *(long *)(&local_290 + uVar46 * 2);
                puVar45[-2] = puVar45[-2] - lVar54;
                puVar45[1] = puVar45[1] - lVar58;
                *puVar45 = *puVar45 - lVar67;
                puVar45 = puVar45 + -4;
              } while (uVar50 != 0);
              if (uVar69 == uVar38) goto LAB_00df06e8;
            }
          }
          do {
            puVar42[uVar61 + 0x40] = puVar42[uVar61 + 0x40] - (&local_280)[uVar61 & 0xffffffff];
            bVar12 = 0 < (long)uVar61;
            uVar61 = uVar61 - 1;
          } while (bVar12);
        }
LAB_00df06e8:
        lStack_278 = 0;
        local_280 = 0;
        lStack_268 = 0;
        local_270 = 0;
        lStack_258 = 0;
        local_260 = 0;
        lStack_248 = 0;
        local_250 = 0;
        lStack_238 = 0;
        local_240 = 0;
        lStack_228 = 0;
        local_230 = 0;
        lStack_218 = 0;
        local_220 = 0;
        lStack_208 = 0;
        local_210 = 0;
        lStack_1f8 = 0;
        local_200 = 0;
        lStack_1e8 = 0;
        local_1f0 = 0;
        *(ulong *)(param_1 + lVar40 + 0xdcf8) = uVar35;
        lStack_1d8 = 0;
        local_1e0 = 0;
        lStack_1c8 = 0;
        local_1d0 = 0;
        lStack_1b8 = 0;
        local_1c0 = 0;
        lStack_1a8 = 0;
        local_1b0 = 0;
        *(ulong *)(param_1 + lVar40 + 0xd6f8) = uVar33;
        lStack_198 = 0;
        local_1a0 = 0;
        local_188 = 0;
        local_190 = 0;
        lStack_178 = 0;
        local_180 = 0;
        local_168 = 0;
        local_170 = 0;
        lStack_158 = 0;
        local_160 = 0;
        local_148 = 0;
        local_150 = 0;
        uVar69 = local_fc0[uVar25 + 1];
        lStack_138 = 0;
        local_140 = 0;
        local_128 = 0;
        local_130 = 0;
        lStack_118 = 0;
        local_120 = 0;
        local_108 = 0;
        local_110 = 0;
        lStack_f8 = 0;
        local_100 = 0;
        local_e8 = 0;
        local_f0 = 0;
        lStack_d8 = 0;
        local_e0 = 0;
        lStack_c8 = 0;
        local_d0 = 0;
        lStack_b8 = 0;
        local_c0 = 0;
        lStack_a8 = 0;
        local_b0 = 0;
        lStack_98 = 0;
        local_a0 = 0;
        lStack_88 = 0;
        local_90 = 0;
        if (uVar35 < uVar69) {
          uVar48 = uVar33;
          lVar67 = 0;
          uVar50 = uVar35;
          do {
            while( true ) {
              uVar61 = uVar50;
              uVar38 = uVar35;
              lVar58 = lVar67;
              uVar21 = oc_huff_token_decode(lVar51,*puVar39);
              uVar33 = uVar48 + 1;
              lVar67 = (long)(int)uVar21;
              *(char *)(lVar47 + uVar48) = (char)uVar21;
              if (0xe < uVar21) break;
              iVar14 = oc_pack_read(lVar51,(&DAT_0054bac7)[lVar67]);
              *(char *)(lVar47 + uVar33) = (char)iVar14;
              uVar33 = uVar48 + 2;
              if (uVar21 == 0) {
                uVar33 = uVar48 + 3;
                *(char *)(lVar47 + uVar48 + 2) = (char)((uint)iVar14 >> 8);
              }
              iVar20 = -0xd;
              if (1 < uVar21) {
                iVar20 = 0;
              }
              iVar18 = 0x15;
              if (0xb < uVar21) {
                iVar18 = 0;
              }
              uVar21 = *(int *)(&DAT_0054bad8 + lVar67 * 4) +
                       (iVar14 << (ulong)(iVar20 + iVar18 & 0x1f));
              uVar35 = 0x7fffffffffffffff;
              if (uVar21 != 0) {
                uVar35 = (ulong)(uVar21 >> 8 & 0xfff);
              }
              if (uVar35 != 0) goto LAB_00df078c;
LAB_00df083c:
              uVar61 = uVar61 + 1;
              (&local_280)[uVar21 & 0xff] = (&local_280)[uVar21 & 0xff] + 1;
              uVar48 = uVar33;
              lVar67 = lVar58 + uVar38;
              uVar50 = uVar61 + uVar35;
              if (uVar69 <= uVar61 + uVar35) goto LAB_00df0870;
            }
            uVar21 = *(uint *)(&DAT_0054bad8 + lVar67 * 4);
            uVar35 = 0x7fffffffffffffff;
            if (uVar21 != 0) {
              uVar35 = (ulong)(uVar21 >> 8 & 0xfff);
            }
            if (uVar35 == 0) goto LAB_00df083c;
LAB_00df078c:
            uVar48 = uVar33;
            lVar67 = lVar58 + uVar38;
            uVar50 = uVar61 + uVar35;
          } while (uVar61 + uVar35 < uVar69);
LAB_00df0870:
          local_1440 = lStack_d8;
          lStack_88 = lStack_88 + lVar58 + uVar38;
          local_1490 = local_e8;
          local_1488 = lStack_f8;
          local_1480 = local_108;
          local_1478 = lStack_118;
          local_1470 = local_128;
          local_1468 = lStack_138;
          local_1460 = local_148;
          local_1458 = lStack_158;
          local_1450 = local_168;
          local_1448 = lStack_178;
        }
        else {
          local_180 = 0;
          local_1450 = 0;
          local_1448 = 0;
          local_170 = 0;
          local_160 = 0;
          local_1460 = 0;
          local_1458 = 0;
          local_150 = 0;
          local_140 = 0;
          local_1470 = 0;
          local_1468 = 0;
          local_130 = 0;
          local_120 = 0;
          local_1480 = 0;
          local_1478 = 0;
          local_110 = 0;
          local_100 = 0;
          local_1490 = 0;
          local_1488 = 0;
          local_f0 = 0;
          local_e0 = 0;
          local_1440 = 0;
          local_d0 = 0;
          lStack_c8 = 0;
          local_c0 = 0;
          lStack_b8 = 0;
          local_b0 = 0;
          lStack_a8 = 0;
          local_a0 = 0;
          lStack_98 = 0;
          local_90 = 0;
          uVar61 = 0;
          lStack_88 = 0;
        }
        lStack_88 = lStack_88 + (uVar69 - uVar61);
        local_90 = lStack_88 + local_90;
        lStack_98 = lStack_98 + local_90;
        local_a0 = local_a0 + lStack_98;
        lStack_a8 = lStack_a8 + local_a0;
        local_b0 = local_b0 + lStack_a8;
        lStack_b8 = lStack_b8 + local_b0;
        local_c0 = local_c0 + lStack_b8;
        lStack_c8 = lStack_c8 + local_c0;
        local_d0 = local_d0 + lStack_c8;
        lStack_d8 = local_1440 + local_d0;
        local_e0 = local_e0 + lStack_d8;
        local_e8 = local_1490 + local_e0;
        local_f0 = local_f0 + local_e8;
        lStack_f8 = local_1488 + local_f0;
        local_100 = local_100 + lStack_f8;
        local_108 = local_1480 + local_100;
        local_110 = local_110 + local_108;
        lStack_118 = local_1478 + local_110;
        local_120 = local_120 + lStack_118;
        local_128 = local_1470 + local_120;
        local_130 = local_130 + local_128;
        lStack_138 = local_1468 + local_130;
        local_140 = local_140 + lStack_138;
        local_148 = local_1460 + local_140;
        local_150 = local_150 + local_148;
        lStack_158 = local_1458 + local_150;
        local_160 = local_160 + lStack_158;
        local_168 = local_1450 + local_160;
        local_170 = local_170 + local_168;
        lStack_178 = local_1448 + local_170;
        local_180 = local_180 + lStack_178;
        local_188 = local_188 + local_180;
        local_190 = local_190 + local_188;
        lStack_198 = lStack_198 + local_190;
        local_1a0 = local_1a0 + lStack_198;
        lStack_1a8 = lStack_1a8 + local_1a0;
        local_1b0 = local_1b0 + lStack_1a8;
        lStack_1b8 = lStack_1b8 + local_1b0;
        local_1c0 = local_1c0 + lStack_1b8;
        lStack_1c8 = lStack_1c8 + local_1c0;
        local_1d0 = local_1d0 + lStack_1c8;
        lStack_1d8 = lStack_1d8 + local_1d0;
        local_1e0 = local_1e0 + lStack_1d8;
        lStack_1e8 = lStack_1e8 + local_1e0;
        local_1f0 = local_1f0 + lStack_1e8;
        lStack_1f8 = lStack_1f8 + local_1f0;
        local_200 = local_200 + lStack_1f8;
        lStack_208 = lStack_208 + local_200;
        local_210 = local_210 + lStack_208;
        lStack_218 = lStack_218 + local_210;
        local_220 = local_220 + lStack_218;
        lStack_228 = lStack_228 + local_220;
        local_230 = local_230 + lStack_228;
        lStack_238 = lStack_238 + local_230;
        local_240 = local_240 + lStack_238;
        lStack_248 = lStack_248 + local_240;
        local_250 = local_250 + lStack_248;
        lStack_258 = lStack_258 + local_250;
        local_260 = local_260 + lStack_258;
        lStack_268 = lStack_268 + local_260;
        local_270 = local_270 + lStack_268;
        lStack_278 = lStack_278 + local_270;
        local_280 = local_280 + lStack_278;
        if (uVar25 < 0x40) {
          uVar48 = uVar37;
          if (-1 < (long)uVar37) {
            uVar48 = 0;
          }
          uVar48 = (uVar37 - uVar48) + 1;
          if (3 < uVar48) {
            uVar50 = uVar37;
            if (-1 < (long)uVar37) {
              uVar50 = 0;
            }
            if (((uint)(uVar37 - uVar50) <= uVar19) && (uVar37 - uVar50 >> 0x20 == 0)) {
              uVar46 = uVar48 & 0xfffffffffffffffc;
              uVar38 = uVar37 - uVar46;
              puVar45 = local_fc0 + uVar37 + uVar25;
              uVar50 = uVar46;
              do {
                uVar105 = uVar37 & 0xffffffff;
                uVar50 = uVar50 - 4;
                uVar37 = uVar37 - 4;
                lVar58 = (&local_280)[uVar105];
                lVar67 = *(long *)(&local_288 + uVar105 * 2);
                lVar40 = (&lStack_298)[uVar105];
                puVar45[-1] = puVar45[-1] - *(long *)(&local_290 + uVar105 * 2);
                puVar45[-2] = puVar45[-2] - lVar40;
                puVar45[1] = puVar45[1] - lVar58;
                *puVar45 = *puVar45 - lVar67;
                puVar45 = puVar45 + -4;
              } while (uVar50 != 0);
              uVar37 = uVar38;
              if (uVar48 == uVar46) goto LAB_00defd44;
            }
          }
          do {
            puVar42[uVar37 + 0x80] = puVar42[uVar37 + 0x80] - (&local_280)[uVar37 & 0xffffffff];
            bVar12 = 0 < (long)uVar37;
            uVar37 = uVar37 - 1;
          } while (bVar12);
        }
LAB_00defd44:
        uVar25 = uVar25 + 1;
        uVar35 = (ulong)((int)uVar35 - (int)(uVar69 - uVar61));
        puVar42 = puVar42 + 1;
        *(int *)(param_1 + 0xdf08) = (int)uVar33;
        uVar19 = uVar15;
      } while ((uint)uVar25 != uVar15);
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 != 5);
  lVar51 = (*(long *)(param_1 + 0x3f0) + (ulong)*(byte *)(param_1 + 0x409) <<
           ((ulong)*(uint *)(param_1 + 0x3c) & 0x3f)) +
           (*(long *)(param_1 + 0x3f8) - *(long *)(param_1 + 0x3f0));
  *(long *)(param_1 + 0x3f8) = *(long *)(param_1 + 0x3f8) + 1;
  *(long *)(param_1 + 0x400) = lVar51;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar51;
  }
  local_28c = 4 << (ulong)((*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1);
  memcpy(local_fc0 + 1,(void *)(param_1 + 0xd2f8),0x600);
  memcpy(local_9b8,(void *)(param_1 + 0xd8f8),0x600);
  local_3b8[0] = *(long *)(param_1 + 0x168);
  local_3b8[3] = local_3b8[0] + *(long *)(param_1 + 0x128) * 8;
  local_3b8[1] = local_3b8[0] + *(long *)(param_1 + 0x170) * 8;
  local_398 = local_3b8[3] + (*(long *)(param_1 + 0x170) - *(long *)(param_1 + 0xa8)) * 8;
  local_3b8[2] = local_3b8[1] + *(long *)(param_1 + 0x178) * 8;
  local_390 = local_398 + (*(long *)(param_1 + 0x178) - *(long *)(param_1 + 0xd0)) * 8;
  uVar35 = (ulong)*(byte *)(param_1 + 0x40a);
  if (uVar35 != 0) {
    ppuVar43 = local_358 + 1;
    pbVar64 = (byte *)(param_1 + 0x40b);
    uVar25 = uVar35;
    do {
      uVar25 = uVar25 - 1;
      lVar51 = param_1 + (ulong)*pbVar64 * 0x30;
      puVar52 = *(ushort **)(lVar51 + 0x418);
      ppuVar43[-1] = *(ushort **)(lVar51 + 0x410);
      *ppuVar43 = puVar52;
      ppuVar43 = ppuVar43 + 2;
      pbVar64 = pbVar64 + 1;
    } while (uVar25 != 0);
    puVar39 = local_328 + 1;
    pbVar64 = (byte *)(param_1 + 0x40b);
    uVar25 = uVar35;
    do {
      uVar25 = uVar25 - 1;
      lVar51 = param_1 + (ulong)*pbVar64 * 0x30;
      uVar22 = *(undefined8 *)(lVar51 + 0x428);
      puVar39[-1] = *(undefined8 *)(lVar51 + 0x420);
      *puVar39 = uVar22;
      puVar39 = puVar39 + 2;
      pbVar64 = pbVar64 + 1;
    } while (uVar25 != 0);
    puVar39 = local_2f8 + 1;
    pbVar64 = (byte *)(param_1 + 0x40b);
    do {
      uVar35 = uVar35 - 1;
      lVar51 = param_1 + (ulong)*pbVar64 * 0x30;
      uVar22 = *(undefined8 *)(lVar51 + 0x438);
      puVar39[-1] = *(undefined8 *)(lVar51 + 0x430);
      *puVar39 = uVar22;
      puVar39 = puVar39 + 2;
      pbVar64 = pbVar64 + 1;
    } while (uVar35 != 0);
  }
  local_290 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  iVar14 = oc_state_loop_filter_init(param_1,&local_13b8);
  uVar19 = *(uint *)(param_1 + 0xdf0c);
  pvVar24 = *(void **)(param_1 + 0xe110);
  local_288 = (uint)(iVar14 == 0);
  if ((int)uVar19 < 1) {
    if (pvVar24 == (void *)0x0) goto LAB_00df1134;
    free(pvVar24);
    pvVar24 = *(void **)(param_1 + 0xe118);
    *(undefined8 *)(param_1 + 0xe110) = 0;
LAB_00df0f38:
    free(pvVar24);
    *(undefined8 *)(param_1 + 0xe118) = 0;
    free(*(void **)(param_1 + 0xe120));
    *(undefined8 *)(param_1 + 0xe120) = 0;
LAB_00df1134:
    local_284 = 0;
    lVar51 = param_1 + (long)*(int *)(param_1 + 0x198) * 0x48;
    uVar81 = *(undefined8 *)(lVar51 + 0x1c8);
    uVar78 = *(undefined8 *)(lVar51 + 0x1c0);
    uVar70 = *(undefined8 *)(lVar51 + 0x1d8);
    uVar22 = *(undefined8 *)(lVar51 + 0x1d0);
    uVar75 = *(undefined8 *)(lVar51 + 0x1b8);
    uVar72 = *(undefined8 *)(lVar51 + 0x1b0);
    *(undefined8 *)(param_1 + 0xe170) = *(undefined8 *)(lVar51 + 0x1e0);
    uVar87 = *(undefined8 *)(lVar51 + 0x1a8);
    uVar84 = *(undefined8 *)(lVar51 + 0x1a0);
    *(undefined8 *)(param_1 + 0xe168) = uVar70;
    *(undefined8 *)(param_1 + 0xe160) = uVar22;
    *(undefined8 *)(param_1 + 0xe158) = uVar81;
    *(undefined8 *)(param_1 + 0xe150) = uVar78;
    *(undefined8 *)(param_1 + 0xe148) = uVar75;
    *(undefined8 *)(param_1 + 0xe140) = uVar72;
    *(undefined8 *)(param_1 + 0xe138) = uVar87;
    *(undefined8 *)(param_1 + 0xe130) = uVar84;
  }
  else {
    if (pvVar24 == (void *)0x0) {
      if (*(char *)(param_1 + 0x408) == '\0') {
        __size = *(size_t *)(param_1 + 0x128);
        pvVar24 = malloc(__size);
        *(void **)(param_1 + 0xe110) = pvVar24;
        if (pvVar24 != (void *)0x0) {
          memset(pvVar24,(uint)*(byte *)(param_1 + 0x40b),__size);
          pvVar24 = *(void **)(param_1 + 0xe118);
          goto joined_r0x00df0f80;
        }
      }
      goto LAB_00df1134;
    }
    lVar51 = *(long *)(param_1 + 0x178) + *(long *)(param_1 + 0x170) + *(long *)(param_1 + 0x180);
    if (0 < lVar51) {
      uVar13 = *(undefined *)(param_1 + 0x40b);
      plVar57 = *(long **)(param_1 + 0x168);
      do {
        lVar51 = lVar51 + -1;
        *(undefined *)((long)pvVar24 + *plVar57) = uVar13;
        plVar57 = plVar57 + 1;
      } while (lVar51 != 0);
      uVar19 = *(uint *)(param_1 + 0xdf0c);
    }
    pvVar24 = *(void **)(param_1 + 0xe118);
joined_r0x00df0f80:
    if ((int)uVar19 < 2) {
      if (pvVar24 != (void *)0x0) goto LAB_00df0f38;
      goto LAB_00df1134;
    }
    if (pvVar24 == (void *)0x0) {
      uVar15 = *(uint *)(param_1 + 4);
      pvVar24 = malloc((ulong)*(uint *)(param_1 + 8) * (ulong)uVar15 +
                       (long)(int)(uVar15 >> (ulong)(~*(uint *)(param_1 + 0x30) & 1)) *
                       (long)(int)(*(uint *)(param_1 + 8) >>
                                  (ulong)((*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1)) * 2);
      *(void **)(param_1 + 0xe120) = pvVar24;
      pvVar49 = malloc(*(long *)(param_1 + 0x128) << 2);
      *(void **)(param_1 + 0xe118) = pvVar49;
      if ((pvVar24 == (void *)0x0) || (pvVar49 == (void *)0x0)) {
        free(pvVar24);
        *(undefined8 *)(param_1 + 0xe120) = 0;
        free(pvVar49);
        *(undefined8 *)(param_1 + 0xe118) = 0;
        goto LAB_00df1134;
      }
      *(undefined4 *)(param_1 + 0xe128) = 0;
LAB_00df1008:
      if (uVar19 < 5) {
        iVar14 = -uVar15;
        *(uint *)(param_1 + 0xe130) = uVar15;
        *(int *)(param_1 + 0xe134) = *(int *)(param_1 + 8);
        *(int *)(param_1 + 0xe138) = iVar14;
        *(long *)(param_1 + 0xe140) =
             *(long *)(param_1 + 0xe120) +
             ((long)iVar14 - (long)iVar14 * (long)*(int *)(param_1 + 8));
      }
      else {
        uVar19 = *(uint *)(param_1 + 8);
        lVar51 = *(long *)(param_1 + 0xe120) + (ulong)uVar19 * (ulong)uVar15;
        uVar21 = uVar19 >> (ulong)((*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1);
        uVar17 = uVar15 >> (ulong)(~*(uint *)(param_1 + 0x30) & 1);
        *(uint *)(param_1 + 0xe134) = uVar19;
        *(uint *)(param_1 + 0xe138) = uVar15;
        *puVar36 = uVar15;
        *(long *)(param_1 + 0xe140) = *(long *)(param_1 + 0xe120);
        *(long *)(param_1 + 0xe158) = lVar51;
        *(uint *)(param_1 + 0xe148) = uVar17;
        *(uint *)(param_1 + 0xe14c) = uVar21;
        *(uint *)(param_1 + 0xe150) = uVar17;
        *(uint *)(param_1 + 0xe160) = uVar17;
        *(uint *)(param_1 + 0xe164) = uVar21;
        *(uint *)(param_1 + 0xe168) = uVar17;
        *(long *)(param_1 + 0xe170) = lVar51 + (long)(int)uVar21 * (long)(int)uVar17;
        oc_ycbcr_buffer_flip(puVar36,puVar36);
        uVar19 = *(uint *)(param_1 + 0xdf0c);
      }
      uVar30 = 1;
      if (4 < (int)uVar19) {
        uVar30 = 2;
      }
      *(undefined4 *)(param_1 + 0xe128) = uVar30;
    }
    else {
      iVar14 = 1;
      if (4 < uVar19) {
        iVar14 = 2;
      }
      if (*(int *)(param_1 + 0xe128) != iVar14) {
        uVar15 = *(uint *)(param_1 + 4);
        goto LAB_00df1008;
      }
    }
    local_284 = uVar19;
    if ((int)uVar19 < 5) {
      local_284 = *(uint *)(param_1 + 0xdf0c);
      lVar51 = param_1 + (long)*(int *)(param_1 + 0x198) * 0x48;
      uVar70 = *(undefined8 *)(lVar51 + 0x1e0);
      uVar22 = *(undefined8 *)(lVar51 + 0x1d8);
      uVar72 = *(undefined8 *)(lVar51 + 0x1b8);
      uVar78 = *(undefined8 *)(lVar51 + 0x1d0);
      uVar75 = *(undefined8 *)(lVar51 + 0x1c8);
      *(undefined8 *)(param_1 + 0xe150) = *(undefined8 *)(lVar51 + 0x1c0);
      *(undefined8 *)(param_1 + 0xe148) = uVar72;
      *(undefined8 *)(param_1 + 0xe160) = uVar78;
      *(undefined8 *)(param_1 + 0xe158) = uVar75;
      *(undefined8 *)(param_1 + 0xe170) = uVar70;
      *(undefined8 *)(param_1 + 0xe168) = uVar22;
    }
  }
  oc_ycbcr_buffer_flip(&local_1400,param_1 + 0xe130);
  iVar14 = 0;
  uVar19 = 0;
  do {
    iVar18 = *(int *)(param_1 + 0x9c);
    iVar20 = local_28c + iVar14;
    uVar35 = 0;
    uVar15 = (uint)(iVar20 < iVar18);
    iVar71 = iVar18;
    iVar73 = iVar18;
    do {
      if (uVar35 == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = (uint)((*(byte *)(param_1 + 0x30) & 2) == 0);
      }
      iVar74 = iVar14 >> uVar21;
      lVar23 = param_1 + uVar35 * 0x28;
      lVar51 = 0;
      lVar32 = *(long *)(param_1 + 0x110);
      local_2c8[uVar35] = iVar74;
      piVar34 = (int *)(lVar23 + 0x98);
      iVar77 = *piVar34;
      piVar53 = (int *)(lVar23 + 0x9c);
      iVar79 = *piVar53;
      iVar76 = (local_28c >> uVar21) + iVar74;
      if (iVar79 <= iVar76) {
        iVar76 = iVar79;
      }
      lVar23 = (long)iVar77;
      iVar79 = iVar76 - iVar74;
      local_2c8[uVar35 + 3] = iVar76;
      if ((iVar79 != 0 && iVar74 <= iVar76) && (0 < iVar77)) {
        lVar51 = 0;
        lVar67 = lVar23 * -4;
        lVar55 = *(long *)(param_1 + uVar35 * 0x28 + 0xa0) + lVar23 * iVar74;
        do {
          iVar80 = iVar77;
          if (iVar74 == 0) {
            do {
              uVar17 = *(uint *)(lVar32 + lVar55 * 4);
              if ((uVar17 & 1) != 0) {
                lVar51 = lVar51 + 1;
                lVar58 = (0x10011121UL >> ((ulong)(uVar17 >> 6) & 0x1c) & 3) * 4 +
                         uVar35 * 0xc + -0x13b8;
                iVar82 = uVar17 + *(int *)((long)&local_2b0 + lVar58 + 0x13b8) * 0x10000;
                *(int *)(lVar32 + lVar55 * 4) = iVar82;
                *(int *)((long)&local_2b0 + lVar58 + 0x13b8) = iVar82 >> 0x10;
              }
              lVar55 = lVar55 + 1;
              iVar80 = iVar80 + -1;
            } while (iVar80 != 0);
          }
          else {
            puVar36 = (uint *)(lVar32 + lVar55 * 4);
            uVar59 = 0xffffffff;
            uVar56 = 0xffffffff;
            uVar16 = *(uint *)(lVar32 + (long)iVar77 * -4 + lVar55 * 4);
            lVar58 = 0;
            uVar17 = 0x10011121U >> (ulong)(uVar16 >> 6 & 0x1c) & 3;
            if ((uVar16 & 1) == 0) {
              uVar17 = 0xffffffff;
            }
            do {
              while (uVar16 = uVar17, lVar40 = lVar58, iVar77 <= (int)lVar40 + 1) {
                uVar17 = 0xffffffff;
                uVar31 = *puVar36;
                if ((uVar31 & 1) != 0) goto LAB_00df13e8;
LAB_00df1384:
                puVar36 = puVar36 + 1;
                uVar56 = 0xffffffff;
                lVar58 = lVar40 + 1;
                uVar59 = uVar16;
                if (iVar77 == (int)(lVar40 + 1)) goto LAB_00df133c;
              }
              uVar17 = 0x10011121U >> (ulong)(puVar36[1 - lVar23] >> 6 & 0x1c) & 3;
              if ((puVar36[1 - lVar23] & 1) == 0) {
                uVar17 = 0xffffffff;
              }
              uVar31 = *puVar36;
              if ((uVar31 & 1) == 0) goto LAB_00df1384;
LAB_00df13e8:
              uVar25 = 0x10011121UL >> ((ulong)(uVar31 >> 6) & 0x1c) & 3;
              uVar26 = (uint)uVar25;
              switch((uint)(uVar56 == uVar26) | (uint)(uVar59 == uVar26) << 1 |
                     (uint)(uVar16 == uVar26) << 2 | (uint)(uVar17 == uVar26) << 3) {
              case 1:
              case 3:
                iVar80 = (int)*(short *)((long)puVar36 + -2);
                break;
              case 2:
                iVar80 = (int)*(short *)((long)puVar36 + lVar67 + -2);
                break;
              case 4:
              case 6:
              case 0xc:
                iVar80 = (int)*(short *)((long)puVar36 + lVar67 + 2);
                break;
              case 5:
                sVar9 = *(short *)((long)puVar36 + -2);
                sVar8 = *(short *)((long)puVar36 + lVar67 + 2);
                goto LAB_00df1570;
              case 7:
              case 0xf:
                sVar8 = *(short *)((long)puVar36 + -2);
                sVar9 = *(short *)((long)puVar36 + lVar67 + -2);
                iVar80 = (int)*(short *)((long)puVar36 + lVar67 + 2);
                iVar83 = sVar9 * -0x1a + (iVar80 + sVar8) * 0x1d;
                iVar82 = iVar83 + 0x1f;
                if (-1 < iVar83) {
                  iVar82 = iVar83;
                }
                iVar82 = iVar82 >> 5;
                uVar59 = iVar82 - iVar80;
                uVar56 = -uVar59;
                if (-1 < (int)uVar59) {
                  uVar56 = uVar59;
                }
                if (uVar56 < 0x81) {
                  uVar59 = iVar82 - sVar8;
                  uVar56 = -uVar59;
                  if (-1 < (int)uVar59) {
                    uVar56 = uVar59;
                  }
                  iVar80 = (int)sVar8;
                  if (uVar56 < 0x81) {
                    uVar59 = iVar82 - sVar9;
                    uVar56 = -uVar59;
                    if (-1 < (int)uVar59) {
                      uVar56 = uVar59;
                    }
                    iVar80 = (int)sVar9;
                    if (uVar56 < 0x81) {
                      iVar80 = iVar82;
                    }
                  }
                }
                break;
              case 8:
                iVar80 = (int)*(short *)((long)puVar36 + lVar67 + 6);
                break;
              case 9:
              case 0xb:
              case 0xd:
                iVar82 = *(short *)((long)puVar36 + -2) * 0x4b +
                         *(short *)((long)puVar36 + lVar67 + 6) * 0x35;
                iVar80 = iVar82 + 0x7f;
                if (-1 < iVar82) {
                  iVar80 = iVar82;
                }
                iVar80 = iVar80 >> 7;
                break;
              case 10:
                sVar9 = *(short *)((long)puVar36 + lVar67 + -2);
                sVar8 = *(short *)((long)puVar36 + lVar67 + 6);
LAB_00df1570:
                iVar80 = (int)sVar8 + (int)sVar9;
                if (iVar80 < 0) {
                  iVar80 = iVar80 + 1;
                }
                iVar80 = iVar80 >> 1;
                break;
              case 0xe:
                iVar82 = ((int)*(short *)((long)puVar36 + lVar67 + 6) +
                         (int)*(short *)((long)puVar36 + lVar67 + -2)) * 3 +
                         *(short *)((long)puVar36 + lVar67 + 2) * 10;
                iVar80 = iVar82 + 0xf;
                if (-1 < iVar82) {
                  iVar80 = iVar82;
                }
                iVar80 = iVar80 >> 4;
                break;
              default:
                iVar80 = *(int *)((long)&local_2b0 + uVar25 * 4 + uVar35 * 0xc);
              }
              uVar31 = uVar31 + iVar80 * 0x10000;
              lVar51 = lVar51 + 1;
              *puVar36 = uVar31;
              *(int *)((long)&local_2b0 + uVar25 * 4 + uVar35 * 0xc) = (int)uVar31 >> 0x10;
              lVar58 = lVar40 + 1;
              puVar36 = puVar36 + 1;
              uVar56 = uVar26;
              uVar59 = uVar16;
            } while (iVar77 != (int)(lVar40 + 1));
LAB_00df133c:
            lVar55 = lVar55 + lVar40 + 1;
          }
          iVar74 = iVar74 + 1;
        } while (iVar74 != iVar76);
        lVar32 = *(long *)(param_1 + 0x110);
      }
      lVar58 = *(long *)(param_1 + 0x88);
      lVar23 = iVar79 * lVar23 - lVar51;
      local_3b8[uVar35 + 6] = lVar51;
      lVar55 = local_3b8[uVar35];
      local_3b8[uVar35 + 9] = lVar23;
      lVar67 = *(long *)(param_1 + 0xdef8);
      local_1404 = *local_358[uVar35 * 6];
      local_1402 = *local_358[uVar35 * 6 + 1];
      if (0 < lVar51) {
        lVar23 = 0;
        do {
          lVar40 = *(long *)(lVar55 + lVar23 * 8);
          uVar17 = 0;
          lStack_218 = 0;
          local_220 = 0;
          lStack_208 = 0;
          local_210 = 0;
          lStack_238 = 0;
          local_240 = 0;
          lStack_228 = 0;
          local_230 = 0;
          lStack_258 = 0;
          local_260 = 0;
          lStack_248 = 0;
          local_250 = 0;
          lStack_278 = 0;
          local_280 = 0;
          lStack_268 = 0;
          local_270 = 0;
          uVar16 = *(uint *)(lVar32 + lVar40 * 4);
          uVar25 = (ulong)((uVar16 & 0x700) != 0x100);
          puVar52 = local_358[uVar35 * 6 + ((ulong)(uVar16 >> 2) & 0x3f) * 2 + uVar25];
          do {
            lVar54 = (long)(int)uVar17;
            lVar47 = (long)(int)uVar17;
            if (local_9b8[uVar35 * 0x40 + (long)(int)uVar17] != 0) {
              local_9b8[uVar35 * 0x40 + lVar47] = local_9b8[uVar35 * 0x40 + (long)(int)uVar17] - 1;
              break;
            }
            lVar63 = (long)*(int *)(local_fc0 + uVar35 * 0x40 + lVar54 + 1);
            bVar29 = *(byte *)(lVar67 + lVar63);
            uVar33 = lVar63 + 1;
            uVar16 = *(uint *)(&DAT_0054bad8 + (ulong)bVar29 * 4);
            if (bVar29 < 0xf) {
              iVar74 = -0xd;
              if (1 < bVar29) {
                iVar74 = 0;
              }
              pbVar64 = (byte *)(lVar67 + uVar33);
              iVar76 = 0x15;
              if (0xb < bVar29) {
                iVar76 = 0;
              }
              uVar33 = lVar63 + 2;
              uVar16 = ((uint)*pbVar64 << (ulong)(iVar74 + iVar76 & 0x1f)) + uVar16;
              uVar37 = (ulong)(uVar16 >> 8 & 0xfff);
              if (bVar29 == 0) {
                uVar33 = uVar37 + (ulong)*(byte *)(lVar67 + uVar33) * 0x100;
                uVar37 = 0x7fffffffffffffff;
                if (uVar33 != 0) {
                  uVar37 = uVar33;
                }
                uVar33 = (ulong)(*(int *)(local_fc0 + uVar35 * 0x40 + lVar54 + 1) + 3);
              }
            }
            else {
              uVar37 = (ulong)(uVar16 >> 8) & 0xfff;
            }
            uVar17 = uVar17 + (uVar16 & 0xff);
            local_9b8[uVar35 * 0x40 + lVar47] = uVar37;
            local_fc0[uVar35 * 0x40 + lVar54 + 1] = (long)(int)uVar33;
            uVar33 = (ulong)uVar17;
            uVar69 = (ulong)uVar17;
            if (uVar37 == 0) {
              uVar17 = uVar17 + 1;
            }
            *(ushort *)((long)&local_280 + (ulong)*(byte *)(lVar58 + uVar69) * 2) =
                 puVar52[uVar33] *
                 ((short)((ushort)(uVar16 >> 0x10) ^ (ushort)(-(uVar16 & 0x100000) >> 0x10)) >> 5);
          } while ((int)uVar17 < 0x40);
          local_280 = CONCAT62(local_280._2_6_,*(undefined2 *)(lVar32 + lVar40 * 4 + 2));
          oc_state_frag_recon(param_1,lVar40,uVar35 & 0xffffffff,&local_280,lVar54,
                              *(undefined2 *)((ulong)&local_1404 | uVar25 << 1));
          lVar23 = lVar23 + 1;
        } while (lVar23 != lVar51);
        lVar55 = local_3b8[uVar35];
        lVar23 = local_3b8[uVar35 + 9];
      }
      local_3b8[uVar35] = lVar55 + lVar51 * 8;
      lVar51 = local_3b8[uVar35 + 3] + lVar23 * -8;
      piVar1 = local_2c8 + uVar35;
      piVar2 = local_2c8 + uVar35 + 3;
      local_3b8[uVar35 + 3] = lVar51;
      oc_state_frag_copy_list(param_1,lVar51,lVar23,2,1,uVar35 & 0xffffffff);
      if (local_288 == 0) {
        uVar17 = 0;
        uVar16 = 0;
      }
      else {
        oc_state_loop_filter_frag_rows
                  (param_1,&local_13b8,iVar44,uVar35 & 0xffffffff,*piVar1 - uVar19,*piVar2 - uVar15)
        ;
        uVar16 = uVar15;
        uVar17 = uVar19;
      }
      oc_state_borders_fill_rows
                (param_1,iVar44,uVar35 & 0xffffffff,*piVar1 * 8 + uVar17 * -10,
                 *piVar2 * 8 + uVar16 * -10);
      iVar74 = 0;
      if (uVar35 != 0) {
        iVar74 = 3;
      }
      if ((int)local_284 < iVar74 + 2) {
        if (local_288 != 0) {
          uVar17 = uVar17 + uVar19;
          uVar16 = uVar16 + uVar15;
        }
      }
      else {
        iVar77 = *piVar1;
        uVar17 = uVar17 + uVar19;
        plVar57 = (long *)(param_1 + uVar35 * 0x28 + 0xa0);
        lVar23 = *plVar57;
        lVar32 = (long)iVar77 - (long)(int)uVar17;
        uVar16 = uVar16 + uVar15;
        iVar80 = (int)lVar32;
        iVar79 = *piVar2 - uVar16;
        iVar76 = *piVar34;
        lVar51 = (long)iVar76;
        if (iVar80 < 1) {
          iVar76 = 0;
        }
        lVar32 = lVar23 + lVar51 * lVar32;
        iVar83 = *piVar53;
        iVar82 = (iVar79 - iVar80) - (uint)(0 < iVar80);
        if (iVar79 < iVar83) {
          iVar82 = iVar82 + 1;
        }
        lVar47 = *(long *)(param_1 + 0xe118);
        lVar63 = *(long *)(param_1 + 0xe110);
        lVar55 = lVar47 + lVar32 * 4;
        memset((void *)(lVar55 + (long)iVar76 * 4),0,lVar51 * iVar82 * 4);
        uVar56 = iVar80 << 3 | (uint)(0 < iVar80) << 2;
        lVar67 = param_1 + uVar35 * 0x18;
        lVar58 = param_1 + (long)iVar44 * 0x48 + uVar35 * 0x18;
        uVar31 = *(uint *)(lVar67 + 0xe130);
        uVar59 = *(uint *)(lVar67 + 0xe138);
        lVar54 = (long)(int)uVar59;
        iVar76 = *(int *)(lVar58 + 0x1a8);
        lVar40 = (long)iVar76;
        pvVar24 = (void *)(*(long *)(lVar67 + 0xe140) + lVar54 * (int)uVar56);
        pvVar49 = (void *)(*(long *)(lVar58 + 0x1b0) + lVar40 * (int)uVar56);
        if ((int)uVar56 < 4) {
          iVar80 = uVar56 - 4;
          do {
            memcpy(pvVar24,pvVar49,(long)(int)uVar31);
            pvVar24 = (void *)((long)pvVar24 + lVar54);
            pvVar49 = (void *)((long)pvVar49 + lVar40);
            bVar12 = iVar80 != -1;
            iVar80 = iVar80 + 1;
          } while (bVar12);
          uVar56 = 4;
        }
        pbVar64 = (byte *)(lVar63 + lVar32);
        iVar82 = iVar79 - (uint)(iVar83 <= iVar79);
        iVar80 = iVar82 * 8;
        lVar32 = (long)(int)(uVar59 << 3);
        if ((int)(uVar56 + iVar82 * -8) < 0 != SBORROW4(uVar56,iVar80)) {
          lVar63 = -lVar40;
          lVar58 = (long)(iVar76 << 3);
          if ((int)uVar31 < 9) {
            lVar51 = lVar47 + lVar23 * 4 + ((long)iVar77 * 4 + (ulong)uVar17 * -4 + 4) * lVar51;
            pbVar65 = pbVar64;
            do {
              pbVar64 = pbVar65 + 1;
              iVar77 = *(int *)(param_1 + (ulong)*pbVar65 * 4 + 0xdf10);
              FUN_00df2734(pvVar24,uVar59,(long)pvVar49 + lVar63,iVar76,iVar77,iVar77 * 3 >> 2,
                           lVar55,lVar51);
              lVar55 = lVar55 + 4;
              uVar56 = uVar56 + 8;
              lVar51 = lVar51 + 4;
              pvVar24 = (void *)((long)pvVar24 + lVar32);
              pvVar49 = (void *)((long)pvVar49 + lVar58);
              pbVar65 = pbVar64;
            } while ((int)uVar56 < iVar80);
          }
          else {
            lVar23 = (long)pvVar49 + lVar63 + 8;
            lVar47 = (long)pvVar24 + (4 - (long)(int)(uVar59 << 2));
            do {
              iVar76 = *(int *)(param_1 + (ulong)*pbVar64 * 4 + 0xdf10);
              FUN_00df2734(pvVar24,uVar59,(long)pvVar49 + lVar63,lVar40,iVar76,iVar76 * 3 >> 2,
                           lVar55,lVar55 + lVar51 * 4);
              lVar27 = 0;
              pbVar65 = pbVar64 + 1;
              do {
                lVar62 = lVar55;
                pbVar64 = pbVar65 + 1;
                iVar77 = *(int *)(param_1 + (ulong)*pbVar65 * 4 + 0xdf10);
                iVar76 = iVar77 * 3 >> 2;
                FUN_00df2734((long)pvVar24 + lVar27 + 8,uVar59,lVar23 + lVar27,lVar40,iVar77,iVar76,
                             lVar62 + 4,lVar62 + lVar51 * 4 + 4);
                FUN_00df2a08(lVar47 + lVar27,uVar59,iVar77,iVar76,lVar62);
                lVar27 = lVar27 + 8;
                pbVar65 = pbVar64;
                lVar55 = lVar62 + 4;
              } while ((int)lVar27 + 8 < (int)uVar31);
              lVar55 = lVar62 + 8;
              pvVar49 = (void *)((long)pvVar49 + lVar58);
              lVar23 = lVar23 + lVar58;
              pvVar24 = (void *)((long)pvVar24 + lVar32);
              lVar47 = lVar47 + lVar32;
              uVar56 = uVar56 + 8;
            } while ((int)uVar56 < iVar80);
          }
        }
        if (iVar83 <= iVar79) {
          iVar76 = *(int *)(param_1 + uVar35 * 0x18 + 0xe134);
          if ((int)uVar56 < iVar76) {
            iVar76 = iVar76 - uVar56;
            do {
              memcpy(pvVar24,pvVar49,(long)(int)uVar31);
              pvVar24 = (void *)((long)pvVar24 + lVar54);
              pvVar49 = (void *)((long)pvVar49 + lVar40);
              iVar76 = iVar76 + -1;
            } while (iVar76 != 0);
          }
          if (8 < (int)uVar31) {
            lVar51 = 4;
            do {
              pbVar64 = pbVar64 + 1;
              iVar76 = *(int *)(param_1 + (ulong)*pbVar64 * 4 + 0xdf10);
              FUN_00df2a08((long)pvVar24 + (lVar51 - lVar32),uVar59,iVar76,iVar76 * 3 >> 2,lVar55);
              lVar51 = lVar51 + 8;
              lVar55 = lVar55 + 4;
            } while ((int)lVar51 + 4 < (int)uVar31);
          }
        }
        if (iVar74 + 3 <= (int)local_284) {
          uVar17 = uVar17 + uVar19;
          uVar16 = uVar16 + uVar15;
          iVar76 = (int)((long)*piVar1 - (long)(int)uVar17) * 8;
          iVar74 = 0x780;
          if (uVar35 != 0) {
            iVar74 = 0xf00;
          }
          iVar77 = (*piVar2 - uVar16) * 8;
          if (((int)(iVar76 + (*piVar2 - uVar16) * -8) < 0 != SBORROW4(iVar76,iVar77)) &&
             (uVar56 = *(uint *)(lVar67 + 0xe130), 0 < (int)uVar56)) {
            lVar23 = (long)*piVar34;
            uVar59 = *(uint *)(lVar67 + 0xe138);
            uVar25 = (ulong)(int)uVar59;
            local_1420 = *(long *)(lVar67 + 0xe140) + uVar25 * (long)iVar76;
            lVar51 = (*plVar57 + lVar23 * ((long)*piVar1 - (long)(int)uVar17)) * 4;
            piVar34 = (int *)(*(long *)(param_1 + 0xe118) + lVar51);
            puVar36 = (uint *)(*(long *)(param_1 + 0x110) + lVar51);
            iVar80 = *(int *)(param_1 + uVar35 * 0x18 + 0xe134);
            iVar79 = 4;
            if (uVar35 != 0) {
              iVar79 = 7;
            }
            if (*(int *)(param_1 + 0xdf0c) < iVar79) {
              do {
                iVar74 = iVar76 + 8;
                lVar51 = 0;
                do {
                  iVar79 = (int)(lVar51 + 8);
                  if (*piVar34 < 0x601) {
                    if (0x180 < *piVar34) {
                      uVar22 = 0;
                      goto LAB_00df1f3c;
                    }
                  }
                  else {
                    uVar22 = 1;
LAB_00df1f3c:
                    lVar23 = param_1 + (ulong)*(byte *)(param_1 + ((ulong)(*puVar36 >> 2) & 0x3f) +
                                                       0x40b) * 4;
                    FUN_00df2c1c(local_1420 + lVar51,uVar25,
                                 (uint)(iVar76 < 1) << 2 | (uint)(iVar80 <= iVar74) << 3 |
                                 (uint)(lVar51 == 0) | (uint)((int)uVar56 <= iVar79) << 1,
                                 *(undefined4 *)(lVar23 + 0xdf10),*(undefined4 *)(lVar23 + 0xe010),
                                 uVar22);
                  }
                  puVar36 = puVar36 + 1;
                  piVar34 = piVar34 + 1;
                  lVar51 = lVar51 + 8;
                } while (iVar79 < (int)uVar56);
                local_1420 = local_1420 + (int)(uVar59 << 3);
                iVar76 = iVar74;
              } while (iVar74 < iVar77);
            }
            else {
              uVar31 = 3;
              if (8 < uVar56) {
                uVar31 = 1;
              }
              do {
                iVar79 = iVar76 + 8;
                iVar82 = *piVar34;
                uVar26 = (uint)(iVar76 < 1) << 2 | (uint)(iVar80 <= iVar79) << 3;
                uVar33 = (ulong)*(byte *)(param_1 + ((ulong)(*puVar36 >> 2) & 0x3f) + 0x40b);
                uVar10 = uVar31 | uVar26;
                if (iVar74 < iVar82) {
                  lVar51 = param_1 + uVar33 * 4;
                  puVar3 = (undefined4 *)(lVar51 + 0xdf10);
                  puVar4 = (undefined4 *)(lVar51 + 0xe010);
                  FUN_00df2c1c(local_1420,uVar25,uVar10,*puVar3,*puVar4,1);
                  if ((((uVar35 != 0) || ((8 < uVar56 && (0xf00 < piVar34[1])))) ||
                      ((0 < iVar76 && (0xf00 < piVar34[-lVar23])))) ||
                     ((iVar79 < iVar80 && (0xf00 < piVar34[lVar23])))) {
                    FUN_00df2c1c(local_1420,uVar59,uVar10,*puVar3,*puVar4,1);
                    uVar30 = *puVar3;
                    uVar6 = *puVar4;
                    uVar37 = (ulong)uVar59;
LAB_00df20e8:
                    uVar22 = 1;
                    goto LAB_00df20f0;
                  }
                }
                else {
                  uVar37 = uVar25;
                  if (0x600 < iVar82) {
                    lVar51 = param_1 + uVar33 * 4;
                    uVar30 = *(undefined4 *)(lVar51 + 0xdf10);
                    uVar6 = *(undefined4 *)(lVar51 + 0xe010);
                    goto LAB_00df20e8;
                  }
                  if (iVar82 < 0x181) goto LAB_00df20f8;
                  lVar51 = param_1 + uVar33 * 4;
                  uVar22 = 0;
                  uVar30 = *(undefined4 *)(lVar51 + 0xdf10);
                  uVar6 = *(undefined4 *)(lVar51 + 0xe010);
LAB_00df20f0:
                  FUN_00df2c1c(local_1420,uVar37,uVar10,uVar30,uVar6,uVar22);
                }
LAB_00df20f8:
                puVar36 = puVar36 + 1;
                piVar34 = piVar34 + 1;
                if (8 < uVar56) {
                  lVar32 = 0;
                  lVar51 = 0;
                  do {
                    iVar82 = (int)lVar51 + 0x10;
                    iVar83 = *(int *)((long)piVar34 + lVar32);
                    uVar10 = uVar26 | (uint)((int)uVar56 <= iVar82) << 1;
                    uVar33 = (ulong)*(byte *)(param_1 + ((ulong)(*(uint *)((long)puVar36 + lVar32)
                                                                >> 2) & 0x3f) + 0x40b);
                    if (iVar74 < iVar83) {
                      lVar55 = param_1 + uVar33 * 4;
                      puVar3 = (undefined4 *)(lVar55 + 0xdf10);
                      puVar4 = (undefined4 *)(lVar55 + 0xe010);
                      lVar55 = local_1420 + lVar51 + 8;
                      FUN_00df2c1c(lVar55,uVar25,uVar10,*puVar3,*puVar4,1);
                      if (((((uVar35 != 0) || (0xf00 < *(int *)((long)piVar34 + lVar32 + -4))) ||
                           ((iVar82 < (int)uVar56 && (0xf00 < *(int *)((long)piVar34 + lVar32 + 4)))
                           )) || ((0 < iVar76 &&
                                  (0xf00 < *(int *)((long)piVar34 + lVar32 + lVar23 * -4))))) ||
                         ((iVar79 < iVar80 &&
                          (0xf00 < *(int *)((long)piVar34 + lVar32 + lVar23 * 4))))) {
                        FUN_00df2c1c(lVar55,uVar59,uVar10,*puVar3,*puVar4,1);
                        uVar30 = *puVar3;
                        uVar6 = *puVar4;
                        uVar37 = (ulong)uVar59;
                        goto LAB_00df219c;
                      }
                    }
                    else {
                      uVar37 = uVar25;
                      if (iVar83 < 0x601) {
                        if (iVar83 < 0x181) goto LAB_00df21ac;
                        uVar22 = 0;
                        lVar55 = param_1 + uVar33 * 4;
                        uVar6 = *(undefined4 *)(lVar55 + 0xe010);
                        uVar30 = *(undefined4 *)(lVar55 + 0xdf10);
                        lVar55 = local_1420 + lVar51 + 8;
                      }
                      else {
                        lVar55 = param_1 + uVar33 * 4;
                        uVar30 = *(undefined4 *)(lVar55 + 0xdf10);
                        uVar6 = *(undefined4 *)(lVar55 + 0xe010);
                        lVar55 = local_1420 + lVar51 + 8;
LAB_00df219c:
                        uVar22 = 1;
                      }
                      FUN_00df2c1c(lVar55,uVar37,uVar10,uVar30,uVar6,uVar22);
                    }
LAB_00df21ac:
                    lVar51 = lVar51 + 8;
                    lVar32 = lVar32 + 4;
                  } while ((int)lVar51 + 8 < (int)uVar56);
                  puVar36 = (uint *)((long)puVar36 + lVar32);
                  piVar34 = (int *)((long)piVar34 + lVar32);
                }
                local_1420 = local_1420 + (int)(uVar59 << 3);
                iVar76 = iVar79;
              } while (iVar79 < iVar77);
            }
          }
        }
      }
      uVar35 = uVar35 + 1;
      iVar74 = *piVar1 - uVar17 << (ulong)uVar21;
      iVar76 = *piVar2 - uVar16 << (ulong)uVar21;
      if (iVar71 <= iVar74) {
        iVar74 = iVar71;
      }
      if (iVar73 <= iVar76) {
        iVar76 = iVar73;
      }
      iVar71 = iVar74;
      iVar73 = iVar76;
    } while (uVar35 != 3);
    if (*(long *)(param_1 + 0xe180) != 0) {
      oc_restore_fpu(param_1);
      (**(code **)(param_1 + 0xe180))
                (*(undefined8 *)(param_1 + 0xe178),&local_1400,*(int *)(param_1 + 0x9c) - iVar76,
                 *(int *)(param_1 + 0x9c) - iVar74);
    }
    uVar19 = 1;
    iVar14 = local_28c + iVar14;
  } while (iVar20 < iVar18);
  oc_state_borders_fill_caps(param_1,iVar44,0);
  oc_state_borders_fill_caps(param_1,iVar44,1);
  oc_state_borders_fill_caps(param_1,iVar44,2);
  if (*(char *)(param_1 + 0x408) == '\0') {
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x198);
  }
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x198);
  oc_restore_fpu(param_1);
  uVar22 = 0;
LAB_00df2424:
  if (*(long *)(lVar11 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar22);
  }
  return;
LAB_00deea68:
  uVar25 = uVar35;
  if ((uVar16 < 0x1021) || ((bool)(bVar12 ^ 1))) goto LAB_00deea04;
  uVar17 = oc_pack_read1(lVar51);
  if ((!bVar12) || (uVar16 = FUN_00df2494(lVar51), uVar19 <= (uint)uVar35)) goto LAB_00deea98;
  goto LAB_00deea20;
LAB_00deea04:
  uVar17 = (uint)(uVar17 == 0);
  if (!bVar12) goto LAB_00deea98;
  uVar16 = FUN_00df2494(lVar51);
  uVar15 = (uint)uVar25;
  uVar35 = uVar25;
  goto joined_r0x00dee9f4;
LAB_00def560:
  lVar55 = lVar67;
  if ((iVar14 < 0x1021) || ((bool)(bVar12 ^ 1))) goto LAB_00def4f4;
  uVar19 = oc_pack_read1(lVar51);
  if ((!bVar12) || (iVar14 = FUN_00df2494(lVar51), lVar23 <= lVar67)) goto LAB_00def590;
  goto LAB_00def510;
LAB_00def4f4:
  uVar19 = (uint)(uVar19 == 0);
  if (!bVar12) goto LAB_00def590;
  iVar14 = FUN_00df2494(lVar51);
  lVar67 = lVar55;
  goto joined_r0x00def4e4;
}


