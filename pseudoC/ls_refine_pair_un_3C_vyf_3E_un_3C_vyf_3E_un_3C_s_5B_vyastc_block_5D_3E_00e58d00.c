// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ls_refine_pair___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_
// Entry Point: 00e58d00
// Size: 1568 bytes
// Signature: undefined ls_refine_pair___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ls_refine_pair___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_
               (undefined param_1 [16],long param_2,long param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  uint7 uVar11;
  uint6 uVar12;
  undefined auVar13 [16];
  ulong uVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  undefined (*pauVar18) [16];
  long lVar19;
  ulong uVar20;
  undefined (*pauVar21) [16];
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  byte bVar26;
  byte bVar30;
  uint uVar27;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined uVar45;
  undefined uVar46;
  undefined uVar47;
  undefined uVar48;
  undefined uVar49;
  undefined uVar50;
  undefined uVar51;
  undefined uVar52;
  undefined uVar53;
  undefined uVar54;
  undefined uVar55;
  undefined uVar56;
  undefined uVar57;
  undefined uVar58;
  undefined uVar59;
  undefined uVar60;
  byte bVar61;
  byte bVar65;
  byte bVar66;
  int iVar62;
  byte bVar67;
  byte bVar68;
  byte bVar70;
  byte bVar71;
  int iVar69;
  byte bVar72;
  byte bVar73;
  byte bVar75;
  byte bVar76;
  int iVar74;
  byte bVar77;
  byte bVar78;
  byte bVar80;
  byte bVar81;
  int iVar79;
  undefined auVar63 [16];
  undefined auVar64 [16];
  byte bVar82;
  ushort uVar83;
  ushort uVar87;
  ushort uVar88;
  ushort uVar89;
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  int iVar90;
  float fVar91;
  int iVar95;
  int iVar97;
  int iVar99;
  undefined auVar92 [16];
  float fVar96;
  float fVar98;
  float fVar100;
  undefined auVar93 [16];
  undefined auVar94 [16];
  uint uVar101;
  float fVar108;
  float fVar109;
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar105 [16];
  float fVar102;
  float fVar110;
  undefined auVar106 [16];
  undefined auVar107 [16];
  int iVar111;
  float fVar112;
  float fVar117;
  float fVar118;
  undefined auVar114 [16];
  undefined auVar116 [16];
  float fVar119;
  float fVar120;
  float fVar126;
  float fVar127;
  undefined auVar121 [16];
  undefined auVar122 [16];
  undefined auVar123 [16];
  undefined auVar124 [16];
  undefined auVar125 [16];
  float fVar128;
  uint uVar129;
  undefined auVar130 [12];
  undefined auVar132 [16];
  undefined auVar133 [16];
  undefined auVar134 [16];
  undefined auVar135 [16];
  undefined auVar136 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  float afStack_160 [12];
  undefined8 auStack_130 [8];
  float afStack_f0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 auStack_58 [4];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined auVar113 [12];
  undefined auVar115 [16];
  undefined auVar131 [16];
  
  puVar24 = &local_170;
  puVar25 = &local_170;
  auVar84 = *(undefined (*) [16])(param_4 + 4);
  iVar90 = auVar84._0_4_ * 0x5556 >> 0x10;
  iVar95 = auVar84._4_4_ * 0x5556 >> 0x10;
  iVar97 = auVar84._8_4_ * 0x5556 >> 0x10;
  iVar99 = auVar84._12_4_ * 0x5556 >> 0x10;
  iVar62 = auVar84._0_4_ + iVar90 * -3;
  iVar69 = auVar84._4_4_ + iVar95 * -3;
  iVar74 = auVar84._8_4_ + iVar97 * -3;
  iVar79 = auVar84._12_4_ + iVar99 * -3;
  auVar92._0_4_ = iVar62 * -2 + 5;
  auVar92._4_4_ = iVar69 * -2 + 5;
  auVar92._8_4_ = iVar74 * -2 + 5;
  auVar92._12_4_ = iVar79 * -2 + 5;
  auVar121._8_4_ = 2;
  auVar121._0_8_ = 0x200000002;
  auVar121._12_4_ = 2;
  auVar104._0_4_ = iVar62 + iVar90;
  auVar104._4_4_ = iVar69 + iVar95;
  auVar104._8_4_ = iVar74 + iVar97;
  auVar104._12_4_ = iVar79 + iVar99;
  auVar84 = NEON_smax(auVar121,auVar92,4);
  uVar45 = 0;
  uVar46 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  uVar53 = 0;
  uVar54 = 0;
  uVar55 = 0;
  uVar56 = 0;
  uVar57 = 0;
  uVar58 = 0;
  uVar59 = 0;
  uVar60 = 0;
  auVar84 = NEON_ushl(auVar84,auVar104,4);
  uVar27 = param_4[0x55];
  uVar15 = (ulong)uVar27;
  uStack_38 = 0;
  auStack_58[3] = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  auStack_58[0] = 0;
  local_60 = 0;
  auStack_58[2] = 0;
  auStack_58[1] = 0;
  iVar62 = auVar84._0_4_ >> 1;
  iVar69 = auVar84._4_4_ >> 1;
  iVar74 = auVar84._8_4_ >> 1;
  iVar79 = auVar84._12_4_ >> 1;
  uVar129 = param_4[1];
  auVar84 = ZEXT816(0);
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  local_70 = 0.0;
  fStack_6c = 0.0;
  if (0 < (int)uVar129) {
    iVar90 = 0;
    uVar20 = 0;
    iVar97 = *param_4;
    auVar92 = NEON_fmov(0x3f800000,4);
    uVar45 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
    uVar55 = 0;
    uVar56 = 0;
    uVar57 = 0;
    uVar58 = 0;
    uVar59 = 0;
    uVar60 = 0;
    iVar95 = 1;
    auVar104 = ZEXT816(0);
    do {
      auVar84 = auVar104;
      if (0 < iVar97) {
        fVar91 = auVar92._0_4_;
        fVar96 = auVar92._4_4_;
        fVar98 = auVar92._8_4_;
        fVar100 = auVar92._12_4_;
        if ((int)uVar27 < 1) {
          iVar99 = iVar97 * (int)uVar20;
          uVar4 = *(undefined *)((long)param_4 + (long)iVar99 * 4 + 0x21);
          uVar5 = *(undefined *)((long)param_4 + (long)iVar99 * 4 + 0x22);
          uVar101 = (uint)CONCAT12(uVar4,(ushort)*(byte *)(param_4 + (long)iVar99 + 8));
          uVar6 = *(undefined *)((long)param_4 + (long)iVar99 * 4 + 0x23);
          uVar11 = CONCAT16(uVar6,(uint6)CONCAT14(uVar5,uVar101));
          auVar123._6_2_ = 0;
          auVar123._0_6_ = (uint6)CONCAT14(uVar4,uVar101) & 0xffff0000ffff;
          auVar123[8] = uVar5;
          auVar123._9_3_ = 0;
          auVar123[12] = uVar6;
          auVar123._13_3_ = 0;
          auVar84 = NEON_umull((ulong)uVar11,(ulong)uVar11,2);
          auVar121 = NEON_ucvtf(auVar123,4);
          auVar123 = NEON_scvtf(auVar84,4);
          auVar84._0_4_ = auVar104._0_4_ + auVar121._0_4_;
          auVar84._4_4_ = auVar104._4_4_ + auVar121._4_4_;
          auVar84._8_4_ = auVar104._8_4_ + auVar121._8_4_;
          auVar84._12_4_ = auVar104._12_4_ + auVar121._12_4_;
          auVar134._0_4_ = local_70 + fVar91;
          auVar134._4_4_ = fStack_6c + fVar96;
          auVar134._8_4_ = fStack_68 + fVar98;
          auVar134._12_4_ = fStack_64 + fVar100;
          fVar102 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) +
                    auVar123._0_4_;
          uVar45 = SUB41(fVar102,0);
          uVar46 = (undefined)((uint)fVar102 >> 8);
          uVar47 = (undefined)((uint)fVar102 >> 0x10);
          uVar48 = (undefined)((uint)fVar102 >> 0x18);
          fVar102 = (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) +
                    auVar123._4_4_;
          uVar49 = SUB41(fVar102,0);
          uVar50 = (undefined)((uint)fVar102 >> 8);
          uVar51 = (undefined)((uint)fVar102 >> 0x10);
          uVar52 = (undefined)((uint)fVar102 >> 0x18);
          fVar102 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) +
                    auVar123._8_4_;
          uVar53 = SUB41(fVar102,0);
          uVar54 = (undefined)((uint)fVar102 >> 8);
          uVar55 = (undefined)((uint)fVar102 >> 0x10);
          uVar56 = (undefined)((uint)fVar102 >> 0x18);
          fVar102 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) +
                    auVar123._12_4_;
          uVar57 = SUB41(fVar102,0);
          uVar58 = (undefined)((uint)fVar102 >> 8);
          uVar59 = (undefined)((uint)fVar102 >> 0x10);
          uVar60 = (undefined)((uint)fVar102 >> 0x18);
          fStack_68 = auVar134._8_4_;
          fStack_64 = auVar134._12_4_;
          local_70 = auVar134._0_4_;
          fStack_6c = auVar134._4_4_;
          auVar104 = auVar84;
          iVar99 = iVar95;
          iVar1 = iVar97 + -1;
          if (iVar97 != 1) {
            do {
              uVar4 = *(undefined *)((long)param_4 + (long)iVar99 * 4 + 0x21);
              uVar5 = *(undefined *)((long)param_4 + (long)iVar99 * 4 + 0x22);
              uVar101 = (uint)CONCAT12(uVar4,(ushort)*(byte *)(param_4 + (long)iVar99 + 8));
              uVar6 = *(undefined *)((long)param_4 + (long)iVar99 * 4 + 0x23);
              uVar11 = CONCAT16(uVar6,(uint6)CONCAT14(uVar5,uVar101));
              auVar124._6_2_ = 0;
              auVar124._0_6_ = (uint6)CONCAT14(uVar4,uVar101) & 0xffff0000ffff;
              auVar124[8] = uVar5;
              auVar124._9_3_ = 0;
              auVar124[12] = uVar6;
              auVar124._13_3_ = 0;
              auVar84 = NEON_umull((ulong)uVar11,(ulong)uVar11,2);
              auVar123 = NEON_ucvtf(auVar124,4);
              auVar121 = NEON_scvtf(auVar84,4);
              auVar105._0_4_ = auVar134._0_4_ + fVar91;
              auVar105._4_4_ = auVar134._4_4_ + fVar96;
              auVar105._8_4_ = auVar134._8_4_ + fVar98;
              auVar105._12_4_ = auVar134._12_4_ + fVar100;
              auVar84._0_4_ = auVar104._0_4_ + auVar123._0_4_;
              auVar84._4_4_ = auVar104._4_4_ + auVar123._4_4_;
              auVar84._8_4_ = auVar104._8_4_ + auVar123._8_4_;
              auVar84._12_4_ = auVar104._12_4_ + auVar123._12_4_;
              fVar102 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) +
                        auVar121._0_4_;
              uVar45 = SUB41(fVar102,0);
              uVar46 = (undefined)((uint)fVar102 >> 8);
              uVar47 = (undefined)((uint)fVar102 >> 0x10);
              uVar48 = (undefined)((uint)fVar102 >> 0x18);
              fVar102 = (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) +
                        auVar121._4_4_;
              uVar49 = SUB41(fVar102,0);
              uVar50 = (undefined)((uint)fVar102 >> 8);
              uVar51 = (undefined)((uint)fVar102 >> 0x10);
              uVar52 = (undefined)((uint)fVar102 >> 0x18);
              fVar102 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) +
                        auVar121._8_4_;
              uVar53 = SUB41(fVar102,0);
              uVar54 = (undefined)((uint)fVar102 >> 8);
              uVar55 = (undefined)((uint)fVar102 >> 0x10);
              uVar56 = (undefined)((uint)fVar102 >> 0x18);
              fVar102 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) +
                        auVar121._12_4_;
              uVar57 = SUB41(fVar102,0);
              uVar58 = (undefined)((uint)fVar102 >> 8);
              uVar59 = (undefined)((uint)fVar102 >> 0x10);
              uVar60 = (undefined)((uint)fVar102 >> 0x18);
              iVar1 = iVar1 + -1;
              iVar99 = iVar99 + 1;
              fStack_68 = auVar105._8_4_;
              fStack_64 = auVar105._12_4_;
              local_70 = auVar105._0_4_;
              fStack_6c = auVar105._4_4_;
              auVar104 = auVar84;
              auVar134 = auVar105;
            } while (iVar1 != 0);
          }
        }
        else {
          iVar99 = 0;
          iVar1 = iVar90;
          do {
            iVar111 = iVar99 + iVar97 * (int)uVar20;
            uVar4 = *(undefined *)((long)param_4 + (long)iVar111 * 4 + 0x21);
            bVar26 = *(byte *)((long)param_4 + (long)iVar111 * 4 + 0x22);
            uVar101 = (uint)CONCAT12(uVar4,(ushort)*(byte *)(param_4 + (long)iVar111 + 8));
            bVar28 = *(byte *)((long)param_4 + (long)iVar111 * 4 + 0x23);
            uVar11 = CONCAT16(bVar28,(uint6)CONCAT14(bVar26,uVar101));
            uVar12 = (uint6)CONCAT14(uVar4,uVar101) & 0xffff0000ffff;
            auVar114._6_2_ = 0;
            auVar114._0_6_ = uVar12;
            auVar114[8] = bVar26;
            auVar114._9_3_ = 0;
            auVar114[12] = bVar28;
            auVar114._13_3_ = 0;
            auVar84 = NEON_umull((ulong)uVar11,(ulong)uVar11,2);
            auVar121 = NEON_ucvtf(auVar114,4);
            iVar111 = CONCAT13(0xff,CONCAT12(0xff,CONCAT11(0xff,~*(byte *)(param_4 +
                                                                          (long)iVar111 + 8))));
            auVar113._0_8_ =
                 CONCAT17(0xff,CONCAT16(0xff,CONCAT15(0xff,CONCAT14(~(byte)(uVar12 >> 0x20),iVar111)
                                                     )));
            auVar113[8] = ~bVar26;
            auVar113[9] = 0xff;
            auVar113[10] = 0xff;
            auVar113[11] = 0xff;
            auVar115[12] = ~bVar28;
            auVar115._0_12_ = auVar113;
            auVar115[13] = 0xff;
            auVar115[14] = 0xff;
            auVar115[15] = 0xff;
            auVar134 = NEON_scvtf(auVar84,4);
            auVar84._0_4_ = auVar104._0_4_ + auVar121._0_4_;
            auVar84._4_4_ = auVar104._4_4_ + auVar121._4_4_;
            auVar84._8_4_ = auVar104._8_4_ + auVar121._8_4_;
            auVar84._12_4_ = auVar104._12_4_ + auVar121._12_4_;
            auVar103._0_4_ = iVar62 + iVar111;
            auVar103._4_4_ = iVar69 + (int)((ulong)auVar113._0_8_ >> 0x20);
            auVar103._8_4_ = iVar74 + auVar113._8_4_;
            auVar103._12_4_ = iVar79 + auVar115._12_4_;
            fVar102 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) +
                      auVar134._0_4_;
            uVar45 = SUB41(fVar102,0);
            uVar46 = (undefined)((uint)fVar102 >> 8);
            uVar47 = (undefined)((uint)fVar102 >> 0x10);
            uVar48 = (undefined)((uint)fVar102 >> 0x18);
            fVar102 = (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) +
                      auVar134._4_4_;
            uVar49 = SUB41(fVar102,0);
            uVar50 = (undefined)((uint)fVar102 >> 8);
            uVar51 = (undefined)((uint)fVar102 >> 0x10);
            uVar52 = (undefined)((uint)fVar102 >> 0x18);
            fVar102 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) +
                      auVar134._8_4_;
            uVar53 = SUB41(fVar102,0);
            uVar54 = (undefined)((uint)fVar102 >> 8);
            uVar55 = (undefined)((uint)fVar102 >> 0x10);
            uVar56 = (undefined)((uint)fVar102 >> 0x18);
            fVar102 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) +
                      auVar134._12_4_;
            uVar57 = SUB41(fVar102,0);
            uVar58 = (undefined)((uint)fVar102 >> 8);
            uVar59 = (undefined)((uint)fVar102 >> 0x10);
            uVar60 = (undefined)((uint)fVar102 >> 0x18);
            local_60._4_4_ = fStack_64 + fVar100;
            local_60._0_4_ = fStack_68 + fVar98;
            local_70 = local_70 + fVar91;
            fStack_6c = fStack_6c + fVar96;
            uVar14 = uVar15;
            pauVar18 = (undefined (*) [16])&local_b0;
            iVar111 = iVar1;
            do {
              auVar104 = *(undefined (*) [16])(param_3 + (long)iVar111 * 0x10);
              auVar121 = *pauVar18;
              *(float *)pauVar18[1] = auVar104._8_4_ + auVar121._8_4_;
              *(float *)(pauVar18[1] + 4) = auVar104._12_4_ + auVar121._12_4_;
              *(float *)*pauVar18 = auVar104._0_4_ + auVar121._0_4_;
              *(float *)(*pauVar18 + 4) = auVar104._4_4_ + auVar121._4_4_;
              iVar111 = iVar111 + 0x40;
              uVar14 = uVar14 - 1;
              pauVar18 = pauVar18 + 1;
            } while (uVar14 != 0);
            auVar104 = NEON_scvtf(auVar103,4);
            uVar14 = uVar15;
            pauVar18 = (undefined (*) [16])&local_60;
            iVar111 = iVar1;
            do {
              auVar121 = *(undefined (*) [16])(param_3 + (long)iVar111 * 0x10);
              auVar134 = *pauVar18;
              auVar122._0_8_ =
                   CONCAT44(auVar134._4_4_ + auVar121._4_4_ * auVar104._4_4_,
                            auVar134._0_4_ + auVar121._0_4_ * auVar104._0_4_);
              auVar122._8_4_ = auVar134._8_4_ + auVar121._8_4_ * auVar104._8_4_;
              auVar122._12_4_ = auVar134._12_4_ + auVar121._12_4_ * auVar104._12_4_;
              *(long *)(*pauVar18 + 8) = auVar122._8_8_;
              *(undefined8 *)*pauVar18 = auVar122._0_8_;
              iVar111 = iVar111 + 0x40;
              uVar14 = uVar14 - 1;
              pauVar18 = pauVar18 + 1;
            } while (uVar14 != 0);
            iVar99 = iVar99 + 1;
            iVar1 = iVar1 + 1;
            auVar104 = auVar84;
          } while (iVar99 != iVar97);
        }
      }
      uVar20 = uVar20 + 1;
      iVar95 = iVar95 + iVar97;
      iVar90 = iVar90 + 8;
      auVar104 = auVar84;
    } while (uVar20 != uVar129);
  }
  auVar93._0_4_ = iVar62 + -1;
  auVar93._4_4_ = iVar69 + -1;
  auVar93._8_4_ = iVar74 + -1;
  auVar93._12_4_ = iVar79 + -1;
  auVar104 = NEON_scvtf(auVar93,4);
  fVar91 = auVar104._0_4_;
  fVar96 = auVar104._4_4_;
  fVar98 = auVar104._8_4_;
  fVar100 = auVar104._12_4_;
  if (0 < (int)uVar27) {
    pfVar16 = afStack_f0;
    pauVar18 = (undefined (*) [16])&local_b0;
    pauVar21 = (undefined (*) [16])&local_60;
    uVar20 = uVar15;
    do {
      auVar104 = *pauVar18;
      auVar92 = *pauVar21;
      pfVar16[4] = auVar104._8_4_ * fVar98 - auVar92._8_4_;
      pfVar16[5] = auVar104._12_4_ * fVar100 - auVar92._12_4_;
      *pfVar16 = auVar104._0_4_ * fVar91 - auVar92._0_4_;
      pfVar16[1] = auVar104._4_4_ * fVar96 - auVar92._4_4_;
      uVar20 = uVar20 - 1;
      pfVar16 = pfVar16 + 4;
      pauVar18 = pauVar18 + 1;
      pauVar21 = pauVar21 + 1;
    } while (uVar20 != 0);
  }
  auVar116._0_4_ = auVar93._0_4_ * 2;
  auVar116._4_4_ = auVar93._4_4_ * 2;
  auVar116._8_4_ = auVar93._8_4_ * 2;
  auVar116._12_4_ = auVar93._12_4_ * 2;
  auVar13._4_4_ = fStack_6c;
  auVar13._0_4_ = local_70;
  auVar13._8_4_ = fStack_68;
  auVar13._12_4_ = fStack_64;
  auVar104 = NEON_scvtf(auVar116,4);
  fVar112 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) +
            (fVar91 * fVar91 * local_70 - auVar84._0_4_ * auVar104._0_4_);
  fVar117 = (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) +
            (fVar96 * fVar96 * fStack_6c - auVar84._4_4_ * auVar104._4_4_);
  fVar118 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) +
            (fVar98 * fVar98 * fStack_68 - auVar84._8_4_ * auVar104._8_4_);
  fVar119 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) +
            (fVar100 * fVar100 * fStack_64 - auVar84._12_4_ * auVar104._12_4_);
  fVar102 = -(float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) +
            auVar84._0_4_ * fVar91;
  fVar108 = -(float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) +
            auVar84._4_4_ * fVar96;
  fVar109 = -(float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) +
            auVar84._8_4_ * fVar98;
  fVar110 = -(float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) +
            auVar84._12_4_ * fVar100;
  auVar63._0_4_ =
       (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) * fVar112 -
       fVar102 * fVar102;
  auVar63._4_4_ =
       (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) * fVar117 -
       fVar108 * fVar108;
  auVar63._8_4_ =
       (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) * fVar118 -
       fVar109 * fVar109;
  auVar63._12_4_ =
       (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) * fVar119 -
       fVar110 * fVar110;
  if (0 < (int)uVar27) {
    auVar84 = NEON_frecpe(auVar63,4);
    auVar104 = NEON_frecps(auVar63,auVar84,4);
    auVar125._0_4_ = auVar84._0_4_ * auVar104._0_4_;
    auVar125._4_4_ = auVar84._4_4_ * auVar104._4_4_;
    auVar125._8_4_ = auVar84._8_4_ * auVar104._8_4_;
    auVar125._12_4_ = auVar84._12_4_ * auVar104._12_4_;
    auVar84 = NEON_frecps(auVar63,auVar125,4);
    fVar120 = auVar125._0_4_ * auVar84._0_4_;
    fVar126 = auVar125._4_4_ * auVar84._4_4_;
    fVar127 = auVar125._8_4_ * auVar84._8_4_;
    fVar128 = auVar125._12_4_ * auVar84._12_4_;
    lVar17 = 0x400000000;
    pauVar18 = (undefined (*) [16])&local_60;
    pauVar21 = (undefined (*) [16])afStack_f0;
    uVar20 = uVar15;
    puVar22 = &local_170;
    do {
      auVar84 = *pauVar18;
      auVar104 = *pauVar21;
      *(float *)((long)puVar22 + 0x10) =
           fVar127 * ((float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) *
                      auVar84._8_4_ - fVar109 * auVar104._8_4_) * fVar98;
      *(float *)((long)puVar22 + 0x14) =
           fVar128 * ((float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) *
                      auVar84._12_4_ - fVar110 * auVar104._12_4_) * fVar100;
      *(float *)puVar22 =
           fVar120 * ((float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) *
                      auVar84._0_4_ - fVar102 * auVar104._0_4_) * fVar91;
      *(float *)((long)puVar22 + 4) =
           fVar126 * ((float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) *
                      auVar84._4_4_ - fVar108 * auVar104._4_4_) * fVar96;
      lVar23 = lVar17 >> 0x1c;
      lVar17 = lVar17 + 0x100000000;
      uVar20 = uVar20 - 1;
      *(float *)((long)afStack_160 + lVar23) =
           fVar127 * (fVar118 * auVar104._8_4_ - fVar109 * auVar84._8_4_) * fVar98;
      *(float *)((long)afStack_160 + lVar23 + 4) =
           fVar128 * (fVar119 * auVar104._12_4_ - fVar110 * auVar84._12_4_) * fVar100;
      *(float *)((long)&local_170 + lVar23) =
           fVar120 * (fVar112 * auVar104._0_4_ - fVar102 * auVar84._0_4_) * fVar91;
      *(float *)((long)&local_170 + lVar23 + 4) =
           fVar126 * (fVar117 * auVar104._4_4_ - fVar108 * auVar84._4_4_) * fVar96;
      pauVar18 = pauVar18 + 1;
      pauVar21 = pauVar21 + 1;
      puVar22 = (undefined8 *)((long)puVar22 + 0x10);
    } while (uVar20 != 0);
  }
  uVar20 = CONCAT44(auVar63._4_4_,auVar63._0_4_);
  auVar64._0_8_ = uVar20 & 0x7fffffff7fffffff;
  auVar64._8_4_ = (uint)auVar63._8_4_ & 0x7fffffff;
  auVar64._12_4_ = (uint)auVar63._12_4_ & 0x7fffffff;
  auVar85._8_4_ = 0x3a83126f;
  auVar85._0_8_ = 0x3a83126f3a83126f;
  auVar85._12_4_ = 0x3a83126f;
  uVar45 = (undefined)uVar27;
  uVar46 = (undefined)(uVar27 >> 8);
  uVar47 = (undefined)(uVar27 >> 0x10);
  uVar48 = (undefined)(uVar27 >> 0x18);
  auVar104 = NEON_fcmgt(auVar85,auVar64,4);
  auVar7[4] = uVar45;
  auVar7._0_4_ = uVar27;
  auVar7[5] = uVar46;
  auVar7[6] = uVar47;
  auVar7[7] = uVar48;
  auVar7[8] = uVar45;
  auVar7[9] = uVar46;
  auVar7[10] = uVar47;
  auVar7[11] = uVar48;
  auVar7[12] = uVar45;
  auVar7[13] = uVar46;
  auVar7[14] = uVar47;
  auVar7[15] = uVar48;
  auVar84 = NEON_cmgt(auVar7,0,4);
  bVar61 = auVar104[0] & auVar84[0];
  bVar65 = auVar104[1] & auVar84[1];
  bVar66 = auVar104[2] & auVar84[2];
  bVar67 = auVar104[3] & auVar84[3];
  bVar68 = auVar104[4] & auVar84[4];
  bVar70 = auVar104[5] & auVar84[5];
  bVar71 = auVar104[6] & auVar84[6];
  bVar72 = auVar104[7] & auVar84[7];
  bVar73 = auVar104[8] & auVar84[8];
  bVar75 = auVar104[9] & auVar84[9];
  bVar76 = auVar104[10] & auVar84[10];
  bVar77 = auVar104[11] & auVar84[11];
  bVar78 = auVar104[12] & auVar84[12];
  bVar80 = auVar104[13] & auVar84[13];
  bVar81 = auVar104[14] & auVar84[14];
  bVar82 = auVar104[15] & auVar84[15];
  bVar26 = param_1[0];
  auVar106[0] = auVar104[0] & bVar26;
  bVar28 = param_1[1];
  auVar106[1] = auVar104[1] & bVar28;
  bVar29 = param_1[2];
  auVar106[2] = auVar104[2] & bVar29;
  bVar30 = param_1[3];
  auVar106[3] = auVar104[3] & bVar30;
  bVar31 = param_1[4];
  auVar106[4] = auVar104[4] & bVar31;
  bVar32 = param_1[5];
  auVar106[5] = auVar104[5] & bVar32;
  bVar33 = param_1[6];
  auVar106[6] = auVar104[6] & bVar33;
  bVar34 = param_1[7];
  auVar106[7] = auVar104[7] & bVar34;
  bVar35 = param_1[8];
  auVar106[8] = auVar104[8] & bVar35;
  bVar38 = param_1[9];
  auVar106[9] = auVar104[9] & bVar38;
  bVar39 = param_1[10];
  auVar106[10] = auVar104[10] & bVar39;
  bVar40 = param_1[11];
  auVar106[11] = auVar104[11] & bVar40;
  bVar41 = param_1[12];
  auVar106[12] = auVar104[12] & bVar41;
  bVar42 = param_1[13];
  auVar106[13] = auVar104[13] & bVar42;
  bVar43 = param_1[14];
  auVar106[14] = auVar104[14] & bVar43;
  bVar44 = param_1[15];
  auVar106[15] = auVar104[15] & bVar44;
  auVar86[0] = bVar61 & bVar26;
  auVar86[1] = bVar65 & bVar28;
  auVar86[2] = bVar66 & bVar29;
  auVar86[3] = bVar67 & bVar30;
  auVar86[4] = bVar68 & bVar31;
  auVar86[5] = bVar70 & bVar32;
  auVar86[6] = bVar71 & bVar33;
  auVar86[7] = bVar72 & bVar34;
  auVar86[8] = bVar73 & bVar35;
  auVar86[9] = bVar75 & bVar38;
  auVar86[10] = bVar76 & bVar39;
  auVar86[11] = bVar77 & bVar40;
  auVar86[12] = bVar78 & bVar41;
  auVar86[13] = bVar80 & bVar42;
  auVar86[14] = bVar81 & bVar43;
  auVar86[15] = bVar82 & bVar44;
  iVar62 = NEON_umaxv(auVar106,4);
  iVar69 = NEON_umaxv(auVar86,4);
  if (iVar62 != 0 && iVar69 != 0) {
    auVar84 = NEON_frecpe(auVar13,4);
    auVar104 = NEON_frecps(auVar13,auVar84,4);
    auVar107._0_4_ = auVar84._0_4_ * auVar104._0_4_;
    auVar107._4_4_ = auVar84._4_4_ * auVar104._4_4_;
    auVar107._8_4_ = auVar84._8_4_ * auVar104._8_4_;
    auVar107._12_4_ = auVar84._12_4_ * auVar104._12_4_;
    auVar104 = NEON_frecps(auVar13,auVar107,4);
    iVar62 = 0x40;
    auVar84 = ZEXT816(0);
    do {
      uVar129 = (uint)(byte)(auVar86[0] & SUB161(_DAT_004c4480,0));
      auVar130._0_8_ =
           CONCAT17(auVar86[7] & SUB161(_DAT_004c4480,7),
                    (uint7)CONCAT14(auVar86[4] & SUB161(_DAT_004c4480,4),uVar129));
      auVar130[8] = auVar86[8] & SUB161(_DAT_004c4480,8);
      auVar130[9] = auVar86[9] & SUB161(_DAT_004c4480,9);
      auVar130[10] = auVar86[10] & SUB161(_DAT_004c4480,10);
      auVar130[11] = auVar86[11] & SUB161(_DAT_004c4480,0xb);
      auVar131[12] = auVar86[12] & SUB161(_DAT_004c4480,0xc);
      auVar131._0_12_ = auVar130;
      auVar131[13] = auVar86[13] & SUB161(_DAT_004c4480,0xd);
      auVar131[14] = auVar86[14] & SUB161(_DAT_004c4480,0xe);
      auVar131[15] = auVar86[15] & SUB161(_DAT_004c4480,0xf);
      uVar129 = uVar129 + (int)((ulong)auVar130._0_8_ >> 0x20) + auVar130._8_4_ + auVar131._12_4_;
      lVar17 = (long)(iVar62 + -0x40);
      if ((uVar129 & 9) == 9) {
        fVar91 = *(float *)((long)&local_b0 + lVar17);
        fVar96 = *(float *)((long)&local_b0 + lVar17 + 4);
        fVar98 = *(float *)((long)&local_b0 + lVar17 + 8);
        fVar100 = *(float *)((long)&local_b0 + lVar17 + 0xc);
      }
      else {
        fVar91 = local_20;
        if ((uVar129 & 1) != 0) {
          local_20 = *(float *)((long)&local_b0 + lVar17);
          fVar91 = local_20;
        }
        fVar96 = fStack_1c;
        if ((uVar129 >> 1 & 1) != 0) {
          fStack_1c = *(float *)((long)&local_b0 + lVar17 + 4);
          fVar96 = fStack_1c;
        }
        fVar98 = fStack_18;
        if ((uVar129 >> 2 & 1) != 0) {
          fStack_18 = *(float *)((long)&local_b0 + lVar17 + 8);
          fVar98 = fStack_18;
        }
        fVar100 = fStack_14;
        local_20 = fVar91;
        fStack_1c = fVar96;
        fStack_18 = fVar98;
        if ((uVar129 >> 3 & 1) != 0) {
          fStack_14 = *(float *)((long)&local_b0 + lVar17 + 0xc);
          fVar100 = fStack_14;
        }
      }
      auVar132._0_4_ = fVar91 * auVar107._0_4_ * auVar104._0_4_;
      auVar132._4_4_ = fVar96 * auVar107._4_4_ * auVar104._4_4_;
      auVar132._8_4_ = fVar98 * auVar107._8_4_ * auVar104._8_4_;
      auVar132._12_4_ = fVar100 * auVar107._12_4_ * auVar104._12_4_;
      auVar136._0_4_ = (auVar86._0_4_ << 0x1f) >> 0x1f;
      auVar136._4_4_ = (auVar86._4_4_ << 0x1f) >> 0x1f;
      auVar136._8_4_ = (auVar86._8_4_ << 0x1f) >> 0x1f;
      auVar136._12_4_ = (auVar86._12_4_ << 0x1f) >> 0x1f;
      auVar9._12_4_ = (int)((ulong)*(undefined8 *)((long)&uStack_168 + lVar17) >> 0x20);
      auVar9._0_12_ = *(undefined (*) [12])((long)&local_170 + lVar17);
      auVar133 = NEON_bif(auVar132,auVar9,auVar136,1);
      *(long *)((long)&uStack_168 + lVar17) = auVar133._8_8_;
      *(long *)((long)&local_170 + lVar17) = auVar133._0_8_;
      if ((uVar129 & 9) != 9) {
        if ((uVar129 & 1) != 0) {
          local_20 = auVar133._0_4_;
        }
        if ((uVar129 >> 1 & 1) != 0) {
          fStack_1c = auVar133._4_4_;
        }
        if ((uVar129 >> 2 & 1) != 0) {
          fStack_18 = auVar133._8_4_;
        }
        if ((uVar129 >> 3 & 1) != 0) {
          fStack_14 = auVar133._12_4_;
        }
        auVar133._4_4_ = fStack_1c;
        auVar133._0_4_ = local_20;
        auVar133._8_4_ = fStack_18;
        auVar133._12_4_ = fStack_14;
      }
      auVar94._0_4_ = auVar84._0_4_ + 1;
      auVar94._4_4_ = auVar84._4_4_ + 1;
      auVar94._8_4_ = auVar84._8_4_ + 1;
      auVar94._12_4_ = auVar84._12_4_ + 1;
      uVar83 = auVar86._0_2_;
      uVar87 = auVar86._4_2_;
      uVar88 = auVar86._8_2_;
      uVar89 = auVar86._12_2_;
      auVar8[4] = uVar45;
      auVar8._0_4_ = uVar27;
      auVar8[5] = uVar46;
      auVar8[6] = uVar47;
      auVar8[7] = uVar48;
      auVar8[8] = uVar45;
      auVar8[9] = uVar46;
      auVar8[10] = uVar47;
      auVar8[11] = uVar48;
      auVar8[12] = uVar45;
      auVar8[13] = uVar46;
      auVar8[14] = uVar47;
      auVar8[15] = uVar48;
      auVar84 = NEON_cmgt(auVar8,auVar94,4);
      bVar61 = bVar61 & auVar84[0];
      bVar65 = bVar65 & auVar84[1];
      bVar66 = bVar66 & auVar84[2];
      bVar67 = bVar67 & auVar84[3];
      bVar68 = bVar68 & auVar84[4];
      bVar70 = bVar70 & auVar84[5];
      bVar71 = bVar71 & auVar84[6];
      bVar72 = bVar72 & auVar84[7];
      bVar73 = bVar73 & auVar84[8];
      bVar75 = bVar75 & auVar84[9];
      bVar76 = bVar76 & auVar84[10];
      bVar77 = bVar77 & auVar84[11];
      bVar78 = bVar78 & auVar84[12];
      bVar80 = bVar80 & auVar84[13];
      bVar81 = bVar81 & auVar84[14];
      bVar82 = bVar82 & auVar84[15];
      auVar86[0] = bVar61 & bVar26;
      auVar86[1] = bVar65 & bVar28;
      auVar86[2] = bVar66 & bVar29;
      auVar86[3] = bVar67 & bVar30;
      auVar86[4] = bVar68 & bVar31;
      auVar86[5] = bVar70 & bVar32;
      auVar86[6] = bVar71 & bVar33;
      auVar86[7] = bVar72 & bVar34;
      auVar86[8] = bVar73 & bVar35;
      auVar86[9] = bVar75 & bVar38;
      auVar86[10] = bVar76 & bVar39;
      auVar86[11] = bVar77 & bVar40;
      auVar86[12] = bVar78 & bVar41;
      auVar86[13] = bVar80 & bVar42;
      auVar86[14] = bVar81 & bVar43;
      auVar86[15] = bVar82 & bVar44;
      lVar17 = (long)iVar62;
      auVar135._0_4_ = (int)((uint)uVar83 << 0x1f) >> 0x1f;
      auVar135._4_4_ = (int)((uint)uVar87 << 0x1f) >> 0x1f;
      auVar135._8_4_ = (int)((uint)uVar88 << 0x1f) >> 0x1f;
      auVar135._12_4_ = (int)((uint)uVar89 << 0x1f) >> 0x1f;
      iVar69 = NEON_umaxv(auVar86,4);
      auVar10._12_4_ = (int)((ulong)*(undefined8 *)((long)&uStack_168 + lVar17) >> 0x20);
      auVar10._0_12_ = *(undefined (*) [12])((long)&local_170 + lVar17);
      auVar84 = NEON_bif(auVar133,auVar10,auVar135,1);
      iVar62 = iVar62 + 0x10;
      *(long *)((long)&uStack_168 + lVar17) = auVar84._8_8_;
      *(long *)((long)&local_170 + lVar17) = auVar84._0_8_;
      auVar84 = auVar94;
    } while (iVar69 != 0);
  }
  if (0 < (int)uVar27) {
    uVar27 = (uint)(bVar26 & 1) + (uint)(bVar31 & 2) + (uint)(bVar35 & 4) + (uint)(bVar41 & 8);
    lVar19 = 0;
    lVar17 = 0;
    lVar23 = 0x400000000;
    if ((uVar27 & 1) == 0) {
      do {
        uVar36 = puVar24[1];
        lVar2 = param_2 + (lVar19 >> 0x1c);
        if ((uVar27 >> 1 & 1) != 0) {
          *(int *)(lVar2 + 4) = (int)((ulong)*puVar24 >> 0x20);
        }
        if ((uVar27 >> 2 & 1) != 0) {
          *(int *)(lVar2 + 8) = (int)uVar36;
        }
        if ((uVar27 >> 3 & 1) != 0) {
          *(int *)(lVar2 + 0xc) = (int)((ulong)uVar36 >> 0x20);
        }
        uVar36 = *(undefined8 *)((long)&uStack_168 + (lVar23 >> 0x1c));
        lVar2 = param_2 + (long)((int)lVar17 + 1) * 0x10;
        if ((uVar27 >> 1 & 1) != 0) {
          *(int *)(lVar2 + 4) =
               (int)((ulong)*(undefined8 *)((long)&local_170 + (lVar23 >> 0x1c)) >> 0x20);
        }
        if ((uVar27 >> 2 & 1) != 0) {
          *(int *)(lVar2 + 8) = (int)uVar36;
        }
        if ((uVar27 >> 3 & 1) != 0) {
          *(int *)(lVar2 + 0xc) = (int)((ulong)uVar36 >> 0x20);
        }
        lVar23 = lVar23 + 0x100000000;
        lVar17 = lVar17 + 2;
        lVar19 = lVar19 + 0x200000000;
        puVar24 = puVar24 + 2;
      } while (uVar15 * 2 - lVar17 != 0);
    }
    else {
      do {
        uVar37 = puVar25[1];
        uVar36 = *puVar25;
        puVar3 = (undefined4 *)(param_2 + (lVar19 >> 0x1c));
        *puVar3 = (int)uVar36;
        if ((uVar27 >> 1 & 1) != 0) {
          puVar3[1] = (int)((ulong)uVar36 >> 0x20);
        }
        if ((uVar27 >> 2 & 1) != 0) {
          puVar3[2] = (int)uVar37;
        }
        if ((uVar27 >> 3 & 1) != 0) {
          puVar3[3] = (int)((ulong)uVar37 >> 0x20);
        }
        uVar37 = *(undefined8 *)((long)&uStack_168 + (lVar23 >> 0x1c));
        uVar36 = *(undefined8 *)((long)&local_170 + (lVar23 >> 0x1c));
        puVar3 = (undefined4 *)(param_2 + (long)((int)lVar17 + 1) * 0x10);
        *puVar3 = (int)uVar36;
        if ((uVar27 >> 1 & 1) != 0) {
          puVar3[1] = (int)((ulong)uVar36 >> 0x20);
        }
        if ((uVar27 >> 2 & 1) != 0) {
          puVar3[2] = (int)uVar37;
        }
        if ((uVar27 >> 3 & 1) != 0) {
          puVar3[3] = (int)((ulong)uVar37 >> 0x20);
        }
        lVar23 = lVar23 + 0x100000000;
        lVar17 = lVar17 + 2;
        lVar19 = lVar19 + 0x200000000;
        puVar25 = puVar25 + 2;
      } while (uVar15 * 2 - lVar17 != 0);
    }
  }
  return;
}


