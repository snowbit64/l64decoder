// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_find_filter
// Entry Point: 00dcb980
// Size: 5436 bytes
// Signature: undefined png_write_find_filter(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_write_find_filter(long param_1,long param_2)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  uint3 uVar16;
  bool bVar17;
  uint5 uVar18;
  undefined *puVar19;
  undefined (*pauVar20) [16];
  undefined (*pauVar21) [16];
  undefined (*pauVar22) [16];
  undefined (*pauVar23) [16];
  long lVar24;
  ulong uVar25;
  undefined (*pauVar26) [16];
  ulong uVar27;
  ulong uVar28;
  byte *pbVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong uVar35;
  undefined (*pauVar36) [16];
  uint uVar37;
  undefined8 *puVar38;
  uint uVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  char *pcVar42;
  char *pcVar43;
  byte *pbVar44;
  ulong *puVar45;
  char *pcVar46;
  char *pcVar47;
  undefined8 *puVar48;
  ulong uVar49;
  long lVar50;
  char *pcVar51;
  char *pcVar52;
  undefined8 *puVar53;
  ushort uVar54;
  ushort uVar55;
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  uint uVar64;
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined8 uVar87;
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined auVar91 [16];
  byte bVar92;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined4 uVar109;
  undefined4 uVar110;
  undefined4 uVar111;
  undefined4 uVar112;
  undefined4 uVar113;
  undefined4 uVar114;
  undefined4 uVar115;
  undefined4 uVar116;
  int iVar117;
  int iVar127;
  int iVar128;
  undefined auVar118 [16];
  int iVar129;
  undefined auVar119 [16];
  undefined auVar120 [16];
  undefined auVar121 [16];
  undefined auVar122 [16];
  undefined auVar123 [16];
  undefined auVar124 [16];
  undefined auVar125 [16];
  undefined auVar126 [16];
  int iVar130;
  long lVar131;
  int iVar142;
  undefined auVar132 [16];
  int iVar141;
  int iVar144;
  undefined auVar133 [16];
  long lVar143;
  undefined auVar134 [16];
  undefined auVar135 [16];
  undefined auVar136 [16];
  undefined auVar137 [16];
  undefined auVar138 [16];
  undefined auVar139 [16];
  undefined auVar140 [16];
  int iVar145;
  long lVar146;
  int iVar154;
  undefined auVar147 [16];
  int iVar153;
  int iVar156;
  undefined auVar148 [16];
  long lVar155;
  undefined auVar149 [16];
  undefined auVar150 [16];
  undefined auVar151 [16];
  undefined auVar152 [16];
  int iVar157;
  long lVar158;
  int iVar166;
  undefined auVar159 [16];
  int iVar165;
  int iVar168;
  undefined auVar160 [16];
  long lVar167;
  undefined auVar161 [16];
  undefined auVar162 [16];
  undefined auVar163 [16];
  undefined auVar164 [16];
  long lVar169;
  undefined auVar170 [16];
  undefined auVar171 [16];
  long lVar178;
  undefined auVar172 [16];
  undefined auVar173 [16];
  undefined auVar174 [16];
  undefined auVar175 [16];
  undefined auVar176 [16];
  undefined auVar177 [16];
  long lVar179;
  undefined auVar180 [16];
  undefined auVar181 [16];
  long lVar188;
  undefined auVar182 [16];
  undefined auVar183 [16];
  undefined auVar184 [16];
  undefined auVar185 [16];
  undefined auVar186 [16];
  undefined auVar187 [16];
  int iVar189;
  long lVar190;
  int iVar196;
  int iVar197;
  long lVar198;
  undefined auVar191 [16];
  undefined auVar192 [16];
  undefined auVar193 [16];
  undefined auVar194 [16];
  undefined auVar195 [16];
  int iVar199;
  int iVar200;
  long lVar201;
  int iVar207;
  int iVar208;
  long lVar209;
  undefined auVar202 [16];
  undefined auVar203 [16];
  undefined auVar204 [16];
  undefined auVar205 [16];
  undefined auVar206 [16];
  int iVar210;
  int iVar211;
  int iVar215;
  int iVar216;
  undefined auVar212 [16];
  undefined auVar213 [16];
  undefined auVar214 [16];
  int iVar217;
  int iVar218;
  int iVar221;
  int iVar222;
  undefined auVar219 [16];
  undefined auVar220 [16];
  int iVar223;
  undefined auVar224 [16];
  undefined auVar225 [16];
  undefined auVar226 [16];
  undefined auVar227 [16];
  undefined auVar228 [16];
  undefined auVar229 [16];
  undefined auVar230 [16];
  undefined auVar231 [16];
  undefined auVar232 [16];
  undefined auVar233 [16];
  undefined auVar234 [16];
  undefined4 uVar235;
  undefined4 uVar236;
  undefined4 uVar237;
  undefined4 uVar238;
  undefined4 uVar239;
  undefined4 uVar240;
  undefined4 uVar241;
  undefined4 uVar242;
  undefined auVar95 [16];
  
  bVar92 = *(byte *)(param_2 + 0x13);
  uVar30 = *(ulong *)(param_2 + 8);
  bVar98 = *(byte *)(param_1 + 0x29e);
  uVar37 = (uint)bVar98;
  uVar35 = (ulong)bVar92 + 7 >> 3;
  pbVar29 = *(byte **)(param_1 + 0x260);
  if (uVar30 < 0x1ffffffffffffff) {
    uVar32 = 0xfffffffffffffeff;
    if (((bVar98 >> 3 & 1) != 0) && (uVar37 != 8)) {
      if (uVar30 == 0) {
        uVar32 = 0;
      }
      else {
        if (uVar30 < 8) {
          uVar32 = 0;
          uVar49 = 0;
          pbVar44 = pbVar29;
        }
        else {
          if (uVar30 < 0x10) {
            uVar32 = 0;
            uVar25 = 0;
          }
          else {
            uVar49 = uVar30 & 0xfffffffffffffff0;
            auVar73 = ZEXT816(0);
            auVar68._8_8_ = 0xffffffffffffffff;
            auVar68._0_8_ = 0xffffffffffffffff;
            lVar146 = 0;
            lVar155 = 0;
            lVar50 = 0;
            lVar24 = 0;
            lVar158 = 0;
            lVar167 = 0;
            lVar131 = 0;
            lVar143 = 0;
            lVar190 = 0;
            lVar198 = 0;
            lVar169 = 0;
            lVar178 = 0;
            lVar201 = 0;
            lVar209 = 0;
            lVar179 = 0;
            lVar188 = 0;
            pauVar23 = (undefined (*) [16])(pbVar29 + 1);
            uVar32 = uVar49;
            do {
              auVar118 = *pauVar23;
              uVar32 = uVar32 - 0x10;
              auVar180 = NEON_cmgt(auVar118,auVar68,1);
              auVar132 = a64_TBL(ZEXT816(0),auVar118,auVar73,_DAT_004c37b0);
              auVar170 = a64_TBL(ZEXT816(0),auVar118,auVar73,_DAT_004c4a50);
              auVar147 = a64_TBL(ZEXT816(0),auVar118,auVar73,_DAT_004c4f40);
              auVar138 = a64_TBL(ZEXT816(0),auVar118,auVar73,_DAT_004c4d70);
              auVar124._4_4_ = (int)(short)auVar180[5];
              auVar124._0_4_ = (int)(short)auVar180[4];
              auVar124._12_4_ = (int)(short)auVar180[7];
              auVar124._8_4_ = (int)(short)auVar180[6];
              auVar220._0_4_ = (int)(short)auVar180[8];
              auVar220._4_4_ = (int)(short)auVar180[9];
              auVar220._8_4_ = (int)(short)auVar180[10];
              auVar220._12_4_ = (int)(short)auVar180[11];
              auVar232._0_4_ = (int)(short)auVar180[0];
              auVar232._4_4_ = (int)(short)auVar180[1];
              auVar232._8_4_ = (int)(short)auVar180[2];
              auVar232._12_4_ = (int)(short)auVar180[3];
              auVar118._4_4_ = 0x100 - auVar132._4_4_;
              auVar118._0_4_ = 0x100 - auVar132._0_4_;
              auVar118._8_4_ = 0x100 - auVar132._8_4_;
              auVar118._12_4_ = 0x100 - auVar132._12_4_;
              auVar220 = NEON_bsl(auVar220,auVar132,auVar118,1);
              auVar159._4_4_ = 0x100 - auVar147._4_4_;
              auVar159._0_4_ = 0x100 - auVar147._0_4_;
              auVar159._8_4_ = 0x100 - auVar147._8_4_;
              auVar159._12_4_ = 0x100 - auVar147._12_4_;
              auVar159 = NEON_bif(auVar147,auVar159,auVar232,1);
              auVar132._4_4_ = 0x100 - auVar170._4_4_;
              auVar132._0_4_ = 0x100 - auVar170._0_4_;
              auVar132._8_4_ = 0x100 - auVar170._8_4_;
              auVar132._12_4_ = 0x100 - auVar170._12_4_;
              auVar147._4_4_ = (int)(short)auVar180[13];
              auVar147._0_4_ = (int)(short)auVar180[12];
              auVar147._8_4_ = (int)(short)auVar180[14];
              auVar147._12_4_ = (int)(short)auVar180[15];
              auVar118 = NEON_bif(auVar170,auVar132,auVar147,1);
              lVar169 = lVar169 + (auVar220._8_8_ & 0xffffffff);
              lVar178 = lVar178 + (auVar220._8_8_ >> 0x20);
              auVar170._4_4_ = 0x100 - auVar138._4_4_;
              auVar170._0_4_ = 0x100 - auVar138._0_4_;
              auVar170._8_4_ = 0x100 - auVar138._8_4_;
              auVar170._12_4_ = 0x100 - auVar138._12_4_;
              auVar132 = NEON_bsl(auVar124,auVar138,auVar170,1);
              lVar190 = lVar190 + (ulong)auVar220._0_4_;
              lVar198 = lVar198 + (ulong)auVar220._4_4_;
              lVar201 = lVar201 + (ulong)auVar118._0_4_;
              lVar209 = lVar209 + (ulong)auVar118._4_4_;
              lVar179 = lVar179 + (auVar118._8_8_ & 0xffffffff);
              lVar188 = lVar188 + (auVar118._8_8_ >> 0x20);
              lVar131 = lVar131 + (auVar132._8_8_ & 0xffffffff);
              lVar143 = lVar143 + (auVar132._8_8_ >> 0x20);
              lVar158 = lVar158 + (ulong)auVar132._0_4_;
              lVar167 = lVar167 + (ulong)auVar132._4_4_;
              lVar50 = lVar50 + (auVar159._8_8_ & 0xffffffff);
              lVar24 = lVar24 + (ulong)auVar159._12_4_;
              lVar146 = lVar146 + (ulong)auVar159._0_4_;
              lVar155 = lVar155 + (ulong)auVar159._4_4_;
              pauVar23 = pauVar23 + 1;
            } while (uVar32 != 0);
            uVar32 = lVar146 + lVar190 + lVar158 + lVar201 + lVar50 + lVar169 + lVar131 + lVar179 +
                     lVar155 + lVar198 + lVar167 + lVar209 + lVar24 + lVar178 + lVar143 + lVar188;
            if (uVar30 == uVar49) goto LAB_00dcb9c8;
            uVar25 = uVar49;
            if (((uint)uVar30 >> 3 & 1) == 0) {
              pbVar44 = pbVar29 + uVar49;
              goto LAB_00dcca9c;
            }
          }
          uVar49 = uVar30 & 0xfffffffffffffff8;
          pbVar44 = pbVar29 + uVar49;
          lVar24 = 0;
          lVar50 = uVar25 - uVar49;
          lVar131 = 0;
          lVar143 = 0;
          lVar146 = 0;
          lVar155 = 0;
          lVar158 = 0;
          lVar167 = 0;
          puVar33 = (ulong *)(pbVar29 + uVar25 + 1);
          do {
            auVar73._0_8_ = *puVar33;
            auVar73._8_8_ = 0;
            lVar50 = lVar50 + 8;
            uVar31 = NEON_cmgt(auVar73._0_8_,0xffffffffffffffff,1);
            auVar68 = a64_TBL(ZEXT816(0),auVar73,ZEXT816(0),_DAT_004c4d70);
            auVar73 = a64_TBL(ZEXT816(0),auVar73,ZEXT816(0),_DAT_004c4f40);
            auVar138._0_4_ = 0x100 - auVar68._0_4_;
            auVar138._4_4_ = 0x100 - auVar68._4_4_;
            auVar138._8_4_ = 0x100 - auVar68._8_4_;
            auVar138._12_4_ = 0x100 - auVar68._12_4_;
            auVar186._0_4_ = 0x100 - auVar73._0_4_;
            auVar186._4_4_ = 0x100 - auVar73._4_4_;
            auVar186._8_4_ = 0x100 - auVar73._8_4_;
            auVar186._12_4_ = 0x100 - auVar73._12_4_;
            auVar176._0_4_ = (int)(short)(char)((ulong)uVar31 >> 0x20);
            auVar176._4_4_ = (int)(short)(char)((ulong)uVar31 >> 0x28);
            auVar176._8_4_ = (int)(short)(char)((ulong)uVar31 >> 0x30);
            auVar176._12_4_ = (int)(short)(char)((ulong)uVar31 >> 0x38);
            auVar180._0_4_ = (int)(short)(char)uVar31;
            auVar180._4_4_ = (int)(short)(char)((ulong)uVar31 >> 8);
            auVar180._8_4_ = (int)(short)(char)((ulong)uVar31 >> 0x10);
            auVar180._12_4_ = (int)(short)(char)((ulong)uVar31 >> 0x18);
            auVar68 = NEON_bif(auVar68,auVar138,auVar176,1);
            auVar73 = NEON_bsl(auVar180,auVar73,auVar186,1);
            lVar158 = lVar158 + (auVar68._8_8_ & 0xffffffff);
            lVar167 = lVar167 + (auVar68._8_8_ >> 0x20);
            lVar131 = lVar131 + (auVar73._8_8_ & 0xffffffff);
            lVar143 = lVar143 + (ulong)auVar73._12_4_;
            lVar146 = lVar146 + (ulong)auVar68._0_4_;
            lVar155 = lVar155 + (ulong)auVar68._4_4_;
            uVar32 = uVar32 + auVar73._0_4_;
            lVar24 = lVar24 + (ulong)auVar73._4_4_;
            puVar33 = puVar33 + 1;
          } while (lVar50 != 0);
          uVar32 = uVar32 + lVar146 + lVar131 + lVar158 + lVar24 + lVar155 + lVar143 + lVar167;
          if (uVar30 == uVar49) goto LAB_00dcb9c8;
        }
LAB_00dcca9c:
        lVar50 = uVar30 - uVar49;
        do {
          pbVar44 = pbVar44 + 1;
          bVar98 = *pbVar44;
          uVar39 = (uint)bVar98;
          if ((char)bVar98 < '\0') {
            uVar39 = 0x100 - bVar98;
          }
          lVar50 = lVar50 + -1;
          uVar32 = uVar32 + uVar39;
        } while (lVar50 != 0);
      }
    }
  }
  else {
    uVar37 = (uint)bVar98 & -(uint)bVar98;
    uVar32 = 0xfffffffffffffeff;
  }
LAB_00dcb9c8:
  if (uVar37 == 0x10) {
    puVar19 = *(undefined **)(param_1 + 0x268);
    pauVar23 = (undefined (*) [16])(pbVar29 + 1);
    puVar40 = (undefined8 *)(puVar19 + 1);
    *puVar19 = 1;
    puVar41 = puVar40;
    pauVar20 = pauVar23;
    if (bVar92 != 0) {
      if ((bVar92 < 0x79) ||
         ((puVar40 < pbVar29 + uVar35 + 1 && (pauVar23 < (undefined (*) [16])(puVar19 + uVar35 + 1))
          ))) {
        uVar49 = 0;
      }
      else {
        uVar49 = uVar35 & 0x30;
        auVar73 = *pauVar23;
        pauVar20 = (undefined (*) [16])(*pauVar23 + uVar49);
        puVar41 = (undefined8 *)((long)puVar40 + uVar49);
        *(long *)(puVar19 + 9) = auVar73._8_8_;
        *puVar40 = auVar73._0_8_;
        if (uVar49 != 0x10) {
          auVar73 = *(undefined (*) [16])(pbVar29 + 0x11);
          *(long *)(puVar19 + 0x19) = auVar73._8_8_;
          *(long *)(puVar19 + 0x11) = auVar73._0_8_;
        }
        if (uVar49 == uVar35) goto LAB_00dcbadc;
      }
      lVar50 = uVar35 - uVar49;
      puVar40 = puVar41;
      pauVar21 = pauVar20;
      do {
        pauVar20 = (undefined (*) [16])(*pauVar21 + 1);
        lVar50 = lVar50 + -1;
        puVar41 = (undefined8 *)((long)puVar40 + 1);
        *(undefined *)puVar40 = (*pauVar21)[0];
        puVar40 = puVar41;
        pauVar21 = pauVar20;
      } while (lVar50 != 0);
    }
LAB_00dcbadc:
    uVar49 = uVar30 - uVar35;
    if (uVar35 <= uVar30 && uVar49 != 0) {
      uVar25 = uVar35;
      if (7 < uVar49) {
        if ((pbVar29 + uVar49 + 1 <= puVar41 ||
             (undefined (*) [16])((long)puVar41 + uVar49) <= pauVar23) &&
           ((undefined8 *)((long)pauVar20 + uVar49) <= puVar41 ||
            (undefined (*) [16])((long)puVar41 + uVar49) <= pauVar20)) {
          if (uVar49 < 0x20) {
            uVar27 = 0;
          }
          else {
            uVar27 = uVar49 & 0xffffffffffffffe0;
            pauVar23 = (undefined (*) [16])(pbVar29 + 0x11);
            puVar40 = puVar41 + 2;
            pauVar21 = pauVar20 + 1;
            uVar25 = uVar27;
            do {
              auVar73 = pauVar21[-1];
              auVar68 = *pauVar21;
              uVar25 = uVar25 - 0x20;
              pauVar21 = pauVar21 + 2;
              auVar118 = pauVar23[-1];
              auVar132 = *pauVar23;
              pauVar23 = pauVar23 + 2;
              auVar62._0_8_ =
                   CONCAT17(auVar73[7] - auVar118[7],
                            CONCAT16(auVar73[6] - auVar118[6],
                                     CONCAT15(auVar73[5] - auVar118[5],
                                              CONCAT14(auVar73[4] - auVar118[4],
                                                       CONCAT13(auVar73[3] - auVar118[3],
                                                                CONCAT12(auVar73[2] - auVar118[2],
                                                                         CONCAT11(auVar73[1] -
                                                                                  auVar118[1],
                                                                                  auVar73[0] -
                                                                                  auVar118[0])))))))
              ;
              auVar62[8] = auVar73[8] - auVar118[8];
              auVar62[9] = auVar73[9] - auVar118[9];
              auVar62[10] = auVar73[10] - auVar118[10];
              auVar62[11] = auVar73[11] - auVar118[11];
              auVar62[12] = auVar73[12] - auVar118[12];
              auVar62[13] = auVar73[13] - auVar118[13];
              auVar62[14] = auVar73[14] - auVar118[14];
              auVar62[15] = auVar73[15] - auVar118[15];
              auVar71._0_8_ =
                   CONCAT17(auVar68[7] - auVar132[7],
                            CONCAT16(auVar68[6] - auVar132[6],
                                     CONCAT15(auVar68[5] - auVar132[5],
                                              CONCAT14(auVar68[4] - auVar132[4],
                                                       CONCAT13(auVar68[3] - auVar132[3],
                                                                CONCAT12(auVar68[2] - auVar132[2],
                                                                         CONCAT11(auVar68[1] -
                                                                                  auVar132[1],
                                                                                  auVar68[0] -
                                                                                  auVar132[0])))))))
              ;
              auVar71[8] = auVar68[8] - auVar132[8];
              auVar71[9] = auVar68[9] - auVar132[9];
              auVar71[10] = auVar68[10] - auVar132[10];
              auVar71[11] = auVar68[11] - auVar132[11];
              auVar71[12] = auVar68[12] - auVar132[12];
              auVar71[13] = auVar68[13] - auVar132[13];
              auVar71[14] = auVar68[14] - auVar132[14];
              auVar71[15] = auVar68[15] - auVar132[15];
              puVar40[-1] = auVar62._8_8_;
              puVar40[-2] = auVar62._0_8_;
              puVar40[1] = auVar71._8_8_;
              *puVar40 = auVar71._0_8_;
              puVar40 = puVar40 + 4;
            } while (uVar25 != 0);
            if (uVar49 == uVar27) goto LAB_00dcbb1c;
            if ((uVar49 & 0x18) == 0) {
              pauVar20 = (undefined (*) [16])(*pauVar20 + uVar27);
              puVar41 = (undefined8 *)((long)puVar41 + uVar27);
              pbVar29 = pbVar29 + uVar27;
              uVar25 = uVar27 + uVar35;
              goto LAB_00dcbafc;
            }
          }
          uVar28 = uVar49 & 0xfffffffffffffff8;
          lVar50 = uVar27 - uVar28;
          puVar40 = (undefined8 *)(pbVar29 + uVar27 + 1);
          puVar38 = (undefined8 *)((long)puVar41 + uVar27);
          puVar48 = (undefined8 *)(*pauVar20 + uVar27);
          do {
            uVar31 = *puVar48;
            uVar87 = *puVar40;
            lVar50 = lVar50 + 8;
            *puVar38 = CONCAT17((char)((ulong)uVar31 >> 0x38) - (char)((ulong)uVar87 >> 0x38),
                                CONCAT16((char)((ulong)uVar31 >> 0x30) -
                                         (char)((ulong)uVar87 >> 0x30),
                                         CONCAT15((char)((ulong)uVar31 >> 0x28) -
                                                  (char)((ulong)uVar87 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar31 >> 0x20) -
                                                           (char)((ulong)uVar87 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar31 >> 0x18) -
                                                                    (char)((ulong)uVar87 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar31 >>
                                                                                   0x10) -
                                                                             (char)((ulong)uVar87 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar31 >> 8) - (char)((ulong)uVar87 >> 8),
                                                  (char)uVar31 - (char)uVar87)))))));
            puVar40 = puVar40 + 1;
            puVar38 = puVar38 + 1;
            puVar48 = puVar48 + 1;
          } while (lVar50 != 0);
          pauVar20 = (undefined (*) [16])(*pauVar20 + uVar28);
          pbVar29 = pbVar29 + uVar28;
          uVar25 = uVar28 + uVar35;
          puVar41 = (undefined8 *)((long)puVar41 + uVar28);
          if (uVar49 == uVar28) goto LAB_00dcbb1c;
        }
      }
LAB_00dcbafc:
      lVar50 = uVar30 - uVar25;
      do {
        pbVar29 = pbVar29 + 1;
        lVar50 = lVar50 + -1;
        *(byte *)puVar41 = (*pauVar20)[0] - *pbVar29;
        pauVar20 = (undefined (*) [16])(*pauVar20 + 1);
        puVar41 = (undefined8 *)((long)puVar41 + 1);
      } while (lVar50 != 0);
    }
LAB_00dcbb1c:
    pbVar29 = *(byte **)(param_1 + 0x268);
  }
  else if ((uVar37 >> 4 & 1) != 0) {
    puVar19 = *(undefined **)(param_1 + 0x268);
    pauVar23 = (undefined (*) [16])(pbVar29 + 1);
    puVar40 = (undefined8 *)(puVar19 + 1);
    *puVar19 = 1;
    puVar41 = puVar40;
    pauVar20 = pauVar23;
    if (bVar92 == 0) {
      uVar49 = 0;
    }
    else {
      if ((bVar92 < 0x79) ||
         ((puVar40 < pbVar29 + uVar35 + 1 && (pauVar23 < (undefined (*) [16])(puVar19 + uVar35 + 1))
          ))) {
        uVar49 = 0;
        uVar25 = 0;
      }
      else {
        auVar90._8_8_ = 0xffffffffffffffff;
        auVar90._0_8_ = 0xffffffffffffffff;
        auVar73 = *pauVar23;
        uVar25 = uVar35 & 0x30;
        pauVar20 = (undefined (*) [16])(*pauVar23 + uVar25);
        puVar41 = (undefined8 *)((long)puVar40 + uVar25);
        bVar98 = auVar73[1];
        uVar39 = (uint)CONCAT12(bVar98,(ushort)auVar73[0]);
        auVar68 = NEON_cmgt(auVar73,auVar90,1);
        *(long *)(puVar19 + 9) = auVar73._8_8_;
        *puVar40 = auVar73._0_8_;
        bVar99 = auVar73[9];
        uVar64 = (uint)CONCAT12(bVar99,(ushort)auVar73[8]);
        uVar54 = CONCAT11(0,auVar73[4]);
        auVar82._2_2_ = 0;
        auVar82._0_2_ = uVar54;
        auVar82[4] = auVar73[5];
        auVar82._5_3_ = 0;
        auVar82[8] = auVar73[6];
        auVar82._9_3_ = 0;
        auVar82[12] = auVar73[7];
        auVar82._13_3_ = 0;
        auVar204._6_2_ = 0;
        auVar204._0_6_ = (uint6)CONCAT14(bVar98,uVar39) & 0xffff0000ffff;
        auVar204[8] = auVar73[2];
        auVar204._9_3_ = 0;
        auVar204[12] = auVar73[3];
        auVar204._13_3_ = 0;
        auVar174._6_2_ = 0;
        auVar174._0_6_ = (uint6)CONCAT14(bVar99,uVar64) & 0xffff0000ffff;
        auVar174[8] = auVar73[10];
        auVar174._9_3_ = 0;
        auVar174[12] = auVar73[11];
        auVar174._13_3_ = 0;
        uVar55 = CONCAT11(0,auVar73[12]);
        auVar107._2_2_ = 0;
        auVar107._0_2_ = uVar55;
        auVar107[4] = auVar73[13];
        auVar107._5_3_ = 0;
        auVar107[8] = auVar73[14];
        auVar107._9_3_ = 0;
        auVar107[12] = auVar73[15];
        auVar107._13_3_ = 0;
        auVar136._0_4_ = 0x100 - (uVar39 & 0xffff);
        auVar136._4_4_ = 0x100 - (uint)bVar98;
        auVar136._8_4_ = 0x100 - (uint)auVar73[2];
        auVar136._12_4_ = 0x100 - (uint)auVar73[3];
        auVar151._0_4_ = 0x100 - (uint)uVar54;
        auVar151._4_4_ = 0x100 - (uint)auVar73[5];
        auVar151._8_4_ = 0x100 - (uint)auVar73[6];
        auVar151._12_4_ = 0x100 - (uint)auVar73[7];
        auVar184._0_8_ = CONCAT44((int)(short)auVar68[9],(int)(short)auVar68[8]);
        auVar184._8_4_ = (int)(short)auVar68[10];
        auVar184._12_4_ = (int)(short)auVar68[11];
        auVar76._0_8_ = CONCAT44((int)(short)auVar68[13],(int)(short)auVar68[12]);
        auVar76._8_4_ = (int)(short)auVar68[14];
        auVar76._12_4_ = (int)(short)auVar68[15];
        auVar163._0_8_ = CONCAT44((int)(short)auVar68[5],(int)(short)auVar68[4]);
        auVar163._8_4_ = (int)(short)auVar68[6];
        auVar163._12_4_ = (int)(short)auVar68[7];
        auVar193._0_4_ = 0x100 - (uint)uVar55;
        auVar193._4_4_ = 0x100 - (uint)auVar73[13];
        auVar193._8_4_ = 0x100 - (uint)auVar73[14];
        auVar193._12_4_ = 0x100 - (uint)auVar73[15];
        auVar229._0_4_ = 0x100 - (uVar64 & 0xffff);
        auVar229._4_4_ = 0x100 - (uint)bVar99;
        auVar229._8_4_ = 0x100 - (uint)auVar73[10];
        auVar229._12_4_ = 0x100 - (uint)auVar73[11];
        auVar227._8_8_ = auVar76._8_8_;
        auVar227._0_8_ = auVar76._0_8_;
        auVar77._8_8_ = auVar184._8_8_;
        auVar77._0_8_ = auVar184._0_8_;
        auVar122._0_8_ = CONCAT44((int)(short)auVar68[1],(int)(short)auVar68[0]);
        auVar122._8_4_ = (int)(short)auVar68[2];
        auVar122._12_4_ = (int)(short)auVar68[3];
        auVar73 = NEON_bsl(auVar227,auVar107,auVar193,1);
        auVar118 = NEON_bsl(auVar77,auVar174,auVar229,1);
        auVar234._8_8_ = auVar163._8_8_;
        auVar234._0_8_ = auVar163._0_8_;
        auVar68 = NEON_bsl(auVar234,auVar82,auVar151,1);
        auVar83._8_8_ = auVar122._8_8_;
        auVar83._0_8_ = auVar122._0_8_;
        auVar132 = NEON_bsl(auVar83,auVar204,auVar136,1);
        auVar195 = auVar73;
        auVar206 = auVar68;
        auVar214 = auVar118;
        auVar225 = auVar132;
        if (uVar25 != 0x10) {
          auVar147 = *(undefined (*) [16])(pbVar29 + 0x11);
          auVar159 = NEON_cmgt(auVar147,auVar90,1);
          bVar98 = auVar147[1];
          uVar64 = (uint)CONCAT12(bVar98,(ushort)auVar147[0]);
          bVar99 = auVar147[9];
          uVar39 = (uint)CONCAT12(bVar99,(ushort)auVar147[8]);
          *(long *)(puVar19 + 0x19) = auVar147._8_8_;
          *(long *)(puVar19 + 0x11) = auVar147._0_8_;
          uVar54 = CONCAT11(0,auVar147[12]);
          auVar137._2_2_ = 0;
          auVar137._0_2_ = uVar54;
          auVar137[4] = auVar147[13];
          auVar137._5_3_ = 0;
          auVar137[8] = auVar147[14];
          auVar137._9_3_ = 0;
          auVar137[12] = auVar147[15];
          auVar137._13_3_ = 0;
          uVar55 = CONCAT11(0,auVar147[4]);
          auVar152._2_2_ = 0;
          auVar152._0_2_ = uVar55;
          auVar152[4] = auVar147[5];
          auVar152._5_3_ = 0;
          auVar152[8] = auVar147[6];
          auVar152._9_3_ = 0;
          auVar152[12] = auVar147[7];
          auVar152._13_3_ = 0;
          auVar175._0_4_ = 0x100 - (uint)uVar54;
          auVar175._4_4_ = 0x100 - (uint)auVar147[13];
          auVar175._8_4_ = 0x100 - (uint)auVar147[14];
          auVar175._12_4_ = 0x100 - (uint)auVar147[15];
          auVar185._0_4_ = 0x100 - (uVar39 & 0xffff);
          auVar185._4_4_ = 0x100 - (uint)bVar99;
          auVar185._8_4_ = 0x100 - (uint)auVar147[10];
          auVar185._12_4_ = 0x100 - (uint)auVar147[11];
          auVar194._0_4_ = 0x100 - (uint)uVar55;
          auVar194._4_4_ = 0x100 - (uint)auVar147[5];
          auVar194._8_4_ = 0x100 - (uint)auVar147[6];
          auVar194._12_4_ = 0x100 - (uint)auVar147[7];
          auVar86._0_4_ = 0x100 - (uVar64 & 0xffff);
          auVar86._4_4_ = 0x100 - (uint)bVar98;
          auVar86._8_4_ = 0x100 - (uint)auVar147[2];
          auVar86._12_4_ = 0x100 - (uint)auVar147[3];
          auVar205._0_4_ = (int)(short)auVar159[12];
          auVar205._4_4_ = (int)(short)auVar159[13];
          auVar205._8_4_ = (int)(short)auVar159[14];
          auVar205._12_4_ = (int)(short)auVar159[15];
          auVar108._6_2_ = 0;
          auVar108._0_6_ = (uint6)CONCAT14(bVar99,uVar39) & 0xffff0000ffff;
          auVar108[8] = auVar147[10];
          auVar108._9_3_ = 0;
          auVar108[12] = auVar147[11];
          auVar108._13_3_ = 0;
          auVar164._0_4_ = (int)(short)auVar159[8];
          auVar164._4_4_ = (int)(short)auVar159[9];
          auVar164._8_4_ = (int)(short)auVar159[10];
          auVar164._12_4_ = (int)(short)auVar159[11];
          auVar123._6_2_ = 0;
          auVar123._0_6_ = (uint6)CONCAT14(bVar98,uVar64) & 0xffff0000ffff;
          auVar123[8] = auVar147[2];
          auVar123._9_3_ = 0;
          auVar123[12] = auVar147[3];
          auVar123._13_3_ = 0;
          auVar213._0_4_ = (int)(short)auVar159[4];
          auVar213._4_4_ = (int)(short)auVar159[5];
          auVar213._8_4_ = (int)(short)auVar159[6];
          auVar213._12_4_ = (int)(short)auVar159[7];
          auVar91._0_4_ = (int)(short)auVar159[0];
          auVar91._4_4_ = (int)(short)auVar159[1];
          auVar91._8_4_ = (int)(short)auVar159[2];
          auVar91._12_4_ = (int)(short)auVar159[3];
          auVar170 = NEON_bif(auVar137,auVar175,auVar205,1);
          auVar159 = NEON_bif(auVar108,auVar185,auVar164,1);
          auVar180 = NEON_bif(auVar152,auVar194,auVar213,1);
          auVar147 = NEON_bit(auVar86,auVar123,auVar91,1);
          auVar195._0_4_ = auVar73._0_4_ + auVar170._0_4_;
          auVar195._4_4_ = auVar73._4_4_ + auVar170._4_4_;
          auVar195._8_4_ = auVar73._8_4_ + auVar170._8_4_;
          auVar195._12_4_ = auVar73._12_4_ + auVar170._12_4_;
          auVar214._0_4_ = auVar118._0_4_ + auVar159._0_4_;
          auVar214._4_4_ = auVar118._4_4_ + auVar159._4_4_;
          auVar214._8_4_ = auVar118._8_4_ + auVar159._8_4_;
          auVar214._12_4_ = auVar118._12_4_ + auVar159._12_4_;
          auVar206._0_4_ = auVar68._0_4_ + auVar180._0_4_;
          auVar206._4_4_ = auVar68._4_4_ + auVar180._4_4_;
          auVar206._8_4_ = auVar68._8_4_ + auVar180._8_4_;
          auVar206._12_4_ = auVar68._12_4_ + auVar180._12_4_;
          auVar225._0_4_ = auVar132._0_4_ + auVar147._0_4_;
          auVar225._4_4_ = auVar132._4_4_ + auVar147._4_4_;
          auVar225._8_4_ = auVar132._8_4_ + auVar147._8_4_;
          auVar225._12_4_ = auVar132._12_4_ + auVar147._12_4_;
        }
        uVar49 = (ulong)auVar225._0_4_ + (ulong)auVar214._0_4_ +
                 (ulong)auVar206._0_4_ + (ulong)auVar195._0_4_ +
                 (auVar225._8_8_ & 0xffffffff) + (auVar214._8_8_ & 0xffffffff) +
                 (auVar206._8_8_ & 0xffffffff) + (auVar195._8_8_ & 0xffffffff) +
                 (ulong)auVar225._4_4_ + (ulong)auVar214._4_4_ +
                 (ulong)auVar206._4_4_ + (ulong)auVar195._4_4_ +
                 (auVar225._8_8_ >> 0x20) + (auVar214._8_8_ >> 0x20) +
                 (auVar206._8_8_ >> 0x20) + (auVar195._8_8_ >> 0x20);
        if (uVar25 == uVar35) goto LAB_00dcc2a8;
      }
      lVar50 = uVar35 - uVar25;
      puVar40 = puVar41;
      pauVar21 = pauVar20;
      do {
        pauVar20 = (undefined (*) [16])(*pauVar21 + 1);
        bVar98 = (*pauVar21)[0];
        uVar39 = (uint)bVar98;
        if ((char)bVar98 < '\0') {
          uVar39 = 0x100 - bVar98;
        }
        lVar50 = lVar50 + -1;
        uVar49 = uVar49 + uVar39;
        puVar41 = (undefined8 *)((long)puVar40 + 1);
        *(byte *)puVar40 = bVar98;
        puVar40 = puVar41;
        pauVar21 = pauVar20;
      } while (lVar50 != 0);
    }
LAB_00dcc2a8:
    uVar25 = uVar35;
    if (uVar35 < uVar30) {
      do {
        uVar25 = uVar25 + 1;
        bVar98 = (*pauVar20)[0] - (*pauVar23)[0];
        uVar39 = (uint)bVar98;
        if ((char)bVar98 < '\0') {
          uVar39 = 0x100 - bVar98;
        }
        uVar49 = uVar49 + uVar39;
        *(byte *)puVar41 = bVar98;
        pauVar23 = (undefined (*) [16])(*pauVar23 + 1);
        puVar41 = (undefined8 *)((long)puVar41 + 1);
        pauVar20 = (undefined (*) [16])(*pauVar20 + 1);
      } while (uVar49 <= uVar32 && uVar25 < uVar30);
    }
    if (uVar49 < uVar32) {
      pbVar29 = *(byte **)(param_1 + 0x268);
      uVar32 = uVar49;
      if (*(long *)(param_1 + 0x270) != 0) {
        *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x270);
        *(byte **)(param_1 + 0x270) = pbVar29;
      }
    }
  }
  if (uVar37 == 0x20) {
    pcVar42 = *(char **)(param_1 + 600);
    pcVar46 = *(char **)(param_1 + 0x268);
    pcVar51 = *(char **)(param_1 + 0x260);
    *pcVar46 = '\x02';
    if (uVar30 != 0) {
      pcVar43 = pcVar42;
      pcVar47 = pcVar46;
      pcVar52 = pcVar51;
      if (uVar30 < 8) {
        uVar49 = 0;
      }
      else {
        lVar50 = uVar30 + 1;
        uVar49 = 0;
        if ((pcVar51 + lVar50 <= pcVar46 + 1 || pcVar46 + lVar50 <= pcVar51 + 1) &&
           (pcVar42 + lVar50 <= pcVar46 + 1 || pcVar46 + lVar50 <= pcVar42 + 1)) {
          if (uVar30 < 0x20) {
            uVar25 = 0;
          }
          else {
            uVar49 = uVar30 & 0xffffffffffffffe0;
            pauVar23 = (undefined (*) [16])(pcVar51 + 0x11);
            pauVar20 = (undefined (*) [16])(pcVar42 + 0x11);
            puVar41 = (undefined8 *)(pcVar46 + 0x11);
            uVar25 = uVar49;
            do {
              auVar73 = pauVar23[-1];
              auVar68 = *pauVar23;
              pauVar23 = pauVar23 + 2;
              uVar25 = uVar25 - 0x20;
              auVar118 = pauVar20[-1];
              auVar132 = *pauVar20;
              pauVar20 = pauVar20 + 2;
              auVar61._0_8_ =
                   CONCAT17(auVar73[7] - auVar118[7],
                            CONCAT16(auVar73[6] - auVar118[6],
                                     CONCAT15(auVar73[5] - auVar118[5],
                                              CONCAT14(auVar73[4] - auVar118[4],
                                                       CONCAT13(auVar73[3] - auVar118[3],
                                                                CONCAT12(auVar73[2] - auVar118[2],
                                                                         CONCAT11(auVar73[1] -
                                                                                  auVar118[1],
                                                                                  auVar73[0] -
                                                                                  auVar118[0])))))))
              ;
              auVar61[8] = auVar73[8] - auVar118[8];
              auVar61[9] = auVar73[9] - auVar118[9];
              auVar61[10] = auVar73[10] - auVar118[10];
              auVar61[11] = auVar73[11] - auVar118[11];
              auVar61[12] = auVar73[12] - auVar118[12];
              auVar61[13] = auVar73[13] - auVar118[13];
              auVar61[14] = auVar73[14] - auVar118[14];
              auVar61[15] = auVar73[15] - auVar118[15];
              auVar70._0_8_ =
                   CONCAT17(auVar68[7] - auVar132[7],
                            CONCAT16(auVar68[6] - auVar132[6],
                                     CONCAT15(auVar68[5] - auVar132[5],
                                              CONCAT14(auVar68[4] - auVar132[4],
                                                       CONCAT13(auVar68[3] - auVar132[3],
                                                                CONCAT12(auVar68[2] - auVar132[2],
                                                                         CONCAT11(auVar68[1] -
                                                                                  auVar132[1],
                                                                                  auVar68[0] -
                                                                                  auVar132[0])))))))
              ;
              auVar70[8] = auVar68[8] - auVar132[8];
              auVar70[9] = auVar68[9] - auVar132[9];
              auVar70[10] = auVar68[10] - auVar132[10];
              auVar70[11] = auVar68[11] - auVar132[11];
              auVar70[12] = auVar68[12] - auVar132[12];
              auVar70[13] = auVar68[13] - auVar132[13];
              auVar70[14] = auVar68[14] - auVar132[14];
              auVar70[15] = auVar68[15] - auVar132[15];
              puVar41[-1] = auVar61._8_8_;
              puVar41[-2] = auVar61._0_8_;
              puVar41[1] = auVar70._8_8_;
              *puVar41 = auVar70._0_8_;
              puVar41 = puVar41 + 4;
            } while (uVar25 != 0);
            if (uVar30 == uVar49) goto LAB_00dcbb74;
            uVar25 = uVar49;
            if ((uVar30 & 0x18) == 0) {
              pcVar47 = pcVar46 + uVar49;
              pcVar43 = pcVar42 + uVar49;
              pcVar52 = pcVar51 + uVar49;
              goto LAB_00dcbb4c;
            }
          }
          uVar49 = uVar30 & 0xfffffffffffffff8;
          lVar50 = uVar25 + 1;
          pcVar52 = pcVar51 + uVar49;
          pcVar43 = pcVar42 + uVar49;
          pcVar47 = pcVar46 + uVar49;
          lVar24 = uVar25 - uVar49;
          puVar41 = (undefined8 *)(pcVar42 + lVar50);
          puVar40 = (undefined8 *)(pcVar46 + lVar50);
          puVar38 = (undefined8 *)(pcVar51 + lVar50);
          do {
            uVar31 = *puVar38;
            uVar87 = *puVar41;
            lVar24 = lVar24 + 8;
            *puVar40 = CONCAT17((char)((ulong)uVar31 >> 0x38) - (char)((ulong)uVar87 >> 0x38),
                                CONCAT16((char)((ulong)uVar31 >> 0x30) -
                                         (char)((ulong)uVar87 >> 0x30),
                                         CONCAT15((char)((ulong)uVar31 >> 0x28) -
                                                  (char)((ulong)uVar87 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar31 >> 0x20) -
                                                           (char)((ulong)uVar87 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar31 >> 0x18) -
                                                                    (char)((ulong)uVar87 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar31 >>
                                                                                   0x10) -
                                                                             (char)((ulong)uVar87 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar31 >> 8) - (char)((ulong)uVar87 >> 8),
                                                  (char)uVar31 - (char)uVar87)))))));
            puVar41 = puVar41 + 1;
            puVar40 = puVar40 + 1;
            puVar38 = puVar38 + 1;
          } while (lVar24 != 0);
          if (uVar30 == uVar49) goto LAB_00dcbb74;
        }
      }
LAB_00dcbb4c:
      lVar50 = uVar30 - uVar49;
      do {
        pcVar52 = pcVar52 + 1;
        pcVar47 = pcVar47 + 1;
        pcVar43 = pcVar43 + 1;
        lVar50 = lVar50 + -1;
        *pcVar47 = *pcVar52 - *pcVar43;
      } while (lVar50 != 0);
    }
LAB_00dcbb74:
    pbVar29 = *(byte **)(param_1 + 0x268);
  }
  else if ((uVar37 >> 5 & 1) != 0) {
    puVar19 = *(undefined **)(param_1 + 0x268);
    lVar50 = *(long *)(param_1 + 600);
    lVar24 = *(long *)(param_1 + 0x260);
    *puVar19 = 2;
    uVar49 = 0;
    if (uVar30 != 0) {
      uVar25 = 1;
      do {
        bVar98 = *(char *)(lVar24 + uVar25) - *(char *)(lVar50 + uVar25);
        uVar39 = (uint)bVar98;
        if ((char)bVar98 < '\0') {
          uVar39 = 0x100 - bVar98;
        }
        puVar19[uVar25] = bVar98;
        uVar49 = uVar49 + uVar39;
        bVar17 = uVar25 < uVar30;
        uVar25 = uVar25 + 1;
      } while (uVar49 <= uVar32 && bVar17);
    }
    if (uVar49 < uVar32) {
      pbVar29 = *(byte **)(param_1 + 0x268);
      uVar32 = uVar49;
      if (*(long *)(param_1 + 0x270) != 0) {
        *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x270);
        *(byte **)(param_1 + 0x270) = pbVar29;
      }
    }
  }
  uVar39 = (uint)uVar35;
  if (uVar37 == 0x40) {
    lVar50 = *(long *)(param_1 + 600);
    puVar19 = *(undefined **)(param_1 + 0x268);
    pbVar29 = *(byte **)(param_1 + 0x260);
    pauVar23 = (undefined (*) [16])(lVar50 + 1);
    pauVar20 = (undefined (*) [16])(pbVar29 + 1);
    puVar40 = (undefined8 *)(puVar19 + 1);
    *puVar19 = 3;
    pauVar21 = pauVar20;
    pauVar36 = pauVar23;
    puVar41 = puVar40;
    if (bVar92 != 0) {
      uVar64 = uVar39 - 1;
      if (uVar64 < 0xf) {
LAB_00dcbc3c:
        uVar27 = 0;
      }
      else {
        lVar24 = (ulong)uVar64 + 2;
        if ((puVar40 < pbVar29 + lVar24 && pauVar20 < (undefined (*) [16])(puVar19 + lVar24)) ||
           (puVar40 < (undefined8 *)(lVar50 + lVar24) &&
            pauVar23 < (undefined (*) [16])(puVar19 + lVar24))) goto LAB_00dcbc3c;
        uVar49 = (ulong)uVar64 + 1;
        uVar27 = uVar49 & 0x1fffffff0;
        pauVar21 = (undefined (*) [16])(*pauVar20 + uVar27);
        pauVar36 = (undefined (*) [16])(*pauVar23 + uVar27);
        puVar41 = (undefined8 *)((long)puVar40 + uVar27);
        uVar25 = uVar27;
        pauVar22 = pauVar20;
        do {
          auVar73 = *pauVar23;
          auVar68 = *pauVar22;
          uVar25 = uVar25 - 0x10;
          auVar56._0_8_ =
               CONCAT17(auVar68[7] - (auVar73[7] >> 1),
                        CONCAT16(auVar68[6] - (auVar73[6] >> 1),
                                 CONCAT15(auVar68[5] - (auVar73[5] >> 1),
                                          CONCAT14(auVar68[4] - (auVar73[4] >> 1),
                                                   CONCAT13(auVar68[3] - (auVar73[3] >> 1),
                                                            CONCAT12(auVar68[2] - (auVar73[2] >> 1),
                                                                     CONCAT11(auVar68[1] -
                                                                              (auVar73[1] >> 1),
                                                                              auVar68[0] -
                                                                              (auVar73[0] >> 1))))))
                                ));
          auVar56[8] = auVar68[8] - (auVar73[8] >> 1);
          auVar56[9] = auVar68[9] - (auVar73[9] >> 1);
          auVar56[10] = auVar68[10] - (auVar73[10] >> 1);
          auVar56[11] = auVar68[11] - (auVar73[11] >> 1);
          auVar56[12] = auVar68[12] - (auVar73[12] >> 1);
          auVar56[13] = auVar68[13] - (auVar73[13] >> 1);
          auVar56[14] = auVar68[14] - (auVar73[14] >> 1);
          auVar56[15] = auVar68[15] - (auVar73[15] >> 1);
          puVar40[1] = auVar56._8_8_;
          *puVar40 = auVar56._0_8_;
          puVar40 = puVar40 + 2;
          pauVar23 = pauVar23 + 1;
          pauVar22 = pauVar22 + 1;
        } while (uVar25 != 0);
        if (uVar49 == uVar27) goto LAB_00dcbcb4;
      }
      iVar117 = uVar39 - (int)uVar27;
      pauVar23 = pauVar21;
      pauVar22 = pauVar36;
      puVar40 = puVar41;
      do {
        pauVar21 = (undefined (*) [16])(*pauVar23 + 1);
        pauVar36 = (undefined (*) [16])(*pauVar22 + 1);
        iVar117 = iVar117 + -1;
        puVar41 = (undefined8 *)((long)puVar40 + 1);
        *(byte *)puVar40 = (*pauVar23)[0] - ((byte)(*pauVar22)[0] >> 1);
        pauVar23 = pauVar21;
        pauVar22 = pauVar36;
        puVar40 = puVar41;
      } while (iVar117 != 0);
    }
LAB_00dcbcb4:
    uVar49 = uVar30 - uVar35;
    if (uVar35 <= uVar30 && uVar49 != 0) {
      uVar25 = uVar35;
      if (((7 < uVar49) && ((uint)(uVar30 + ~uVar35) <= -uVar39 - 2)) &&
         (uVar30 + ~uVar35 >> 0x20 == 0)) {
        pauVar23 = (undefined (*) [16])((long)puVar41 + uVar49);
        if (((pbVar29 + uVar49 + 1 <= puVar41 || pauVar23 <= pauVar20) &&
            ((undefined8 *)((long)pauVar21 + uVar49) <= puVar41 || pauVar23 <= pauVar21)) &&
           ((undefined8 *)((long)pauVar36 + uVar49) <= puVar41 || pauVar23 <= pauVar36)) {
          if (uVar49 < 0x20) {
            uVar27 = 0;
          }
          else {
            uVar27 = uVar49 & 0xffffffffffffffe0;
            pauVar23 = (undefined (*) [16])(pbVar29 + 0x11);
            pauVar20 = pauVar36 + 1;
            pauVar22 = pauVar21 + 1;
            puVar40 = puVar41 + 2;
            uVar25 = uVar27;
            do {
              pauVar26 = pauVar20 + -1;
              auVar73 = *pauVar20;
              uVar25 = uVar25 - 0x20;
              pauVar20 = pauVar20 + 2;
              pauVar1 = pauVar23 + -1;
              auVar68 = *pauVar23;
              pauVar23 = pauVar23 + 2;
              auVar118 = NEON_uhadd(*pauVar1,*pauVar26,1);
              auVar132 = NEON_uhadd(auVar68,auVar73,1);
              auVar73 = pauVar22[-1];
              auVar68 = *pauVar22;
              pauVar22 = pauVar22 + 2;
              auVar63._0_8_ =
                   CONCAT17(auVar73[7] - auVar118[7],
                            CONCAT16(auVar73[6] - auVar118[6],
                                     CONCAT15(auVar73[5] - auVar118[5],
                                              CONCAT14(auVar73[4] - auVar118[4],
                                                       CONCAT13(auVar73[3] - auVar118[3],
                                                                CONCAT12(auVar73[2] - auVar118[2],
                                                                         CONCAT11(auVar73[1] -
                                                                                  auVar118[1],
                                                                                  auVar73[0] -
                                                                                  auVar118[0])))))))
              ;
              auVar63[8] = auVar73[8] - auVar118[8];
              auVar63[9] = auVar73[9] - auVar118[9];
              auVar63[10] = auVar73[10] - auVar118[10];
              auVar63[11] = auVar73[11] - auVar118[11];
              auVar63[12] = auVar73[12] - auVar118[12];
              auVar63[13] = auVar73[13] - auVar118[13];
              auVar63[14] = auVar73[14] - auVar118[14];
              auVar63[15] = auVar73[15] - auVar118[15];
              auVar72._0_8_ =
                   CONCAT17(auVar68[7] - auVar132[7],
                            CONCAT16(auVar68[6] - auVar132[6],
                                     CONCAT15(auVar68[5] - auVar132[5],
                                              CONCAT14(auVar68[4] - auVar132[4],
                                                       CONCAT13(auVar68[3] - auVar132[3],
                                                                CONCAT12(auVar68[2] - auVar132[2],
                                                                         CONCAT11(auVar68[1] -
                                                                                  auVar132[1],
                                                                                  auVar68[0] -
                                                                                  auVar132[0])))))))
              ;
              auVar72[8] = auVar68[8] - auVar132[8];
              auVar72[9] = auVar68[9] - auVar132[9];
              auVar72[10] = auVar68[10] - auVar132[10];
              auVar72[11] = auVar68[11] - auVar132[11];
              auVar72[12] = auVar68[12] - auVar132[12];
              auVar72[13] = auVar68[13] - auVar132[13];
              auVar72[14] = auVar68[14] - auVar132[14];
              auVar72[15] = auVar68[15] - auVar132[15];
              puVar40[-1] = auVar63._8_8_;
              puVar40[-2] = auVar63._0_8_;
              puVar40[1] = auVar72._8_8_;
              *puVar40 = auVar72._0_8_;
              puVar40 = puVar40 + 4;
            } while (uVar25 != 0);
            if (uVar49 == uVar27) goto LAB_00dcbd0c;
            if ((uVar49 & 0x18) == 0) {
              pauVar21 = (undefined (*) [16])(*pauVar21 + uVar27);
              puVar41 = (undefined8 *)((long)puVar41 + uVar27);
              pauVar36 = (undefined (*) [16])(*pauVar36 + uVar27);
              pbVar29 = pbVar29 + uVar27;
              uVar25 = (ulong)(uVar39 + (int)uVar27);
              goto LAB_00dcbcdc;
            }
          }
          uVar28 = uVar49 & 0xfffffffffffffff8;
          lVar50 = uVar27 - uVar28;
          puVar40 = (undefined8 *)(pbVar29 + uVar27 + 1);
          puVar38 = (undefined8 *)(*pauVar21 + uVar27);
          puVar48 = (undefined8 *)(*pauVar36 + uVar27);
          puVar53 = (undefined8 *)((long)puVar41 + uVar27);
          do {
            lVar50 = lVar50 + 8;
            uVar31 = NEON_uhadd(*puVar40,*puVar48,1);
            uVar87 = *puVar38;
            *puVar53 = CONCAT17((char)((ulong)uVar87 >> 0x38) - (char)((ulong)uVar31 >> 0x38),
                                CONCAT16((char)((ulong)uVar87 >> 0x30) -
                                         (char)((ulong)uVar31 >> 0x30),
                                         CONCAT15((char)((ulong)uVar87 >> 0x28) -
                                                  (char)((ulong)uVar31 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar87 >> 0x20) -
                                                           (char)((ulong)uVar31 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar87 >> 0x18) -
                                                                    (char)((ulong)uVar31 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar87 >>
                                                                                   0x10) -
                                                                             (char)((ulong)uVar31 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar87 >> 8) - (char)((ulong)uVar31 >> 8),
                                                  (char)uVar87 - (char)uVar31)))))));
            puVar40 = puVar40 + 1;
            puVar38 = puVar38 + 1;
            puVar48 = puVar48 + 1;
            puVar53 = puVar53 + 1;
          } while (lVar50 != 0);
          puVar41 = (undefined8 *)((long)puVar41 + uVar28);
          pauVar21 = (undefined (*) [16])(*pauVar21 + uVar28);
          pbVar29 = pbVar29 + uVar28;
          uVar25 = (ulong)(uVar39 + (int)uVar28);
          pauVar36 = (undefined (*) [16])(*pauVar36 + uVar28);
          if (uVar49 == uVar28) goto LAB_00dcbd0c;
        }
      }
LAB_00dcbcdc:
      uVar39 = (uint)uVar25;
      do {
        uVar39 = uVar39 + 1;
        pbVar29 = pbVar29 + 1;
        *(char *)puVar41 = (*pauVar21)[0] - (char)((uint)*pbVar29 + (uint)(byte)(*pauVar36)[0] >> 1)
        ;
        puVar41 = (undefined8 *)((long)puVar41 + 1);
        pauVar21 = (undefined (*) [16])(*pauVar21 + 1);
        pauVar36 = (undefined (*) [16])(*pauVar36 + 1);
      } while (uVar39 < uVar30);
    }
LAB_00dcbd0c:
    pbVar29 = *(byte **)(param_1 + 0x268);
  }
  else if ((uVar37 >> 6 & 1) != 0) {
    lVar24 = *(long *)(param_1 + 600);
    puVar19 = *(undefined **)(param_1 + 0x268);
    lVar50 = *(long *)(param_1 + 0x260);
    pauVar23 = (undefined (*) [16])(lVar24 + 1);
    pauVar20 = (undefined (*) [16])(lVar50 + 1);
    puVar40 = (undefined8 *)(puVar19 + 1);
    *puVar19 = 3;
    auVar132 = _DAT_004c4f40;
    auVar118 = _DAT_004c4d70;
    auVar68 = _DAT_004c4a50;
    auVar73 = _DAT_004c37b0;
    pauVar21 = pauVar20;
    pauVar36 = pauVar23;
    puVar41 = puVar40;
    if (bVar92 == 0) {
      uVar49 = 0;
    }
    else {
      uVar64 = uVar39 - 1;
      if (uVar64 < 0xf) {
LAB_00dcc598:
        uVar27 = 0;
        uVar49 = 0;
      }
      else {
        lVar131 = (ulong)uVar64 + 2;
        if ((puVar40 < (undefined8 *)(lVar50 + lVar131) &&
             pauVar20 < (undefined (*) [16])(puVar19 + lVar131)) ||
           (puVar40 < (undefined8 *)(lVar24 + lVar131) &&
            pauVar23 < (undefined (*) [16])(puVar19 + lVar131))) goto LAB_00dcc598;
        uVar25 = (ulong)uVar64 + 1;
        uVar27 = uVar25 & 0x1fffffff0;
        auVar147 = ZEXT816(0);
        pauVar21 = (undefined (*) [16])(*pauVar20 + uVar27);
        auVar94._8_8_ = 0xffffffffffffffff;
        auVar94._0_8_ = 0xffffffffffffffff;
        pauVar36 = (undefined (*) [16])(*pauVar23 + uVar27);
        lVar146 = 0;
        lVar155 = 0;
        puVar41 = (undefined8 *)((long)puVar40 + uVar27);
        lVar50 = 0;
        lVar24 = 0;
        lVar158 = 0;
        lVar167 = 0;
        lVar131 = 0;
        lVar143 = 0;
        lVar190 = 0;
        lVar198 = 0;
        lVar169 = 0;
        lVar178 = 0;
        lVar201 = 0;
        lVar209 = 0;
        lVar179 = 0;
        lVar188 = 0;
        uVar49 = uVar27;
        pauVar22 = pauVar20;
        do {
          auVar159 = *pauVar23;
          auVar170 = *pauVar22;
          uVar49 = uVar49 - 0x10;
          auVar78._0_8_ =
               CONCAT17(auVar170[7] - (auVar159[7] >> 1),
                        CONCAT16(auVar170[6] - (auVar159[6] >> 1),
                                 CONCAT15(auVar170[5] - (auVar159[5] >> 1),
                                          CONCAT14(auVar170[4] - (auVar159[4] >> 1),
                                                   CONCAT13(auVar170[3] - (auVar159[3] >> 1),
                                                            CONCAT12(auVar170[2] -
                                                                     (auVar159[2] >> 1),
                                                                     CONCAT11(auVar170[1] -
                                                                              (auVar159[1] >> 1),
                                                                              auVar170[0] -
                                                                              (auVar159[0] >> 1)))))
                                         )));
          auVar78[8] = auVar170[8] - (auVar159[8] >> 1);
          auVar78[9] = auVar170[9] - (auVar159[9] >> 1);
          auVar78[10] = auVar170[10] - (auVar159[10] >> 1);
          auVar78[11] = auVar170[11] - (auVar159[11] >> 1);
          auVar78[12] = auVar170[12] - (auVar159[12] >> 1);
          auVar78[13] = auVar170[13] - (auVar159[13] >> 1);
          auVar78[14] = auVar170[14] - (auVar159[14] >> 1);
          auVar78[15] = auVar170[15] - (auVar159[15] >> 1);
          auVar170 = NEON_cmgt(auVar78,auVar94,1);
          auVar180 = a64_TBL(ZEXT816(0),auVar78,auVar147,auVar73);
          auVar159 = a64_TBL(ZEXT816(0),auVar78,auVar147,auVar68);
          auVar220 = a64_TBL(ZEXT816(0),auVar78,auVar147,auVar132);
          auVar124 = a64_TBL(ZEXT816(0),auVar78,auVar147,auVar118);
          auVar224._4_4_ = (int)(short)auVar170[5];
          auVar224._0_4_ = (int)(short)auVar170[4];
          auVar224._12_4_ = (int)(short)auVar170[7];
          auVar224._8_4_ = (int)(short)auVar170[6];
          auVar219._0_4_ = (int)(short)auVar170[8];
          auVar219._4_4_ = (int)(short)auVar170[9];
          auVar219._8_4_ = (int)(short)auVar170[10];
          auVar219._12_4_ = (int)(short)auVar170[11];
          auVar231._0_4_ = (int)(short)auVar170[0];
          auVar231._4_4_ = (int)(short)auVar170[1];
          auVar231._8_4_ = (int)(short)auVar170[2];
          auVar231._12_4_ = (int)(short)auVar170[3];
          auVar5._4_4_ = 0x100 - auVar180._4_4_;
          auVar5._0_4_ = 0x100 - auVar180._0_4_;
          auVar5._8_4_ = 0x100 - auVar180._8_4_;
          auVar5._12_4_ = 0x100 - auVar180._12_4_;
          auVar180 = NEON_bsl(auVar219,auVar180,auVar5,1);
          auVar12._4_4_ = 0x100 - auVar220._4_4_;
          auVar12._0_4_ = 0x100 - auVar220._0_4_;
          auVar12._8_4_ = 0x100 - auVar220._8_4_;
          auVar12._12_4_ = 0x100 - auVar220._12_4_;
          auVar220 = NEON_bif(auVar220,auVar12,auVar231,1);
          auVar8._4_4_ = 0x100 - auVar159._4_4_;
          auVar8._0_4_ = 0x100 - auVar159._0_4_;
          auVar8._8_4_ = 0x100 - auVar159._8_4_;
          auVar8._12_4_ = 0x100 - auVar159._12_4_;
          auVar9._4_4_ = (int)(short)auVar170[13];
          auVar9._0_4_ = (int)(short)auVar170[12];
          auVar9._8_4_ = (int)(short)auVar170[14];
          auVar9._12_4_ = (int)(short)auVar170[15];
          auVar159 = NEON_bif(auVar159,auVar8,auVar9,1);
          lVar169 = lVar169 + (auVar180._8_8_ & 0xffffffff);
          lVar178 = lVar178 + (auVar180._8_8_ >> 0x20);
          auVar15._4_4_ = 0x100 - auVar124._4_4_;
          auVar15._0_4_ = 0x100 - auVar124._0_4_;
          auVar15._8_4_ = 0x100 - auVar124._8_4_;
          auVar15._12_4_ = 0x100 - auVar124._12_4_;
          auVar170 = NEON_bsl(auVar224,auVar124,auVar15,1);
          lVar190 = lVar190 + (ulong)auVar180._0_4_;
          lVar198 = lVar198 + (ulong)auVar180._4_4_;
          lVar179 = lVar179 + (auVar159._8_8_ & 0xffffffff);
          lVar188 = lVar188 + (auVar159._8_8_ >> 0x20);
          lVar201 = lVar201 + (ulong)auVar159._0_4_;
          lVar209 = lVar209 + (ulong)auVar159._4_4_;
          lVar131 = lVar131 + (auVar170._8_8_ & 0xffffffff);
          lVar143 = lVar143 + (auVar170._8_8_ >> 0x20);
          lVar158 = lVar158 + (ulong)auVar170._0_4_;
          lVar167 = lVar167 + (ulong)auVar170._4_4_;
          lVar50 = lVar50 + (auVar220._8_8_ & 0xffffffff);
          lVar24 = lVar24 + (ulong)auVar220._12_4_;
          lVar146 = lVar146 + (ulong)auVar220._0_4_;
          lVar155 = lVar155 + (ulong)auVar220._4_4_;
          puVar40[1] = auVar78._8_8_;
          *puVar40 = auVar78._0_8_;
          puVar40 = puVar40 + 2;
          pauVar23 = pauVar23 + 1;
          pauVar22 = pauVar22 + 1;
        } while (uVar49 != 0);
        uVar49 = lVar146 + lVar190 + lVar158 + lVar201 + lVar50 + lVar169 + lVar131 + lVar179 +
                 lVar155 + lVar198 + lVar167 + lVar209 + lVar24 + lVar178 + lVar143 + lVar188;
        if (uVar25 == uVar27) goto LAB_00dcc5dc;
      }
      iVar117 = uVar39 - (int)uVar27;
      pauVar23 = pauVar21;
      pauVar22 = pauVar36;
      puVar40 = puVar41;
      do {
        bVar98 = (*pauVar23)[0] - ((byte)(*pauVar22)[0] >> 1);
        uVar64 = (uint)bVar98;
        if ((char)bVar98 < '\0') {
          uVar64 = 0x100 - bVar98;
        }
        iVar117 = iVar117 + -1;
        uVar49 = uVar49 + uVar64;
        *(byte *)puVar40 = bVar98;
        pauVar21 = (undefined (*) [16])(*pauVar23 + 1);
        pauVar23 = (undefined (*) [16])(*pauVar23 + 1);
        pauVar36 = (undefined (*) [16])(*pauVar22 + 1);
        pauVar22 = (undefined (*) [16])(*pauVar22 + 1);
        puVar41 = (undefined8 *)((long)puVar40 + 1);
        puVar40 = (undefined8 *)((long)puVar40 + 1);
      } while (iVar117 != 0);
    }
LAB_00dcc5dc:
    if (uVar35 < uVar30) {
      do {
        uVar39 = uVar39 + 1;
        uVar64 = (uint)(byte)(*pauVar21)[0] -
                 ((uint)(byte)(*pauVar20)[0] + (uint)(byte)(*pauVar36)[0] >> 1);
        bVar98 = (byte)uVar64;
        uVar64 = uVar64 & 0xff;
        if ((char)bVar98 < '\0') {
          uVar64 = 0x100 - uVar64;
        }
        uVar49 = uVar49 + uVar64;
        *(byte *)puVar41 = bVar98;
        pauVar20 = (undefined (*) [16])(*pauVar20 + 1);
        pauVar21 = (undefined (*) [16])(*pauVar21 + 1);
        pauVar36 = (undefined (*) [16])(*pauVar36 + 1);
        puVar41 = (undefined8 *)((long)puVar41 + 1);
      } while ((uVar32 >= uVar49 && uVar39 <= uVar30) && (uVar32 < uVar49 || uVar30 != uVar39));
    }
    if (uVar49 < uVar32) {
      pbVar29 = *(byte **)(param_1 + 0x268);
      uVar32 = uVar49;
      if (*(long *)(param_1 + 0x270) != 0) {
        *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x270);
        *(byte **)(param_1 + 0x270) = pbVar29;
      }
    }
  }
  if (uVar37 != 0x80) {
    if (uVar37 >> 7 == 0) goto LAB_00dcbe48;
    lVar50 = *(long *)(param_1 + 600);
    puVar19 = *(undefined **)(param_1 + 0x268);
    lVar24 = *(long *)(param_1 + 0x260);
    pauVar23 = (undefined (*) [16])(lVar50 + 1);
    pauVar20 = (undefined (*) [16])(lVar24 + 1);
    puVar41 = (undefined8 *)(puVar19 + 1);
    *puVar19 = 4;
    pauVar21 = pauVar20;
    pauVar36 = pauVar23;
    if (bVar92 == 0) {
      uVar49 = 0;
      puVar40 = puVar41;
    }
    else {
      if (bVar92 < 0x79) {
        uVar49 = 0;
        uVar25 = 0;
      }
      else {
        lVar131 = uVar35 + 1;
        uVar49 = 0;
        if ((puVar41 < (undefined8 *)(lVar24 + lVar131) &&
             pauVar20 < (undefined (*) [16])(puVar19 + lVar131)) ||
           (puVar41 < (undefined8 *)(lVar50 + lVar131) &&
            pauVar23 < (undefined (*) [16])(puVar19 + lVar131))) {
          uVar25 = 0;
        }
        else {
          auVar73 = *pauVar20;
          uVar25 = uVar35 & 0x30;
          auVar68 = *pauVar23;
          pauVar21 = (undefined (*) [16])(*pauVar20 + uVar25);
          auVar88._8_8_ = 0xffffffffffffffff;
          auVar88._0_8_ = 0xffffffffffffffff;
          pauVar36 = (undefined (*) [16])(*pauVar23 + uVar25);
          puVar40 = (undefined8 *)((long)puVar41 + uVar25);
          bVar92 = auVar73[0] - auVar68[0];
          bVar98 = auVar73[1] - auVar68[1];
          bVar99 = auVar73[2] - auVar68[2];
          bVar100 = auVar73[3] - auVar68[3];
          bVar101 = auVar73[4] - auVar68[4];
          bVar102 = auVar73[5] - auVar68[5];
          bVar103 = auVar73[6] - auVar68[6];
          bVar104 = auVar73[7] - auVar68[7];
          auVar95._0_8_ =
               CONCAT17(bVar104,CONCAT16(bVar103,CONCAT15(bVar102,CONCAT14(bVar101,CONCAT13(bVar100,
                                                  CONCAT12(bVar99,CONCAT11(bVar98,bVar92)))))));
          auVar95[8] = auVar73[8] - auVar68[8];
          auVar95[9] = auVar73[9] - auVar68[9];
          auVar95[10] = auVar73[10] - auVar68[10];
          auVar95[11] = auVar73[11] - auVar68[11];
          auVar95[12] = auVar73[12] - auVar68[12];
          auVar95[13] = auVar73[13] - auVar68[13];
          auVar95[14] = auVar73[14] - auVar68[14];
          auVar95[15] = auVar73[15] - auVar68[15];
          auVar73 = NEON_cmgt(auVar95,auVar88,1);
          uVar37 = (uint)CONCAT12(bVar98,(ushort)bVar92);
          uVar16 = CONCAT12(auVar95[9],(ushort)auVar95[8]);
          *(long *)(puVar19 + 9) = auVar95._8_8_;
          *puVar41 = auVar95._0_8_;
          auVar202._6_2_ = 0;
          auVar202._0_6_ = (uint6)CONCAT14(bVar98,uVar37) & 0xffff0000ffff;
          auVar202[8] = bVar99;
          auVar202._9_3_ = 0;
          auVar202[12] = bVar100;
          auVar202._13_3_ = 0;
          auVar105._2_2_ = 0;
          auVar105._0_2_ = CONCAT11(0,auVar95[12]);
          auVar105[4] = auVar95[13];
          auVar105._5_3_ = 0;
          auVar105[8] = auVar95[14];
          auVar105._9_3_ = 0;
          auVar105[12] = auVar95[15];
          auVar105._13_3_ = 0;
          auVar161._0_4_ = 0x100 - (uVar16 & 0xffff);
          auVar161._4_4_ = 0x100 - (uint)auVar95[9];
          auVar161._8_4_ = 0x100 - (uint)auVar95[10];
          auVar161._12_4_ = 0x100 - (uint)auVar95[11];
          auVar172._0_4_ = 0x100 - (uint)CONCAT11(0,auVar95[12]);
          auVar172._4_4_ = 0x100 - (uint)auVar95[13];
          auVar172._8_4_ = 0x100 - (uint)auVar95[14];
          auVar172._12_4_ = 0x100 - (uint)auVar95[15];
          auVar182._0_8_ = CONCAT44((int)(short)auVar73[13],(int)(short)auVar73[12]);
          auVar182._8_4_ = (int)(short)auVar73[14];
          auVar182._12_4_ = (int)(short)auVar73[15];
          uVar18 = CONCAT14(auVar95[9],(uint)uVar16);
          auVar66._6_2_ = 0;
          auVar66._0_6_ = (uint6)uVar18 & 0xffff0000ffff;
          auVar66[8] = auVar95[10];
          auVar66._9_3_ = 0;
          auVar66[12] = auVar95[11];
          auVar66._13_3_ = 0;
          auVar191._0_8_ = CONCAT44((int)(short)auVar73[5],(int)(short)auVar73[4]);
          auVar191._8_4_ = (int)(short)auVar73[6];
          auVar191._12_4_ = (int)(short)auVar73[7];
          auVar74._0_4_ = (int)(short)auVar73[8];
          auVar74._4_4_ = (int)(short)auVar73[9];
          auVar74._8_4_ = (int)(short)auVar73[10];
          auVar74._12_4_ = (int)(short)auVar73[11];
          uVar54 = CONCAT11(0,bVar101);
          auVar79._2_2_ = 0;
          auVar79._0_2_ = uVar54;
          auVar79[4] = bVar102;
          auVar79._5_3_ = 0;
          auVar79[8] = bVar103;
          auVar79._9_3_ = 0;
          auVar79[12] = bVar104;
          auVar79._13_3_ = 0;
          auVar149._0_4_ = 0x100 - (uint)uVar54;
          auVar149._4_4_ = 0x100 - (uint)bVar102;
          auVar149._8_4_ = 0x100 - (uint)bVar103;
          auVar149._12_4_ = 0x100 - (uint)bVar104;
          auVar120._0_8_ = CONCAT44((int)(short)auVar73[1],(int)(short)auVar73[0]);
          auVar120._8_4_ = (int)(short)auVar73[2];
          auVar120._12_4_ = (int)(short)auVar73[3];
          auVar118 = NEON_bsl(auVar74,auVar66,auVar161,1);
          auVar67._8_8_ = auVar191._8_8_;
          auVar67._0_8_ = auVar191._0_8_;
          auVar134._0_4_ = 0x100 - (uVar37 & 0xffff);
          auVar134._4_4_ = 0x100 - (uint)bVar98;
          auVar134._8_4_ = 0x100 - (uint)bVar99;
          auVar134._12_4_ = 0x100 - (uint)bVar100;
          auVar59._8_8_ = auVar182._8_8_;
          auVar59._0_8_ = auVar182._0_8_;
          auVar68 = NEON_bsl(auVar67,auVar79,auVar149,1);
          auVar80._8_8_ = auVar120._8_8_;
          auVar80._0_8_ = auVar120._0_8_;
          auVar73 = NEON_bsl(auVar59,auVar105,auVar172,1);
          auVar132 = NEON_bsl(auVar80,auVar202,auVar134,1);
          auVar60 = auVar73;
          auVar69 = auVar68;
          auVar75 = auVar118;
          auVar81 = auVar132;
          if (uVar25 != 0x10) {
            auVar147 = *(undefined (*) [16])(lVar24 + 0x11);
            auVar159 = *(undefined (*) [16])(lVar50 + 0x11);
            bVar92 = auVar147[0] - auVar159[0];
            bVar98 = auVar147[1] - auVar159[1];
            bVar99 = auVar147[2] - auVar159[2];
            bVar100 = auVar147[3] - auVar159[3];
            bVar101 = auVar147[4] - auVar159[4];
            bVar102 = auVar147[5] - auVar159[5];
            bVar103 = auVar147[6] - auVar159[6];
            bVar104 = auVar147[7] - auVar159[7];
            auVar96._0_8_ =
                 CONCAT17(bVar104,CONCAT16(bVar103,CONCAT15(bVar102,CONCAT14(bVar101,CONCAT13(
                                                  bVar100,CONCAT12(bVar99,CONCAT11(bVar98,bVar92))))
                                                  )));
            auVar96[8] = auVar147[8] - auVar159[8];
            auVar96[9] = auVar147[9] - auVar159[9];
            auVar96[10] = auVar147[10] - auVar159[10];
            auVar96[11] = auVar147[11] - auVar159[11];
            auVar96[12] = auVar147[12] - auVar159[12];
            auVar96[13] = auVar147[13] - auVar159[13];
            auVar96[14] = auVar147[14] - auVar159[14];
            auVar96[15] = auVar147[15] - auVar159[15];
            auVar147 = NEON_cmgt(auVar96,auVar88,1);
            uVar37 = (uint)CONCAT12(bVar98,(ushort)bVar92);
            uVar16 = CONCAT12(auVar96[9],(ushort)auVar96[8]);
            *(long *)(puVar19 + 0x19) = auVar96._8_8_;
            *(undefined8 *)(puVar19 + 0x11) = auVar96._0_8_;
            auVar135._2_2_ = 0;
            auVar135._0_2_ = CONCAT11(0,auVar96[12]);
            auVar135[4] = auVar96[13];
            auVar135._5_3_ = 0;
            auVar135[8] = auVar96[14];
            auVar135._9_3_ = 0;
            auVar135[12] = auVar96[15];
            auVar135._13_3_ = 0;
            uVar54 = CONCAT11(0,bVar101);
            auVar150._2_2_ = 0;
            auVar150._0_2_ = uVar54;
            auVar150[4] = bVar102;
            auVar150._5_3_ = 0;
            auVar150[8] = bVar103;
            auVar150._9_3_ = 0;
            auVar150[12] = bVar104;
            auVar150._13_3_ = 0;
            auVar173._0_4_ = 0x100 - (uint)CONCAT11(0,auVar96[12]);
            auVar173._4_4_ = 0x100 - (uint)auVar96[13];
            auVar173._8_4_ = 0x100 - (uint)auVar96[14];
            auVar173._12_4_ = 0x100 - (uint)auVar96[15];
            auVar183._0_4_ = 0x100 - (uVar16 & 0xffff);
            auVar183._4_4_ = 0x100 - (uint)auVar96[9];
            auVar183._8_4_ = 0x100 - (uint)auVar96[10];
            auVar183._12_4_ = 0x100 - (uint)auVar96[11];
            auVar192._0_4_ = 0x100 - (uint)uVar54;
            auVar192._4_4_ = 0x100 - (uint)bVar102;
            auVar192._8_4_ = 0x100 - (uint)bVar103;
            auVar192._12_4_ = 0x100 - (uint)bVar104;
            auVar85._0_4_ = 0x100 - (uVar37 & 0xffff);
            auVar85._4_4_ = 0x100 - (uint)bVar98;
            auVar85._8_4_ = 0x100 - (uint)bVar99;
            auVar85._12_4_ = 0x100 - (uint)bVar100;
            auVar203._0_4_ = (int)(short)auVar147[12];
            auVar203._4_4_ = (int)(short)auVar147[13];
            auVar203._8_4_ = (int)(short)auVar147[14];
            auVar203._12_4_ = (int)(short)auVar147[15];
            uVar18 = CONCAT14(auVar96[9],(uint)uVar16);
            auVar106._6_2_ = 0;
            auVar106._0_6_ = (uint6)uVar18 & 0xffff0000ffff;
            auVar106[8] = auVar96[10];
            auVar106._9_3_ = 0;
            auVar106[12] = auVar96[11];
            auVar106._13_3_ = 0;
            auVar162._0_4_ = (int)(short)auVar147[8];
            auVar162._4_4_ = (int)(short)auVar147[9];
            auVar162._8_4_ = (int)(short)auVar147[10];
            auVar162._12_4_ = (int)(short)auVar147[11];
            auVar121._6_2_ = 0;
            auVar121._0_6_ = (uint6)CONCAT14(bVar98,uVar37) & 0xffff0000ffff;
            auVar121[8] = bVar99;
            auVar121._9_3_ = 0;
            auVar121[12] = bVar100;
            auVar121._13_3_ = 0;
            auVar212._0_4_ = (int)(short)auVar147[4];
            auVar212._4_4_ = (int)(short)auVar147[5];
            auVar212._8_4_ = (int)(short)auVar147[6];
            auVar212._12_4_ = (int)(short)auVar147[7];
            auVar89._0_4_ = (int)(short)auVar147[0];
            auVar89._4_4_ = (int)(short)auVar147[1];
            auVar89._8_4_ = (int)(short)auVar147[2];
            auVar89._12_4_ = (int)(short)auVar147[3];
            auVar170 = NEON_bif(auVar135,auVar173,auVar203,1);
            auVar159 = NEON_bif(auVar106,auVar183,auVar162,1);
            auVar180 = NEON_bif(auVar150,auVar192,auVar212,1);
            auVar147 = NEON_bit(auVar85,auVar121,auVar89,1);
            auVar60._0_4_ = auVar73._0_4_ + auVar170._0_4_;
            auVar60._4_4_ = auVar73._4_4_ + auVar170._4_4_;
            auVar60._8_4_ = auVar73._8_4_ + auVar170._8_4_;
            auVar60._12_4_ = auVar73._12_4_ + auVar170._12_4_;
            auVar75._0_4_ = auVar118._0_4_ + auVar159._0_4_;
            auVar75._4_4_ = auVar118._4_4_ + auVar159._4_4_;
            auVar75._8_4_ = auVar118._8_4_ + auVar159._8_4_;
            auVar75._12_4_ = auVar118._12_4_ + auVar159._12_4_;
            auVar69._0_4_ = auVar68._0_4_ + auVar180._0_4_;
            auVar69._4_4_ = auVar68._4_4_ + auVar180._4_4_;
            auVar69._8_4_ = auVar68._8_4_ + auVar180._8_4_;
            auVar69._12_4_ = auVar68._12_4_ + auVar180._12_4_;
            auVar81._0_4_ = auVar132._0_4_ + auVar147._0_4_;
            auVar81._4_4_ = auVar132._4_4_ + auVar147._4_4_;
            auVar81._8_4_ = auVar132._8_4_ + auVar147._8_4_;
            auVar81._12_4_ = auVar132._12_4_ + auVar147._12_4_;
          }
          uVar49 = (ulong)auVar81._0_4_ + (ulong)auVar75._0_4_ +
                   (ulong)auVar69._0_4_ + (ulong)auVar60._0_4_ +
                   (auVar81._8_8_ & 0xffffffff) + (auVar75._8_8_ & 0xffffffff) +
                   (auVar69._8_8_ & 0xffffffff) + (auVar60._8_8_ & 0xffffffff) +
                   (ulong)auVar81._4_4_ + (ulong)auVar75._4_4_ +
                   (ulong)auVar69._4_4_ + (ulong)auVar60._4_4_ +
                   (auVar81._8_8_ >> 0x20) + (auVar75._8_8_ >> 0x20) +
                   (auVar69._8_8_ >> 0x20) + (auVar60._8_8_ >> 0x20);
          puVar41 = puVar40;
          if (uVar25 == uVar35) goto LAB_00dccb10;
        }
      }
      lVar50 = uVar35 - uVar25;
      pauVar22 = pauVar21;
      pauVar26 = pauVar36;
      do {
        bVar92 = (*pauVar22)[0] - (*pauVar26)[0];
        uVar37 = (uint)bVar92;
        if ((char)bVar92 < '\0') {
          uVar37 = 0x100 - bVar92;
        }
        lVar50 = lVar50 + -1;
        uVar49 = uVar49 + uVar37;
        *(byte *)puVar41 = bVar92;
        pauVar21 = (undefined (*) [16])(*pauVar22 + 1);
        pauVar22 = (undefined (*) [16])(*pauVar22 + 1);
        puVar40 = (undefined8 *)((long)puVar41 + 1);
        puVar41 = (undefined8 *)((long)puVar41 + 1);
        pauVar36 = (undefined (*) [16])(*pauVar26 + 1);
        pauVar26 = (undefined (*) [16])(*pauVar26 + 1);
      } while (lVar50 != 0);
    }
LAB_00dccb10:
    if (uVar35 < uVar30) {
      do {
        uVar35 = uVar35 + 1;
        bVar92 = (*pauVar23)[0];
        uVar64 = (uint)(byte)(*pauVar36)[0] - (uint)bVar92;
        uVar37 = (uint)(byte)(*pauVar20)[0] - (uint)bVar92;
        uVar39 = -uVar64;
        if (-1 < (int)uVar64) {
          uVar39 = uVar64;
        }
        uVar2 = -uVar37;
        if (-1 < (int)uVar37) {
          uVar2 = uVar37;
        }
        uVar37 = uVar37 + uVar64;
        uVar64 = -uVar37;
        if (-1 < (int)uVar37) {
          uVar64 = uVar37;
        }
        uVar37 = (uint)bVar92;
        if (uVar2 <= uVar64) {
          uVar37 = (uint)(byte)(*pauVar36)[0];
        }
        if (uVar39 <= uVar64 && uVar39 < uVar2 || uVar39 <= uVar64 && uVar39 == uVar2) {
          uVar37 = (uint)(byte)(*pauVar20)[0];
        }
        uVar37 = (byte)(*pauVar21)[0] - uVar37;
        bVar92 = (byte)uVar37;
        uVar37 = uVar37 & 0xff;
        if ((char)bVar92 < '\0') {
          uVar37 = 0x100 - uVar37;
        }
        uVar49 = uVar49 + uVar37;
        *(byte *)puVar40 = bVar92;
        pauVar21 = (undefined (*) [16])(*pauVar21 + 1);
        pauVar23 = (undefined (*) [16])(*pauVar23 + 1);
        pauVar20 = (undefined (*) [16])(*pauVar20 + 1);
        puVar40 = (undefined8 *)((long)puVar40 + 1);
        pauVar36 = (undefined (*) [16])(*pauVar36 + 1);
      } while (uVar49 <= uVar32 && uVar35 < uVar30);
    }
    if (uVar49 < uVar32) {
      pbVar29 = *(byte **)(param_1 + 0x268);
      if (*(long *)(param_1 + 0x270) != 0) {
        *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x270);
        *(byte **)(param_1 + 0x270) = pbVar29;
      }
    }
    goto LAB_00dcbe48;
  }
  pbVar44 = *(byte **)(param_1 + 600);
  puVar19 = *(undefined **)(param_1 + 0x268);
  pbVar29 = *(byte **)(param_1 + 0x260);
  pauVar23 = (undefined (*) [16])(pbVar44 + 1);
  pauVar20 = (undefined (*) [16])(pbVar29 + 1);
  puVar40 = (undefined8 *)(puVar19 + 1);
  *puVar19 = 4;
  pauVar21 = pauVar23;
  pauVar36 = pauVar20;
  puVar41 = puVar40;
  if (bVar92 != 0) {
    if (bVar92 < 0x79) {
LAB_00dcbd4c:
      uVar32 = 0;
    }
    else {
      lVar50 = uVar35 + 1;
      if ((puVar40 < pbVar29 + lVar50 && pauVar20 < (undefined (*) [16])(puVar19 + lVar50)) ||
         (puVar40 < pbVar44 + lVar50 && pauVar23 < (undefined (*) [16])(puVar19 + lVar50)))
      goto LAB_00dcbd4c;
      auVar73 = *pauVar20;
      uVar32 = uVar35 & 0x30;
      auVar68 = *pauVar23;
      pauVar36 = (undefined (*) [16])(*pauVar20 + uVar32);
      pauVar21 = (undefined (*) [16])(*pauVar23 + uVar32);
      puVar41 = (undefined8 *)((long)puVar40 + uVar32);
      auVar57._0_8_ =
           CONCAT17(auVar73[7] - auVar68[7],
                    CONCAT16(auVar73[6] - auVar68[6],
                             CONCAT15(auVar73[5] - auVar68[5],
                                      CONCAT14(auVar73[4] - auVar68[4],
                                               CONCAT13(auVar73[3] - auVar68[3],
                                                        CONCAT12(auVar73[2] - auVar68[2],
                                                                 CONCAT11(auVar73[1] - auVar68[1],
                                                                          auVar73[0] - auVar68[0])))
                                              ))));
      auVar57[8] = auVar73[8] - auVar68[8];
      auVar57[9] = auVar73[9] - auVar68[9];
      auVar57[10] = auVar73[10] - auVar68[10];
      auVar57[11] = auVar73[11] - auVar68[11];
      auVar57[12] = auVar73[12] - auVar68[12];
      auVar57[13] = auVar73[13] - auVar68[13];
      auVar57[14] = auVar73[14] - auVar68[14];
      auVar57[15] = auVar73[15] - auVar68[15];
      *(long *)(puVar19 + 9) = auVar57._8_8_;
      *puVar40 = auVar57._0_8_;
      if (uVar32 != 0x10) {
        auVar73 = *(undefined (*) [16])(pbVar29 + 0x11);
        auVar68 = *(undefined (*) [16])(pbVar44 + 0x11);
        auVar58._0_8_ =
             CONCAT17(auVar73[7] - auVar68[7],
                      CONCAT16(auVar73[6] - auVar68[6],
                               CONCAT15(auVar73[5] - auVar68[5],
                                        CONCAT14(auVar73[4] - auVar68[4],
                                                 CONCAT13(auVar73[3] - auVar68[3],
                                                          CONCAT12(auVar73[2] - auVar68[2],
                                                                   CONCAT11(auVar73[1] - auVar68[1],
                                                                            auVar73[0] - auVar68[0])
                                                                  ))))));
        auVar58[8] = auVar73[8] - auVar68[8];
        auVar58[9] = auVar73[9] - auVar68[9];
        auVar58[10] = auVar73[10] - auVar68[10];
        auVar58[11] = auVar73[11] - auVar68[11];
        auVar58[12] = auVar73[12] - auVar68[12];
        auVar58[13] = auVar73[13] - auVar68[13];
        auVar58[14] = auVar73[14] - auVar68[14];
        auVar58[15] = auVar73[15] - auVar68[15];
        *(long *)(puVar19 + 0x19) = auVar58._8_8_;
        *(undefined8 *)(puVar19 + 0x11) = auVar58._0_8_;
      }
      if (uVar32 == uVar35) goto LAB_00dcbdc4;
    }
    lVar50 = uVar35 - uVar32;
    pauVar22 = pauVar21;
    pauVar26 = pauVar36;
    puVar40 = puVar41;
    do {
      pauVar36 = (undefined (*) [16])(*pauVar26 + 1);
      pauVar21 = (undefined (*) [16])(*pauVar22 + 1);
      lVar50 = lVar50 + -1;
      puVar41 = (undefined8 *)((long)puVar40 + 1);
      *(undefined *)puVar40 = (*pauVar26)[0] - (*pauVar22)[0];
      pauVar22 = pauVar21;
      pauVar26 = pauVar36;
      puVar40 = puVar41;
    } while (lVar50 != 0);
  }
LAB_00dcbdc4:
  auVar132 = _DAT_004c4f40;
  auVar118 = _DAT_004c4d70;
  auVar68 = _DAT_004c4a50;
  auVar73 = _DAT_004c37b0;
  uVar32 = uVar30 - uVar35;
  if (uVar35 <= uVar30 && uVar32 != 0) {
    if (7 < uVar32) {
      pauVar22 = (undefined (*) [16])((long)puVar41 + uVar32);
      if ((((pbVar44 + uVar32 + 1 <= puVar41 || pauVar22 <= pauVar23) &&
           ((undefined8 *)((long)pauVar21 + uVar32) <= puVar41 || pauVar22 <= pauVar21)) &&
          ((undefined8 *)((long)pauVar36 + uVar32) <= puVar41 || pauVar22 <= pauVar36)) &&
         (pbVar29 + uVar32 + 1 <= puVar41 || pauVar22 <= pauVar20)) {
        if (uVar32 < 0x10) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar32 & 0xfffffffffffffff0;
          auVar147 = ZEXT816(0);
          uVar49 = uVar25;
          pauVar22 = pauVar36;
          puVar40 = puVar41;
          pauVar26 = pauVar21;
          do {
            auVar159 = *pauVar23;
            auVar170 = *pauVar20;
            auVar180 = *pauVar26;
            auVar220 = ZEXT816(0);
            uVar49 = uVar49 - 0x10;
            auVar232 = ZEXT816(0);
            auVar124 = a64_TBL(ZEXT816(0),auVar180,auVar147,auVar68);
            auVar138 = a64_TBL(ZEXT816(0),auVar180,auVar147,auVar73);
            auVar176 = a64_TBL(ZEXT816(0),auVar180,auVar147,auVar118);
            auVar186 = a64_TBL(ZEXT816(0),auVar180,auVar147,auVar132);
            auVar195 = a64_TBL(ZEXT816(0),auVar159,auVar220,auVar68);
            auVar206 = a64_TBL(ZEXT816(0),auVar159,auVar220,auVar73);
            auVar214 = a64_TBL(ZEXT816(0),auVar159,auVar220,auVar118);
            auVar220 = a64_TBL(ZEXT816(0),auVar159,auVar220,auVar132);
            auVar225 = a64_TBL(ZEXT816(0),auVar170,auVar232,auVar68);
            auVar227 = a64_TBL(ZEXT816(0),auVar170,auVar232,auVar73);
            auVar229 = a64_TBL(ZEXT816(0),auVar170,auVar232,auVar118);
            auVar232 = a64_TBL(ZEXT816(0),auVar170,auVar232,auVar132);
            iVar157 = auVar186._0_4_ - auVar220._0_4_;
            iVar165 = auVar186._4_4_ - auVar220._4_4_;
            iVar166 = auVar186._8_4_ - auVar220._8_4_;
            iVar168 = auVar186._12_4_ - auVar220._12_4_;
            iVar145 = auVar176._0_4_ - auVar214._0_4_;
            iVar153 = auVar176._4_4_ - auVar214._4_4_;
            iVar154 = auVar176._8_4_ - auVar214._8_4_;
            iVar156 = auVar176._12_4_ - auVar214._12_4_;
            iVar130 = auVar138._0_4_ - auVar206._0_4_;
            iVar141 = auVar138._4_4_ - auVar206._4_4_;
            iVar142 = auVar138._8_4_ - auVar206._8_4_;
            iVar144 = auVar138._12_4_ - auVar206._12_4_;
            iVar117 = auVar124._0_4_ - auVar195._0_4_;
            iVar127 = auVar124._4_4_ - auVar195._4_4_;
            iVar128 = auVar124._8_4_ - auVar195._8_4_;
            iVar129 = auVar124._12_4_ - auVar195._12_4_;
            iVar218 = auVar232._0_4_ - auVar220._0_4_;
            iVar221 = auVar232._4_4_ - auVar220._4_4_;
            iVar222 = auVar232._8_4_ - auVar220._8_4_;
            iVar223 = auVar232._12_4_ - auVar220._12_4_;
            iVar211 = auVar229._0_4_ - auVar214._0_4_;
            iVar215 = auVar229._4_4_ - auVar214._4_4_;
            iVar216 = auVar229._8_4_ - auVar214._8_4_;
            iVar217 = auVar229._12_4_ - auVar214._12_4_;
            iVar200 = auVar227._0_4_ - auVar206._0_4_;
            iVar207 = auVar227._4_4_ - auVar206._4_4_;
            iVar208 = auVar227._8_4_ - auVar206._8_4_;
            iVar210 = auVar227._12_4_ - auVar206._12_4_;
            iVar189 = auVar225._0_4_ - auVar195._0_4_;
            iVar196 = auVar225._4_4_ - auVar195._4_4_;
            iVar197 = auVar225._8_4_ - auVar195._8_4_;
            iVar199 = auVar225._12_4_ - auVar195._12_4_;
            auVar226._0_4_ = MP_INT_ABS(iVar117);
            auVar226._4_4_ = MP_INT_ABS(iVar127);
            auVar226._8_4_ = MP_INT_ABS(iVar128);
            auVar226._12_4_ = MP_INT_ABS(iVar129);
            auVar228._0_4_ = MP_INT_ABS(iVar130);
            auVar228._4_4_ = MP_INT_ABS(iVar141);
            auVar228._8_4_ = MP_INT_ABS(iVar142);
            auVar228._12_4_ = MP_INT_ABS(iVar144);
            auVar230._0_4_ = MP_INT_ABS(iVar145);
            auVar230._4_4_ = MP_INT_ABS(iVar153);
            auVar230._8_4_ = MP_INT_ABS(iVar154);
            auVar230._12_4_ = MP_INT_ABS(iVar156);
            auVar233._0_4_ = MP_INT_ABS(iVar157);
            auVar233._4_4_ = MP_INT_ABS(iVar165);
            auVar233._8_4_ = MP_INT_ABS(iVar166);
            auVar233._12_4_ = MP_INT_ABS(iVar168);
            uVar235 = MP_INT_ABS(iVar189);
            uVar236 = MP_INT_ABS(iVar196);
            uVar237 = MP_INT_ABS(iVar197);
            uVar238 = MP_INT_ABS(iVar199);
            uVar239 = MP_INT_ABS(iVar200);
            uVar240 = MP_INT_ABS(iVar207);
            uVar241 = MP_INT_ABS(iVar208);
            uVar242 = MP_INT_ABS(iVar210);
            uVar109 = MP_INT_ABS(iVar211);
            uVar110 = MP_INT_ABS(iVar215);
            uVar111 = MP_INT_ABS(iVar216);
            uVar112 = MP_INT_ABS(iVar217);
            uVar113 = MP_INT_ABS(iVar218);
            uVar114 = MP_INT_ABS(iVar221);
            uVar115 = MP_INT_ABS(iVar222);
            uVar116 = MP_INT_ABS(iVar223);
            auVar125._0_4_ = MP_INT_ABS(iVar189 + iVar117);
            auVar125._4_4_ = MP_INT_ABS(iVar196 + iVar127);
            auVar125._8_4_ = MP_INT_ABS(iVar197 + iVar128);
            auVar125._12_4_ = MP_INT_ABS(iVar199 + iVar129);
            auVar139._0_4_ = MP_INT_ABS(iVar200 + iVar130);
            auVar139._4_4_ = MP_INT_ABS(iVar207 + iVar141);
            auVar139._8_4_ = MP_INT_ABS(iVar208 + iVar142);
            auVar139._12_4_ = MP_INT_ABS(iVar210 + iVar144);
            auVar177._0_4_ = MP_INT_ABS(iVar211 + iVar145);
            auVar177._4_4_ = MP_INT_ABS(iVar215 + iVar153);
            auVar177._8_4_ = MP_INT_ABS(iVar216 + iVar154);
            auVar177._12_4_ = MP_INT_ABS(iVar217 + iVar156);
            auVar187._0_4_ = MP_INT_ABS(iVar218 + iVar157);
            auVar187._4_4_ = MP_INT_ABS(iVar221 + iVar165);
            auVar187._8_4_ = MP_INT_ABS(iVar222 + iVar166);
            auVar187._12_4_ = MP_INT_ABS(iVar223 + iVar168);
            auVar6._4_4_ = uVar114;
            auVar6._0_4_ = uVar113;
            auVar6._8_4_ = uVar115;
            auVar6._12_4_ = uVar116;
            auVar186 = NEON_cmhi(auVar233,auVar6,4);
            auVar3._4_4_ = uVar110;
            auVar3._0_4_ = uVar109;
            auVar3._8_4_ = uVar111;
            auVar3._12_4_ = uVar112;
            auVar195 = NEON_cmhi(auVar230,auVar3,4);
            auVar13._4_4_ = uVar240;
            auVar13._0_4_ = uVar239;
            auVar13._8_4_ = uVar241;
            auVar13._12_4_ = uVar242;
            auVar206 = NEON_cmhi(auVar228,auVar13,4);
            auVar10._4_4_ = uVar236;
            auVar10._0_4_ = uVar235;
            auVar10._8_4_ = uVar237;
            auVar10._12_4_ = uVar238;
            auVar214 = NEON_cmhi(auVar226,auVar10,4);
            auVar225 = NEON_cmhi(auVar226,auVar125,4);
            auVar227 = NEON_cmhi(auVar228,auVar139,4);
            auVar234 = NEON_cmhi(auVar233,auVar187,4);
            auVar229 = NEON_cmhi(auVar230,auVar177,4);
            auVar11._4_4_ = uVar236;
            auVar11._0_4_ = uVar235;
            auVar11._8_4_ = uVar237;
            auVar11._12_4_ = uVar238;
            auVar124 = NEON_cmhi(auVar11,auVar125,4);
            auVar14._4_4_ = uVar240;
            auVar14._0_4_ = uVar239;
            auVar14._8_4_ = uVar241;
            auVar14._12_4_ = uVar242;
            auVar138 = NEON_cmhi(auVar14,auVar139,4);
            auVar4._4_4_ = uVar110;
            auVar4._0_4_ = uVar109;
            auVar4._8_4_ = uVar111;
            auVar4._12_4_ = uVar112;
            auVar232 = NEON_cmhi(auVar4,auVar177,4);
            auVar7._4_4_ = uVar114;
            auVar7._0_4_ = uVar113;
            auVar7._8_4_ = uVar115;
            auVar7._12_4_ = uVar116;
            auVar176 = NEON_cmhi(auVar7,auVar187,4);
            auVar220 = *pauVar22;
            auVar126[1] = auVar176[4];
            auVar126[0] = auVar176[0];
            auVar126[2] = auVar176[8];
            auVar126[3] = auVar176[12];
            auVar126[4] = auVar232[0];
            auVar126[5] = auVar232[4];
            auVar126[6] = auVar232[8];
            auVar126[7] = auVar232[12];
            auVar126[8] = auVar138[0];
            auVar126[9] = auVar138[4];
            auVar126[10] = auVar138[8];
            auVar126[11] = auVar138[12];
            auVar126[12] = auVar124[0];
            auVar126[13] = auVar124[4];
            auVar126[14] = auVar124[8];
            auVar126[15] = auVar124[12];
            auVar140[1] = auVar186[4] | auVar234[4];
            auVar140[0] = auVar186[0] | auVar234[0];
            auVar140[2] = auVar186[8] | auVar234[8];
            auVar140[3] = auVar186[12] | auVar234[12];
            auVar140[4] = auVar195[0] | auVar229[0];
            auVar140[5] = auVar195[4] | auVar229[4];
            auVar140[6] = auVar195[8] | auVar229[8];
            auVar140[7] = auVar195[12] | auVar229[12];
            auVar140[8] = auVar206[0] | auVar227[0];
            auVar140[9] = auVar206[4] | auVar227[4];
            auVar140[10] = auVar206[8] | auVar227[8];
            auVar140[11] = auVar206[12] | auVar227[12];
            auVar140[12] = auVar214[0] | auVar225[0];
            auVar140[13] = auVar214[4] | auVar225[4];
            auVar140[14] = auVar214[8] | auVar225[8];
            auVar140[15] = auVar214[12] | auVar225[12];
            auVar159 = NEON_bif(auVar159,auVar180,auVar126,1);
            auVar159 = NEON_bif(auVar159,auVar170,auVar140,1);
            auVar97._0_8_ =
                 CONCAT17(auVar220[7] - auVar159[7],
                          CONCAT16(auVar220[6] - auVar159[6],
                                   CONCAT15(auVar220[5] - auVar159[5],
                                            CONCAT14(auVar220[4] - auVar159[4],
                                                     CONCAT13(auVar220[3] - auVar159[3],
                                                              CONCAT12(auVar220[2] - auVar159[2],
                                                                       CONCAT11(auVar220[1] -
                                                                                auVar159[1],
                                                                                auVar220[0] -
                                                                                auVar159[0])))))));
            auVar97[8] = auVar220[8] - auVar159[8];
            auVar97[9] = auVar220[9] - auVar159[9];
            auVar97[10] = auVar220[10] - auVar159[10];
            auVar97[11] = auVar220[11] - auVar159[11];
            auVar97[12] = auVar220[12] - auVar159[12];
            auVar97[13] = auVar220[13] - auVar159[13];
            auVar97[14] = auVar220[14] - auVar159[14];
            auVar97[15] = auVar220[15] - auVar159[15];
            puVar40[1] = auVar97._8_8_;
            *puVar40 = auVar97._0_8_;
            pauVar22 = pauVar22 + 1;
            puVar40 = puVar40 + 2;
            pauVar26 = pauVar26 + 1;
            pauVar23 = pauVar23 + 1;
            pauVar20 = pauVar20 + 1;
          } while (uVar49 != 0);
          if (uVar32 == uVar25) goto LAB_00dcbe44;
          if (((uint)uVar32 >> 3 & 1) == 0) {
            uVar35 = uVar25 + uVar35;
            pauVar21 = (undefined (*) [16])(*pauVar21 + uVar25);
            puVar41 = (undefined8 *)((long)puVar41 + uVar25);
            pauVar36 = (undefined (*) [16])(*pauVar36 + uVar25);
            pbVar29 = pbVar29 + uVar25;
            pbVar44 = pbVar44 + uVar25;
            goto LAB_00dcbde8;
          }
        }
        auVar68 = _DAT_004c4f40;
        auVar73 = _DAT_004c4d70;
        uVar49 = uVar32 & 0xfffffffffffffff8;
        uVar35 = uVar49 + uVar35;
        lVar50 = uVar25 - uVar49;
        puVar33 = (ulong *)(pbVar29 + uVar25 + 1);
        puVar34 = (ulong *)(*pauVar21 + uVar25);
        puVar40 = (undefined8 *)(*pauVar36 + uVar25);
        puVar38 = (undefined8 *)((long)puVar41 + uVar25);
        puVar45 = (ulong *)(pbVar44 + uVar25 + 1);
        do {
          auVar84._0_8_ = *puVar45;
          auVar84._8_8_ = 0;
          auVar93._0_8_ = *puVar33;
          auVar93._8_8_ = 0;
          auVar65._0_8_ = *puVar34;
          auVar65._8_8_ = 0;
          lVar50 = lVar50 + 8;
          auVar118 = a64_TBL(ZEXT816(0),auVar65,ZEXT816(0),auVar73);
          auVar132 = a64_TBL(ZEXT816(0),auVar65,ZEXT816(0),auVar68);
          auVar147 = a64_TBL(ZEXT816(0),auVar84,ZEXT816(0),auVar73);
          auVar159 = a64_TBL(ZEXT816(0),auVar84,ZEXT816(0),auVar68);
          auVar170 = a64_TBL(ZEXT816(0),auVar93,ZEXT816(0),auVar68);
          auVar180 = a64_TBL(ZEXT816(0),auVar93,ZEXT816(0),auVar73);
          iVar117 = auVar118._0_4_ - auVar147._0_4_;
          iVar127 = auVar118._4_4_ - auVar147._4_4_;
          iVar128 = auVar118._8_4_ - auVar147._8_4_;
          iVar129 = auVar118._12_4_ - auVar147._12_4_;
          iVar130 = auVar132._0_4_ - auVar159._0_4_;
          iVar141 = auVar132._4_4_ - auVar159._4_4_;
          iVar142 = auVar132._8_4_ - auVar159._8_4_;
          iVar144 = auVar132._12_4_ - auVar159._12_4_;
          iVar157 = auVar170._0_4_ - auVar159._0_4_;
          iVar165 = auVar170._4_4_ - auVar159._4_4_;
          iVar166 = auVar170._8_4_ - auVar159._8_4_;
          iVar168 = auVar170._12_4_ - auVar159._12_4_;
          iVar145 = auVar180._0_4_ - auVar147._0_4_;
          iVar153 = auVar180._4_4_ - auVar147._4_4_;
          iVar154 = auVar180._8_4_ - auVar147._8_4_;
          iVar156 = auVar180._12_4_ - auVar147._12_4_;
          auVar171._0_4_ = MP_INT_ABS(iVar117);
          auVar171._4_4_ = MP_INT_ABS(iVar127);
          auVar171._8_4_ = MP_INT_ABS(iVar128);
          auVar171._12_4_ = MP_INT_ABS(iVar129);
          auVar181._0_4_ = MP_INT_ABS(iVar130);
          auVar181._4_4_ = MP_INT_ABS(iVar141);
          auVar181._8_4_ = MP_INT_ABS(iVar142);
          auVar181._12_4_ = MP_INT_ABS(iVar144);
          auVar160._0_4_ = MP_INT_ABS(iVar157);
          auVar160._4_4_ = MP_INT_ABS(iVar165);
          auVar160._8_4_ = MP_INT_ABS(iVar166);
          auVar160._12_4_ = MP_INT_ABS(iVar168);
          auVar148._0_4_ = MP_INT_ABS(iVar145);
          auVar148._4_4_ = MP_INT_ABS(iVar153);
          auVar148._8_4_ = MP_INT_ABS(iVar154);
          auVar148._12_4_ = MP_INT_ABS(iVar156);
          auVar133._0_4_ = MP_INT_ABS(iVar157 + iVar130);
          auVar133._4_4_ = MP_INT_ABS(iVar165 + iVar141);
          auVar133._8_4_ = MP_INT_ABS(iVar166 + iVar142);
          auVar133._12_4_ = MP_INT_ABS(iVar168 + iVar144);
          auVar119._0_4_ = MP_INT_ABS(iVar145 + iVar117);
          auVar119._4_4_ = MP_INT_ABS(iVar153 + iVar127);
          auVar119._8_4_ = MP_INT_ABS(iVar154 + iVar128);
          auVar119._12_4_ = MP_INT_ABS(iVar156 + iVar129);
          auVar170 = NEON_cmhi(auVar181,auVar160,4);
          auVar180 = NEON_cmhi(auVar171,auVar148,4);
          auVar159 = NEON_cmhi(auVar181,auVar133,4);
          auVar147 = NEON_cmhi(auVar171,auVar119,4);
          auVar118 = NEON_cmhi(auVar148,auVar119,4);
          auVar132 = NEON_cmhi(auVar160,auVar133,4);
          uVar31 = NEON_bif(auVar84._0_8_,auVar65._0_8_,
                            CONCAT17(auVar118[12],
                                     CONCAT16(auVar118[8],
                                              CONCAT15(auVar118[4],
                                                       CONCAT14(auVar118[0],
                                                                CONCAT13(auVar132[12],
                                                                         CONCAT12(auVar132[8],
                                                                                  CONCAT11(auVar132[
                                                  4],auVar132[0]))))))),1);
          uVar31 = NEON_bif(uVar31,auVar93._0_8_,
                            CONCAT17(auVar180[12] | auVar147[12],
                                     CONCAT16(auVar180[8] | auVar147[8],
                                              CONCAT15(auVar180[4] | auVar147[4],
                                                       CONCAT14(auVar180[0] | auVar147[0],
                                                                CONCAT13(auVar170[12] | auVar159[12]
                                                                         ,CONCAT12(auVar170[8] |
                                                                                   auVar159[8],
                                                                                   CONCAT11(auVar170
                                                  [4] | auVar159[4],auVar170[0] | auVar159[0])))))))
                            ,1);
          uVar87 = *puVar40;
          *puVar38 = CONCAT17((char)((ulong)uVar87 >> 0x38) - (char)((ulong)uVar31 >> 0x38),
                              CONCAT16((char)((ulong)uVar87 >> 0x30) - (char)((ulong)uVar31 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar87 >> 0x28) -
                                                 (char)((ulong)uVar31 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar87 >> 0x20) -
                                                          (char)((ulong)uVar31 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar87 >> 0x18) -
                                                                   (char)((ulong)uVar31 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar87 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar31 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar87 >> 8) - (char)((ulong)uVar31 >> 8),
                                                  (char)uVar87 - (char)uVar31)))))));
          puVar33 = puVar33 + 1;
          puVar34 = puVar34 + 1;
          puVar40 = puVar40 + 1;
          puVar38 = puVar38 + 1;
          puVar45 = puVar45 + 1;
        } while (lVar50 != 0);
        pauVar21 = (undefined (*) [16])(*pauVar21 + uVar49);
        pbVar44 = pbVar44 + uVar49;
        pbVar29 = pbVar29 + uVar49;
        pauVar36 = (undefined (*) [16])(*pauVar36 + uVar49);
        puVar41 = (undefined8 *)((long)puVar41 + uVar49);
        if (uVar32 == uVar49) goto LAB_00dcbe44;
      }
    }
LAB_00dcbde8:
    lVar50 = uVar30 - uVar35;
    do {
      pbVar29 = pbVar29 + 1;
      pbVar44 = pbVar44 + 1;
      bVar92 = *pbVar44;
      uVar64 = (uint)(byte)(*pauVar21)[0] - (uint)bVar92;
      uVar37 = (uint)*pbVar29 - (uint)bVar92;
      uVar39 = -uVar64;
      if (-1 < (int)uVar64) {
        uVar39 = uVar64;
      }
      uVar2 = -uVar37;
      if (-1 < (int)uVar37) {
        uVar2 = uVar37;
      }
      uVar37 = uVar37 + uVar64;
      uVar64 = -uVar37;
      if (-1 < (int)uVar37) {
        uVar64 = uVar37;
      }
      if (uVar2 <= uVar64) {
        bVar92 = (*pauVar21)[0];
      }
      if (uVar39 <= uVar64 && uVar39 < uVar2 || uVar39 <= uVar64 && uVar39 == uVar2) {
        bVar92 = *pbVar29;
      }
      lVar50 = lVar50 + -1;
      *(byte *)puVar41 = (*pauVar36)[0] - bVar92;
      pauVar21 = (undefined (*) [16])(*pauVar21 + 1);
      pauVar36 = (undefined (*) [16])(*pauVar36 + 1);
      puVar41 = (undefined8 *)((long)puVar41 + 1);
    } while (lVar50 != 0);
  }
LAB_00dcbe44:
  pbVar29 = *(byte **)(param_1 + 0x268);
LAB_00dcbe48:
  png_compress_IDAT(param_1,pbVar29,*(long *)(param_2 + 8) + 1,0);
  if (*(long *)(param_1 + 600) != 0) {
    uVar31 = *(undefined8 *)(param_1 + 0x260);
    *(long *)(param_1 + 0x260) = *(long *)(param_1 + 600);
    *(undefined8 *)(param_1 + 600) = uVar31;
  }
  png_write_finish_row(param_1);
  uVar37 = *(int *)(param_1 + 0x2d4) + 1;
  *(uint *)(param_1 + 0x2d4) = uVar37;
  if ((*(uint *)(param_1 + 0x2d0) != 0) && (*(uint *)(param_1 + 0x2d0) <= uVar37)) {
    png_write_flush(param_1);
    return;
  }
  return;
}


