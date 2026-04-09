// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_Encode
// Entry Point: 00e82ad4
// Size: 5772 bytes
// Signature: undefined silk_Encode(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int silk_Encode(undefined8 *param_1,int *param_2,short *param_3,int param_4,long param_5,
               int *param_6,uint param_7,undefined4 param_8)

{
  undefined (*pauVar1) [16];
  unkbyte9 *pVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char cVar5;
  undefined auVar6 [16];
  short sVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  short *psVar16;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  undefined4 uVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  undefined8 *puVar40;
  short *psVar41;
  uint uVar42;
  ulong uVar43;
  ulong uVar44;
  short *psVar45;
  undefined4 *puVar46;
  undefined (*pauVar47) [16];
  undefined8 *puVar48;
  int iVar49;
  int iVar50;
  undefined8 *puVar51;
  undefined8 *puVar52;
  long lVar53;
  long lVar54;
  undefined (*pauVar55) [16];
  long lVar56;
  short *__src;
  long lVar57;
  short sVar58;
  short sVar59;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar67;
  uint uVar66;
  short sVar68;
  undefined auVar60 [16];
  undefined auVar61 [16];
  short sVar70;
  uint uVar69;
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined uVar74;
  undefined uVar75;
  undefined uVar76;
  undefined uVar77;
  undefined uVar78;
  undefined uVar79;
  undefined uVar80;
  undefined uVar81;
  undefined uVar82;
  undefined uVar83;
  undefined uVar84;
  undefined uVar85;
  undefined uVar86;
  undefined uVar87;
  undefined uVar88;
  undefined uVar89;
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [16];
  int aiStack_220 [8];
  char *apcStack_200 [2];
  int local_1f0;
  int local_1ec;
  undefined8 *local_1e8;
  void *local_1e0;
  undefined8 *local_1d8;
  undefined *local_1d0;
  undefined8 *local_1c8;
  long local_1c0;
  int local_1b4;
  undefined8 *local_1b0;
  int local_1a4;
  long local_1a0;
  undefined (*local_198) [16];
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  uint local_174;
  undefined8 *local_170;
  undefined8 *local_168;
  long local_160;
  long local_158;
  undefined8 *local_150;
  int local_144;
  undefined8 *local_140;
  short *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined4 local_11c;
  int local_118;
  int local_114;
  long local_110;
  int local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 *local_e8;
  long local_e0;
  int local_d4;
  undefined8 *local_d0;
  int *local_c8;
  int local_bc;
  int local_b8;
  uint local_b4;
  undefined *local_b0;
  int *local_a8;
  undefined8 *local_a0;
  int *local_98;
  long local_90;
  ushort local_84 [2];
  int local_80 [2];
  undefined8 uStack_78;
  long local_70;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  
  lVar38 = tpidr_el0;
  local_70 = *(long *)(lVar38 + 0x28);
  if (param_2[0x11] != 0) {
    *(undefined4 *)(param_1 + 0x247) = 1;
    *(undefined4 *)(param_1 + 0x681) = 1;
  }
  *(undefined4 *)((long)param_1 + 0x3854) = 0;
  *(undefined4 *)((long)param_1 + 0x1684) = 0;
  local_138 = param_3;
  local_11c = param_8;
  local_c8 = param_6;
  local_90 = param_5;
  iVar30 = check_control_input(param_2);
  if (iVar30 != 0) goto LAB_00e82b4c;
  param_2[0x16] = 0;
  puVar51 = param_1 + 0x874;
  iVar31 = 0;
  local_170 = param_1 + 0x43a;
  if (*(int *)((long)param_1 + 0x43e4) < param_2[1]) {
    iVar31 = silk_init_encoder(local_170,*(undefined4 *)((long)param_1 + 0x13f4));
    *(undefined4 *)puVar51 = 0;
    auVar72 = _DAT_004c34b0;
    param_1[0x876] = SUB168(_DAT_004c34b0,8);
    param_1[0x875] = auVar72._0_8_;
    param_1[0x877] = 0x400000000001;
    if (*(int *)(param_1 + 0x87c) == 2) {
      memcpy(param_1 + 0x70e,param_1 + 0x2d4,0x130);
      param_1[0x43a] = *param_1;
    }
  }
  iVar33 = param_2[6];
  if (iVar33 == *(int *)((long)param_1 + 0x1204)) {
    iVar32 = param_2[1];
    bVar13 = *(int *)((long)param_1 + 0x43e4) != iVar32;
  }
  else {
    iVar32 = param_2[1];
    bVar13 = true;
  }
  *(int *)(param_1 + 0x87c) = *param_2;
  *(int *)((long)param_1 + 0x43e4) = iVar32;
  iVar34 = param_2[2];
  iVar50 = 0;
  if (iVar34 != 0) {
    iVar50 = (param_4 * 100) / iVar34;
  }
  local_d4 = iVar50 >> 1;
  if (iVar50 < 2) {
    local_d4 = 1;
  }
  local_d0 = puVar51;
  local_a0 = param_1;
  if (param_7 == 0) {
    iVar30 = -0x65;
    if ((param_4 < 0) || (iVar50 * iVar34 != param_4 * 100)) goto LAB_00e82b4c;
    if (param_4 * 1000 <= iVar34 * iVar33) {
      local_1ec = 0;
      local_1f0 = 0;
      iVar30 = iVar31;
      goto joined_r0x00e82de0;
    }
  }
  else if (iVar50 == 1) {
    if (param_7 == 2) {
      auVar72 = *(undefined (*) [16])(param_1 + 2);
      uStack_78 = auVar72._8_8_;
      local_80[0] = auVar72._0_4_;
      local_80[1] = auVar72._4_4_;
      if (iVar32 < 1) {
LAB_00e82d9c:
        local_1f0 = param_2[6];
        local_1ec = param_2[9];
        param_2[6] = 10;
        param_2[9] = 0;
        iVar30 = iVar31;
        goto joined_r0x00e82de0;
      }
      lVar53 = 0;
      uVar36 = *(undefined4 *)(param_1 + 0x23c);
      local_104 = param_4;
      do {
        iVar30 = silk_init_encoder(param_1,*(undefined4 *)((long)param_1 + 0x13f4));
        *(undefined4 *)(param_1 + 4) = uVar36;
        lVar53 = lVar53 + 1;
        param_1[3] = uStack_78;
        param_1[2] = CONCAT44(local_80[1],local_80[0]);
        param_1 = param_1 + 0x43a;
        uVar37 = (ulong)param_2[1];
        param_4 = local_104;
      } while (lVar53 < (long)uVar37);
    }
    else {
      if (iVar32 < 1) goto LAB_00e82d9c;
      lVar53 = 0;
      do {
        iVar30 = silk_init_encoder(param_1,*(undefined4 *)((long)param_1 + 0x13f4));
        uVar37 = (ulong)param_2[1];
        lVar53 = lVar53 + 1;
        param_1 = param_1 + 0x43a;
      } while (lVar53 < (long)uVar37);
    }
    local_1f0 = param_2[6];
    iVar32 = (int)uVar37;
    local_1ec = param_2[9];
    param_2[6] = 10;
    param_2[9] = 0;
    param_1 = local_a0;
    if (0 < iVar32) {
      if (iVar32 == 1) {
        uVar43 = 0;
      }
      else {
        uVar43 = uVar37 & 0xfffffffe;
        uVar44 = uVar43;
        puVar51 = local_a0;
        do {
          *(undefined4 *)((long)puVar51 + 0x123c) = 0;
          uVar44 = uVar44 - 2;
          *(undefined4 *)((long)puVar51 + 0x340c) = 0;
          *(undefined4 *)(puVar51 + 0x249) = 1;
          *(undefined4 *)(puVar51 + 0x683) = 1;
          puVar51 = puVar51 + 0x874;
        } while (uVar44 != 0);
        if (uVar43 == (uVar37 & 0xffffffff)) goto joined_r0x00e82de0;
      }
      lVar53 = (uVar37 & 0xffffffff) - uVar43;
      puVar46 = (undefined4 *)((long)local_a0 + uVar43 * 0x21d0 + 0x123c);
      do {
        *puVar46 = 0;
        lVar53 = lVar53 + -1;
        puVar46[3] = 1;
        puVar46 = puVar46 + 0x874;
      } while (lVar53 != 0);
    }
joined_r0x00e82de0:
    local_1c0 = lVar38;
    local_a0 = param_1;
    if (0 < iVar32) {
      lVar53 = (long)param_1 + 0x1284;
      uVar37 = 0;
      local_104 = param_4;
      do {
        if (uVar37 == 1) {
          uVar36 = *(undefined4 *)(param_1 + 0x23c);
        }
        else {
          uVar36 = 0;
        }
        iVar30 = silk_control_encoder
                           (param_1 + uVar37 * 0x43a,param_2,*(undefined4 *)(local_d0 + 10),
                            uVar37 & 0xffffffff,uVar36);
        lVar38 = local_1c0;
        if (iVar30 != 0) goto LAB_00e82b4c;
        if (((bool)(*(int *)(param_1 + uVar37 * 0x43a + 0x247) != 0 | bVar13)) &&
           (0 < *(int *)(param_1 + 0x2d0))) {
          lVar38 = 0;
          do {
            *(undefined4 *)(lVar53 + lVar38 * 4) = 0;
            lVar38 = lVar38 + 1;
          } while (lVar38 < *(int *)(param_1 + 0x2d0));
        }
        uVar44 = uVar37 + 1;
        lVar53 = lVar53 + 0x21d0;
        *(undefined4 *)((long)param_1 + uVar37 * 0x21d0 + 0x17d4) =
             *(undefined4 *)(param_1 + uVar37 * 0x43a + 0x2fa);
        uVar37 = uVar44;
      } while ((long)uVar44 < (long)param_2[1]);
      iVar30 = 0;
      param_4 = local_104;
    }
    local_1b4 = iVar50 * 10;
    iVar31 = *(int *)(local_a0 + 0x23c);
    iVar33 = *(int *)((long)local_a0 + 0x11cc);
    local_144 = iVar31 * local_1b4;
    uVar35 = 0;
    if (iVar31 * 1000 != 0) {
      uVar35 = (local_144 * iVar33) / (iVar31 * 1000);
    }
    local_1d0 = (undefined *)((long)local_a0 + 0x338d);
    apcStack_200[1] = (char *)((long)local_a0 + 0x12ad);
    lVar38 = -((-(ulong)(uVar35 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar35 << 1) + 0xf &
              0xfffffffffffffff0);
    local_130 = (undefined8 *)((long)apcStack_200 + lVar38);
    local_140 = local_a0 + 0x2d4;
    auVar72._8_4_ = 1;
    auVar72._0_8_ = 0x100000001;
    auVar72._12_4_ = 1;
    iVar32 = 0;
    local_128 = local_a0 + 0x27f;
    local_188 = local_a0 + 0x70e;
    local_190 = local_a0 + 0x6b9;
    local_e0 = (long)local_a0 + 0x43c2;
    local_a8 = (int *)((long)local_a0 + 0x3454);
    local_b0 = (undefined *)((long)local_a0 + 0x43d4);
    local_150 = local_a0 + 0x874;
    local_158 = (long)local_a0 + 0x13fc;
    local_160 = (long)local_a0 + 0x35cc;
    local_168 = local_a0 + 0x68a;
    local_1d8 = local_a0 + 0x7bd;
    local_1e0 = (void *)((long)local_a0 + 0x2264);
    local_1e8 = (undefined8 *)((long)local_a0 + 0x3364);
    local_b8 = local_d4 + -1;
    local_1a4 = local_d4 << 1;
    local_1c8 = (undefined8 *)((long)&local_1f0 + lVar38);
    local_180 = local_a0 + 0x43a;
    local_198 = (undefined (*) [16])((long)local_a0 + 0x1294);
    local_e8 = (undefined8 *)((long)local_a0 + 0x1284);
    local_1a0 = (long)local_a0 + 0x1806;
    local_110 = (long)local_a0 + 0x1854;
    local_1b0 = local_a0 + 0x250;
    uStack_f8 = SUB168(_DAT_004c51c0,8);
    local_100 = SUB168(_DAT_004c51c0,0);
    puVar51 = local_a0;
    __src = local_138;
    local_174 = param_7;
    local_98 = param_2;
    do {
      puVar48 = local_128;
      puVar40 = local_130;
      iVar50 = *(int *)((long)puVar51 + 0x167c);
      iVar34 = *(int *)(puVar51 + 0x23d) - iVar50;
      if (local_144 <= *(int *)(puVar51 + 0x23d) - iVar50) {
        iVar34 = local_144;
      }
      uVar35 = 0;
      if (iVar31 * 1000 != 0) {
        uVar35 = (iVar34 * iVar33) / (iVar31 * 1000);
      }
      uVar37 = (ulong)uVar35;
      local_f0 = uVar37;
      local_bc = iVar32;
      if (*param_2 == 2) {
        if (param_2[1] == 1) {
          if (0 < (int)uVar35) {
            if (uVar35 < 8) {
              uVar43 = 0;
            }
            else {
              uVar43 = uVar37 & 0xfffffff8;
              uVar44 = uVar43;
              psVar41 = __src;
              do {
                sVar59 = *psVar41;
                psVar45 = psVar41 + 1;
                psVar16 = psVar41 + 2;
                psVar17 = psVar41 + 3;
                psVar18 = psVar41 + 4;
                psVar19 = psVar41 + 5;
                psVar20 = psVar41 + 6;
                psVar21 = psVar41 + 7;
                psVar22 = psVar41 + 8;
                psVar23 = psVar41 + 9;
                psVar24 = psVar41 + 10;
                psVar25 = psVar41 + 0xb;
                psVar26 = psVar41 + 0xc;
                psVar27 = psVar41 + 0xd;
                psVar28 = psVar41 + 0xe;
                psVar29 = psVar41 + 0xf;
                psVar41 = psVar41 + 0x10;
                uVar35 = (int)*psVar27 + (int)*psVar26;
                uVar42 = (int)*psVar29 + (int)*psVar28;
                uVar44 = uVar44 - 8;
                uVar66 = (int)*psVar19 + (int)*psVar18;
                uVar69 = (int)*psVar21 + (int)*psVar20;
                auVar73._0_8_ =
                     CONCAT26(CONCAT11((byte)(uVar69 >> 8) & auVar72[13],(byte)uVar69 & auVar72[12])
                              + (short)(uVar69 >> 1),
                              CONCAT24(CONCAT11((byte)(uVar66 >> 8) & auVar72[9],
                                                (byte)uVar66 & auVar72[8]) + (short)(uVar66 >> 1),
                                       CONCAT22((ushort)(byte)((byte)((int)*psVar17 + (int)*psVar16)
                                                              & auVar72[4]) +
                                                (short)((uint)((int)*psVar17 + (int)*psVar16) >> 1),
                                                (ushort)(byte)((byte)((int)*psVar45 + (int)sVar59) &
                                                              auVar72[0]) +
                                                (short)((uint)((int)*psVar45 + (int)sVar59) >> 1))))
                ;
                auVar73._8_2_ =
                     (ushort)(byte)((byte)((int)*psVar23 + (int)*psVar22) & auVar72[0]) +
                     (short)((uint)((int)*psVar23 + (int)*psVar22) >> 1);
                auVar73._10_2_ =
                     (ushort)(byte)((byte)((int)*psVar25 + (int)*psVar24) & auVar72[4]) +
                     (short)((uint)((int)*psVar25 + (int)*psVar24) >> 1);
                auVar73._12_2_ =
                     CONCAT11((byte)(uVar35 >> 8) & auVar72[9],(byte)uVar35 & auVar72[8]) +
                     (short)(uVar35 >> 1);
                auVar73._14_2_ =
                     CONCAT11((byte)(uVar42 >> 8) & auVar72[13],(byte)uVar42 & auVar72[12]) +
                     (short)(uVar42 >> 1);
                puVar40[1] = auVar73._8_8_;
                *puVar40 = auVar73._0_8_;
                puVar40 = puVar40 + 2;
              } while (uVar44 != 0);
              if (uVar43 == uVar37) goto LAB_00e83e5c;
            }
            psVar41 = __src + uVar43 * 2 + 1;
            lVar53 = uVar37 - uVar43;
            psVar45 = (short *)((long)local_130 + uVar43 * 2);
            do {
              psVar24 = psVar41 + -1;
              lVar53 = lVar53 + -1;
              sVar59 = *psVar41;
              psVar41 = psVar41 + 2;
              *psVar45 = ((ushort)((int)sVar59 + (int)*psVar24) & 1) +
                         (short)((uint)((int)sVar59 + (int)*psVar24) >> 1);
              psVar45 = psVar45 + 1;
            } while (lVar53 != 0);
          }
LAB_00e83e5c:
          iVar31 = silk_resampler(local_140,(long)local_128 + (long)(iVar50 + 2) * 2,local_130,
                                  uVar37);
          puVar40 = local_d0;
          iVar30 = iVar31 + iVar30;
          if ((*(int *)(local_d0 + 9) == 2) && (*(int *)((long)puVar51 + 0x1684) == 0)) {
            iVar31 = silk_resampler(local_188,
                                    (long)local_190 + (long)*(int *)((long)puVar51 + 0x384c) * 2 + 4
                                    ,local_130,uVar37);
            uVar35 = *(uint *)(puVar51 + 0x23d);
            uVar37 = (ulong)uVar35;
            iVar30 = iVar31 + iVar30;
            puVar48 = local_128;
            if (0 < (int)uVar35) {
              iVar31 = *(int *)((long)puVar51 + 0x167c);
              iVar33 = *(int *)((long)puVar51 + 0x384c);
              uVar44 = 0;
              if (0xf < uVar35) {
                iVar32 = iVar31 + 2;
                iVar50 = (int)(uVar37 - 1);
                if (((iVar32 <= iVar32 + iVar50) && (uVar37 - 1 >> 0x20 == 0)) &&
                   (iVar49 = iVar33 + 2, iVar49 <= iVar49 + iVar50)) {
                  uVar44 = -(ulong)(iVar33 + 2U >> 0x1f) & 0xfffffffe00000000 |
                           (ulong)(iVar33 + 2U) << 1;
                  uVar43 = -(ulong)(iVar31 + 2U >> 0x1f) & 0xfffffffe00000000 |
                           (ulong)(iVar31 + 2U) << 1;
                  if (((long)local_128 + uVar43 < (long)local_190 + uVar44 + uVar37 * 2) &&
                     ((long)local_190 + uVar44 < (long)local_128 + uVar43 + uVar37 * 2)) {
                    uVar44 = 0;
                  }
                  else {
                    uVar44 = uVar37 & 0xfffffff0;
                    uVar43 = uVar44;
                    do {
                      pauVar55 = (undefined (*) [16])((long)local_128 + (long)iVar32 * 2);
                      pVar2 = (unkbyte9 *)((long)local_190 + (long)iVar49 * 2);
                      uVar43 = uVar43 - 0x10;
                      iVar32 = iVar32 + 0x10;
                      iVar49 = iVar49 + 0x10;
                      uVar10 = *(undefined8 *)((long)pVar2 + 8);
                      auVar91[9] = (char)((ulong)uVar10 >> 8);
                      auVar91._0_9_ = *pVar2;
                      auVar91[10] = (char)((ulong)uVar10 >> 0x10);
                      auVar91[11] = (char)((ulong)uVar10 >> 0x18);
                      auVar91[12] = (char)((ulong)uVar10 >> 0x20);
                      auVar91[13] = (char)((ulong)uVar10 >> 0x28);
                      auVar91[14] = (char)((ulong)uVar10 >> 0x30);
                      auVar91[15] = (char)((ulong)uVar10 >> 0x38);
                      auVar72 = NEON_shadd(auVar91,*pauVar55,2);
                      auVar73 = NEON_shadd(*(undefined (*) [16])(pVar2 + 1),pauVar55[1],2);
                      *(long *)(*pauVar55 + 8) = auVar72._8_8_;
                      *(long *)*pauVar55 = auVar72._0_8_;
                      *(long *)(pauVar55[1] + 8) = auVar73._8_8_;
                      *(long *)pauVar55[1] = auVar73._0_8_;
                    } while (uVar43 != 0);
                    if (uVar44 == uVar37) goto LAB_00e83f74;
                  }
                }
              }
              uVar35 = iVar31 + (int)uVar44 + 2;
              iVar31 = iVar33 + (int)uVar44 + 2;
              lVar53 = uVar37 - uVar44;
              do {
                uVar37 = -(ulong)(uVar35 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar35 << 1;
                lVar39 = (long)iVar31;
                uVar35 = uVar35 + 1;
                iVar31 = iVar31 + 1;
                lVar53 = lVar53 + -1;
                *(short *)((long)local_128 + uVar37) =
                     (short)((uint)((int)*(short *)((long)local_190 + lVar39 * 2) +
                                   (int)*(short *)((long)local_128 + uVar37)) >> 1);
              } while (lVar53 != 0);
            }
          }
LAB_00e83f74:
          iVar31 = *(int *)((long)puVar51 + 0x167c);
          goto LAB_00e831c4;
        }
        if (param_2[1] != 2) goto LAB_00e83168;
        if (0 < (int)uVar35) {
          if (uVar35 < 0x11) {
            lVar39 = 0;
          }
          else {
            uVar44 = 0x10;
            if ((uVar35 & 0xf) != 0) {
              uVar44 = uVar37 & 0xf;
            }
            lVar39 = uVar37 - uVar44;
            psVar41 = __src + 0x10;
            lVar53 = lVar39;
            puVar40 = local_1c8;
            do {
              sVar58 = *psVar41;
              sVar62 = psVar41[2];
              sVar63 = psVar41[4];
              sVar64 = psVar41[6];
              sVar65 = psVar41[8];
              sVar67 = psVar41[10];
              sVar68 = psVar41[0xc];
              sVar70 = psVar41[0xe];
              lVar53 = lVar53 + -0x10;
              sVar59 = psVar41[-0x10];
              sVar7 = psVar41[-0xe];
              sVar8 = psVar41[-0xc];
              sVar9 = psVar41[-10];
              puVar40[-1] = CONCAT17((char)((ushort)psVar41[-2] >> 8),
                                     CONCAT16((char)psVar41[-2],
                                              CONCAT15((char)((ushort)psVar41[-4] >> 8),
                                                       CONCAT14((char)psVar41[-4],
                                                                CONCAT13((char)((ushort)psVar41[-6]
                                                                               >> 8),
                                                                         CONCAT12((char)psVar41[-6],
                                                                                  psVar41[-8]))))));
              puVar40[-2] = CONCAT17((char)((ushort)sVar9 >> 8),
                                     CONCAT16((char)sVar9,
                                              CONCAT15((char)((ushort)sVar8 >> 8),
                                                       CONCAT14((char)sVar8,
                                                                CONCAT13((char)((ushort)sVar7 >> 8),
                                                                         CONCAT12((char)sVar7,sVar59
                                                                                 ))))));
              *(short *)(puVar40 + 2) = sVar65;
              *(short *)((long)puVar40 + 0x12) = sVar67;
              *(short *)((long)puVar40 + 0x14) = sVar68;
              *(short *)((long)puVar40 + 0x16) = sVar70;
              *(short *)puVar40 = sVar58;
              *(short *)((long)puVar40 + 2) = sVar62;
              *(short *)((long)puVar40 + 4) = sVar63;
              *(short *)((long)puVar40 + 6) = sVar64;
              puVar40 = puVar40 + 4;
              psVar41 = psVar41 + 0x20;
            } while (lVar53 != 0);
          }
          lVar53 = uVar37 - lVar39;
          psVar41 = __src + lVar39 * 2;
          psVar45 = (short *)((long)local_130 + lVar39 * 2);
          do {
            lVar53 = lVar53 + -1;
            *psVar45 = *psVar41;
            psVar41 = psVar41 + 2;
            psVar45 = psVar45 + 1;
          } while (lVar53 != 0);
        }
        if ((*(int *)(local_d0 + 9) == 1) && (*(int *)((long)puVar51 + 0x1684) == 0)) {
          memcpy(local_188,local_140,0x130);
          iVar50 = *(int *)((long)puVar51 + 0x167c);
        }
        iVar32 = silk_resampler(local_140,(long)local_128 + (long)iVar50 * 2 + 4,local_130,uVar37);
        puVar40 = local_d0;
        iVar33 = *(int *)((long)puVar51 + 0x384c);
        iVar31 = *(int *)(puVar51 + 0x677) - iVar33;
        if (*(int *)(puVar51 + 0x676) * local_1b4 <= iVar31) {
          iVar31 = *(int *)(puVar51 + 0x676) * local_1b4;
        }
        *(int *)((long)puVar51 + 0x167c) = *(int *)((long)puVar51 + 0x167c) + iVar34;
        if (0 < (int)uVar35) {
          if (uVar35 < 0x11) {
            lVar39 = 0;
          }
          else {
            uVar44 = 0x10;
            if ((uVar35 & 0xf) != 0) {
              uVar44 = uVar37 & 0xf;
            }
            lVar39 = uVar37 - uVar44;
            psVar41 = __src + 0x11;
            lVar53 = lVar39;
            puVar48 = local_1c8;
            do {
              auVar92._0_8_ =
                   CONCAT26(psVar41[6],CONCAT24(psVar41[4],CONCAT22(psVar41[2],*psVar41)));
              auVar92._8_2_ = psVar41[8];
              auVar92._10_2_ = psVar41[10];
              auVar92._12_2_ = psVar41[0xc];
              auVar92._14_2_ = psVar41[0xe];
              lVar53 = lVar53 + -0x10;
              sVar59 = psVar41[-0x10];
              sVar7 = psVar41[-0xe];
              sVar8 = psVar41[-0xc];
              sVar9 = psVar41[-10];
              puVar48[-1] = CONCAT17((char)((ushort)psVar41[-2] >> 8),
                                     CONCAT16((char)psVar41[-2],
                                              CONCAT15((char)((ushort)psVar41[-4] >> 8),
                                                       CONCAT14((char)psVar41[-4],
                                                                CONCAT13((char)((ushort)psVar41[-6]
                                                                               >> 8),
                                                                         CONCAT12((char)psVar41[-6],
                                                                                  psVar41[-8]))))));
              puVar48[-2] = CONCAT17((char)((ushort)sVar9 >> 8),
                                     CONCAT16((char)sVar9,
                                              CONCAT15((char)((ushort)sVar8 >> 8),
                                                       CONCAT14((char)sVar8,
                                                                CONCAT13((char)((ushort)sVar7 >> 8),
                                                                         CONCAT12((char)sVar7,sVar59
                                                                                 ))))));
              puVar48[1] = auVar92._8_8_;
              *puVar48 = auVar92._0_8_;
              puVar48 = puVar48 + 4;
              psVar41 = psVar41 + 0x20;
            } while (lVar53 != 0);
          }
          lVar53 = uVar37 - lVar39;
          psVar41 = __src + lVar39 * 2 + 1;
          psVar45 = (short *)((long)local_130 + lVar39 * 2);
          do {
            lVar53 = lVar53 + -1;
            *psVar45 = *psVar41;
            psVar41 = psVar41 + 2;
            psVar45 = psVar45 + 1;
          } while (lVar53 != 0);
        }
        iVar33 = silk_resampler(local_188,(long)local_190 + (long)(iVar33 + 2) * 2,local_130,uVar37)
        ;
        iVar30 = iVar32 + iVar30 + iVar33;
        iVar33 = *(int *)((long)puVar51 + 0x167c);
        *(int *)((long)puVar51 + 0x384c) = *(int *)((long)puVar51 + 0x384c) + iVar31;
        iVar31 = *(int *)(puVar51 + 0x23d);
        iVar32 = *param_2;
        *(undefined4 *)(puVar40 + 10) = 0;
        puVar48 = local_128;
        if (iVar33 < iVar31) goto LAB_00e8400c;
      }
      else {
LAB_00e83168:
        memcpy(local_130,__src,-(ulong)(uVar35 >> 0x1f) & 0xfffffffe00000000 | uVar37 << 1);
        puVar48 = local_128;
        iVar33 = silk_resampler(local_140,(long)local_128 + (long)(iVar50 + 2) * 2,puVar40,uVar37);
        iVar31 = *(int *)((long)puVar51 + 0x167c);
        iVar30 = iVar33 + iVar30;
        puVar40 = local_d0;
LAB_00e831c4:
        *(int *)((long)puVar51 + 0x167c) = iVar31 + iVar34;
        iVar33 = *(int *)(puVar51 + 0x23d);
        iVar32 = *param_2;
        *(undefined4 *)(puVar40 + 10) = 0;
        if (iVar31 + iVar34 < iVar33) {
LAB_00e8400c:
          uVar35 = param_2[1];
          *(uint *)(puVar40 + 9) = uVar35;
          param_2[0x13] = 0;
          iVar31 = *(int *)(puVar51 + 0x23c);
          goto joined_r0x00e84024;
        }
      }
      local_114 = iVar30;
      local_118 = iVar32;
      local_104 = param_4;
      if ((*(uint *)((long)puVar51 + 0x1684) | param_7) == 0) {
        local_84[0] = (ushort)(byte)-(char)(0x100 >> (ulong)(param_2[1] +
                                                             param_2[1] * *(int *)(puVar51 + 0x2d0)
                                                            & 0x1f));
        ec_enc_icdf(local_90,0,local_84,8);
        iVar30 = param_2[1];
        if (0 < iVar30) {
          lVar53 = 0;
          puVar40 = local_e8;
          pauVar55 = local_198;
          do {
            uVar35 = *(uint *)(puVar51 + lVar53 * 0x43a + 0x2d0);
            uVar37 = (ulong)uVar35;
            if ((int)uVar35 < 1) {
              uVar42 = 0;
            }
            else {
              if (uVar35 < 8) {
                uVar44 = 0;
                uVar42 = 0;
              }
              else {
                uVar44 = uVar37 & 0xfffffff8;
                uVar82 = (undefined)uStack_f8;
                uVar83 = (undefined)((ulong)uStack_f8 >> 8);
                uVar84 = (undefined)((ulong)uStack_f8 >> 0x10);
                uVar85 = (undefined)((ulong)uStack_f8 >> 0x18);
                uVar86 = (undefined)((ulong)uStack_f8 >> 0x20);
                uVar87 = (undefined)((ulong)uStack_f8 >> 0x28);
                uVar88 = (undefined)((ulong)uStack_f8 >> 0x30);
                uVar89 = (undefined)((ulong)uStack_f8 >> 0x38);
                uVar74 = (undefined)local_100;
                uVar75 = (undefined)((ulong)local_100 >> 8);
                uVar76 = (undefined)((ulong)local_100 >> 0x10);
                uVar77 = (undefined)((ulong)local_100 >> 0x18);
                uVar78 = (undefined)((ulong)local_100 >> 0x20);
                uVar79 = (undefined)((ulong)local_100 >> 0x28);
                uVar80 = (undefined)((ulong)local_100 >> 0x30);
                uVar81 = (undefined)((ulong)local_100 >> 0x38);
                uVar43 = uVar44;
                pauVar47 = pauVar55;
                auVar72 = ZEXT816(0);
                auVar73 = ZEXT816(0);
                do {
                  pauVar1 = pauVar47 + -1;
                  auVar91 = *pauVar47;
                  auVar90._0_4_ = CONCAT13(uVar77,CONCAT12(uVar76,CONCAT11(uVar75,uVar74))) + 4;
                  auVar90._4_4_ = CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar79,uVar78))) + 4;
                  auVar90._8_4_ = CONCAT13(uVar85,CONCAT12(uVar84,CONCAT11(uVar83,uVar82))) + 4;
                  auVar90._12_4_ = CONCAT13(uVar89,CONCAT12(uVar88,CONCAT11(uVar87,uVar86))) + 4;
                  pauVar47 = pauVar47 + 2;
                  uVar43 = uVar43 - 8;
                  auVar6[1] = uVar75;
                  auVar6[0] = uVar74;
                  auVar6[2] = uVar76;
                  auVar6[3] = uVar77;
                  auVar6[4] = uVar78;
                  auVar6[5] = uVar79;
                  auVar6[6] = uVar80;
                  auVar6[7] = uVar81;
                  auVar6[8] = uVar82;
                  auVar6[9] = uVar83;
                  auVar6[10] = uVar84;
                  auVar6[11] = uVar85;
                  auVar6[12] = uVar86;
                  auVar6[13] = uVar87;
                  auVar6[14] = uVar88;
                  auVar6[15] = uVar89;
                  auVar92 = NEON_ushl(*pauVar1,auVar6,4);
                  iVar31 = CONCAT13(uVar77,CONCAT12(uVar76,CONCAT11(uVar75,uVar74))) + 8;
                  uVar74 = (undefined)iVar31;
                  uVar75 = (undefined)((uint)iVar31 >> 8);
                  uVar76 = (undefined)((uint)iVar31 >> 0x10);
                  uVar77 = (undefined)((uint)iVar31 >> 0x18);
                  iVar31 = CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar79,uVar78))) + 8;
                  uVar78 = (undefined)iVar31;
                  uVar79 = (undefined)((uint)iVar31 >> 8);
                  uVar80 = (undefined)((uint)iVar31 >> 0x10);
                  uVar81 = (undefined)((uint)iVar31 >> 0x18);
                  iVar31 = CONCAT13(uVar85,CONCAT12(uVar84,CONCAT11(uVar83,uVar82))) + 8;
                  uVar82 = (undefined)iVar31;
                  uVar83 = (undefined)((uint)iVar31 >> 8);
                  uVar84 = (undefined)((uint)iVar31 >> 0x10);
                  uVar85 = (undefined)((uint)iVar31 >> 0x18);
                  iVar31 = CONCAT13(uVar89,CONCAT12(uVar88,CONCAT11(uVar87,uVar86))) + 8;
                  uVar86 = (undefined)iVar31;
                  uVar87 = (undefined)((uint)iVar31 >> 8);
                  uVar88 = (undefined)((uint)iVar31 >> 0x10);
                  uVar89 = (undefined)((uint)iVar31 >> 0x18);
                  auVar91 = NEON_ushl(auVar91,auVar90,4);
                  auVar60[0] = auVar92[0] | auVar72[0];
                  auVar60[1] = auVar92[1] | auVar72[1];
                  auVar60[2] = auVar92[2] | auVar72[2];
                  auVar60[3] = auVar92[3] | auVar72[3];
                  auVar60[4] = auVar92[4] | auVar72[4];
                  auVar60[5] = auVar92[5] | auVar72[5];
                  auVar60[6] = auVar92[6] | auVar72[6];
                  auVar60[7] = auVar92[7] | auVar72[7];
                  auVar60[8] = auVar92[8] | auVar72[8];
                  auVar60[9] = auVar92[9] | auVar72[9];
                  auVar60[10] = auVar92[10] | auVar72[10];
                  auVar60[11] = auVar92[11] | auVar72[11];
                  auVar60[12] = auVar92[12] | auVar72[12];
                  auVar60[13] = auVar92[13] | auVar72[13];
                  auVar60[14] = auVar92[14] | auVar72[14];
                  auVar60[15] = auVar92[15] | auVar72[15];
                  auVar71[0] = auVar91[0] | auVar73[0];
                  auVar71[1] = auVar91[1] | auVar73[1];
                  auVar71[2] = auVar91[2] | auVar73[2];
                  auVar71[3] = auVar91[3] | auVar73[3];
                  auVar71[4] = auVar91[4] | auVar73[4];
                  auVar71[5] = auVar91[5] | auVar73[5];
                  auVar71[6] = auVar91[6] | auVar73[6];
                  auVar71[7] = auVar91[7] | auVar73[7];
                  auVar71[8] = auVar91[8] | auVar73[8];
                  auVar71[9] = auVar91[9] | auVar73[9];
                  auVar71[10] = auVar91[10] | auVar73[10];
                  auVar71[11] = auVar91[11] | auVar73[11];
                  auVar71[12] = auVar91[12] | auVar73[12];
                  auVar71[13] = auVar91[13] | auVar73[13];
                  auVar71[14] = auVar91[14] | auVar73[14];
                  auVar71[15] = auVar91[15] | auVar73[15];
                  auVar72 = auVar60;
                  auVar73 = auVar71;
                } while (uVar43 != 0);
                auVar61[0] = auVar71[0] | auVar60[0];
                auVar61[1] = auVar71[1] | auVar60[1];
                auVar61[2] = auVar71[2] | auVar60[2];
                auVar61[3] = auVar71[3] | auVar60[3];
                auVar61[4] = auVar71[4] | auVar60[4];
                auVar61[5] = auVar71[5] | auVar60[5];
                auVar61[6] = auVar71[6] | auVar60[6];
                auVar61[7] = auVar71[7] | auVar60[7];
                auVar61[8] = auVar71[8] | auVar60[8];
                auVar61[9] = auVar71[9] | auVar60[9];
                auVar61[10] = auVar71[10] | auVar60[10];
                auVar61[11] = auVar71[11] | auVar60[11];
                auVar61[12] = auVar71[12] | auVar60[12];
                auVar61[13] = auVar71[13] | auVar60[13];
                auVar61[14] = auVar71[14] | auVar60[14];
                auVar61[15] = auVar71[15] | auVar60[15];
                auVar72 = NEON_ext(auVar61,auVar61,8,1);
                uVar42 = CONCAT13(auVar61[3] | auVar72[3],
                                  CONCAT12(auVar61[2] | auVar72[2],
                                           CONCAT11(auVar61[1] | auVar72[1],auVar61[0] | auVar72[0])
                                          ));
                uVar42 = uVar42 | (uint)(CONCAT17(auVar61[7] | auVar72[7],
                                                  CONCAT16(auVar61[6] | auVar72[6],
                                                           CONCAT15(auVar61[5] | auVar72[5],
                                                                    CONCAT14(auVar61[4] | auVar72[4]
                                                                             ,uVar42)))) >> 0x20);
                if (uVar44 == uVar37) goto LAB_00e83318;
              }
              do {
                lVar39 = uVar44 * 4;
                uVar66 = (uint)uVar44;
                uVar44 = uVar44 + 1;
                uVar42 = *(int *)((long)puVar40 + lVar39) << (ulong)(uVar66 & 0x1f) | uVar42;
              } while (uVar37 != uVar44);
            }
LAB_00e83318:
            *(bool *)((long)puVar51 + lVar53 * 0x21d0 + 0x1283) = 0 < (int)uVar42;
            if ((uVar42 != 0) && (1 < (int)uVar35)) {
              ec_enc_icdf(local_90,uVar42 - 1,
                          *(undefined8 *)(silk_LBRR_flags_iCDF_ptr + (ulong)(uVar35 - 2) * 8),8);
              iVar30 = local_98[1];
            }
            lVar53 = lVar53 + 1;
            pauVar55 = pauVar55 + 0x21d;
            puVar40 = puVar40 + 0x43a;
          } while (lVar53 < iVar30);
        }
        local_138 = __src;
        if (0 < *(int *)(puVar51 + 0x2d0)) {
          uVar37 = 0;
          local_b4 = 0xffffffff;
          lVar53 = local_1a0;
          puVar40 = local_e8;
          lVar39 = local_110;
          do {
            puVar51 = local_e8;
            if (0 < iVar30) {
              lVar57 = local_e0 + uVar37 * 6;
              if (uVar37 == 0) {
                lVar56 = 0;
                puVar51 = local_a0;
                lVar54 = local_110;
                do {
                  if (*(int *)((long)puVar51 + 0x1284) != 0) {
                    if (((iVar30 == 2) && (lVar56 == 0)) &&
                       (silk_stereo_encode_pred(local_90,lVar57), *local_a8 == 0)) {
                      silk_stereo_encode_mid_only(local_90,*local_b0);
                    }
                    lVar12 = local_90;
                    silk_encode_indices(puVar51,local_90,0,1,0);
                    silk_encode_pulses(lVar12,*(undefined *)(lVar54 + -0x4f),
                                       *(undefined *)(lVar54 + -0x4e),lVar54,
                                       *(undefined4 *)(puVar51 + 0x23d));
                    iVar30 = local_98[1];
                  }
                  lVar56 = lVar56 + 1;
                  puVar51 = puVar51 + 0x43a;
                  lVar54 = lVar54 + 0x21d0;
                } while (lVar56 < iVar30);
              }
              else {
                lVar54 = 0;
                lVar56 = 0;
                uVar44 = (ulong)local_b4;
                do {
                  if (*(int *)((long)puVar40 + lVar54) != 0) {
                    if (((iVar30 == 2) && (lVar54 == 0)) &&
                       (silk_stereo_encode_pred(local_90,lVar57), local_a8[uVar37] == 0)) {
                      silk_stereo_encode_mid_only(local_90,local_b0[uVar37]);
                    }
                    lVar12 = local_90;
                    puVar48 = local_a0;
                    silk_encode_indices((long)local_a0 + lVar54,local_90,uVar37 & 0xffffffff,1,
                                        (ulong)(*(int *)((long)puVar51 + lVar54 + uVar44 * 4) != 0)
                                        << 1);
                    silk_encode_pulses(lVar12,((char *)(lVar53 + lVar54))[-1],
                                       (long)*(char *)(lVar53 + lVar54),lVar39 + lVar54,
                                       *(undefined4 *)((long)puVar48 + lVar54 + 0x11e8));
                    iVar30 = local_98[1];
                  }
                  lVar56 = lVar56 + 1;
                  lVar54 = lVar54 + 0x21d0;
                } while (lVar56 < iVar30);
              }
            }
            uVar37 = uVar37 + 1;
            puVar40 = (undefined8 *)((long)puVar40 + 4);
            lVar53 = lVar53 + 0x24;
            lVar39 = lVar39 + 0x140;
            local_b4 = local_b4 + 1;
            puVar51 = local_a0;
          } while ((long)uVar37 < (long)*(int *)(local_a0 + 0x2d0));
        }
        if (0 < iVar30) {
          lVar53 = 0;
          puVar40 = local_e8;
          do {
            *(undefined4 *)(puVar40 + 1) = 0;
            lVar53 = lVar53 + 1;
            *puVar40 = 0;
            puVar40 = puVar40 + 0x43a;
          } while (lVar53 < local_98[1]);
        }
        *(int *)(local_d0 + 7) =
             *(int *)(local_90 + 0x18) + (int)LZCOUNT(*(undefined4 *)(local_90 + 0x20)) + -0x20;
        puVar48 = local_128;
        puVar40 = local_d0;
        param_2 = local_98;
        __src = local_138;
        param_7 = local_174;
      }
      silk_HP_variable_cutoff(puVar51);
      puVar11 = local_b0;
      puVar52 = local_150;
      lVar39 = local_158;
      lVar53 = local_160;
      iVar30 = param_2[7];
      iVar31 = (param_2[6] * iVar30) / 1000;
      if (param_7 == 0) {
        iVar31 = iVar31 - *(int *)(puVar40 + 7);
      }
      iVar33 = 0;
      if (*(int *)(puVar51 + 0x2d0) != 0) {
        iVar33 = iVar31 / *(int *)(puVar51 + 0x2d0);
      }
      iVar31 = 100;
      if (param_2[6] != 10) {
        iVar31 = 0x32;
      }
      iVar31 = (short)iVar33 * iVar31 + *(int *)((long)puVar40 + 0x3c) * -2;
      if ((param_7 == 0) && (0 < *(int *)((long)puVar51 + 0x1684))) {
        iVar31 = iVar31 + ((*(int *)(puVar40 + 7) + *(int *)((long)puVar51 + 0x1684) * iVar33) -
                          (*(int *)(local_90 + 0x18) +
                          (int)LZCOUNT(*(undefined4 *)(local_90 + 0x20)))) * 2 + 0x40;
      }
      if (iVar30 < 0x1389) {
        iVar33 = 5000;
        if ((iVar31 < 0x1389) && (iVar33 = iVar30, iVar30 <= iVar31)) {
          iVar33 = iVar31;
        }
      }
      else {
        iVar33 = iVar30;
        if ((iVar31 <= iVar30) && (iVar33 = iVar31, iVar31 < 0x1389)) {
          iVar33 = 5000;
        }
      }
      if (param_2[1] == 2) {
        uVar36 = *(undefined4 *)((long)puVar51 + 0x11b4);
        lVar57 = local_e0 + (long)*(int *)((long)puVar51 + 0x1684) * 6;
        iVar30 = param_2[0xf];
        puVar3 = local_b0 + *(int *)((long)puVar51 + 0x1684);
        uVar4 = *(undefined4 *)(puVar51 + 0x23c);
        *(undefined4 *)((long)aiStack_220 + lVar38 + 0x10) = *(undefined4 *)(puVar51 + 0x23d);
        *(undefined4 *)((long)aiStack_220 + lVar38 + 8) = uVar4;
        *(int *)((long)aiStack_220 + lVar38) = iVar30;
        silk_stereo_LR_to_MS(puVar52,lVar39,lVar53,lVar57,puVar3,local_80,iVar33,uVar36);
        if (puVar11[*(int *)((long)puVar51 + 0x1684)] == '\0') {
          if (*(int *)((long)puVar40 + 0x54) == 1) {
            *local_1d8 = 0;
            local_1d8[1] = 0;
            memset(local_1e0,0,0x1100);
            puVar51[0x43c] = 0;
            local_1e8[1] = 0;
            *local_1e8 = 0;
            local_1e8[3] = 0;
            local_1e8[2] = 0;
            *(undefined4 *)(puVar51 + 0x672) = 100;
            *(undefined4 *)((long)puVar51 + 0x334c) = 100;
            local_1d0[0xa5b] = 10;
            *local_1d0 = 0;
            *(undefined4 *)((long)puVar51 + 0x335c) = 0x10000;
            *(undefined4 *)(puVar51 + 0x681) = 1;
          }
          silk_encode_do_VAD_FIX(local_170,local_11c);
        }
        else {
          *(undefined *)((long)local_168 + (long)*(int *)((long)puVar51 + 0x1684)) = 0;
        }
        if (param_7 == 0) {
          silk_stereo_encode_pred(local_90,local_e0 + (long)*(int *)((long)puVar51 + 0x1684) * 6);
          if (*(char *)((long)local_168 + (long)*(int *)((long)puVar51 + 0x1684)) == '\0') {
            silk_stereo_encode_mid_only(local_90,local_b0[*(int *)((long)puVar51 + 0x1684)]);
          }
        }
      }
      else {
        *(undefined4 *)(puVar51 + 0x27f) = *(undefined4 *)((long)puVar40 + 4);
        *(undefined4 *)((long)puVar40 + 4) =
             *(undefined4 *)((long)puVar48 + (long)*(int *)(puVar51 + 0x23d) * 2);
      }
      bVar13 = local_d4 != 2;
      silk_encode_do_VAD_FIX(puVar51,local_11c);
      puVar51 = local_a0;
      uVar35 = param_2[1];
      uVar37 = (ulong)uVar35;
      bVar14 = local_bc != 0;
      iVar32 = local_bc;
      iVar30 = local_114;
      if (0 < (int)uVar35) {
        iVar31 = param_2[0xe];
        if (bVar13 || bVar14) {
          iVar32 = iVar31;
          if (local_d4 == 3) {
            if (local_bc == 0) {
              iVar32 = iVar31 << 1;
              goto LAB_00e83758;
            }
            if (local_bc == 1) {
              iVar34 = iVar31 * 3;
              iVar32 = iVar34 + 3;
              if (-1 < iVar34) {
                iVar32 = iVar34;
              }
              iVar32 = iVar32 >> 2;
            }
          }
        }
        else {
          iVar32 = iVar31 * 3;
LAB_00e83758:
          iVar32 = iVar32 / 5;
        }
        bVar15 = param_2[0xd] != 0 && local_bc == local_b8;
        iVar34 = iVar33;
        if ((uVar35 != 1) && (iVar34 = local_80[0], 0 < local_80[1])) {
          bVar15 = false;
          iVar50 = 0;
          if (local_1a4 != 0) {
            iVar50 = iVar31 / local_1a4;
          }
          iVar32 = iVar32 - iVar50;
        }
        if (0 < iVar34) {
          silk_control_SNR(local_a0);
          iVar30 = silk_encode_frame_FIX
                             (puVar51,local_c8,local_90,
                              (ulong)(0 < *(int *)((long)puVar51 + 0x1684)) << 1,iVar32,bVar15);
          uVar37 = (ulong)(uint)param_2[1];
        }
        *(undefined4 *)((long)puVar51 + 0x123c) = 0;
        *(undefined4 *)((long)puVar51 + 0x167c) = 0;
        *(int *)((long)puVar51 + 0x1684) = *(int *)((long)puVar51 + 0x1684) + 1;
        iVar32 = local_bc;
        if (1 < (int)uVar37) {
          lVar53 = 1;
          puVar51 = local_180;
          do {
            iVar31 = param_2[0xe];
            if (bVar13 || bVar14) {
              if (local_d4 == 3) {
                if (iVar32 == 0) {
                  iVar31 = iVar31 << 1;
                  goto LAB_00e839b4;
                }
                if (iVar32 == 1) {
                  iVar34 = iVar31 * 3;
                  iVar31 = iVar34 + 3;
                  if (-1 < iVar34) {
                    iVar31 = iVar34;
                  }
                  iVar31 = iVar31 >> 2;
                }
              }
            }
            else {
              iVar31 = iVar31 * 3;
LAB_00e839b4:
              iVar31 = iVar31 / 5;
            }
            iVar34 = param_2[0xd];
            bVar15 = iVar32 == local_b8;
            iVar50 = iVar33;
            if ((int)uVar37 != 1) {
              iVar50 = local_80[lVar53];
            }
            if (0 < iVar50) {
              silk_control_SNR(puVar51);
              if (lVar53 < *(int *)((long)local_a0 + 0x1684)) {
                uVar36 = 1;
                if (*(int *)((long)local_d0 + 0x54) == 0) {
                  uVar36 = 2;
                }
              }
              else {
                uVar36 = 0;
              }
              iVar30 = silk_encode_frame_FIX
                                 (puVar51,local_c8,local_90,uVar36,iVar31,iVar34 != 0 && bVar15);
              uVar37 = (ulong)(uint)param_2[1];
              iVar32 = local_bc;
            }
            *(undefined4 *)((long)puVar51 + 0x123c) = 0;
            *(undefined4 *)((long)puVar51 + 0x167c) = 0;
            lVar53 = lVar53 + 1;
            *(int *)((long)puVar51 + 0x1684) = *(int *)((long)puVar51 + 0x1684) + 1;
            puVar51 = puVar51 + 0x43a;
          } while (lVar53 < (int)uVar37);
        }
      }
      puVar51 = local_a0;
      puVar40 = local_d0;
      auVar72._8_4_ = 1;
      auVar72._0_8_ = 0x100000001;
      auVar72._12_4_ = 1;
      iVar31 = *(int *)((long)local_a0 + 0x1684);
      param_4 = local_104 - (int)local_f0;
      *(uint *)((long)local_d0 + 0x54) = (uint)(byte)local_b0[(long)iVar31 + -1];
      if ((0 < *local_c8) && (iVar31 == *(int *)(local_a0 + 0x2d0))) {
        iVar33 = (int)uVar37;
        if (iVar33 < 1) {
          uVar35 = 0;
        }
        else {
          uVar44 = 0;
          uVar35 = 0;
          puVar48 = local_1b0;
          do {
            uVar43 = (ulong)*(uint *)(local_a0 + uVar44 * 0x43a + 0x2d0);
            puVar52 = puVar48;
            if (0 < (int)*(uint *)(local_a0 + uVar44 * 0x43a + 0x2d0)) {
              do {
                uVar43 = uVar43 - 1;
                uVar35 = (int)*(char *)puVar52 | uVar35 << 1;
                puVar52 = (undefined8 *)((long)puVar52 + 1);
              } while (uVar43 != 0);
            }
            puVar48 = puVar48 + 0x43a;
            lVar53 = uVar44 * 0x21d0;
            uVar44 = uVar44 + 1;
            uVar35 = (int)*(char *)((long)local_a0 + lVar53 + 0x1283) | uVar35 << 1;
          } while (uVar44 != uVar37);
        }
        if (param_7 == 0) {
          ec_enc_patch_initial_bits(local_90,uVar35,iVar33 + iVar33 * iVar31);
          auVar72._8_4_ = 1;
          auVar72._0_8_ = 0x100000001;
          auVar72._12_4_ = 1;
          iVar32 = local_bc;
        }
        if ((*(int *)((long)puVar51 + 0x17d4) != 0) &&
           ((param_2[1] == 1 || (*(int *)((long)puVar51 + 0x39a4) != 0)))) {
          *local_c8 = 0;
        }
        iVar31 = param_2[6];
        iVar33 = iVar31 * param_2[7];
        uVar35 = ((int)((long)iVar33 * -0x10624dd3 >> 0x26) -
                 (iVar33 / -0x773f73f7 + (iVar33 >> 0x1f))) +
                 *(int *)((long)puVar40 + 0x3c) + *local_c8 * 8;
        uVar35 = uVar35 & ((int)uVar35 >> 0x1f ^ 0xffffffffU);
        iVar33 = *(int *)((long)puVar51 + 0x11b4);
        if (0x270 < uVar35 >> 4) {
          uVar35 = 10000;
        }
        *(uint *)((long)puVar40 + 0x3c) = uVar35;
        if (iVar33 < (int)((ulong)((long)(short)*(int *)((long)puVar40 + 0x4c) * 0xc74) >> 0x10) +
                     0xd) {
          iVar31 = 0;
          *(undefined4 *)(puVar40 + 10) = 1;
        }
        else {
          iVar31 = *(int *)((long)puVar40 + 0x4c) + iVar31;
          *(undefined4 *)(puVar40 + 10) = 0;
        }
        *(int *)((long)puVar40 + 0x4c) = iVar31;
      }
      if (param_4 == 0) goto LAB_00e84038;
      iVar32 = iVar32 + 1;
      iVar33 = *(int *)((long)puVar51 + 0x11cc);
      __src = __src + local_118 * (int)local_f0;
      iVar31 = *(int *)(puVar51 + 0x23c);
    } while( true );
  }
  iVar30 = -0x65;
  goto LAB_00e82b4c;
LAB_00e84038:
  uVar35 = param_2[1];
  *(uint *)(puVar40 + 9) = uVar35;
  param_2[0x13] = *(int *)(puVar40 + 10);
  iVar31 = *(int *)(puVar51 + 0x23c);
joined_r0x00e84024:
  uVar37 = (ulong)uVar35;
  if (iVar31 == 0x10) {
                    /* WARNING: Read-only address (ram,0x004c34b0) is written */
                    /* WARNING: Read-only address (ram,0x004c51c0) is written */
    uVar42 = (uint)(*(int *)((long)puVar51 + 0x1c) == 0);
  }
  else {
                    /* WARNING: Read-only address (ram,0x004c34b0) is written */
                    /* WARNING: Read-only address (ram,0x004c51c0) is written */
    uVar42 = 0;
  }
  param_2[0x14] = uVar42;
  param_2[0x12] = (short)iVar31 * 1000;
  if (param_2[0xf] == 0) {
    param_2[0x15] = (int)*(short *)((long)puVar40 + 0x1c);
  }
  else {
    param_2[0x15] = 0;
  }
  if (param_7 != 0) {
    param_2[6] = local_1f0;
    param_2[9] = local_1ec;
    if (0 < (int)uVar35) {
      if (uVar35 == 1) {
        uVar43 = 0;
      }
      else {
        uVar43 = uVar37 & 0xfffffffe;
        uVar44 = uVar43;
        puVar40 = puVar51;
        do {
          *(undefined4 *)((long)puVar40 + 0x123c) = 0;
          uVar44 = uVar44 - 2;
          *(undefined4 *)((long)puVar40 + 0x340c) = 0;
          *(undefined4 *)(puVar40 + 0x249) = 0;
          *(undefined4 *)(puVar40 + 0x683) = 0;
          puVar40 = puVar40 + 0x874;
        } while (uVar44 != 0);
        if (uVar43 == uVar37) goto LAB_00e8412c;
      }
      lVar38 = uVar37 - uVar43;
      puVar46 = (undefined4 *)((long)puVar51 + uVar43 * 0x21d0 + 0x123c);
      do {
        *puVar46 = 0;
        lVar38 = lVar38 + -1;
        puVar46[3] = 0;
        puVar46 = puVar46 + 0x874;
      } while (lVar38 != 0);
    }
  }
LAB_00e8412c:
  cVar5 = *apcStack_200[1];
  param_2[0x17] = (int)cVar5;
  param_2[0x18] =
       (int)*(short *)((long)&silk_Quantization_Offsets_Q10 +
                      (long)apcStack_200[1][1] * 2 + (long)((int)cVar5 >> 1) * 4);
  lVar38 = local_1c0;
LAB_00e82b4c:
  if (*(long *)(lVar38 + 0x28) == local_70) {
    return iVar30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


