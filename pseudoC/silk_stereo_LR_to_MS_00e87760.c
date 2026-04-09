// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_stereo_LR_to_MS
// Entry Point: 00e87760
// Size: 4356 bytes
// Signature: undefined silk_stereo_LR_to_MS(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void silk_stereo_LR_to_MS
               (ushort *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,char *param_5,
               uint *param_6,undefined4 param_7,short param_8,int param_9,int param_10,uint param_11
               )

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  uint6 uVar4;
  uint6 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint *puVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined (*pauVar16) [16];
  undefined2 *puVar17;
  undefined (*pauVar18) [16];
  short *psVar19;
  long lVar20;
  undefined (*pauVar21) [16];
  ulong uVar22;
  undefined8 *puVar23;
  ushort uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  short *psVar30;
  short *psVar31;
  long lVar32;
  undefined8 *puVar33;
  long lVar34;
  ulong uVar35;
  byte *pbVar36;
  short *psVar37;
  long lVar38;
  short sVar40;
  int iVar39;
  short sVar41;
  short sVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  uint uVar55;
  long lVar56;
  uint uVar58;
  uint uVar59;
  uint uVar61;
  undefined auVar57 [16];
  long lVar60;
  uint5 uVar62;
  long lVar63;
  undefined auVar64 [16];
  long lVar65;
  int iVar66;
  int iVar67;
  int iVar71;
  ushort uVar72;
  ushort uVar74;
  int iVar73;
  ushort uVar75;
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  ushort uVar77;
  int iVar76;
  int iVar78;
  int iVar79;
  int iVar82;
  int iVar83;
  int iVar84;
  undefined auVar80 [16];
  undefined auVar81 [16];
  int iVar85;
  uint uVar86;
  uint uVar89;
  int iVar90;
  uint uVar91;
  int iVar92;
  int iVar93;
  uint uVar94;
  int iVar95;
  undefined auVar87 [16];
  undefined auVar88 [16];
  int iVar96;
  uint5 uVar97;
  long lVar98;
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  int iVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined uVar105;
  undefined uVar106;
  char cVar107;
  char cVar108;
  undefined uVar109;
  undefined uVar110;
  undefined uVar111;
  undefined uVar112;
  char cVar113;
  char cVar114;
  undefined uVar115;
  undefined uVar116;
  char cVar117;
  char cVar118;
  char cVar119;
  char cVar120;
  char cVar121;
  char cVar122;
  ulong uVar123;
  undefined auVar124 [16];
  undefined auVar125 [16];
  undefined auVar126 [16];
  undefined auVar127 [16];
  undefined8 uVar128;
  undefined8 uVar129;
  short sVar130;
  short sVar131;
  short sVar132;
  short sVar133;
  int iVar134;
  undefined8 uStack_120;
  int local_118;
  int local_114;
  long local_110;
  undefined (*local_108) [16];
  long local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  long local_e0;
  undefined8 *local_d8;
  long local_d0;
  uint *local_c8;
  int local_c0;
  short local_bc [2];
  undefined8 local_b8;
  long local_b0;
  
  local_f0 = CONCAT44(local_f0._4_4_,param_7);
  local_e0 = tpidr_el0;
  local_e8 = param_4;
  uVar55 = param_11 + 2;
  pauVar18 = (undefined (*) [16])((long)param_2 + -4);
  local_b0 = *(long *)(local_e0 + 0x28);
  lVar38 = -((-(ulong)(uVar55 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar55 << 1) + 0xf &
            0xfffffffffffffff0);
  puVar23 = (undefined8 *)((long)&uStack_120 + lVar38);
  if ((int)(param_11 + 1) < 0 == SCARRY4(param_11,1)) {
    if ((int)uVar55 < 2) {
      uVar55 = 1;
    }
    uVar25 = (ulong)uVar55;
    if (uVar55 < 8) {
LAB_00e87810:
      uVar29 = 0;
    }
    else {
      lVar28 = uVar25 * 2 + -4;
      if ((pauVar18 < (undefined (*) [16])(param_3 + lVar28)) &&
         ((undefined (*) [16])(param_3 + -4) < (undefined (*) [16])((long)param_2 + lVar28)))
      goto LAB_00e87810;
      uVar29 = uVar25 & 0x7ffffff8;
      pauVar21 = (undefined (*) [16])(param_3 + -4);
      uVar35 = uVar29;
      puVar33 = puVar23;
      pauVar16 = pauVar18;
      do {
        auVar70 = *pauVar16;
        uVar35 = uVar35 - 8;
        auVar81 = *pauVar21;
        iVar66 = (int)auVar70._8_2_ - (int)auVar81._8_2_;
        iVar92 = (int)auVar70._10_2_ - (int)auVar81._10_2_;
        iVar95 = (int)auVar70._12_2_ - (int)auVar81._12_2_;
        iVar67 = (int)auVar70._14_2_ - (int)auVar81._14_2_;
        iVar78 = (int)auVar70._0_2_ - (int)auVar81._0_2_;
        iVar44 = (int)auVar70._2_2_ - (int)auVar81._2_2_;
        iVar45 = (int)auVar70._4_2_ - (int)auVar81._4_2_;
        iVar84 = (int)auVar70._6_2_ - (int)auVar81._6_2_;
        uVar86 = (int)auVar81._8_2_ + (int)auVar70._8_2_;
        uVar89 = (int)auVar81._10_2_ + (int)auVar70._10_2_;
        uVar91 = (int)auVar81._12_2_ + (int)auVar70._12_2_;
        uVar94 = (int)auVar81._14_2_ + (int)auVar70._14_2_;
        uVar55 = (int)auVar81._0_2_ + (int)auVar70._0_2_;
        uVar58 = (int)auVar81._2_2_ + (int)auVar70._2_2_;
        uVar59 = (int)auVar81._4_2_ + (int)auVar70._4_2_;
        uVar61 = (int)auVar81._6_2_ + (int)auVar70._6_2_;
        uVar62 = CONCAT14((char)iVar92,(uint)((byte)iVar66 & 1)) & 0x1ffffffff;
        uVar97 = CONCAT14((char)iVar44,(uint)((byte)iVar78 & 1)) & 0x1ffffffff;
        auVar101._0_4_ = (int)uVar62 + (iVar66 >> 1);
        auVar101._4_4_ = (uint)(byte)(uVar62 >> 0x20) + (iVar92 >> 1);
        auVar101._8_4_ = (uint)((byte)iVar95 & 1) + (iVar95 >> 1);
        auVar101._12_4_ = (uint)((byte)iVar67 & 1) + (iVar67 >> 1);
        auVar99._0_4_ = (int)uVar97 + (iVar78 >> 1);
        auVar99._4_4_ = (uint)(byte)(uVar97 >> 0x20) + (iVar44 >> 1);
        auVar99._8_4_ = (uint)((byte)iVar45 & 1) + (iVar45 >> 1);
        auVar99._12_4_ = (uint)((byte)iVar84 & 1) + (iVar84 >> 1);
        iVar66 = (uint)((byte)uVar89 & 1) + (uVar89 >> 1);
        iVar92 = (uint)((byte)uVar58 & 1) + (uVar58 >> 1);
        auVar70._8_4_ = 0x7fff;
        auVar70._0_8_ = 0x7fff00007fff;
        auVar70._12_4_ = 0x7fff;
        auVar70 = NEON_smin(auVar101,auVar70,4);
        auVar81._8_4_ = 0x7fff;
        auVar81._0_8_ = 0x7fff00007fff;
        auVar81._12_4_ = 0x7fff;
        auVar81 = NEON_smin(auVar99,auVar81,4);
        uVar4 = CONCAT15((char)((uint)iVar66 >> 8),
                         CONCAT14((char)iVar66,(uint)((byte)uVar86 & 1) + (uVar86 >> 1))) &
                0xffff0000ffff;
        uVar5 = CONCAT15((char)((uint)iVar92 >> 8),
                         CONCAT14((char)iVar92,(uint)((byte)uVar55 & 1) + (uVar55 >> 1))) &
                0xffff0000ffff;
        auVar68._0_8_ =
             CONCAT26((ushort)((byte)uVar61 & 1) + (short)(uVar61 >> 1),
                      CONCAT24((ushort)((byte)uVar59 & 1) + (short)(uVar59 >> 1),
                               CONCAT22((short)(uVar5 >> 0x20),(short)uVar5)));
        auVar68._8_2_ = (short)uVar4;
        auVar68._10_2_ = (short)(uVar4 >> 0x20);
        auVar68._12_2_ = (ushort)((byte)uVar91 & 1) + (short)(uVar91 >> 1);
        auVar68._14_2_ = (ushort)((byte)uVar94 & 1) + (short)(uVar94 >> 1);
        auVar88._0_8_ =
             CONCAT26(auVar81._12_2_,CONCAT24(auVar81._8_2_,CONCAT22(auVar81._4_2_,auVar81._0_2_)));
        auVar88._8_2_ = auVar70._0_2_;
        auVar88._10_2_ = auVar70._4_2_;
        auVar88._12_2_ = auVar70._8_2_;
        auVar88._14_2_ = auVar70._12_2_;
        *(long *)((long)*pauVar16 + 8) = auVar68._8_8_;
        *(undefined8 *)*pauVar16 = auVar68._0_8_;
        puVar33[1] = auVar88._8_8_;
        *puVar33 = auVar88._0_8_;
        pauVar21 = pauVar21 + 1;
        puVar33 = puVar33 + 2;
        pauVar16 = pauVar16 + 1;
      } while (uVar35 != 0);
      if (uVar29 == uVar25) goto LAB_00e87868;
    }
    lVar28 = uVar25 - uVar29;
    lVar32 = uVar29 * 2 + -4;
    puVar17 = (undefined2 *)((long)puVar23 + uVar29 * 2);
    psVar19 = (short *)((long)param_2 + lVar32);
    psVar37 = (short *)(param_3 + lVar32);
    do {
      uVar58 = (int)*psVar19 - (int)*psVar37;
      uVar55 = (int)*psVar37 + (int)*psVar19;
      iVar66 = (uVar58 & 1) + ((int)uVar58 >> 1);
      if (0x7ffe < iVar66) {
        iVar66 = 0x7fff;
      }
      lVar28 = lVar28 + -1;
      *psVar19 = ((ushort)uVar55 & 1) + (short)(uVar55 >> 1);
      *puVar17 = (short)iVar66;
      puVar17 = puVar17 + 1;
      psVar19 = psVar19 + 1;
      psVar37 = psVar37 + 1;
    } while (lVar28 != 0);
  }
LAB_00e87868:
  local_108 = pauVar18;
  *(undefined4 *)*pauVar18 = *(undefined4 *)(param_1 + 2);
  uVar29 = -(ulong)(param_11 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_11 << 1;
  *(undefined4 *)puVar23 = *(undefined4 *)(param_1 + 4);
  uVar15 = *(undefined4 *)((long)puVar23 + uVar29);
  uVar25 = uVar29 + 0xf & 0xfffffffffffffff0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)*pauVar18 + uVar29);
  *(undefined4 *)(param_1 + 4) = uVar15;
  psVar19 = (short *)((long)puVar23 - uVar25);
  psVar37 = (short *)((long)psVar19 - uVar25);
  lVar28 = (long)(int)param_11 * 2;
  local_d8 = puVar23;
  local_d0 = param_3;
  local_c8 = param_6;
  local_100 = lVar28;
  local_f8 = (long)(int)param_11;
  if ((int)param_11 < 1) {
    uVar25 = lVar28 + 0xfU & 0xfffffffffffffff0;
    lVar28 = (long)psVar37 - uVar25;
    lVar32 = lVar28 - uVar25;
  }
  else {
    uVar25 = (ulong)param_11;
    psVar30 = psVar19;
    psVar31 = psVar37;
    puVar33 = param_2;
    sVar2 = *(short *)((long)param_2 + -2);
    sVar3 = *(short *)((long)param_2 + -4);
    do {
      sVar40 = sVar2;
      sVar2 = *(short *)puVar33;
      uVar25 = uVar25 - 1;
      sVar3 = (short)(((uint)((int)sVar2 + (int)sVar3) >> 1) + (int)sVar40 + 1 >> 1);
      *psVar30 = sVar3;
      *psVar31 = sVar40 - sVar3;
      psVar30 = psVar30 + 1;
      psVar31 = psVar31 + 1;
      puVar33 = (undefined8 *)((long)puVar33 + 2);
      sVar3 = sVar40;
    } while (uVar25 != 0);
    uVar25 = lVar28 + 0xfU & 0xfffffffffffffff0;
    lVar28 = (long)psVar37 - uVar25;
    lVar32 = lVar28 - uVar25;
    if (0 < (int)param_11) {
      lVar26 = 0;
      sVar2 = *(short *)((long)&uStack_120 + lVar38 + 2);
      sVar3 = *(short *)puVar23;
      do {
        sVar40 = sVar2;
        sVar2 = *(short *)((long)&uStack_120 + lVar26 + lVar38 + 4);
        sVar3 = (short)(((uint)((int)sVar2 + (int)sVar3) >> 1) + (int)sVar40 + 1 >> 1);
        *(short *)(lVar28 + lVar26) = sVar3;
        *(short *)(lVar32 + lVar26) = sVar40 - sVar3;
        lVar26 = lVar26 + 2;
        sVar3 = sVar40;
      } while ((ulong)param_11 * 2 - lVar26 != 0);
    }
  }
  bVar14 = param_10 * 10 != param_11;
  lVar38 = 0x148;
  if (bVar14) {
    lVar38 = 0x28f;
  }
  uVar25 = lVar38 * (ulong)(uint)((int)param_8 * (int)param_8);
  uVar29 = uVar25 >> 0x10;
  iVar66 = -0x4b0;
  if (bVar14) {
    iVar66 = -600;
  }
  uVar15 = silk_stereo_find_predictor(local_bc,psVar19,lVar28,param_1 + 6,param_11,uVar29);
  sVar2 = (short)uVar15;
  local_b8 = CONCAT44(local_b8._4_4_,uVar15);
  uVar15 = silk_stereo_find_predictor(&local_c0,psVar37,lVar32,param_1 + 10,param_11,uVar29);
  lVar38 = local_d0;
  local_b8 = CONCAT44(uVar15,(undefined4)local_b8);
  local_c0 = local_bc[0] * 3 + local_c0;
  uVar55 = iVar66 + (int)local_f0;
  if (0xffff < local_c0) {
    local_c0 = 0x10000;
  }
  if ((int)uVar55 < 2) {
    uVar55 = 1;
  }
  iVar66 = local_c0 * 3 + 0xd0000;
  iVar92 = iVar66;
  if (iVar66 < 0) {
    iVar92 = local_c0 * -3 + -0xd0000;
  }
  iVar66 = iVar66 << (ulong)((int)LZCOUNT(iVar92) - 1U & 0x1f);
  iVar95 = iVar66 >> 0x10;
  sVar3 = 0;
  if (iVar95 != 0) {
    sVar3 = (short)(0x1fffffff / iVar95);
  }
  iVar95 = (int)LZCOUNT(uVar55) - (int)LZCOUNT(iVar92);
  iVar92 = uVar55 << (ulong)((int)LZCOUNT(uVar55) - 1U & 0x1f);
  lVar28 = (long)sVar3 * (long)iVar92;
  uVar58 = (short)param_10 * 600 + 2000;
  uVar59 = (int)((ulong)((long)sVar3 *
                        (long)(int)(iVar92 - ((uint)((ulong)((lVar28 >> 0x10) * (long)iVar66) >>
                                                    0x1d) & 0xfffffff8))) >> 0x10) +
           (int)((ulong)lVar28 >> 0x10);
  if (iVar95 == -0xb || iVar95 + 0xb < 0 != SCARRY4(iVar95,0xb)) {
    uVar89 = -iVar95 - 10;
    uVar86 = -0x80000000 >> (uVar89 & 0x1f);
    uVar61 = 0x7fffffff >> (ulong)(uVar89 & 0x1f);
    if ((int)uVar86 <= (int)uVar59) {
      uVar86 = uVar59;
    }
    if ((int)uVar59 <= (int)uVar61) {
      uVar61 = uVar86;
    }
    uVar61 = uVar61 << (ulong)(uVar89 & 0x1f);
    *local_c8 = uVar61;
    if ((int)uVar58 <= (int)uVar61) goto LAB_00e87b20;
LAB_00e87b58:
    iVar92 = (uVar55 - uVar58) * 2 - uVar58;
    *local_c8 = uVar58;
    local_c8[1] = uVar55 - uVar58;
    iVar66 = -iVar92;
    if (-1 < iVar92) {
      iVar66 = iVar92;
    }
    iVar67 = (int)((ulong)((long)(short)uVar58 * (long)(local_c0 * 3 + 0x10000)) >> 0x10);
    iVar95 = -iVar67;
    if (-1 < iVar67) {
      iVar95 = iVar67;
    }
    iVar67 = iVar67 << (ulong)((int)LZCOUNT(iVar95) - 1U & 0x1f);
    iVar78 = iVar67 >> 0x10;
    sVar3 = 0;
    if (iVar78 != 0) {
      sVar3 = (short)(0x1fffffff / iVar78);
    }
    iVar92 = iVar92 << (ulong)((int)LZCOUNT(iVar66) - 1U & 0x1f);
    lVar28 = (long)sVar3 * (long)iVar92;
    iVar66 = (int)LZCOUNT(iVar66) - (int)LZCOUNT(iVar95);
    uVar59 = (int)((ulong)((long)sVar3 *
                          (long)(int)(iVar92 - ((uint)((ulong)((lVar28 >> 0x10) * (long)iVar67) >>
                                                      0x1d) & 0xfffffff8))) >> 0x10) +
             (int)((ulong)lVar28 >> 0x10);
    if (iVar66 == -0xe || iVar66 + 0xe < 0 != SCARRY4(iVar66,0xe)) {
      uVar89 = -iVar66 - 0xd;
      uVar61 = -0x80000000 >> (uVar89 & 0x1f);
      uVar86 = 0x7fffffff >> (ulong)(uVar89 & 0x1f);
      if ((int)uVar61 <= (int)uVar59) {
        uVar61 = uVar59;
      }
      if ((int)uVar59 <= (int)uVar86) {
        uVar86 = uVar61;
      }
      uVar86 = uVar86 << (ulong)(uVar89 & 0x1f);
    }
    else {
      uVar86 = (int)uVar59 >> (iVar66 + 0xdU & 0x1f);
      if (0x1f < iVar66 + 0xdU) {
        uVar86 = 0;
      }
    }
    uVar86 = uVar86 & ((int)uVar86 >> 0x1f ^ 0xffffffffU);
    if (0x3fff < uVar86) {
      uVar86 = 0x4000;
    }
  }
  else {
    uVar61 = (int)uVar59 >> (iVar95 + 10U & 0x1f);
    if (0x1f < iVar95 + 10U) {
      uVar61 = 0;
    }
    *local_c8 = uVar61;
    if ((int)uVar61 < (int)uVar58) goto LAB_00e87b58;
LAB_00e87b20:
    uVar86 = 0x4000;
    local_c8[1] = uVar55 - uVar61;
  }
  param_1[0xe] = param_1[0xe] +
                 (short)((int)(short)(uVar25 >> 0x10) * (uVar86 - (int)(short)param_1[0xe]) >> 0x10)
  ;
  *param_5 = '\0';
  if (param_9 == 0) {
    iVar66 = uVar55 * 8;
    sVar3 = (short)uVar15;
    if (param_1[0xf] == 0) {
      if ((int)(iVar66 + uVar58 * -0xd) < 0 == SBORROW4(iVar66,uVar58 * 0xd)) {
        uVar24 = param_1[0xe];
        if (0x332 < (int)((ulong)((long)(short)uVar24 * (long)local_c0) >> 0x10)) goto LAB_00e87e50;
      }
      else {
        uVar24 = param_1[0xe];
      }
      local_b8 = CONCAT44((int)sVar3 * (int)(short)uVar24 >> 0xe,
                          (int)sVar2 * (int)(short)uVar24 >> 0xe);
      silk_stereo_quant_pred(&local_b8,local_e8);
      lVar28 = 0;
      local_b8 = 0;
      *local_c8 = uVar55;
      local_c8[1] = 0;
      *param_5 = '\x01';
      goto LAB_00e87e0c;
    }
    if ((int)(iVar66 + uVar58 * -0xb) < 0 == SBORROW4(iVar66,uVar58 * 0xb)) {
      uVar24 = param_1[0xe];
      if ((int)((ulong)((long)(short)uVar24 * (long)local_c0) >> 0x10) < 0x148) goto LAB_00e87d5c;
LAB_00e87e50:
      if ((short)uVar24 < 0x3cce) {
        local_b8 = CONCAT44((int)sVar3 * (int)(short)uVar24 >> 0xe,
                            (int)sVar2 * (int)(short)uVar24 >> 0xe);
        silk_stereo_quant_pred(&local_b8,local_e8);
        lVar28 = (long)(short)param_1[0xe];
        cVar107 = *param_5;
        goto joined_r0x00e87ec4;
      }
      silk_stereo_quant_pred(&local_b8,local_e8);
      lVar28 = 0x4000;
      cVar107 = *param_5;
    }
    else {
      uVar24 = param_1[0xe];
LAB_00e87d5c:
      local_b8 = CONCAT44((int)sVar3 * (int)(short)uVar24 >> 0xe,
                          (int)sVar2 * (int)(short)uVar24 >> 0xe);
      silk_stereo_quant_pred(&local_b8,local_e8);
      lVar28 = 0;
      local_b8 = 0;
      cVar107 = *param_5;
    }
    if (cVar107 != '\x01') goto LAB_00e87ec8;
LAB_00e87e0c:
    uVar24 = param_1[0x10] + (short)param_11 + (short)param_10 * -8;
    param_1[0x10] = uVar24;
    if (param_10 * 5 <= (int)(short)uVar24) {
      param_1[0x10] = 10000;
      cVar107 = *param_5;
      goto joined_r0x00e87ed0;
    }
    *param_5 = '\0';
    uVar58 = local_c8[1];
joined_r0x00e87edc:
    if ((int)uVar58 < 1) {
      uVar55 = uVar55 - 1;
      if (uVar55 < 2) {
        uVar55 = 1;
      }
      *local_c8 = uVar55;
      local_c8[1] = 1;
    }
  }
  else {
    local_b8 = 0;
    silk_stereo_quant_pred(&local_b8,local_e8);
    lVar28 = 0;
    cVar107 = *param_5;
joined_r0x00e87ec4:
    if (cVar107 == '\x01') goto LAB_00e87e0c;
LAB_00e87ec8:
    param_1[0x10] = 0;
    cVar107 = *param_5;
joined_r0x00e87ed0:
    if (cVar107 == '\0') {
      uVar58 = local_c8[1];
      goto joined_r0x00e87edc;
    }
  }
  pauVar18 = (undefined (*) [16])(local_b8 & 0xffffffff);
  puVar13 = (uint *)(local_b8 >> 0x20);
  uVar55 = param_10 * 8;
  uVar24 = (ushort)(local_b8 >> 0x20);
  if (0 < param_10) {
    uVar72 = *param_1;
    uVar74 = param_1[1];
    sVar2 = 0;
    if (uVar55 != 0) {
      sVar2 = (short)(0x10000 / (int)uVar55);
    }
    lVar32 = (long)(short)param_1[0xf] * 0x400;
    iVar95 = -(uint)uVar74;
    iVar67 = -(uint)uVar72;
    iVar66 = ((int)sVar2 * (int)(short)((short)local_b8 - uVar72) >> 0xf) + 1 >> 1;
    iVar92 = ((int)sVar2 * (int)(short)(uVar24 - uVar74) >> 0xf) + 1 >> 1;
    uVar25 = (long)sVar2 * ((long)(int)lVar28 - (long)(short)param_1[0xf]) >> 6 & 0xfffffffffffffc00
    ;
    uVar58 = uVar55;
    if ((int)uVar55 < 2) {
      uVar58 = 1;
    }
    uVar29 = (ulong)uVar58;
    if (uVar58 < 8) {
LAB_00e87fa8:
      uVar35 = 0;
      lVar26 = lVar32;
      iVar44 = iVar95;
      iVar78 = iVar67;
    }
    else {
      if (((short *)(lVar38 + -2) < (short *)((long)param_2 + uVar29 * 2)) &&
         (local_108 < (undefined (*) [16])(uVar29 * 2 + lVar38 + -2))) goto LAB_00e87fa8;
      lVar20 = uVar25 * 8;
      uVar35 = uVar29 & 0x7ffffff8;
      lVar26 = lVar32 + uVar35 * uVar25;
      bVar49 = (byte)(uVar25 >> 8);
      bVar50 = (byte)(uVar25 >> 0x10);
      bVar51 = (byte)(uVar25 >> 0x18);
      bVar52 = (byte)(uVar25 >> 0x20);
      bVar53 = (byte)(uVar25 >> 0x28);
      bVar54 = (byte)(uVar25 >> 0x30);
      lVar27 = lVar32 + uVar25 * 4;
      lVar34 = lVar32 + uVar25 * 5;
      lVar56 = lVar32 + uVar25 * 2;
      lVar60 = lVar32 + uVar25 * 3;
      lVar63 = lVar32 + uVar25 * 6;
      lVar65 = lVar32 + uVar25 * 7;
      iVar45 = iVar66 * -8;
      iVar84 = iVar92 * -8;
      lVar98 = lVar32 + (ulong)CONCAT15(bVar54 & SUB161(_DAT_004c43a0,6),
                                        CONCAT14(bVar53 & SUB161(_DAT_004c43a0,5),
                                                 CONCAT13(bVar52 & SUB161(_DAT_004c43a0,4),
                                                          CONCAT12(bVar51 & SUB161(_DAT_004c43a0,3),
                                                                   CONCAT11(bVar50 & SUB161(
                                                  _DAT_004c43a0,2),bVar49 & SUB161(_DAT_004c43a0,1))
                                                  )))) * 0x100;
      lVar32 = lVar32 + (ulong)CONCAT15(bVar54 & SUB161(_DAT_004c43a0,0xe),
                                        CONCAT14(bVar53 & SUB161(_DAT_004c43a0,0xd),
                                                 CONCAT13(bVar52 & SUB161(_DAT_004c43a0,0xc),
                                                          CONCAT12(bVar51 & SUB161(_DAT_004c43a0,0xb
                                                                                  ),
                                                                   CONCAT11(bVar50 & SUB161(
                                                  _DAT_004c43a0,10),bVar49 & SUB161(_DAT_004c43a0,9)
                                                  ))))) * 0x100;
      iVar78 = -((uint)uVar72 + iVar66 * (int)uVar35);
      iVar79 = iVar67 + iVar66 * -4;
      iVar82 = iVar67 + iVar66 * -5;
      iVar83 = iVar67 + iVar66 * -6;
      iVar85 = iVar67 + iVar66 * -7;
      iVar71 = iVar67 - iVar66;
      iVar73 = iVar67 + iVar66 * -2;
      iVar76 = iVar67 + iVar66 * -3;
      iVar44 = -((uint)uVar74 + iVar92 * (int)uVar35);
      iVar90 = iVar95 + iVar92 * -4;
      uVar105 = (undefined)iVar90;
      uVar106 = (undefined)((uint)iVar90 >> 8);
      iVar90 = iVar95 + iVar92 * -5;
      uVar109 = (undefined)iVar90;
      uVar110 = (undefined)((uint)iVar90 >> 8);
      iVar90 = iVar95 + iVar92 * -6;
      uVar111 = (undefined)iVar90;
      uVar112 = (undefined)((uint)iVar90 >> 8);
      iVar90 = iVar95 + iVar92 * -7;
      uVar115 = (undefined)iVar90;
      uVar116 = (undefined)((uint)iVar90 >> 8);
      iVar90 = iVar95 - iVar92;
      iVar93 = iVar95 + iVar92 * -2;
      iVar96 = iVar95 + iVar92 * -3;
      pauVar21 = (undefined (*) [16])((long)local_d8 + 2);
      uVar22 = uVar35;
      puVar23 = param_2;
      psVar19 = (short *)(lVar38 + -2);
      do {
        auVar70 = *pauVar21;
        uVar129 = *(undefined8 *)((long)puVar23 + 4);
        uVar128 = *(undefined8 *)((long)puVar23 + -4);
        uVar22 = uVar22 - 8;
        uVar104 = puVar23[1];
        uVar103 = *puVar23;
        uVar12 = *(undefined8 *)((long)puVar23 + 6);
        uVar11 = *(undefined8 *)((long)puVar23 + -2);
        sVar131 = (short)((ulong)uVar11 >> 0x10);
        sVar132 = (short)((ulong)uVar11 >> 0x20);
        sVar133 = (short)((ulong)uVar11 >> 0x30);
        puVar23 = puVar23 + 2;
        sVar2 = (short)iVar66;
        sVar40 = (short)((ulong)uVar12 >> 0x10);
        sVar41 = (short)((ulong)uVar12 >> 0x20);
        sVar42 = (short)((ulong)uVar12 >> 0x30);
        sVar3 = (short)iVar92;
        sVar130 = (short)iVar95 - sVar3;
        iVar43 = (int)(short)uVar12 << 0xb;
        iVar48 = (int)sVar40 << 0xb;
        iVar39 = (int)((ulong)CONCAT24(sVar130 >> 0xf,(int)sVar130) *
                       (long)((int)(short)uVar11 << 0xb) >> 0x10) +
                 (int)((lVar98 + uVar25) * (long)(int)auVar70._0_2_ >> 0x10) +
                 (int)((ulong)(CONCAT44((int)((long)((ulong)(uint)(iVar67 - iVar66) << 0x30) >> 0x3f
                                             ),(int)(short)(iVar67 - iVar66)) *
                              (long)(((int)(short)uVar103 + (int)(short)uVar128 + (short)uVar11 * 2)
                                    * 0x200)) >> 0x10);
        iVar46 = (int)((ulong)((long)(short)((short)iVar93 - sVar3) * (long)((int)sVar132 << 0xb))
                      >> 0x10) + (int)((lVar56 + uVar25) * (long)(int)auVar70._4_2_ >> 0x10) +
                 (int)((ulong)((long)(short)((short)iVar73 - sVar2) *
                              (long)(((int)(short)((ulong)uVar103 >> 0x20) +
                                      (int)(short)((ulong)uVar128 >> 0x20) + sVar132 * 2) * 0x200))
                      >> 0x10);
        iVar47 = (int)((ulong)((long)(short)(CONCAT11(uVar112,uVar111) - sVar3) *
                              (long)((int)sVar41 << 0xb)) >> 0x10) +
                 (int)((lVar63 + uVar25) * (long)(int)auVar70._12_2_ >> 0x10) +
                 (int)((ulong)((long)(short)((short)iVar83 - sVar2) *
                              (long)(((int)(short)((ulong)uVar104 >> 0x20) +
                                      (int)(short)((ulong)uVar129 >> 0x20) + sVar41 * 2) * 0x200))
                      >> 0x10);
        iVar102 = (int)(((ulong)((long)(short)(CONCAT11(uVar116,uVar115) - sVar3) *
                                (long)((int)sVar42 << 0xb)) >> 0x10) +
                        ((lVar65 + uVar25) * (long)(int)auVar70._14_2_ >> 0x10) +
                       ((ulong)((long)(short)((short)iVar85 - sVar2) *
                               (long)(((int)(short)((ulong)uVar104 >> 0x30) +
                                       (int)(short)((ulong)uVar129 >> 0x30) + sVar42 * 2) * 0x200))
                       >> 0x10));
        iVar10 = (int)((long)(short)(CONCAT11(uVar106,uVar105) - sVar3) * (ulong)(uint6)(int6)iVar43
                      >> 0x10) + (int)((lVar27 + uVar25) * (long)(int)auVar70._8_2_ >> 0x10) +
                 (int)((ulong)((long)(short)((short)iVar79 - sVar2) *
                              (long)(((int)(short)uVar104 + (int)(short)uVar129 + (short)uVar12 * 2)
                                    * 0x200)) >> 0x10);
        iVar134 = (int)(((ulong)((long)(short)(CONCAT11(uVar110,uVar109) - sVar3) *
                                (long)(int)(CONCAT26((short)((uint)iVar48 >> 0x10),
                                                     CONCAT24((short)iVar48,iVar43)) >> 0x20)) >>
                        0x10) + ((lVar34 + uVar25) * (long)(int)auVar70._10_2_ >> 0x10) +
                       ((ulong)((long)(short)((short)iVar82 - sVar2) *
                               (long)(((int)(short)((ulong)uVar104 >> 0x10) +
                                       (int)(short)((ulong)uVar129 >> 0x10) + sVar40 * 2) * 0x200))
                       >> 0x10));
        iVar43 = (int)(((ulong)(CONCAT44((int)((long)((ulong)(uint)(iVar90 - iVar92) << 0x30) >>
                                              0x3f),(int)(short)(iVar90 - iVar92)) *
                               (long)((int)sVar131 << 0xb)) >> 0x10) +
                       ((lVar32 + uVar25) * (long)(int)auVar70._2_2_ >> 0x10) +
                      ((ulong)(CONCAT44((int)((long)((ulong)(uint)(iVar71 - iVar66) << 0x30) >> 0x3f
                                             ),(int)(short)(iVar71 - iVar66)) *
                              (long)(((int)(short)((ulong)uVar103 >> 0x10) +
                                      (int)(short)((ulong)uVar128 >> 0x10) + sVar131 * 2) * 0x200))
                      >> 0x10));
        auVar124._4_4_ = iVar43;
        auVar124._0_4_ = iVar39;
        auVar124._8_4_ = iVar46;
        iVar48 = (int)(((ulong)((long)(short)((short)iVar96 - sVar3) * (long)((int)sVar133 << 0xb))
                       >> 0x10) + ((lVar60 + uVar25) * (long)(int)auVar70._6_2_ >> 0x10) +
                      ((ulong)((long)(short)((short)iVar76 - sVar2) *
                              (long)(((int)(short)((ulong)uVar103 >> 0x30) +
                                      (int)(short)((ulong)uVar128 >> 0x30) + sVar133 * 2) * 0x200))
                      >> 0x10));
        auVar124._12_4_ = iVar48;
        auVar126._4_4_ = iVar134;
        auVar126._0_4_ = iVar10;
        auVar126._8_4_ = iVar47;
        auVar126._12_4_ = iVar102;
        lVar98 = lVar98 + lVar20;
        lVar32 = lVar32 + lVar20;
        auVar8._8_4_ = 0x7fff7f;
        auVar8._0_8_ = 0x7fff7f007fff7f;
        auVar8._12_4_ = 0x7fff7f;
        auVar70 = NEON_cmgt(auVar124,auVar8,4);
        auVar9._8_4_ = 0x7fff7f;
        auVar9._0_8_ = 0x7fff7f007fff7f;
        auVar9._12_4_ = 0x7fff7f;
        auVar88 = NEON_cmgt(auVar126,auVar9,4);
        auVar125._0_4_ = (iVar39 >> 7) + 1 >> 1;
        auVar125._4_4_ = (iVar43 >> 7) + 1 >> 1;
        auVar125._8_4_ = (iVar46 >> 7) + 1 >> 1;
        auVar125._12_4_ = (iVar48 >> 7) + 1 >> 1;
        auVar127._0_4_ = (iVar10 >> 7) + 1 >> 1;
        auVar127._4_4_ = (iVar134 >> 7) + 1 >> 1;
        auVar127._8_4_ = (iVar47 >> 7) + 1 >> 1;
        auVar127._12_4_ = (iVar102 >> 7) + 1 >> 1;
        lVar56 = lVar56 + lVar20;
        lVar60 = lVar60 + lVar20;
        auVar6._8_4_ = 0xffff8000;
        auVar6._0_8_ = 0xffff8000ffff8000;
        auVar6._12_4_ = 0xffff8000;
        auVar81 = NEON_smax(auVar125,auVar6,4);
        auVar7._8_4_ = 0xffff8000;
        auVar7._0_8_ = 0xffff8000ffff8000;
        auVar7._12_4_ = 0xffff8000;
        auVar101 = NEON_smax(auVar127,auVar7,4);
        lVar27 = lVar27 + lVar20;
        lVar34 = lVar34 + lVar20;
        lVar63 = lVar63 + lVar20;
        lVar65 = lVar65 + lVar20;
        iVar67 = iVar67 + iVar45;
        iVar71 = iVar71 + iVar45;
        iVar73 = iVar73 + iVar45;
        iVar76 = iVar76 + iVar45;
        iVar79 = iVar79 + iVar45;
        iVar82 = iVar82 + iVar45;
        iVar83 = iVar83 + iVar45;
        iVar85 = iVar85 + iVar45;
        iVar95 = iVar95 + iVar84;
        iVar90 = iVar90 + iVar84;
        iVar93 = iVar93 + iVar84;
        iVar96 = iVar96 + iVar84;
        iVar10 = (uint)CONCAT11(uVar106,uVar105) + iVar84;
        uVar105 = (undefined)iVar10;
        uVar106 = (undefined)((uint)iVar10 >> 8);
        iVar10 = (uint)CONCAT11(uVar110,uVar109) + iVar84;
        uVar109 = (undefined)iVar10;
        uVar110 = (undefined)((uint)iVar10 >> 8);
        iVar10 = (uint)CONCAT11(uVar112,uVar111) + iVar84;
        uVar111 = (undefined)iVar10;
        uVar112 = (undefined)((uint)iVar10 >> 8);
        iVar10 = (uint)CONCAT11(uVar116,uVar115) + iVar84;
        uVar115 = (undefined)iVar10;
        uVar116 = (undefined)((uint)iVar10 >> 8);
        uVar123 = CONCAT26(auVar70._12_2_,
                           CONCAT24(auVar70._8_2_,CONCAT22(auVar70._4_2_,auVar70._0_2_))) &
                  0x7fff7fff7fff7fff;
        uVar72 = auVar88._0_2_ & 0x7fff;
        uVar74 = auVar88._4_2_ & 0x7fff;
        uVar75 = auVar88._8_2_ & 0x7fff;
        uVar77 = auVar88._12_2_ & 0x7fff;
        *(byte *)(psVar19 + 8) = (byte)uVar72 | auVar101[0] & ~auVar88[0];
        *(byte *)((long)psVar19 + 0x11) = (byte)(uVar72 >> 8) | auVar101[1] & ~auVar88[1];
        *(byte *)(psVar19 + 9) = (byte)uVar74 | auVar101[4] & ~auVar88[4];
        *(byte *)((long)psVar19 + 0x13) = (byte)(uVar74 >> 8) | auVar101[5] & ~auVar88[5];
        *(byte *)(psVar19 + 10) = (byte)uVar75 | auVar101[8] & ~auVar88[8];
        *(byte *)((long)psVar19 + 0x15) = (byte)(uVar75 >> 8) | auVar101[9] & ~auVar88[9];
        *(byte *)(psVar19 + 0xb) = (byte)uVar77 | auVar101[12] & ~auVar88[12];
        *(byte *)((long)psVar19 + 0x17) = (byte)(uVar77 >> 8) | auVar101[13] & ~auVar88[13];
        *(byte *)psVar19 = (byte)uVar123 | auVar81[0] & ~auVar70[0];
        *(byte *)((long)psVar19 + 1) = (byte)(uVar123 >> 8) | auVar81[1] & ~auVar70[1];
        *(byte *)(psVar19 + 1) = (byte)(uVar123 >> 0x10) | auVar81[4] & ~auVar70[4];
        *(byte *)((long)psVar19 + 3) = (byte)(uVar123 >> 0x18) | auVar81[5] & ~auVar70[5];
        *(byte *)(psVar19 + 2) = (byte)(uVar123 >> 0x20) | auVar81[8] & ~auVar70[8];
        *(byte *)((long)psVar19 + 5) = (byte)(uVar123 >> 0x28) | auVar81[9] & ~auVar70[9];
        *(byte *)(psVar19 + 3) = (byte)(uVar123 >> 0x30) | auVar81[12] & ~auVar70[12];
        *(byte *)((long)psVar19 + 7) = (byte)(uVar123 >> 0x38) | auVar81[13] & ~auVar70[13];
        pauVar21 = pauVar21 + 1;
        psVar19 = psVar19 + 8;
      } while (uVar22 != 0);
      lVar38 = local_d0;
      local_118 = iVar44;
      local_114 = iVar78;
      local_110 = lVar26;
      local_108 = pauVar18;
      local_f0 = lVar28;
      local_e8 = param_2;
      local_c8 = puVar13;
      if (uVar35 == uVar29) goto LAB_00e88068;
    }
    lVar27 = uVar35 * 2;
    iVar44 = iVar44 - iVar92;
    psVar37 = (short *)(lVar27 + (long)local_d8);
    iVar78 = iVar78 - iVar66;
    lVar32 = uVar29 - uVar35;
    psVar19 = (short *)((long)param_2 + lVar27);
    puVar17 = (undefined2 *)(lVar27 + lVar38 + -2);
    do {
      lVar26 = lVar26 + uVar25;
      psVar37 = psVar37 + 1;
      psVar30 = psVar19 + -2;
      sVar3 = (short)iVar44;
      sVar2 = *psVar19;
      iVar44 = iVar44 - iVar92;
      psVar31 = psVar19 + -1;
      psVar19 = psVar19 + 1;
      sVar40 = (short)iVar78;
      iVar78 = iVar78 - iVar66;
      iVar95 = (int)((ulong)((long)(int)*psVar31 * (long)sVar3) >> 5) +
               (int)((ulong)(lVar26 * *psVar37) >> 0x10) +
               (int)((ulong)((long)sVar40 *
                            (long)(((int)sVar2 + (int)*psVar30 + *psVar31 * 2) * 0x200)) >> 0x10);
      iVar67 = (iVar95 >> 7) + 1 >> 1;
      if (iVar67 == -0x8000 || iVar67 + 0x8000 < 0 != SCARRY4(iVar67,0x8000)) {
        iVar67 = -0x8000;
      }
      uVar1 = 0x7fff;
      if (iVar95 < 0x7fff80) {
        uVar1 = (short)iVar67;
      }
      lVar32 = lVar32 + -1;
      *puVar17 = uVar1;
      puVar17 = puVar17 + 1;
    } while (lVar32 != 0);
  }
LAB_00e88068:
  if ((int)uVar55 < (int)param_11) {
    lVar32 = (long)(int)uVar55;
    lVar27 = (long)((int)lVar28 << 10);
    lVar26 = -((long)puVar13 << 0x30);
    lVar34 = -((long)pauVar18 << 0x30) >> 0x30;
    uVar25 = local_f8 - lVar32;
    if (7 < uVar25) {
      lVar20 = lVar32 * 2;
      pbVar36 = (byte *)((lVar20 + lVar38) - 2);
      if (((byte *)((long)param_2 + local_100) <= pbVar36) ||
         ((local_100 + lVar38) - 2U <= (ulong)((long)param_2 + lVar20 + -4))) {
        sVar2 = (short)((ulong)lVar26 >> 0x30);
        iVar66 = (int)(lVar26 >> 0x3f);
        uVar35 = uVar25 & 0xfffffffffffffff8;
        lVar32 = uVar35 + lVar32;
        pauVar21 = (undefined (*) [16])((long)param_2 + lVar20);
        lVar56 = CONCAT44(iVar66,(int)sVar2);
        auVar57._8_4_ = 0xffff8000;
        auVar57._0_8_ = 0xffff8000ffff8000;
        auVar57._12_4_ = 0xffff8000;
        auVar64._8_4_ = 0x7fff7f;
        auVar64._0_8_ = 0x7fff7f007fff7f;
        auVar64._12_4_ = 0x7fff7f;
        pauVar16 = (undefined (*) [16])((long)local_d8 + lVar20 + 2);
        uVar29 = uVar35;
        do {
          auVar70 = *(undefined (*) [16])((long)pauVar21[-1] + 0xc);
          auVar81 = *pauVar21;
          uVar29 = uVar29 - 8;
          auVar88 = *(undefined (*) [16])((long)pauVar21[-1] + 0xe);
          pauVar21 = pauVar21 + 1;
          auVar101 = *pauVar16;
          cVar117 = (char)(auVar101._8_2_ >> 0xf);
          cVar119 = (char)(auVar101._10_2_ >> 0xf);
          cVar120 = (char)(auVar101._12_2_ >> 0xf);
          cVar122 = (char)(auVar101._14_2_ >> 0xf);
          cVar107 = (char)((int)cVar120 >> 7);
          cVar113 = (char)((int)cVar122 >> 7);
          cVar118 = (char)((int)cVar117 >> 7);
          cVar121 = (char)((int)cVar119 >> 7);
          iVar92 = ((int)auVar81._4_2_ + (int)auVar70._4_2_ + auVar88._4_2_ * 2) * 0x200;
          iVar95 = ((int)auVar81._6_2_ + (int)auVar70._6_2_ + auVar88._6_2_ * 2) * 0x200;
          cVar108 = (char)(iVar92 >> 0x1f);
          cVar114 = (char)(iVar95 >> 0x1f);
          lVar20 = CONCAT44(iVar66,(int)sVar2);
          iVar44 = (int)((ulong)(CONCAT44(iVar66,(int)sVar2) * (long)((int)auVar88._12_2_ << 0xb))
                        >> 0x10) +
                   (int)((ulong)(lVar27 * CONCAT17(cVar107,CONCAT16(cVar107,CONCAT15(cVar107,
                                                  CONCAT14(cVar107,CONCAT13(cVar120,(int3)auVar101.
                                                  _12_2_)))))) >> 0x10) +
                   (int)((ulong)(lVar34 * (((int)auVar81._12_2_ + (int)auVar70._12_2_ +
                                           auVar88._12_2_ * 2) * 0x200)) >> 0x10);
          iVar84 = (int)(((ulong)(lVar56 * ((int)auVar88._14_2_ << 0xb)) >> 0x10) +
                         ((ulong)(lVar27 * CONCAT17(cVar113,CONCAT16(cVar113,CONCAT15(cVar113,
                                                  CONCAT14(cVar113,CONCAT13(cVar122,(int3)auVar101.
                                                  _14_2_)))))) >> 0x10) +
                        ((ulong)(lVar34 * (((int)auVar81._14_2_ + (int)auVar70._14_2_ +
                                           auVar88._14_2_ * 2) * 0x200)) >> 0x10));
          iVar45 = (int)((ulong)(lVar20 * ((int)auVar88._4_2_ << 0xb)) >> 0x10) +
                   (int)((ulong)(lVar27 * (int)auVar101._4_2_) >> 0x10) +
                   (int)((ulong)(lVar34 * CONCAT17(cVar108,CONCAT16(cVar108,CONCAT15(cVar108,(int5)
                                                  iVar92)))) >> 0x10);
          iVar90 = (int)(((ulong)(lVar56 * ((int)auVar88._6_2_ << 0xb)) >> 0x10) +
                         ((ulong)(lVar27 * (int)auVar101._6_2_) >> 0x10) +
                        ((ulong)(lVar34 * CONCAT17(cVar114,CONCAT16(cVar114,CONCAT15(cVar114,(int5)
                                                  iVar95)))) >> 0x10));
          iVar92 = (int)((ulong)(lVar20 * ((int)auVar88._0_2_ << 0xb)) >> 0x10) +
                   (int)((ulong)(lVar27 * (int)auVar101._0_2_) >> 0x10) +
                   (int)((ulong)(lVar34 * (((int)auVar81._0_2_ + (int)auVar70._0_2_ +
                                           auVar88._0_2_ * 2) * 0x200)) >> 0x10);
          iVar95 = (int)((ulong)(lVar20 * ((int)auVar88._8_2_ << 0xb)) >> 0x10) +
                   (int)((ulong)(lVar27 * CONCAT17(cVar118,CONCAT16(cVar118,CONCAT15(cVar118,
                                                  CONCAT14(cVar118,CONCAT13(cVar117,(int3)auVar101.
                                                  _8_2_)))))) >> 0x10) +
                   (int)((ulong)(lVar34 * (((int)auVar81._8_2_ + (int)auVar70._8_2_ +
                                           auVar88._8_2_ * 2) * 0x200)) >> 0x10);
          iVar67 = (int)(((ulong)(lVar56 * ((int)auVar88._2_2_ << 0xb)) >> 0x10) +
                         ((ulong)(lVar27 * (int)auVar101._2_2_) >> 0x10) +
                        ((ulong)(lVar34 * (((int)auVar81._2_2_ + (int)auVar70._2_2_ +
                                           auVar88._2_2_ * 2) * 0x200)) >> 0x10));
          auVar69._4_4_ = iVar67;
          auVar69._0_4_ = iVar92;
          auVar69._8_4_ = iVar45;
          auVar69._12_4_ = iVar90;
          iVar78 = (int)(((ulong)(lVar56 * ((int)auVar88._10_2_ << 0xb)) >> 0x10) +
                         ((ulong)(lVar27 * CONCAT17(cVar121,CONCAT16(cVar121,CONCAT15(cVar121,
                                                  CONCAT14(cVar121,CONCAT13(cVar119,(int3)auVar101.
                                                  _10_2_)))))) >> 0x10) +
                        ((ulong)(lVar34 * (((int)auVar81._10_2_ + (int)auVar70._10_2_ +
                                           auVar88._10_2_ * 2) * 0x200)) >> 0x10));
          auVar80._4_4_ = iVar78;
          auVar80._0_4_ = iVar95;
          auVar80._8_4_ = iVar44;
          auVar80._12_4_ = iVar84;
          auVar81 = NEON_cmgt(auVar80,auVar64,4);
          auVar70 = NEON_cmgt(auVar69,auVar64,4);
          auVar100._0_4_ = (iVar92 >> 7) + 1 >> 1;
          auVar100._4_4_ = (iVar67 >> 7) + 1 >> 1;
          auVar100._8_4_ = (iVar45 >> 7) + 1 >> 1;
          auVar100._12_4_ = (iVar90 >> 7) + 1 >> 1;
          auVar87._0_4_ = (iVar95 >> 7) + 1 >> 1;
          auVar87._4_4_ = (iVar78 >> 7) + 1 >> 1;
          auVar87._8_4_ = (iVar44 >> 7) + 1 >> 1;
          auVar87._12_4_ = (iVar84 >> 7) + 1 >> 1;
          auVar101 = NEON_smax(auVar100,auVar57,4);
          auVar88 = NEON_smax(auVar87,auVar57,4);
          uVar22 = CONCAT26(auVar70._12_2_,
                            CONCAT24(auVar70._8_2_,CONCAT22(auVar70._4_2_,auVar70._0_2_))) &
                   0x7fff7fff7fff7fff;
          uVar72 = auVar81._0_2_ & 0x7fff;
          uVar74 = auVar81._4_2_ & 0x7fff;
          uVar75 = auVar81._8_2_ & 0x7fff;
          uVar77 = auVar81._12_2_ & 0x7fff;
          pbVar36[0x10] = (byte)uVar72 | auVar88[0] & ~auVar81[0];
          pbVar36[0x11] = (byte)(uVar72 >> 8) | auVar88[1] & ~auVar81[1];
          pbVar36[0x12] = (byte)uVar74 | auVar88[4] & ~auVar81[4];
          pbVar36[0x13] = (byte)(uVar74 >> 8) | auVar88[5] & ~auVar81[5];
          pbVar36[0x14] = (byte)uVar75 | auVar88[8] & ~auVar81[8];
          pbVar36[0x15] = (byte)(uVar75 >> 8) | auVar88[9] & ~auVar81[9];
          pbVar36[0x16] = (byte)uVar77 | auVar88[12] & ~auVar81[12];
          pbVar36[0x17] = (byte)(uVar77 >> 8) | auVar88[13] & ~auVar81[13];
          *pbVar36 = (byte)uVar22 | auVar101[0] & ~auVar70[0];
          pbVar36[1] = (byte)(uVar22 >> 8) | auVar101[1] & ~auVar70[1];
          pbVar36[2] = (byte)(uVar22 >> 0x10) | auVar101[4] & ~auVar70[4];
          pbVar36[3] = (byte)(uVar22 >> 0x18) | auVar101[5] & ~auVar70[5];
          pbVar36[4] = (byte)(uVar22 >> 0x20) | auVar101[8] & ~auVar70[8];
          pbVar36[5] = (byte)(uVar22 >> 0x28) | auVar101[9] & ~auVar70[9];
          pbVar36[6] = (byte)(uVar22 >> 0x30) | auVar101[12] & ~auVar70[12];
          pbVar36[7] = (byte)(uVar22 >> 0x38) | auVar101[13] & ~auVar70[13];
          pauVar16 = pauVar16 + 1;
          pbVar36 = pbVar36 + 0x10;
        } while (uVar29 != 0);
        local_c8 = puVar13;
        if (uVar25 == uVar35) goto LAB_00e883e0;
      }
    }
    lVar20 = lVar32 * 2;
    psVar37 = (short *)(lVar20 + (long)local_d8);
    psVar19 = (short *)((long)param_2 + lVar20);
    lVar32 = local_f8 - lVar32;
    puVar17 = (undefined2 *)(lVar20 + lVar38 + -2);
    do {
      psVar37 = psVar37 + 1;
      psVar30 = psVar19 + -2;
      sVar2 = *psVar19;
      psVar31 = psVar19 + -1;
      psVar19 = psVar19 + 1;
      iVar66 = (int)((ulong)((long)(int)*psVar31 * (lVar26 >> 0x30)) >> 5) +
               (int)((ulong)(*psVar37 * lVar27) >> 0x10) +
               (int)((ulong)(lVar34 * (((int)sVar2 + (int)*psVar30 + *psVar31 * 2) * 0x200)) >> 0x10
                    );
      iVar92 = (iVar66 >> 7) + 1 >> 1;
      if (iVar92 == -0x8000 || iVar92 + 0x8000 < 0 != SCARRY4(iVar92,0x8000)) {
        iVar92 = -0x8000;
      }
      uVar1 = 0x7fff;
      if (iVar66 < 0x7fff80) {
        uVar1 = (short)iVar92;
      }
      lVar32 = lVar32 + -1;
      *puVar17 = uVar1;
      puVar17 = puVar17 + 1;
    } while (lVar32 != 0);
  }
LAB_00e883e0:
  *param_1 = (ushort)pauVar18;
  param_1[1] = uVar24;
  param_1[0xf] = (ushort)lVar28;
  if (*(long *)(local_e0 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


