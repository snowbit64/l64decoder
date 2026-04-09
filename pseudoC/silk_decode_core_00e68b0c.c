// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_decode_core
// Entry Point: 00e68b0c
// Size: 3580 bytes
// Signature: undefined silk_decode_core(void)


void silk_decode_core(uint *param_1,long param_2,undefined2 *param_3,long param_4,undefined4 param_5
                     )

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  uint *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined (*pauVar24) [16];
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  ulong uVar33;
  int iVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  uint *puVar41;
  undefined8 *puVar42;
  undefined2 *puVar43;
  int iVar44;
  ulong uVar45;
  undefined (*pauVar46) [16];
  ulong uVar47;
  undefined8 *puVar48;
  uint uVar49;
  uint uVar50;
  int iVar51;
  uint uVar52;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  undefined auVar53 [16];
  undefined auVar54 [16];
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined8 uVar66;
  byte bVar72;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined8 uVar73;
  byte bVar79;
  long lVar80;
  undefined (*apauStack_180 [2]) [16];
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined2 *local_150;
  long local_148;
  int local_140;
  undefined4 local_13c;
  undefined (*local_138) [16];
  long local_130;
  long local_128;
  long lStack_120;
  undefined8 *local_118;
  long local_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint *local_e8;
  ulong local_e0;
  undefined8 *local_d8;
  ulong uStack_d0;
  undefined (*local_c8) [16];
  ulong local_c0;
  undefined2 *local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  short local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  long local_70;
  
  local_170 = tpidr_el0;
  local_70 = *(long *)(local_170 + 0x28);
  lVar26 = (long)apauStack_180 - ((long)(int)param_1[0x248] * 2 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar26 - (((long)(int)param_1[0x246] + (long)(int)param_1[0x248]) * 4 + 0xfU &
                       0xfffffffffffffff0);
  local_118 = (undefined8 *)
              (local_130 - ((long)(int)param_1[0x247] * 4 + 0xfU & 0xfffffffffffffff0));
  pauVar24 = (undefined (*) [16])
             ((long)local_118 - ((long)(int)param_1[0x247] * 4 + 0x4fU & 0xfffffffffffffff0));
  local_140 = (int)*(char *)((long)param_1 + 0xae7);
  if (0 < (int)param_1[0x246]) {
    lVar25 = 0;
    iVar32 = (int)*(char *)((long)param_1 + 0xaea);
    sVar12 = *(short *)((long)&silk_Quantization_Offsets_Q10 +
                       (long)*(char *)((long)param_1 + 0xae6) * 2 +
                       (long)((int)*(char *)((long)param_1 + 0xae5) >> 1) * 4);
    do {
      sVar13 = *(short *)(param_4 + lVar25 * 2);
      iVar22 = iVar32 * 0xbb38435 + 0x3619636b;
      uVar49 = sVar13 * 0x4000;
      iVar32 = (int)sVar13;
      uVar50 = (int)sVar13 << 0xe | 0x500;
      if (-1 < iVar32) {
        uVar50 = uVar49;
      }
      uVar49 = uVar49 - 0x500;
      if (iVar32 < 1) {
        uVar49 = uVar50;
      }
      uVar49 = uVar49 + sVar12 * 0x10;
      iVar32 = iVar22 + iVar32;
      uVar50 = -uVar49;
      if (-1 < iVar22) {
        uVar50 = uVar49;
      }
      param_1[lVar25 + 1] = uVar50;
      lVar25 = lVar25 + 1;
    } while (lVar25 < (int)param_1[0x246]);
  }
  apauStack_180[1] = (undefined (*) [16])(param_1 + 0x141);
  uVar50 = param_1[0x245];
  auVar53 = *apauStack_180[1];
  uVar73 = *(undefined8 *)(param_1 + 0x147);
  uVar66 = *(undefined8 *)(param_1 + 0x145);
  uVar63 = *(undefined8 *)(param_1 + 0x14b);
  uVar62 = *(undefined8 *)(param_1 + 0x149);
  uVar65 = *(undefined8 *)(param_1 + 0x14f);
  uVar64 = *(undefined8 *)(param_1 + 0x14d);
  local_150 = param_3;
  local_13c = param_5;
  local_c8 = pauVar24;
  *(long *)(*pauVar24 + 8) = auVar53._8_8_;
  *(long *)*pauVar24 = auVar53._0_8_;
  *(undefined8 *)(pauVar24[1] + 8) = uVar73;
  *(undefined8 *)pauVar24[1] = uVar66;
  *(undefined8 *)(pauVar24[2] + 8) = uVar63;
  *(undefined8 *)pauVar24[2] = uVar62;
  *(undefined8 *)(pauVar24[3] + 8) = uVar65;
  *(undefined8 *)pauVar24[3] = uVar64;
  if (0 < (int)uVar50) {
    uVar47 = 0;
    uVar45 = (ulong)param_1[0x248];
    puVar48 = (undefined8 *)(param_1 + 1);
    local_148 = local_130 + -8;
    local_160 = local_130 + -4;
    local_158 = local_130 + -0xc;
    local_168 = local_130 + -0x10;
    local_b8 = local_150;
    local_138 = local_c8 + 2;
    lStack_108 = 0x200000000;
    local_110 = 0x200000000;
    uStack_f8 = 0x7fffffff00000000;
    uStack_100 = 0x7fffffff00000000;
    local_128 = lVar26;
    lStack_120 = param_2;
    local_e8 = param_1;
    do {
      lVar25 = param_2 + (uVar47 >> 1 & 0x7fffffff) * 0x20 + 0x20;
      __memcpy_chk(&local_90,lVar25,(long)(int)param_1[0x249] << 1,0x20);
      pauVar24 = local_c8;
      uVar73 = uStack_f8;
      uVar66 = uStack_100;
      lVar80 = lStack_108;
      lVar38 = local_110;
      uVar49 = *(uint *)(param_2 + uVar47 * 4 + 0x10);
      uVar50 = -uVar49;
      if (-1 < (int)uVar49) {
        uVar50 = uVar49;
      }
      iVar22 = (int)LZCOUNT(uVar50);
      iVar32 = uVar49 << (ulong)(iVar22 - 1U & 0x1f);
      uVar52 = 0;
      if (iVar32 >> 0x10 != 0) {
        uVar52 = 0x1fffffff / (iVar32 >> 0x10);
      }
      uVar55 = (int)((ulong)(((long)-((-((ulong)(uVar52 >> 0xf) & 1) & 0xfffffff800000000 |
                                      ((ulong)uVar52 & 0xffff) << 0x13) * (long)iVar32 &
                                     0xfffffff800000000) >> 0x20) * (long)(int)uVar52) >> 0x10) +
               uVar52 * 0x10000;
      if (uVar50 >> 0x11 == 0) {
        uVar57 = iVar22 - 0xf;
        uVar56 = -0x80000000 >> (uVar57 & 0x1f);
        uVar50 = 0x7fffffff >> (ulong)(uVar57 & 0x1f);
        if ((int)uVar56 <= (int)uVar55) {
          uVar56 = uVar55;
        }
        if ((int)uVar55 <= (int)uVar50) {
          uVar50 = uVar56;
        }
        uVar50 = uVar50 << (ulong)(uVar57 & 0x1f);
        uVar55 = *param_1;
        cVar58 = *(char *)((long)param_1 + 0xae5);
        if (uVar49 == uVar55) goto LAB_00e68e9c;
LAB_00e68df8:
        uVar56 = -uVar55;
        if (-1 < (int)uVar55) {
          uVar56 = uVar55;
        }
        iVar22 = (int)LZCOUNT(uVar56) - iVar22;
        iVar34 = uVar55 << (ulong)((int)LZCOUNT(uVar56) - 1U & 0x1f);
        lVar35 = (long)(short)uVar52 * (long)iVar34;
        uVar52 = (int)((ulong)((long)(short)uVar52 *
                              (long)(int)(iVar34 - ((uint)((ulong)((lVar35 >> 0x10) * (long)iVar32)
                                                          >> 0x1d) & 0xfffffff8))) >> 0x10) +
                 (int)((ulong)lVar35 >> 0x10);
        if (iVar22 == -0xe || iVar22 + 0xe < 0 != SCARRY4(iVar22,0xe)) {
          uVar57 = -iVar22 - 0xd;
          uVar55 = -0x80000000 >> (uVar57 & 0x1f);
          uVar56 = 0x7fffffff >> (ulong)(uVar57 & 0x1f);
          if ((int)uVar55 <= (int)uVar52) {
            uVar55 = uVar52;
          }
          if ((int)uVar52 <= (int)uVar56) {
            uVar56 = uVar55;
          }
          iVar32 = uVar56 << (ulong)(uVar57 & 0x1f);
        }
        else {
          iVar32 = (int)uVar52 >> (iVar22 + 0xdU & 0x1f);
          if (0x2f < iVar22 + 0x1dU) {
            iVar32 = 0;
          }
        }
        lVar35 = (long)iVar32;
        iVar51 = *(int *)(*local_c8 + 8);
        iVar22 = *(int *)(*local_c8 + 8);
        iVar44 = *(int *)local_c8[1];
        iVar34 = *(int *)local_c8[1];
        iVar10 = *(int *)(local_c8[1] + 8);
        *(int *)*local_c8 = (int)((ulong)(*(int *)*local_c8 * lVar35) >> 0x10);
        *(int *)(*pauVar24 + 4) = (int)((ulong)(iVar51 * lVar35) >> 0x10);
        *(int *)(*pauVar24 + 8) = (int)((ulong)(iVar22 * lVar35) >> 0x10);
        *(int *)(*pauVar24 + 0xc) = (int)((ulong)(iVar44 * lVar35) >> 0x10);
        iVar22 = *(int *)(pauVar24[1] + 8);
        iVar44 = *(int *)pauVar24[2];
        iVar51 = *(int *)pauVar24[2];
        iVar11 = *(int *)(pauVar24[2] + 8);
        *(int *)pauVar24[1] = (int)((ulong)(iVar34 * lVar35) >> 0x10);
        *(int *)(pauVar24[1] + 4) = (int)((ulong)(iVar10 * lVar35) >> 0x10);
        *(int *)(pauVar24[1] + 8) = (int)((ulong)(iVar22 * lVar35) >> 0x10);
        *(int *)(pauVar24[1] + 0xc) = (int)((ulong)(iVar44 * lVar35) >> 0x10);
        iVar22 = *(int *)(pauVar24[2] + 8);
        iVar44 = *(int *)pauVar24[3];
        *(int *)pauVar24[2] = (int)((ulong)(iVar51 * lVar35) >> 0x10);
        *(int *)(pauVar24[2] + 4) = (int)((ulong)(iVar11 * lVar35) >> 0x10);
        iVar34 = *(int *)pauVar24[3];
        iVar10 = *(int *)(pauVar24[3] + 8);
        iVar51 = *(int *)(pauVar24[3] + 8);
        iVar11 = *(int *)pauVar24[4];
        *(int *)(pauVar24[2] + 8) = (int)((ulong)(iVar22 * lVar35) >> 0x10);
        *(int *)(pauVar24[2] + 0xc) = (int)((ulong)(iVar44 * lVar35) >> 0x10);
        *(int *)pauVar24[3] = (int)((ulong)(iVar34 * lVar35) >> 0x10);
        *(int *)(pauVar24[3] + 4) = (int)((ulong)(iVar10 * lVar35) >> 0x10);
        *(int *)(pauVar24[3] + 8) = (int)((ulong)(iVar51 * lVar35) >> 0x10);
        *(int *)(pauVar24[3] + 0xc) = (int)((ulong)(iVar11 * lVar35) >> 0x10);
      }
      else {
        uVar50 = (int)uVar55 >> (0xfU - iVar22 & 0x1f);
        uVar55 = *param_1;
        cVar58 = *(char *)((long)param_1 + 0xae5);
        if (uVar49 != uVar55) goto LAB_00e68df8;
LAB_00e68e9c:
        iVar32 = 0x10000;
      }
      *param_1 = uVar49;
      lVar35 = param_2 + (ulong)(uint)((int)uVar47 * 5) * 2;
      puVar19 = (undefined8 *)(lVar35 + 0x60);
      iVar22 = (int)uVar45;
      local_d8 = puVar48;
      uStack_d0 = uVar47;
      if ((((param_1[0x416] == 0) || (param_1[0x417] != 2)) || (cVar58 == '\x02')) || (1 < uVar47))
      {
        if (cVar58 == '\x02') {
          uVar52 = *(uint *)(param_2 + uVar47 * 4);
          goto joined_r0x00e69004;
        }
        uVar50 = param_1[0x247];
        uVar29 = (ulong)uVar50;
        puVar28 = puVar48;
        lVar26 = local_128;
        param_2 = lStack_120;
        param_1 = local_e8;
        pauVar24 = local_c8;
      }
      else {
        *puVar19 = 0;
        *(undefined2 *)(lVar35 + 0x68) = 0;
        *(undefined2 *)(lVar35 + 100) = 0x1000;
        uVar52 = param_1[0x241];
        *(uint *)(param_2 + uVar47 * 4) = uVar52;
joined_r0x00e69004:
        if (uVar47 == 0) {
          uVar55 = param_1[0x249];
          uVar56 = param_1[0x248];
          local_a0 = CONCAT44(local_a0._4_4_,uVar49);
          iVar32 = uVar56 - (uVar52 + uVar55);
          local_98 = puVar19;
LAB_00e6905c:
          iVar32 = iVar32 + -2;
          silk_LPC_analysis_filter
                    (lVar26 + (long)iVar32 * 2,
                     (long)param_1 + (long)(int)(iVar32 + param_1[0x247] * (int)uVar47) * 2 + 0x544,
                     lVar25,uVar56 - iVar32,uVar55,local_13c);
          if (uVar47 == 0) {
            uVar50 = (uint)((ulong)((long)*(short *)(param_2 + 0x88) * (long)(int)uVar50) >> 0xe) &
                     0xfffffffc;
          }
          puVar19 = local_98;
          uVar66 = uStack_100;
          uVar73 = uStack_f8;
          lVar38 = local_110;
          lVar80 = lStack_108;
          uVar49 = (uint)local_a0;
          if ((int)(uVar52 + 1) < 0 == SCARRY4(uVar52,1)) {
            lVar25 = (long)(int)uVar50;
            uVar50 = param_1[0x248];
            uVar47 = (ulong)(uVar52 + 2);
            if (uVar52 == 0xffffffff) {
              uVar29 = 0;
            }
            else {
              uVar29 = 0;
              iVar32 = uVar50 - 1;
              iVar34 = (int)(uVar47 - 1);
              if (((iVar32 - iVar34 <= iVar32) && (uVar47 - 1 >> 0x20 == 0)) &&
                 (iVar51 = iVar22 + -1, iVar51 - iVar34 <= iVar51)) {
                uVar36 = 0;
                uVar29 = uVar47 & 0xfffffffe;
                do {
                  uVar55 = (uint)uVar36 ^ 0xfffffffe;
                  lVar35 = (long)iVar32;
                  uVar36 = uVar36 + 2;
                  iVar32 = iVar32 + -2;
                  sVar12 = *(short *)(lVar26 + (long)(int)(uVar50 + uVar55) * 2);
                  *(int *)(local_130 + (long)iVar51 * 4) =
                       (int)((ulong)(*(short *)(lVar26 + lVar35 * 2) * lVar25) >> 0x10);
                  iVar51 = iVar51 + -2;
                  *(int *)(local_130 + (long)(int)(iVar22 + uVar55) * 4) =
                       (int)((ulong)(sVar12 * lVar25) >> 0x10);
                } while (uVar29 != uVar36);
                if (uVar29 == uVar47) goto LAB_00e69204;
              }
            }
            lVar35 = uVar47 - uVar29;
            iVar32 = ~(uint)uVar29 + iVar22;
            iVar34 = ~(uint)uVar29 + uVar50;
            do {
              lVar30 = (long)iVar34;
              iVar34 = iVar34 + -1;
              lVar35 = lVar35 + -1;
              *(int *)(local_130 + (long)iVar32 * 4) =
                   (int)((ulong)(*(short *)(lVar26 + lVar30 * 2) * lVar25) >> 0x10);
              iVar32 = iVar32 + -1;
            } while (lVar35 != 0);
          }
        }
        else {
          if ((uVar47 == 2) && (local_140 < 4)) {
            local_a0 = CONCAT44(local_a0._4_4_,uVar49);
            iVar32 = param_1[0x248] - (uVar52 + param_1[0x249]);
            local_98 = puVar19;
            memcpy((void *)((long)param_1 + (long)(int)param_1[0x248] * 2 + 0x544),local_150,
                   (long)(int)param_1[0x247] << 2);
            uVar56 = param_1[0x248];
            uVar55 = param_1[0x249];
            goto LAB_00e6905c;
          }
          if ((iVar32 != 0x10000) && ((int)(uVar52 + 1) < 0 == SCARRY4(uVar52,1))) {
            lVar26 = (long)iVar32;
            uVar47 = (ulong)(uVar52 + 2);
            if (uVar52 + 2 < 4) {
              uVar29 = 0;
            }
            else {
              uVar29 = 0;
              uVar50 = iVar22 - 1;
              if (((int)(uVar50 - (int)(uVar47 - 1)) <= (int)uVar50) && (uVar47 - 1 >> 0x20 == 0)) {
                uVar29 = uVar47 & 0xfffffffc;
                uVar36 = uVar29;
                do {
                  uVar33 = -(ulong)(uVar50 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar50 << 2;
                  uVar36 = uVar36 - 4;
                  uVar50 = uVar50 - 4;
                  auVar53 = NEON_rev64(*(undefined (*) [16])(local_158 + uVar33),4);
                  auVar53 = NEON_ext(auVar53,auVar53,8,1);
                  cVar58 = (char)(auVar53._0_4_ >> 0x1f);
                  cVar59 = (char)(auVar53._4_4_ >> 0x1f);
                  auVar54._4_4_ =
                       (int)((ulong)(lVar26 * CONCAT17(cVar59,CONCAT16(cVar59,CONCAT15(cVar59,(int5)
                                                  auVar53._4_4_)))) >> 0x10);
                  auVar54._0_4_ =
                       (int)((ulong)(lVar26 * CONCAT17(cVar58,CONCAT16(cVar58,CONCAT15(cVar58,(int5)
                                                  auVar53._0_4_)))) >> 0x10);
                  auVar54._12_4_ = (int)((ulong)(lVar26 * auVar53._12_4_) >> 0x10);
                  auVar54._8_4_ = (int)((ulong)(lVar26 * auVar53._8_4_) >> 0x10);
                  auVar53 = NEON_rev64(auVar54,4);
                  auVar53 = NEON_ext(auVar53,auVar53,8,1);
                  puVar28 = (undefined8 *)(local_158 + uVar33);
                  puVar28[1] = auVar53._8_8_;
                  *puVar28 = auVar53._0_8_;
                } while (uVar36 != 0);
                if (uVar29 == uVar47) goto LAB_00e69204;
              }
            }
            lVar25 = uVar47 - uVar29;
            uVar50 = ~(uint)uVar29 + iVar22;
            do {
              uVar47 = -(ulong)(uVar50 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar50 << 2;
              uVar50 = uVar50 - 1;
              lVar25 = lVar25 + -1;
              *(int *)(local_130 + uVar47) =
                   (int)((ulong)(*(int *)(local_130 + uVar47) * lVar26) >> 0x10);
            } while (lVar25 != 0);
          }
        }
LAB_00e69204:
        uVar50 = param_1[0x247];
        uVar29 = (ulong)uVar50;
        puVar28 = local_118;
        lVar26 = local_128;
        param_2 = lStack_120;
        param_1 = local_e8;
        pauVar24 = local_c8;
        if (0 < (int)uVar50) {
          lVar25 = (long)*(short *)puVar19;
          iVar32 = (iVar22 - uVar52) + 2;
          lVar35 = (long)*(short *)((long)puVar19 + 2);
          lVar30 = (long)*(short *)((long)puVar19 + 4);
          uVar45 = (ulong)iVar22;
          lVar31 = (long)*(short *)((long)puVar19 + 6);
          uVar47 = local_130 + (long)iVar32 * 4;
          lVar37 = (long)*(short *)(puVar19 + 1);
          if (uVar50 < 4) {
LAB_00e69240:
            uVar39 = 0;
          }
          else {
            lVar18 = (long)iVar32;
            uVar36 = local_130 + uVar45 * 4;
            uVar33 = local_130 + (uVar45 + uVar29) * 4;
            lVar40 = (lVar18 + uVar29) * 4;
            lVar20 = lVar18 * 4;
            uVar39 = 0;
            if (((uVar36 < (ulong)(local_130 + lVar40) && uVar47 < uVar33) ||
                (uVar36 < (ulong)(local_160 + lVar40) && (ulong)(local_160 + lVar20) < uVar33)) ||
               ((uVar36 < (ulong)(local_148 + lVar40) && (ulong)(local_148 + lVar20) < uVar33 ||
                (uVar36 < (ulong)(local_158 + lVar40) && (ulong)(local_158 + lVar20) < uVar33))))
            goto LAB_00e69240;
            if ((ulong)(local_168 + lVar40) <= uVar36 || uVar33 <= (ulong)(local_168 + lVar20)) {
              uVar39 = uVar29 & 0xfffffffc;
              lVar20 = uVar45 * 4;
              uVar45 = uVar39 + uVar45;
              uVar47 = uVar47 + uVar39 * 4;
              puVar19 = (undefined8 *)(local_148 + lVar18 * 4);
              puVar21 = puVar48;
              puVar23 = local_118;
              uVar36 = uVar39;
              puVar42 = (undefined8 *)(local_130 + lVar20);
              do {
                auVar53 = *(undefined (*) [16])(puVar19 + 1);
                uVar36 = uVar36 - 4;
                puVar2 = (undefined8 *)((long)puVar19 + 4);
                puVar16 = puVar19 + 1;
                uVar62 = *puVar19;
                iVar32 = (int)*(undefined8 *)((long)puVar19 + 0xc);
                cVar58 = (char)(iVar32 >> 0x1f);
                iVar34 = (int)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20);
                cVar60 = (char)(iVar34 >> 0x1f);
                iVar22 = (int)*(undefined8 *)((long)puVar19 + 4);
                cVar59 = (char)(iVar22 >> 0x1f);
                iVar51 = (int)((ulong)*(undefined8 *)((long)puVar19 + 4) >> 0x20);
                cVar61 = (char)(iVar51 >> 0x1f);
                lVar40 = (int)((ulong)*(undefined8 *)((long)puVar19 + -4) >> 0x20) * lVar31;
                lVar18 = (int)*(undefined8 *)((long)puVar19 + -4) * lVar31;
                lVar27 = CONCAT17(cVar59,CONCAT16(cVar59,CONCAT15(cVar59,(int5)iVar22))) * lVar31;
                lVar20 = CONCAT17(cVar61,CONCAT16(cVar61,CONCAT15(cVar61,(int5)iVar51))) * lVar31;
                puVar3 = puVar19 + -1;
                uVar63 = *puVar19;
                puVar19 = puVar19 + 2;
                bVar67 = (byte)((ulong)uVar66 >> 0x10);
                bVar68 = (byte)((ulong)uVar66 >> 0x18);
                bVar69 = (byte)((ulong)uVar66 >> 0x20);
                bVar70 = (byte)((ulong)uVar66 >> 0x28);
                bVar71 = (byte)((ulong)uVar66 >> 0x30);
                bVar72 = (byte)((ulong)uVar66 >> 0x38);
                bVar74 = (byte)((ulong)uVar73 >> 0x10);
                bVar75 = (byte)((ulong)uVar73 >> 0x18);
                bVar76 = (byte)((ulong)uVar73 >> 0x20);
                bVar77 = (byte)((ulong)uVar73 >> 0x28);
                bVar78 = (byte)((ulong)uVar73 >> 0x30);
                bVar79 = (byte)((ulong)uVar73 >> 0x38);
                uVar52 = ((int)(auVar53._0_4_ * lVar25 * 0x10000 +
                                ((int)*puVar2 * lVar35 * 0x10000 & 0xffffffff00000000U) +
                                (((ulong)((int)uVar62 * lVar30) >> 0x10) << 0x20) +
                                (ulong)CONCAT15((byte)((ulong)lVar18 >> 0x28) & bVar72,
                                                CONCAT14((byte)((ulong)lVar18 >> 0x20) & bVar71,
                                                         CONCAT13((byte)((ulong)lVar18 >> 0x18) &
                                                                  bVar70,CONCAT12((byte)((ulong)
                                                  lVar18 >> 0x10) & bVar69,
                                                  CONCAT11((byte)((ulong)lVar18 >> 8) & bVar68,
                                                           (byte)((ulong)(lVar18 * 0x10000) >> 0x10)
                                                           & bVar67))))) * 0x10000 + lVar38 >> 0x20)
                         + (int)((ulong)(lVar37 * (int)*puVar3) >> 0x10)) * 2 + (int)*puVar21;
                uVar55 = ((int)(auVar53._4_4_ * lVar25 * 0x10000 +
                                ((int)((ulong)*puVar2 >> 0x20) * lVar35 * 0x10000 &
                                0xffffffff00000000U) +
                                (((ulong)((int)((ulong)uVar62 >> 0x20) * lVar30) >> 0x10) << 0x20) +
                                (ulong)CONCAT15((byte)((ulong)lVar40 >> 0x28) & bVar79,
                                                CONCAT14((byte)((ulong)lVar40 >> 0x20) & bVar78,
                                                         CONCAT13((byte)((ulong)lVar40 >> 0x18) &
                                                                  bVar77,CONCAT12((byte)((ulong)
                                                  lVar40 >> 0x10) & bVar76,
                                                  CONCAT11((byte)((ulong)lVar40 >> 8) & bVar75,
                                                           (byte)((ulong)(lVar40 * 0x10000) >> 0x10)
                                                           & bVar74))))) * 0x10000 + lVar80 >> 0x20)
                         + (int)((ulong)(lVar37 * (int)((ulong)*puVar3 >> 0x20)) >> 0x10)) * 2 +
                         (int)((ulong)*puVar21 >> 0x20);
                uVar56 = ((int)(auVar53._8_4_ * lVar25 * 0x10000 +
                                (CONCAT17(cVar58,CONCAT16(cVar58,CONCAT15(cVar58,(int5)iVar32))) *
                                 lVar35 * 0x10000 & 0xffffffff00000000U) +
                                ((int)*puVar16 * lVar30 * 0x10000 & 0xffffffff00000000U) +
                                (ulong)CONCAT15((byte)((ulong)lVar27 >> 0x28) & bVar72,
                                                CONCAT14((byte)((ulong)lVar27 >> 0x20) & bVar71,
                                                         CONCAT13((byte)((ulong)lVar27 >> 0x18) &
                                                                  bVar70,CONCAT12((byte)((ulong)
                                                  lVar27 >> 0x10) & bVar69,
                                                  CONCAT11((byte)((ulong)lVar27 >> 8) & bVar68,
                                                           (byte)lVar27 & bVar67))))) * 0x10000 +
                                lVar38 >> 0x20) + (int)((ulong)(lVar37 * (int)uVar63) >> 0x10)) * 2
                         + (int)puVar21[1];
                uVar57 = (int)((auVar53._12_4_ * lVar25 * 0x10000 +
                                (CONCAT17(cVar60,CONCAT16(cVar60,CONCAT15(cVar60,(int5)iVar34))) *
                                 lVar35 * 0x10000 & 0xffffffff00000000U) +
                                ((int)((ulong)*puVar16 >> 0x20) * lVar30 * 0x10000 &
                                0xffffffff00000000U) +
                                (ulong)CONCAT15((byte)((ulong)lVar20 >> 0x28) & bVar79,
                                                CONCAT14((byte)((ulong)lVar20 >> 0x20) & bVar78,
                                                         CONCAT13((byte)((ulong)lVar20 >> 0x18) &
                                                                  bVar77,CONCAT12((byte)((ulong)
                                                  lVar20 >> 0x10) & bVar76,
                                                  CONCAT11((byte)((ulong)lVar20 >> 8) & bVar75,
                                                           (byte)lVar20 & bVar74))))) * 0x10000 +
                                lVar80 >> 0x20) +
                              ((ulong)(lVar37 * (int)((ulong)uVar63 >> 0x20)) >> 0x10)) * 2 +
                         (int)((ulong)puVar21[1] >> 0x20);
                iVar32 = uVar55 * 2;
                iVar22 = uVar57 * 2;
                *(uint *)(puVar23 + 2) = uVar56;
                *(uint *)((long)puVar23 + 0x14) = uVar57;
                *(uint *)puVar23 = uVar52;
                *(uint *)((long)puVar23 + 4) = uVar55;
                puVar42[1] = CONCAT17((char)((uint)iVar22 >> 0x18),
                                      CONCAT16((char)((uint)iVar22 >> 0x10),
                                               CONCAT15((char)((uint)iVar22 >> 8),
                                                        CONCAT14((char)iVar22,uVar56 * 2))));
                *puVar42 = CONCAT17((char)((uint)iVar32 >> 0x18),
                                    CONCAT16((char)((uint)iVar32 >> 0x10),
                                             CONCAT15((char)((uint)iVar32 >> 8),
                                                      CONCAT14((char)iVar32,uVar52 * 2))));
                puVar21 = puVar21 + 2;
                puVar23 = puVar23 + 2;
                puVar42 = puVar42 + 2;
              } while (uVar36 != 0);
              if (uVar39 == uVar29) goto joined_r0x00e69170;
            }
          }
          lVar38 = uVar29 - uVar39;
          puVar17 = (uint *)((long)puVar48 + uVar39 * 4);
          puVar41 = (uint *)((long)local_118 + uVar39 * 4);
          do {
            piVar4 = (int *)(uVar47 - 4);
            piVar8 = (int *)(uVar47 + 4);
            piVar5 = (int *)(uVar47 - 0xc);
            piVar9 = (int *)(uVar47 - 4);
            piVar1 = (int *)(uVar47 - 0x10);
            lVar38 = lVar38 + -1;
            uVar47 = uVar47 + 4;
            uVar52 = *puVar17 +
                     ((int)((*piVar4 * lVar35 * 0x10000 & 0xffffffff00000000U) +
                            *piVar8 * lVar25 * 0x10000 +
                            (*piVar9 * lVar30 * 0x10000 & 0xffffffff00000000U) +
                            (*piVar5 * lVar31 * 0x10000 & 0x7fffffff00000000U) + 0x200000000 >> 0x20
                           ) + (int)((ulong)(lVar37 * *piVar1) >> 0x10)) * 2;
            *(uint *)(local_130 + uVar45 * 4) = uVar52 * 2;
            uVar45 = uVar45 + 1;
            *puVar41 = uVar52;
            puVar17 = puVar17 + 1;
            puVar41 = puVar41 + 1;
          } while (lVar38 != 0);
        }
      }
joined_r0x00e69170:
      if (0 < (int)uVar50) {
        uVar50 = param_1[0x249];
        iVar32 = *(int *)(pauVar24[3] + 0xc);
        puVar43 = local_b8;
        pauVar46 = local_138;
        uVar47 = uVar29;
        iVar22 = *(int *)(pauVar24[3] + 4);
        iVar34 = *(int *)(pauVar24[2] + 0xc);
        iVar51 = *(int *)(pauVar24[2] + 4);
        iVar44 = *(int *)(pauVar24[1] + 0xc);
        do {
          iVar10 = *(int *)(pauVar46[1] + 8);
          iVar11 = *(int *)pauVar46[1];
          iVar14 = *(int *)(*pauVar46 + 8);
          iVar15 = *(int *)*pauVar46;
          iVar32 = ((int)uVar50 >> 1) + (int)((ulong)((long)local_90 * (long)iVar32) >> 0x10) +
                   (int)((ulong)((long)local_8e * (long)iVar10) >> 0x10) +
                   (int)((ulong)((long)local_8c * (long)iVar22) >> 0x10) +
                   (int)((ulong)((long)local_8a * (long)iVar11) >> 0x10) +
                   (int)((ulong)((long)local_88 * (long)iVar34) >> 0x10) +
                   (int)((ulong)((long)local_86 * (long)iVar14) >> 0x10) +
                   (int)((ulong)((long)local_84 * (long)iVar51) >> 0x10) +
                   (int)((ulong)((long)local_82 * (long)iVar15) >> 0x10) +
                   (int)((ulong)((long)local_80 * (long)iVar44) >> 0x10) +
                   (int)((ulong)((long)local_7e * (long)*(int *)(pauVar46[-1] + 8)) >> 0x10);
          if (uVar50 == 0x10) {
            iVar32 = iVar32 + (int)((ulong)((long)(undefined8 *)(long)local_7c *
                                           (long)*(int *)(pauVar46[-1] + 8)) >> 0x10) +
                     (int)((ulong)((long)local_7a * (long)*(int *)pauVar46[-1]) >> 0x10) +
                     (int)((ulong)((long)local_78 * (long)*(int *)pauVar46[-1]) >> 0x10) +
                     (int)((ulong)((long)local_76 * (long)*(int *)(pauVar46[-2] + 8)) >> 0x10) +
                     (int)((ulong)((long)local_74 * (long)*(int *)(pauVar46[-2] + 8)) >> 0x10) +
                     (int)((ulong)((long)local_72 * (long)*(int *)pauVar46[-2]) >> 0x10);
          }
          if (iVar32 < -0x7ffffff) {
            iVar32 = -0x8000000;
          }
          uVar52 = *(uint *)puVar28;
          if (0x7fffffe < iVar32) {
            iVar32 = 0x7ffffff;
          }
          uVar55 = iVar32 * 0x10;
          iVar22 = uVar55 + uVar52;
          if (iVar22 < 0) {
            iVar32 = 0x7fffffff;
            if ((int)(uVar55 | uVar52) < 0) {
              iVar32 = iVar22;
            }
          }
          else {
            iVar32 = iVar22;
            if ((int)(uVar55 & uVar52) < 0) {
              iVar32 = -0x80000000;
            }
          }
          *(int *)pauVar46[2] = iVar32;
          uVar36 = (long)iVar32 * (long)((int)uVar49 >> 6);
          puVar28 = (undefined8 *)((long)puVar28 + 4);
          pauVar46 = (undefined (*) [16])(*pauVar46 + 4);
          iVar22 = (int)(uVar36 >> 0x10);
          uVar6 = 0x8000;
          if (-0x800081 < iVar22) {
            uVar6 = (short)(((uint)(uVar36 >> 0x17) & 0x1ffffff) + 1 >> 1);
          }
          uVar7 = 0x7fff;
          if (iVar22 < 0x7fff80) {
            uVar7 = uVar6;
          }
          uVar47 = uVar47 - 1;
          *puVar43 = uVar7;
          puVar43 = puVar43 + 1;
          iVar22 = iVar10;
          iVar34 = iVar11;
          iVar51 = iVar14;
          iVar44 = iVar15;
          local_b0 = (long)local_76;
          local_a8 = (long)local_78;
          local_a0 = (long)local_7a;
          local_98 = (undefined8 *)(long)local_7c;
        } while (uVar47 != 0);
      }
      uVar36 = -(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2;
      puVar19 = (undefined8 *)(*pauVar24 + uVar36);
      uVar50 = param_1[0x245];
      local_b8 = local_b8 + (int)uVar29;
      uVar47 = uStack_d0 + 1;
      auVar53 = *(undefined (*) [16])(puVar19 + 4);
      uVar73 = puVar19[7];
      uVar66 = puVar19[6];
      puVar48 = (undefined8 *)((long)local_d8 + uVar36);
      uVar63 = puVar19[1];
      uVar62 = *puVar19;
      uVar65 = puVar19[3];
      uVar64 = puVar19[2];
      local_128 = lVar26;
      lStack_120 = param_2;
      local_e8 = param_1;
      local_e0 = uVar45;
      local_c8 = pauVar24;
      local_c0 = uVar29;
      *(long *)(pauVar24[2] + 8) = auVar53._8_8_;
      *(long *)pauVar24[2] = auVar53._0_8_;
      *(undefined8 *)(pauVar24[3] + 8) = uVar73;
      *(undefined8 *)pauVar24[3] = uVar66;
      *(undefined8 *)(*pauVar24 + 8) = uVar63;
      *(undefined8 *)*pauVar24 = uVar62;
      *(undefined8 *)(pauVar24[1] + 8) = uVar65;
      *(undefined8 *)pauVar24[1] = uVar64;
    } while ((long)uVar47 < (long)(int)uVar50);
  }
  auVar53 = *local_c8;
  uVar73 = *(undefined8 *)(local_c8[1] + 8);
  uVar66 = *(undefined8 *)local_c8[1];
  uVar63 = *(undefined8 *)(local_c8[2] + 8);
  uVar62 = *(undefined8 *)local_c8[2];
  uVar65 = *(undefined8 *)(local_c8[3] + 8);
  uVar64 = *(undefined8 *)local_c8[3];
  *(long *)((long)*apauStack_180[1] + 8) = auVar53._8_8_;
  *(long *)*apauStack_180[1] = auVar53._0_8_;
  *(undefined8 *)((long)apauStack_180[1][1] + 8) = uVar73;
  *(undefined8 *)apauStack_180[1][1] = uVar66;
  *(undefined8 *)((long)apauStack_180[1][2] + 8) = uVar63;
  *(undefined8 *)apauStack_180[1][2] = uVar62;
  *(undefined8 *)((long)apauStack_180[1][3] + 8) = uVar65;
  *(undefined8 *)apauStack_180[1][3] = uVar64;
  if (*(long *)(local_170 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


