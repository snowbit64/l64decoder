// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: celt_decode_with_ec
// Entry Point: 00e6a2a8
// Size: 6744 bytes
// Signature: undefined celt_decode_with_ec(void)


void celt_decode_with_ec(long *param_1,long param_2,uint param_3,long param_4,int param_5,
                        undefined *param_6,undefined4 param_7)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined (*pauVar8) [16];
  short sVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  char cVar16;
  int iVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  long lVar20;
  void *pvVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  long lVar30;
  undefined *puVar31;
  long lVar32;
  undefined *puVar33;
  int iVar34;
  int iVar35;
  bool bVar36;
  int iVar37;
  uint uVar38;
  undefined4 uVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  long *plVar49;
  ulong uVar50;
  long lVar51;
  long lVar52;
  short *psVar53;
  int *piVar54;
  undefined8 *puVar55;
  undefined2 *puVar56;
  uint uVar57;
  ulong uVar58;
  long lVar59;
  short *psVar60;
  ulong uVar61;
  long lVar62;
  undefined8 uVar63;
  long *plVar64;
  ulong uVar65;
  ulong uVar66;
  undefined (*pauVar67) [16];
  ulong uVar68;
  undefined (*pauVar69) [16];
  long lVar70;
  ulong uVar71;
  uint uVar72;
  long *plVar73;
  void **ppvVar74;
  uint uVar75;
  ulong uVar76;
  size_t __n;
  ulong uVar77;
  long lVar78;
  long lVar79;
  uint *puVar80;
  uint uVar81;
  long lVar82;
  int iVar83;
  long lVar84;
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [16];
  long lStack_2a0;
  int aiStack_298 [8];
  long lStack_278;
  long lStack_270;
  long alStack_268 [2];
  uint auStack_258 [2];
  void *pvStack_250;
  void *pvStack_248;
  void *pvStack_240;
  long lStack_238;
  int aiStack_230 [4];
  int aiStack_220 [4];
  undefined8 local_210;
  undefined4 local_208;
  int local_204;
  long local_200;
  undefined4 local_1f4;
  long *local_1f0;
  long local_1e8;
  int local_1dc;
  long local_1d8;
  ulong local_1d0;
  int local_1c4;
  undefined8 local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  void *local_198;
  void *local_190;
  ulong local_188;
  long local_180;
  long local_178;
  ulong local_170;
  void *local_168;
  int local_15c;
  ulong local_158;
  ulong local_150;
  undefined8 local_148;
  long local_140;
  ulong local_138;
  ulong local_130;
  undefined8 local_128;
  int local_11c;
  undefined4 local_118;
  int local_114;
  long local_110;
  ulong local_108;
  int local_fc;
  undefined8 local_f8;
  undefined *local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined auStack_d8 [56];
  long local_a0 [2];
  void *local_90;
  long alStack_88 [3];
  
  lVar78 = tpidr_el0;
  alStack_88[1] = *(long *)(lVar78 + 0x28);
  lVar84 = *param_1;
  local_e0 = 0;
  uVar38 = *(uint *)((long)param_1 + 0xc);
  lVar79 = (long)(int)uVar38;
  if (-1 < *(int *)(lVar84 + 0x20)) {
    uVar57 = *(uint *)(lVar84 + 8);
    uVar72 = *(uint *)(param_1 + 3);
    iVar37 = *(int *)(param_1 + 4);
    local_110 = *(long *)(lVar84 + 0x18);
    local_108 = (long)iVar37;
    local_148 = (long)*(int *)(lVar84 + 4);
    lVar52 = (long)*(int *)(lVar84 + 4) + 0x800;
    local_140 = (long)(int)uVar57;
    local_138 = (long)(int)uVar72;
    lVar48 = (int)lVar52 * lVar79;
    local_130 = (long)iVar37;
    uVar40 = uVar57 << 1;
    local_fc = *(int *)(param_1 + 2);
    uVar68 = -(ulong)(uVar40 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar40 << 1;
    pvVar1 = (void *)((long)param_1 + lVar79 * 0x30 + lVar48 * 4 + 0x5c);
    uVar81 = *(int *)((long)param_1 + 0x14) * param_5;
    pvVar3 = (void *)((long)pvVar1 + uVar68);
    lVar82 = 0;
    uVar76 = 0;
    do {
      uVar75 = (uint)uVar76;
      if (*(int *)(lVar84 + 0x28) << (ulong)(uVar75 & 0x1f) == uVar81) {
        iVar83 = -1;
        if ((0x4fb < param_3) || (param_4 == 0)) goto LAB_00e6a398;
        uVar10 = uVar38;
        if ((int)uVar38 < 2) {
          uVar10 = 1;
        }
        local_170 = (ulong)uVar10;
        local_180 = (long)(int)uVar81;
        local_150 = (ulong)uVar72;
        local_198 = (void *)((long)pvVar3 + uVar68);
        local_f8 = CONCAT44(local_f8._4_4_,param_3);
        local_190 = pvVar3;
        local_168 = pvVar1;
        lVar51 = lVar52 * 4;
        if (uVar10 < 2) {
          uVar58 = 0;
          goto LAB_00e6a4a8;
        }
        uVar58 = local_170 & 0x7ffffffe;
        plVar49 = local_a0 + 1;
        plVar64 = alStack_88;
        uVar68 = uVar58;
        plVar73 = param_1;
        do {
          lVar59 = (long)plVar73 + 0x5c;
          lVar5 = (long)plVar73 + local_180 * -4 + 0x205c;
          lVar4 = (long)plVar73 + lVar51 + local_180 * -4 + 0x205c;
          lVar70 = (long)plVar73 + lVar51 + 0x5c;
          plVar73 = plVar73 + lVar52;
          uVar68 = uVar68 - 2;
          plVar49[-1] = lVar5;
          *plVar49 = lVar4;
          plVar49 = plVar49 + 2;
          plVar64[-1] = lVar59;
          *plVar64 = lVar70;
          plVar64 = plVar64 + 2;
        } while (uVar68 != 0);
        if (uVar58 != local_170) {
LAB_00e6a4a8:
          lVar52 = (long)param_1 + uVar58 * lVar52 * 4;
          lVar59 = local_170 - uVar58;
          plVar49 = local_a0 + uVar58;
          plVar64 = alStack_88 + (uVar58 - 1);
          do {
            lVar70 = lVar52 + 0x5c;
            lVar5 = lVar52 + local_180 * -4 + 0x205c;
            lVar52 = lVar52 + lVar51;
            lVar59 = lVar59 + -1;
            *plVar64 = lVar70;
            *plVar49 = lVar5;
            plVar49 = plVar49 + 1;
            plVar64 = plVar64 + 1;
          } while (lVar59 != 0);
        }
        iVar83 = *(int *)(lVar84 + 0xc);
        if (iVar37 <= *(int *)(lVar84 + 0xc)) {
          iVar83 = iVar37;
        }
        if ((param_2 == 0) || ((int)param_3 < 2)) {
          FUN_00e6bd00(param_1,(ulong)uVar81,uVar76 & 0xffffffff);
          FUN_00e6d62c(local_a0,param_4,uVar81,uVar38,*(undefined4 *)((long)param_1 + 0x14),
                       lVar84 + 0x10,(long)param_1 + 0x54,param_7);
        }
        else {
          local_1dc = iVar83;
          *(uint *)((long)param_1 + 0x3c) = (uint)(*(int *)(param_1 + 7) != 0);
          local_1a0 = lVar79 * 0xc;
          local_1a8 = lVar48;
          local_1d8 = (long)(int)uVar40;
          local_1d0 = (ulong)uVar57;
          if (param_6 == (undefined *)0x0) {
            param_6 = auStack_d8;
            ec_dec_init(auStack_d8,param_2,param_3);
            uVar72 = (uint)local_150;
            param_3 = (uint)local_f8;
          }
          if ((local_fc == 1) && (0 < (int)local_1d0)) {
            if ((uint)local_140 < 0x10) {
              uVar58 = 0;
            }
            else {
              uVar58 = local_1d0 & 0xfffffff0;
              lVar52 = (long)param_1 + local_1a8 * 4 + local_1a0 * 4;
              uVar68 = uVar58;
              do {
                lVar48 = lVar52 + local_1d0 * 2;
                uVar68 = uVar68 - 0x10;
                auVar86 = NEON_smax(*(undefined (*) [16])(lVar52 + 0x5c),
                                    *(undefined (*) [16])(lVar48 + 0x5c),2);
                auVar85 = NEON_smax(*(undefined (*) [16])(lVar52 + 0x6c),
                                    *(undefined (*) [16])(lVar48 + 0x6c),2);
                *(long *)(lVar52 + 100) = auVar86._8_8_;
                *(long *)(lVar52 + 0x5c) = auVar86._0_8_;
                *(long *)(lVar52 + 0x74) = auVar85._8_8_;
                *(long *)(lVar52 + 0x6c) = auVar85._0_8_;
                lVar52 = lVar52 + 0x20;
              } while (uVar68 != 0);
              if (uVar58 == local_1d0) goto LAB_00e6a678;
            }
            lVar52 = local_1a8 * 4 + local_1a0 * 4;
            lVar48 = local_1d0 - uVar58;
            psVar53 = (short *)((long)param_1 + lVar52 + (uVar58 + local_1d0) * 2 + 0x5c);
            psVar60 = (short *)((long)param_1 + lVar52 + uVar58 * 2 + 0x5c);
            do {
              sVar9 = *psVar60;
              if (*psVar60 <= *psVar53) {
                sVar9 = *psVar53;
              }
              lVar48 = lVar48 + -1;
              *psVar60 = sVar9;
              psVar53 = psVar53 + 1;
              psVar60 = psVar60 + 1;
            } while (lVar48 != 0);
          }
LAB_00e6a678:
          iVar83 = (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20));
          local_15c = param_3 * 8;
          iVar37 = *(int *)(param_6 + 0x18) + iVar83 + -0x20;
          local_200 = param_4;
          local_1f4 = param_7;
          local_1e8 = lVar78;
          if ((int)(iVar37 + param_3 * -8) < 0 == SBORROW4(iVar37,local_15c)) {
            aiStack_220[2] = 1;
LAB_00e6a6f0:
            aiStack_220[3] = 0;
            *(int *)(param_6 + 0x18) = (local_15c - iVar83) + 0x20;
            iVar37 = local_15c;
          }
          else if (iVar37 == 1) {
            aiStack_220[2] = ec_dec_bit_logp(param_6,0xf);
            uVar72 = (uint)local_150;
            if (aiStack_220[2] != 0) {
              iVar83 = (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20));
              goto LAB_00e6a6f0;
            }
            aiStack_220[2] = 0;
            aiStack_220[3] = 1;
            iVar37 = 1;
          }
          else {
            aiStack_220[2] = 0;
            aiStack_220[3] = 1;
          }
          iVar83 = 0;
          if (uVar72 == 0) {
            local_11c = 0;
            local_118 = 0;
            if (iVar37 + 0x10 <= local_15c) {
              iVar37 = ec_dec_bit_logp(param_6,1);
              if (iVar37 == 0) {
                iVar83 = 0;
                local_11c = 0;
                local_118 = 0;
              }
              else {
                uVar38 = ec_dec_uint(param_6,6);
                iVar37 = ec_dec_bits(param_6,uVar38 + 4);
                iVar83 = iVar37 + (0x10 << (ulong)(uVar38 & 0x1f)) + -1;
                iVar37 = ec_dec_bits(param_6,3);
                if (local_15c <
                    *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)) + -0x1e
                   ) {
                  local_118 = 0;
                }
                else {
                  local_118 = ec_dec_icdf(param_6,&DAT_005655c0,2);
                }
                local_11c = iVar37 * 0xc00 + 0xc00;
              }
              iVar37 = *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)) +
                       -0x20;
            }
          }
          else {
            local_11c = 0;
            local_118 = 0;
          }
          iVar41 = 1 << (ulong)(uVar75 & 0x1f);
          iVar37 = iVar37 + 3;
          local_158 = 0;
          local_114 = iVar83;
          if ((uVar75 != 0) && (iVar37 <= local_15c)) {
            local_158 = ec_dec_bit_logp(param_6,3);
            iVar37 = *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)) +
                     -0x1d;
          }
          uVar39 = 0;
          local_204 = iVar41;
          if ((int)local_158 == 0) {
            local_204 = 0;
          }
          aiStack_220[1] = iVar41;
          if (iVar37 <= local_15c) {
            uVar39 = ec_dec_bit_logp(param_6,3);
          }
          uVar68 = local_130;
          local_188 = (ulong)uVar81;
          local_178 = lVar84;
          unquant_coarse_energy
                    (lVar84,local_150,local_130 & 0xffffffff,local_168,uVar39,param_6,local_fc,
                     uVar76 & 0xffffffff);
          local_1c0 = local_140 * 4;
          lVar78 = (long)aiStack_220 - (local_140 * 4 + 0xfU & 0xfffffffffffffff0);
          local_1b0 = lVar78;
          local_f0 = param_6;
          bVar36 = (int)local_158 != 0;
          iVar41 = *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)) + -0x20;
          iVar37 = 4;
          iVar83 = iVar37;
          if (bVar36) {
            iVar83 = 2;
          }
          if (!bVar36) {
            iVar37 = 5;
          }
          uVar38 = (uint)(uVar75 != 0 && iVar41 + iVar83 + 1U <= (uint)(*(int *)(param_6 + 8) * 8));
          local_128 = CONCAT44(local_128._4_4_,uVar38);
          local_1b8 = lVar79;
          if ((int)local_138 < (int)uVar68) {
            uVar38 = *(int *)(param_6 + 8) * 8 - uVar38;
            if (uVar38 < (uint)(iVar41 + iVar83)) {
              uVar57 = 0;
            }
            else {
              uVar57 = ec_dec_bit_logp(param_6);
              iVar41 = *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)) +
                       -0x20;
            }
            puVar33 = local_f0;
            *(uint *)(local_1b0 + local_138 * 4) = uVar57;
            if ((int)local_130 != (int)(local_138 + 1)) {
              iVar83 = ~(uint)local_138 + (int)local_130;
              puVar80 = (uint *)(local_1b0 + (local_138 + 1) * 4);
              uVar72 = uVar57;
              do {
                if ((uint)(iVar41 + iVar37) <= uVar38) {
                  uVar40 = ec_dec_bit_logp(puVar33,iVar37);
                  uVar72 = uVar40 ^ uVar72;
                  uVar57 = uVar72 | uVar57;
                  iVar41 = *(int *)(puVar33 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar33 + 0x20))
                           + -0x20;
                }
                iVar83 = iVar83 + -1;
                *puVar80 = uVar72;
                puVar80 = puVar80 + 1;
              } while (iVar83 != 0);
            }
          }
          else {
            uVar57 = 0;
          }
          puVar33 = local_f0;
          uVar58 = local_108;
          uVar68 = local_138;
          iVar83 = (int)local_138;
          iVar37 = (int)local_130;
          if ((local_128 & 1) == 0) {
            uVar77 = (ulong)(uint)((int)local_158 << 2);
joined_r0x00e6aa64:
            iVar41 = 0;
            iVar43 = aiStack_220[1];
            iVar17 = aiStack_220[2];
            uVar38 = aiStack_220[3];
            iVar34 = local_204;
            lVar79 = local_200;
            uVar39 = local_1f4;
            lVar84 = local_1e8;
            iVar35 = local_1dc;
            lVar52 = local_1d8;
            uVar45 = local_1d0;
            lVar48 = local_1c0;
            lVar51 = local_1b8;
            lVar59 = local_1b0;
            lVar70 = local_1a8;
            lVar5 = local_1a0;
            pvVar1 = local_198;
            pvVar3 = local_190;
            uVar46 = local_188;
            lVar4 = local_180;
            lVar20 = local_178;
            uVar47 = local_170;
            pvVar21 = local_168;
            iVar44 = local_15c;
            uVar2 = local_158;
            uVar50 = local_150;
            lVar22 = local_148;
            lVar23 = local_140;
            uVar66 = local_138;
            uVar24 = local_130;
            uVar25 = local_128;
            iVar42 = local_11c;
            uVar13 = local_118;
            iVar26 = local_114;
            lVar27 = local_110;
            uVar28 = local_108;
            iVar29 = local_fc;
            lVar30 = local_f8;
            puVar31 = local_f0;
            uVar11 = local_e4;
            uVar63 = local_e0;
            lVar32 = alStack_88[1];
          }
          else {
            uVar45 = (local_158 & 0xffffffff) << 2;
            uVar77 = -(local_158 >> 0x1f & 1) & 0xfffffffc00000000 | uVar45;
            if (tf_select_table[lVar82 + (long)(int)uVar57 + (long)(int)uVar45] ==
                tf_select_table[(long)(int)uVar57 + uVar77 + lVar82 + 2]) goto joined_r0x00e6aa64;
            local_1f0 = param_1;
            iVar41 = ec_dec_bit_logp(local_f0,1);
            iVar41 = iVar41 << 1;
            iVar37 = (int)local_130;
            iVar43 = aiStack_220[1];
            iVar17 = aiStack_220[2];
            uVar38 = aiStack_220[3];
            iVar34 = local_204;
            lVar79 = local_200;
            uVar39 = local_1f4;
            param_1 = local_1f0;
            lVar84 = local_1e8;
            iVar35 = local_1dc;
            lVar52 = local_1d8;
            uVar45 = local_1d0;
            lVar48 = local_1c0;
            lVar51 = local_1b8;
            lVar59 = local_1b0;
            lVar70 = local_1a8;
            lVar5 = local_1a0;
            pvVar1 = local_198;
            pvVar3 = local_190;
            uVar46 = local_188;
            lVar4 = local_180;
            lVar20 = local_178;
            uVar47 = local_170;
            pvVar21 = local_168;
            iVar44 = local_15c;
            uVar2 = local_158;
            uVar50 = local_150;
            lVar22 = local_148;
            lVar23 = local_140;
            uVar66 = local_138;
            uVar24 = local_130;
            uVar25 = local_128;
            iVar42 = local_11c;
            uVar13 = local_118;
            iVar26 = local_114;
            lVar27 = local_110;
            uVar28 = local_108;
            iVar29 = local_fc;
            lVar30 = local_f8;
            puVar31 = local_f0;
            uVar11 = local_e4;
            uVar63 = local_e0;
            lVar32 = alStack_88[1];
          }
          if (iVar83 < iVar37) {
            iVar41 = iVar41 + (int)uVar77;
            uVar61 = uVar58 - uVar68;
            uVar77 = uVar68;
            if (1 < uVar61) {
              uVar65 = uVar61 & 0xfffffffffffffffe;
              uVar77 = uVar65 + uVar68;
              piVar54 = (int *)(lVar59 + uVar68 * 4 + 4);
              uVar71 = uVar65;
              do {
                uVar71 = uVar71 - 2;
                cVar16 = tf_select_table[(long)iVar41 + (long)piVar54[1] + uVar76 * 8];
                piVar54[-1] = (int)(char)tf_select_table
                                         [(long)iVar41 + (long)piVar54[-1] + uVar76 * 8];
                *piVar54 = (int)cVar16;
                piVar54 = piVar54 + 2;
              } while (uVar71 != 0);
              if (uVar61 == uVar65) goto LAB_00e6ab7c;
            }
            lVar62 = uVar58 - uVar77;
            piVar54 = (int *)(lVar59 + uVar77 * 4);
            do {
              lVar62 = lVar62 + -1;
              *piVar54 = (int)(char)tf_select_table[(long)*piVar54 + (long)iVar41 + uVar76 * 8];
              piVar54 = piVar54 + 1;
            } while (lVar62 != 0);
          }
LAB_00e6ab7c:
          local_204 = iVar34;
          aiStack_220[1] = iVar43;
          aiStack_220[2] = iVar17;
          aiStack_220[3] = uVar38;
          local_200 = lVar79;
          local_1f4 = uVar39;
          local_1f0 = param_1;
          local_1e8 = lVar84;
          local_1dc = iVar35;
          local_1d8 = lVar52;
          local_1d0 = uVar45;
          local_1c0 = lVar48;
          local_1b8 = lVar51;
          local_1b0 = lVar59;
          local_1a8 = lVar70;
          local_1a0 = lVar5;
          local_198 = pvVar1;
          local_190 = pvVar3;
          local_188 = uVar46;
          local_180 = lVar4;
          local_178 = lVar20;
          local_170 = uVar47;
          local_168 = pvVar21;
          local_15c = iVar44;
          local_158 = uVar2;
          local_150 = uVar50;
          local_148 = lVar22;
          local_140 = lVar23;
          local_138 = uVar66;
          local_130 = uVar24;
          local_128 = uVar25;
          local_11c = iVar42;
          local_118 = uVar13;
          local_114 = iVar26;
          local_110 = lVar27;
          local_108 = uVar28;
          local_fc = iVar29;
          local_f8 = lVar30;
          local_f0 = puVar31;
          local_e4 = uVar11;
          local_e0 = uVar63;
          alStack_88[1] = lVar32;
          if (iVar44 < *(int *)(puVar33 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar33 + 0x20)) +
                       -0x1c) {
            local_208 = 2;
          }
          else {
            local_208 = ec_dec_icdf(puVar33,&DAT_005655c3,5);
          }
          uVar58 = local_1c0 + 0xfU & 0xfffffffffffffff0;
          lVar78 = lVar78 - uVar58;
          init_caps(lVar20,lVar78,uVar76 & 0xffffffff,local_fc);
          iVar37 = (uint)local_f8 << 6;
          local_210 = uVar58;
          local_128 = lVar78 - uVar58;
          iVar41 = ec_tell_frac(puVar33);
          puVar33 = local_f0;
          local_1c4 = iVar37;
          if (iVar83 < (int)local_130) {
            iVar83 = 6;
            do {
              local_f8 = uVar68 + 1;
              iVar43 = ((int)*(short *)(local_110 + (uVar68 + 1) * 2) -
                       (int)*(short *)(local_110 + uVar68 * 2)) * local_fc << (ulong)(uVar75 & 0x1f)
              ;
              iVar17 = iVar43 * 8;
              if (iVar43 < 0x31) {
                iVar43 = 0x30;
              }
              iVar34 = 0;
              iVar35 = iVar37;
              iVar44 = iVar83;
              if (iVar43 <= iVar17) {
                iVar17 = iVar43;
              }
              do {
                iVar37 = iVar35;
                iVar43 = iVar34;
                if ((iVar37 <= iVar41 + iVar44 * 8) || (*(int *)(lVar78 + uVar68 * 4) <= iVar43))
                break;
                iVar42 = ec_dec_bit_logp(puVar33);
                iVar41 = ec_tell_frac(puVar33);
                iVar34 = iVar43 + iVar17;
                iVar35 = iVar37 - iVar17;
                iVar44 = 1;
              } while (iVar42 != 0);
              iVar17 = iVar83;
              if (iVar83 < 4) {
                iVar17 = 3;
              }
              iVar17 = iVar17 + -1;
              if (iVar43 < 1) {
                iVar17 = iVar83;
              }
              *(int *)(local_128 + uVar68 * 4) = iVar43;
              uVar68 = local_f8;
              iVar83 = iVar17;
            } while (local_f8 != local_108);
          }
          puVar33 = local_f0;
          lVar79 = (lVar78 - uVar58) - local_210;
          local_f8 = lVar79;
          if (iVar37 < iVar41 + 0x30) {
            local_210 = CONCAT44(local_210._4_4_,5);
          }
          else {
            uVar39 = ec_dec_icdf(local_f0,&DAT_005655c7,7);
            local_210 = CONCAT44(local_210._4_4_,uVar39);
          }
          lVar84 = local_148;
          uVar68 = local_170;
          iVar37 = local_1c4;
          uVar38 = ec_tell_frac(puVar33);
          uVar57 = 0;
          iVar37 = iVar37 + ~uVar38;
          if ((int)local_158 == 0) {
            iVar83 = 0;
          }
          else {
            iVar83 = 0;
            if (1 < uVar75) {
              bVar36 = (int)lVar82 + 0x10 <= iVar37;
              uVar57 = (uint)bVar36;
              iVar83 = (uint)bVar36 << 3;
            }
          }
          local_148 = CONCAT44(local_148._4_4_,uVar57);
          uVar58 = local_1c0 + 0xfU & 0xfffffffffffffff0;
          lVar79 = lVar79 - uVar58;
          lVar51 = lVar79 - uVar58;
          *(int *)(lVar51 + -0x60) = iVar37 - iVar83;
          lVar82 = local_128;
          uVar77 = local_130;
          uVar58 = local_138;
          lVar52 = local_178;
          uVar45 = local_138 & 0xffffffff;
          uVar46 = local_130 & 0xffffffff;
          uVar47 = local_210 & 0xffffffff;
          *(undefined4 *)(lVar51 + -0x10) = 0;
          iVar37 = local_fc;
          *(undefined4 *)(lVar51 + -0x18) = 0;
          lVar48 = local_f8;
          *(undefined4 *)(lVar51 + -0x20) = 0;
          *(undefined **)(lVar51 + -0x28) = puVar33;
          *(uint *)(lVar51 + -0x30) = uVar75;
          local_110 = lVar79;
          *(undefined4 **)(lVar51 + -0x58) = &local_e4;
          *(long *)(lVar51 + -0x50) = lVar79;
          *(int *)(lVar51 + -0x38) = iVar37;
          local_128 = lVar51;
          *(long *)(lVar51 + -0x48) = lVar48;
          *(long *)(lVar51 + -0x40) = lVar51;
          uVar39 = clt_compute_allocation
                             (lVar52,uVar45,uVar46,lVar82,lVar78,uVar47,(long)&local_e0 + 4,
                              &local_e0);
          local_1c0 = CONCAT44(local_1c0._4_4_,uVar39);
          unquant_fine_energy(lVar52,uVar58 & 0xffffffff,uVar77 & 0xffffffff,local_168,lVar48,
                              puVar33,iVar37);
          lVar78 = local_180;
          iVar41 = (int)lVar84;
          iVar37 = iVar41;
          if (iVar41 < 0) {
            iVar37 = iVar41 + 1;
          }
          uVar38 = ((iVar37 >> 1) - (int)local_188) + 0x800;
          ppvVar74 = &local_90;
          do {
            memmove(*ppvVar74,(void *)((long)*ppvVar74 + lVar78 * 4),
                    -(ulong)(uVar38 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar38 << 2);
            iVar37 = local_fc;
            param_1 = local_1f0;
            uVar68 = uVar68 - 1;
            ppvVar74 = ppvVar74 + 1;
          } while (uVar68 != 0);
          uVar38 = (int)local_140 * local_fc;
          local_210 = (ulong)uVar38;
          lVar51 = lVar51 - ((long)(int)uVar38 + 0xfU & 0xfffffffffffffff0);
          uVar38 = (int)local_188 * local_fc;
          lVar79 = lVar51 - ((-(ulong)(uVar38 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar38 << 1) +
                             0xf & 0xfffffffffffffff0);
          lVar78 = lVar79 + lVar78 * 2;
          uVar39 = (undefined4)local_e0;
          uVar13 = local_e0._4_4_;
          if (local_fc != 2) {
            lVar78 = 0;
          }
          uVar11 = *(undefined4 *)((long)local_1f0 + 0x24);
          uVar12 = *(undefined4 *)(local_1f0 + 5);
          iVar83 = local_1c4 - iVar83;
          lVar84 = (long)local_1f0 + 0x2c;
          *(undefined4 *)(lVar79 + -0x48) = local_e4;
          uVar58 = local_130;
          uVar68 = local_138;
          *(undefined4 *)(lVar79 + -0x18) = uVar12;
          uVar12 = (undefined4)local_1c0;
          *(long *)(lVar79 + -0x58) = local_1b0;
          *(undefined4 *)(lVar79 + -0x10) = uVar11;
          lVar52 = local_178;
          *(undefined4 *)(lVar79 + -0x20) = 0;
          *(long *)(lVar79 + -0x28) = lVar84;
          uVar11 = local_208;
          *(undefined4 *)(lVar79 + -0x30) = uVar12;
          *(uint *)(lVar79 + -0x38) = uVar75;
          *(undefined4 *)(lVar79 + -0x70) = uVar11;
          *(undefined **)(lVar79 + -0x40) = puVar33;
          *(int *)(lVar79 + -0x50) = iVar83;
          iVar83 = local_204;
          *(undefined4 *)(lVar79 + -0x60) = uVar13;
          *(undefined4 *)(lVar79 + -0x68) = uVar39;
          *(int *)(lVar79 + -0x78) = iVar83;
          *(long *)(lVar79 + -0x80) = local_110;
          quant_all_bands(0,lVar52,uVar68 & 0xffffffff,uVar58 & 0xffffffff,lVar79,lVar78,lVar51,0);
          lVar84 = local_f8;
          lVar78 = local_128;
          pvVar1 = local_168;
          if ((int)local_148 == 0) {
            iVar83 = local_15c -
                     (*(int *)(puVar33 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar33 + 0x20)));
            *(int *)(lVar79 + -0x10) = iVar37;
            unquant_energy_finalise
                      (lVar52,uVar68 & 0xffffffff,uVar58 & 0xffffffff,pvVar1,lVar84,lVar78,
                       iVar83 + 0x20,puVar33);
          }
          else {
            iVar43 = ec_dec_bits(puVar33,1);
            lVar84 = local_f8;
            lVar78 = local_128;
            uVar68 = local_150;
            pvVar1 = local_168;
            iVar83 = local_15c -
                     (*(int *)(puVar33 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar33 + 0x20)));
            *(int *)(lVar79 + -0x10) = iVar37;
            unquant_energy_finalise
                      (lVar52,uVar68,uVar58 & 0xffffffff,pvVar1,lVar84,lVar78,iVar83 + 0x20,puVar33)
            ;
            if (iVar43 != 0) {
              uVar39 = *(undefined4 *)(param_1 + 5);
              *(undefined4 *)(lVar79 + -0x10) = *(undefined4 *)((long)param_1 + 0x2c);
              *(long *)(lVar79 + -0x18) = local_110;
              uVar58 = local_150;
              *(undefined4 *)(lVar79 + -8) = uVar39;
              uVar77 = local_130;
              lVar78 = local_178;
              uVar68 = local_188;
              *(void **)(lVar79 + -0x20) = local_198;
              *(void **)(lVar79 + -0x28) = local_190;
              *(void **)(lVar79 + -0x30) = local_168;
              anti_collapse(lVar78,lVar79,lVar51,uVar76 & 0xffffffff,iVar37,uVar68,uVar58,uVar77);
            }
          }
          lVar52 = local_140;
          uVar58 = local_150;
          pvVar1 = local_168;
          uVar76 = local_170;
          lVar84 = local_178;
          uVar68 = local_188;
          iVar83 = local_1dc;
          if ((aiStack_220[3] & 1U) == 0) {
            iVar43 = aiStack_220[2];
            if (0 < (int)(uint)local_210) {
              if ((uint)local_210 < 0x10) {
                uVar45 = 0;
              }
              else {
                uVar45 = local_210 & 0xfffffff0;
                auVar86._8_2_ = 0x9000;
                auVar86._0_8_ = 0x9000900090009000;
                auVar86._10_2_ = 0x9000;
                auVar86._12_2_ = 0x9000;
                auVar86._14_2_ = 0x9000;
                puVar55 = (undefined8 *)((long)param_1 + (local_1a8 + local_1a0) * 4 + 0x6c);
                uVar77 = uVar45;
                do {
                  puVar55[-1] = auVar86._8_8_;
                  puVar55[-2] = 0x9000900090009000;
                  puVar55[1] = auVar86._8_8_;
                  *puVar55 = 0x9000900090009000;
                  puVar55 = puVar55 + 4;
                  uVar77 = uVar77 - 0x10;
                } while (uVar77 != 0);
                if (uVar45 == local_210) goto LAB_00e6b204;
              }
              lVar78 = local_210 - uVar45;
              puVar56 = (undefined2 *)
                        ((long)param_1 + local_1a8 * 4 + local_1a0 * 4 + uVar45 * 2 + 0x5c);
              do {
                lVar78 = lVar78 + -1;
                *puVar56 = 0x9000;
                puVar56 = puVar56 + 1;
              } while (lVar78 != 0);
            }
          }
          else {
            iVar43 = 0;
          }
LAB_00e6b204:
          uVar81 = (uint)local_188;
          uVar39 = *(undefined4 *)((long)param_1 + 0x14);
          *(undefined4 *)(lVar79 + -0x10) = *(undefined4 *)(param_1 + 5);
          *(undefined4 *)(lVar79 + -0x20) = uVar39;
          uVar77 = local_158;
          lVar78 = local_1b8;
          *(int *)(lVar79 + -0x18) = iVar43;
          plVar49 = local_a0;
          *(uint *)(lVar79 + -0x28) = uVar75;
          *(int *)(lVar79 + -0x30) = (int)uVar77;
          FUN_00e6daac(lVar84,lVar79,local_a0,pvVar1,uVar58,iVar83,iVar37,lVar78);
          do {
            lVar78 = *plVar49;
            uVar39 = *(undefined4 *)((long)param_1 + 0x4c);
            uVar13 = *(undefined4 *)(param_1 + 10);
            uVar58 = NEON_smax(param_1[8],0xf0000000f,4);
            uVar14 = *(undefined2 *)(param_1 + 9);
            uVar15 = *(undefined2 *)((long)param_1 + 0x4a);
            param_1[8] = uVar58;
            uVar11 = *(undefined4 *)(lVar84 + 0x28);
            uVar63 = *(undefined8 *)(lVar84 + 0x40);
            *(undefined4 *)(lVar79 + -8) = *(undefined4 *)(param_1 + 5);
            *(int *)(lVar79 + -0x10) = iVar41;
            *(undefined8 *)(lVar79 + -0x18) = uVar63;
            *(undefined4 *)(lVar79 + -0x20) = uVar39;
            comb_filter(lVar78,lVar78,uVar58 >> 0x20,uVar58 & 0xffffffff,uVar11,uVar15,uVar14,uVar13
                       );
            iVar43 = local_114;
            iVar83 = local_11c;
            if (uVar75 != 0) {
              iVar17 = *(int *)(lVar84 + 0x28);
              uVar39 = *(undefined4 *)(param_1 + 8);
              uVar13 = *(undefined4 *)((long)param_1 + 0x4c);
              uVar63 = *(undefined8 *)(lVar84 + 0x40);
              lVar78 = lVar78 + (long)iVar17 * 4;
              uVar14 = *(undefined2 *)(param_1 + 9);
              *(undefined4 *)(lVar79 + -8) = *(undefined4 *)(param_1 + 5);
              uVar11 = local_118;
              *(int *)(lVar79 + -0x10) = iVar41;
              *(undefined8 *)(lVar79 + -0x18) = uVar63;
              *(undefined4 *)(lVar79 + -0x20) = uVar11;
              comb_filter(lVar78,lVar78,uVar39,iVar43,uVar81 - iVar17,uVar14,iVar83,uVar13);
            }
            lVar78 = local_1e8;
            uVar39 = local_1f4;
            lVar82 = local_200;
            plVar49 = plVar49 + 1;
            uVar76 = uVar76 - 1;
          } while (uVar76 != 0);
          uVar13 = *(undefined4 *)(param_1 + 8);
          *(undefined2 *)((long)param_1 + 0x4a) = *(undefined2 *)(param_1 + 9);
          uVar11 = *(undefined4 *)((long)param_1 + 0x4c);
          *(short *)(param_1 + 9) = (short)local_11c;
          *(int *)(param_1 + 8) = local_114;
          *(undefined4 *)((long)param_1 + 0x44) = uVar13;
          *(undefined4 *)((long)param_1 + 0x4c) = local_118;
          *(undefined4 *)(param_1 + 10) = uVar11;
          if (uVar75 != 0) {
            *(int *)((long)param_1 + 0x44) = local_114;
            *(short *)((long)param_1 + 0x4a) = (short)local_11c;
            *(undefined4 *)(param_1 + 10) = local_118;
          }
          if (iVar37 == 1) {
            memcpy((void *)((long)local_168 + lVar52 * 2),local_168,lVar52 * 2);
          }
          pvVar1 = local_190;
          iVar37 = (int)local_1d0;
          if ((int)local_158 == 0) {
            __n = local_1d8 << 1;
            memcpy(local_198,local_190,__n);
            uVar76 = local_130;
            memcpy(pvVar1,local_168,__n);
            iVar37 = (int)local_1d0;
            iVar83 = (int)(short)aiStack_220[1];
            if (9 < *(int *)(param_1 + 7)) {
              iVar83 = 0x400;
            }
            if (iVar37 < 1) goto LAB_00e6b57c;
            uVar38 = (uint)local_1d8;
            if ((int)uVar38 < 2) {
              uVar38 = 1;
            }
            uVar58 = (ulong)uVar38;
            if (uVar38 < 0x10) {
LAB_00e6b520:
              uVar77 = 0;
            }
            else {
              lVar79 = (local_1a8 + local_1a0) * 4;
              lVar48 = lVar79 + local_1d8 * 6;
              if (((ulong)((long)param_1 + lVar48 + 0x5c) <
                   (long)param_1 + lVar79 + uVar58 * 2 + 0x5c) &&
                 ((ulong)((long)param_1 + lVar79 + 0x5c) <
                  (long)param_1 + lVar48 + uVar58 * 2 + 0x5c)) goto LAB_00e6b520;
              pauVar67 = (undefined (*) [16])((long)param_1 + (local_1a8 + local_1a0) * 4 + 0x6c);
              uVar77 = uVar58 & 0x7ffffff0;
              pauVar69 = (undefined (*) [16])(*pauVar67 + local_1d8 * 6);
              uVar45 = uVar77;
              do {
                auVar86 = pauVar69[-1];
                auVar19 = *pauVar69;
                uVar45 = uVar45 - 0x10;
                auVar87._0_4_ = iVar83 + auVar86._8_2_;
                auVar87._4_4_ = iVar83 + auVar86._10_2_;
                auVar87._8_4_ = iVar83 + auVar86._12_2_;
                auVar87._12_4_ = iVar83 + auVar86._14_2_;
                auVar85 = pauVar67[-1];
                auVar92 = *pauVar67;
                pauVar67 = pauVar67 + 2;
                auVar89._0_4_ = iVar83 + auVar19._8_2_;
                auVar89._4_4_ = iVar83 + auVar19._10_2_;
                auVar89._8_4_ = iVar83 + auVar19._12_2_;
                auVar89._12_4_ = iVar83 + auVar19._14_2_;
                auVar90._0_4_ = (int)auVar85._0_2_;
                auVar90._4_4_ = (int)auVar85._2_2_;
                auVar90._8_4_ = (int)auVar85._4_2_;
                auVar90._12_4_ = (int)auVar85._6_2_;
                auVar91._0_4_ = (int)auVar92._0_2_;
                auVar91._4_4_ = (int)auVar92._2_2_;
                auVar91._8_4_ = (int)auVar92._4_2_;
                auVar91._12_4_ = (int)auVar92._6_2_;
                auVar88._4_4_ = (int)auVar85._10_2_;
                auVar88._0_4_ = (int)auVar85._8_2_;
                auVar88._8_4_ = (int)auVar85._12_2_;
                auVar88._12_4_ = (int)auVar85._14_2_;
                auVar88 = NEON_smin(auVar87,auVar88,4);
                auVar85._4_4_ = iVar83 + auVar86._2_2_;
                auVar85._0_4_ = iVar83 + auVar86._0_2_;
                auVar85._8_4_ = iVar83 + auVar86._4_2_;
                auVar85._12_4_ = iVar83 + auVar86._6_2_;
                auVar85 = NEON_smin(auVar85,auVar90,4);
                auVar18._4_4_ = (int)auVar92._10_2_;
                auVar18._0_4_ = (int)auVar92._8_2_;
                auVar18._8_4_ = (int)auVar92._12_2_;
                auVar18._12_4_ = (int)auVar92._14_2_;
                auVar86 = NEON_smin(auVar89,auVar18,4);
                auVar92._4_4_ = iVar83 + auVar19._2_2_;
                auVar92._0_4_ = iVar83 + auVar19._0_2_;
                auVar92._8_4_ = iVar83 + auVar19._4_2_;
                auVar92._12_4_ = iVar83 + auVar19._6_2_;
                auVar92 = NEON_smin(auVar92,auVar91,4);
                *(short *)*pauVar69 = auVar88._0_2_;
                *(short *)(*pauVar69 + 2) = auVar88._4_2_;
                *(short *)(*pauVar69 + 4) = auVar88._8_2_;
                *(short *)(*pauVar69 + 6) = auVar88._12_2_;
                *(short *)pauVar69[-1] = auVar85._0_2_;
                *(short *)(pauVar69[-1] + 2) = auVar85._4_2_;
                *(short *)(pauVar69[-1] + 4) = auVar85._8_2_;
                *(short *)(pauVar69[-1] + 6) = auVar85._12_2_;
                *(short *)pauVar69[1] = auVar86._0_2_;
                *(short *)(pauVar69[1] + 2) = auVar86._4_2_;
                *(short *)(pauVar69[1] + 4) = auVar86._8_2_;
                *(short *)(pauVar69[1] + 6) = auVar86._12_2_;
                *(short *)*pauVar69 = auVar92._0_2_;
                *(short *)(*pauVar69 + 2) = auVar92._4_2_;
                *(short *)(*pauVar69 + 4) = auVar92._8_2_;
                *(short *)(*pauVar69 + 6) = auVar92._12_2_;
                pauVar69 = pauVar69 + 2;
              } while (uVar45 != 0);
              if (uVar77 == uVar58) goto LAB_00e6b57c;
            }
            lVar79 = uVar58 - uVar77;
            psVar53 = (short *)((long)param_1 + local_1a8 * 4 + local_1a0 * 4 + uVar77 * 2 + 0x5c);
            psVar60 = (short *)((long)param_1 +
                               local_1d8 * 6 + (local_1a8 + local_1a0) * 4 + uVar77 * 2 + 0x5c);
            do {
              iVar41 = iVar83 + *psVar60;
              if (*psVar53 <= iVar41) {
                iVar41 = (int)*psVar53;
              }
              lVar79 = lVar79 + -1;
              *psVar60 = (short)iVar41;
              psVar53 = psVar53 + 1;
              psVar60 = psVar60 + 1;
            } while (lVar79 != 0);
          }
          else {
            uVar76 = local_130;
            if (0 < (int)lVar52) {
              uVar38 = (uint)local_1d8;
              if ((int)uVar38 < 2) {
                uVar38 = 1;
              }
              uVar58 = (ulong)uVar38;
              if (uVar38 < 0x10) {
LAB_00e6b410:
                uVar77 = 0;
              }
              else {
                lVar79 = local_1a8 * 4 + local_1a0 * 4;
                lVar48 = lVar79 + local_1d8 * 2;
                if (((ulong)((long)param_1 + lVar48 + 0x5c) <
                     (long)param_1 + lVar79 + uVar58 * 2 + 0x5c) &&
                   ((ulong)((long)param_1 + lVar79 + 0x5c) <
                    (long)param_1 + lVar48 + uVar58 * 2 + 0x5c)) goto LAB_00e6b410;
                uVar77 = uVar58 & 0x7ffffff0;
                pauVar67 = (undefined (*) [16])((long)param_1 + (local_1a8 + local_1a0) * 4 + 0x6c);
                uVar45 = uVar77;
                do {
                  pauVar8 = (undefined (*) [16])(*pauVar67 + local_1d8 * 2);
                  uVar45 = uVar45 - 0x10;
                  pauVar69 = pauVar67 + -1;
                  auVar86 = *pauVar67;
                  pauVar67 = pauVar67 + 2;
                  auVar85 = NEON_smin(pauVar8[-1],*pauVar69,2);
                  auVar86 = NEON_smin(*pauVar8,auVar86,2);
                  *(long *)(pauVar8[-1] + 8) = auVar85._8_8_;
                  *(long *)pauVar8[-1] = auVar85._0_8_;
                  *(long *)(*pauVar8 + 8) = auVar86._8_8_;
                  *(long *)*pauVar8 = auVar86._0_8_;
                } while (uVar45 != 0);
                if (uVar77 == uVar58) goto LAB_00e6b57c;
              }
              lVar79 = uVar58 - uVar77;
              psVar53 = (short *)((long)param_1 + local_1a8 * 4 + local_1a0 * 4 + uVar77 * 2 + 0x5c)
              ;
              do {
                sVar9 = psVar53[local_1d8];
                if (*psVar53 <= psVar53[local_1d8]) {
                  sVar9 = *psVar53;
                }
                lVar79 = lVar79 + -1;
                psVar53[local_1d8] = sVar9;
                psVar53 = psVar53 + 1;
              } while (lVar79 != 0);
            }
          }
LAB_00e6b57c:
          puVar33 = local_f0;
          uVar38 = (uint)local_150;
          if (0 < (int)local_138) {
            if (uVar38 < 0x10) {
              uVar50 = 0;
            }
            else {
              uVar66 = local_150 * 2;
              lVar79 = local_1a8 * 4 + local_1a0 * 4;
              uVar50 = 0;
              lVar48 = lVar79 + local_1d8 * 4;
              uVar58 = (long)param_1 + lVar79 + 0x5c;
              uVar77 = (long)param_1 + lVar48 + uVar66 + 0x5c;
              lVar51 = lVar79 + local_1d8 * 2;
              uVar45 = (long)param_1 + lVar79 + uVar66 + 0x5c;
              uVar46 = (long)param_1 + lVar48 + 0x5c;
              uVar47 = (long)param_1 + lVar51 + uVar66 + 0x5c;
              uVar2 = (long)param_1 + lVar51 + 0x5c;
              if (((uVar77 <= uVar58 || uVar45 <= uVar46) && (uVar47 <= uVar58 || uVar45 <= uVar2))
                 && (uVar47 <= uVar46 || uVar77 <= uVar2)) {
                lVar79 = local_1a8 * 4 + local_1a0 * 4;
                uVar58 = 0;
                uVar50 = local_150 & 0xfffffff0;
                do {
                  lVar48 = uVar58 + lVar79;
                  lVar51 = uVar58 + lVar79 + local_1d8 * 4;
                  lVar59 = uVar58 + lVar79 + local_1d8 * 2;
                  uVar58 = uVar58 + 0x20;
                  *(undefined8 *)((long)param_1 + lVar48 + 100) = 0;
                  *(undefined8 *)((long)param_1 + lVar48 + 0x5c) = 0;
                  *(undefined8 *)((long)param_1 + lVar48 + 0x74) = 0;
                  *(undefined8 *)((long)param_1 + lVar48 + 0x6c) = 0;
                  *(undefined2 *)((long)param_1 + lVar51 + 0x6c) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar51 + 0x6e) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar51 + 0x70) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar51 + 0x72) = 0x9000;
                  *(undefined8 *)((long)param_1 + lVar51 + 0x5c) = 0x9000900090009000;
                  *(undefined2 *)((long)param_1 + lVar51 + 0x7c) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar51 + 0x7e) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar51 + 0x80) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar51 + 0x82) = 0x9000;
                  *(undefined8 *)((long)param_1 + lVar51 + 0x6c) = 0x9000900090009000;
                  *(undefined2 *)((long)param_1 + lVar59 + 0x6c) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar59 + 0x6e) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar59 + 0x70) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar59 + 0x72) = 0x9000;
                  *(undefined8 *)((long)param_1 + lVar59 + 0x5c) = 0x9000900090009000;
                  *(undefined2 *)((long)param_1 + lVar59 + 0x7c) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar59 + 0x7e) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar59 + 0x80) = 0x9000;
                  *(undefined2 *)((long)param_1 + lVar59 + 0x82) = 0x9000;
                  *(undefined8 *)((long)param_1 + lVar59 + 0x6c) = 0x9000900090009000;
                } while ((uVar66 & 0x1ffffffe0) != uVar58);
                if (uVar50 == local_150) goto LAB_00e6b5f0;
              }
            }
            lVar48 = local_1a8 * 4 + local_1a0 * 4;
            lVar79 = 0;
            lVar51 = lVar48 + uVar50 * 2;
            do {
              lVar59 = lVar79 * 2;
              lVar79 = lVar79 + 1;
              *(undefined2 *)((long)param_1 + lVar59 + lVar51 + 0x5c) = 0;
              *(undefined2 *)((long)param_1 + lVar59 + lVar48 + local_1d8 * 4 + uVar50 * 2 + 0x5c) =
                   0x9000;
              *(undefined2 *)((long)param_1 + lVar59 + lVar51 + local_1d8 * 2 + 0x5c) = 0x9000;
            } while (local_150 - uVar50 != lVar79);
          }
LAB_00e6b5f0:
          if ((int)uVar76 < (int)lVar52) {
            uVar77 = lVar52 - local_108;
            uVar58 = uVar76;
            if (0xf < uVar77) {
              lVar51 = (local_1a8 + local_1a0) * 4;
              lVar79 = local_1a8 * 4 + local_1a0 * 4;
              lVar48 = lVar79 + local_108 * 2;
              uVar45 = (long)param_1 + lVar52 * 2 + (local_1a8 + local_1a0 + local_1d8) * 4 + 0x5c;
              uVar46 = (long)param_1 + lVar48 + 0x5c;
              uVar47 = (long)param_1 + lVar48 + local_1d8 * 2 + 0x5c;
              uVar2 = (long)param_1 + lVar51 + lVar52 * 2 + 0x5c;
              uVar50 = (long)param_1 + lVar79 + local_1d8 * 4 + local_108 * 2 + 0x5c;
              uVar66 = (long)param_1 + lVar51 + (lVar52 + local_1d8) * 2 + 0x5c;
              if (((uVar45 <= uVar46 || uVar2 <= uVar50) && (uVar66 <= uVar46 || uVar2 <= uVar47))
                 && (uVar66 <= uVar50 || uVar45 <= uVar47)) {
                uVar46 = uVar77 & 0xfffffffffffffff0;
                uVar58 = uVar46 + local_108;
                puVar55 = (undefined8 *)
                          ((long)param_1 + local_1a8 * 4 + local_1a0 * 4 + local_108 * 2 + 0x5c);
                uVar45 = uVar46;
                do {
                  puVar6 = (undefined8 *)((long)puVar55 + local_1d8 * 4);
                  puVar55[1] = 0;
                  *puVar55 = 0;
                  puVar55[3] = 0;
                  puVar55[2] = 0;
                  puVar7 = (undefined8 *)((long)puVar55 + local_1d8 * 2);
                  uVar45 = uVar45 - 0x10;
                  puVar55 = puVar55 + 4;
                  *(undefined2 *)(puVar6 + 2) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x12) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x14) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x16) = 0x9000;
                  *puVar6 = 0x9000900090009000;
                  *(undefined2 *)(puVar6 + 4) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x22) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x24) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x26) = 0x9000;
                  puVar6[2] = 0x9000900090009000;
                  *(undefined2 *)(puVar7 + 2) = 0x9000;
                  *(undefined2 *)((long)puVar7 + 0x12) = 0x9000;
                  *(undefined2 *)((long)puVar7 + 0x14) = 0x9000;
                  *(undefined2 *)((long)puVar7 + 0x16) = 0x9000;
                  *puVar7 = 0x9000900090009000;
                  *(undefined2 *)(puVar7 + 4) = 0x9000;
                  *(undefined2 *)((long)puVar7 + 0x22) = 0x9000;
                  *(undefined2 *)((long)puVar7 + 0x24) = 0x9000;
                  *(undefined2 *)((long)puVar7 + 0x26) = 0x9000;
                  puVar7[2] = 0x9000900090009000;
                } while (uVar45 != 0);
                if (uVar77 == uVar46) goto LAB_00e6b668;
              }
            }
            lVar48 = local_1a8 * 4 + local_1a0 * 4;
            lVar79 = 0;
            lVar51 = lVar48 + uVar58 * 2;
            do {
              lVar59 = lVar79 * 2;
              lVar79 = lVar79 + 1;
              *(undefined2 *)((long)param_1 + lVar59 + lVar51 + 0x5c) = 0;
              *(undefined2 *)((long)param_1 + lVar59 + lVar48 + local_1d8 * 4 + uVar58 * 2 + 0x5c) =
                   0x9000;
              *(undefined2 *)((long)param_1 + lVar59 + lVar51 + local_1d8 * 2 + 0x5c) = 0x9000;
            } while (lVar52 - uVar58 != lVar79);
          }
LAB_00e6b668:
          if (0 < (int)uVar38) {
            if (uVar38 < 0x10) {
              uVar50 = 0;
            }
            else {
              lVar51 = lVar52 * 2;
              lVar79 = local_1a8 * 4 + local_1a0 * 4;
              uVar66 = local_150 * 2;
              lVar48 = lVar79 + lVar51;
              lVar79 = lVar79 + local_1d8 * 4 + lVar51;
              uVar58 = (long)param_1 + lVar48 + 0x5c;
              uVar77 = (long)param_1 + lVar79 + uVar66 + 0x5c;
              uVar45 = (long)param_1 + lVar48 + uVar66 + 0x5c;
              uVar46 = (long)param_1 + lVar79 + 0x5c;
              lVar48 = lVar48 + local_1d8 * 2;
              uVar47 = (long)param_1 + lVar48 + uVar66 + 0x5c;
              uVar2 = (long)param_1 + lVar48 + 0x5c;
              uVar50 = 0;
              if (((uVar77 <= uVar58 || uVar45 <= uVar46) && (uVar47 <= uVar58 || uVar45 <= uVar2))
                 && (uVar47 <= uVar46 || uVar77 <= uVar2)) {
                uVar58 = 0;
                uVar50 = local_150 & 0xfffffff0;
                do {
                  lVar79 = uVar58 + local_1a8 * 4 + local_1a0 * 4 + lVar51;
                  puVar55 = (undefined8 *)
                            ((long)param_1 +
                            uVar58 + lVar51 + (local_1a8 + local_1a0 + local_1d8) * 4 + 0x6c);
                  puVar6 = (undefined8 *)
                           ((long)param_1 +
                           uVar58 + lVar51 + local_1d8 * 2 + (local_1a8 + local_1a0) * 4 + 0x6c);
                  uVar58 = uVar58 + 0x20;
                  *(undefined8 *)((long)param_1 + lVar79 + 100) = 0;
                  *(undefined8 *)((long)param_1 + lVar79 + 0x5c) = 0;
                  *(undefined8 *)((long)param_1 + lVar79 + 0x74) = 0;
                  *(undefined8 *)((long)param_1 + lVar79 + 0x6c) = 0;
                  *(undefined2 *)puVar55 = 0x9000;
                  *(undefined2 *)((long)puVar55 + 2) = 0x9000;
                  *(undefined2 *)((long)puVar55 + 4) = 0x9000;
                  *(undefined2 *)((long)puVar55 + 6) = 0x9000;
                  puVar55[-2] = 0x9000900090009000;
                  *(undefined2 *)(puVar55 + 2) = 0x9000;
                  *(undefined2 *)((long)puVar55 + 0x12) = 0x9000;
                  *(undefined2 *)((long)puVar55 + 0x14) = 0x9000;
                  *(undefined2 *)((long)puVar55 + 0x16) = 0x9000;
                  *puVar55 = 0x9000900090009000;
                  *(undefined2 *)puVar6 = 0x9000;
                  *(undefined2 *)((long)puVar6 + 2) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 4) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 6) = 0x9000;
                  puVar6[-2] = 0x9000900090009000;
                  *(undefined2 *)(puVar6 + 2) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x12) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x14) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x16) = 0x9000;
                  *puVar6 = 0x9000900090009000;
                } while ((uVar66 & 0x1ffffffe0) != uVar58);
                if (uVar50 == local_150) goto LAB_00e6b6dc;
              }
            }
            lVar48 = local_1a8 * 4 + local_1a0 * 4;
            lVar59 = (uVar50 + lVar52) * 2;
            lVar51 = lVar48 + lVar59;
            lVar79 = 0;
            do {
              lVar70 = lVar79 * 2;
              lVar79 = lVar79 + 1;
              *(undefined2 *)((long)param_1 + lVar70 + lVar51 + 0x5c) = 0;
              *(undefined2 *)((long)param_1 + lVar70 + lVar48 + local_1d8 * 4 + lVar59 + 0x5c) =
                   0x9000;
              *(undefined2 *)((long)param_1 + lVar70 + lVar51 + local_1d8 * 2 + 0x5c) = 0x9000;
            } while (local_150 - uVar50 != lVar79);
          }
LAB_00e6b6dc:
          if ((int)uVar76 < iVar37) {
            uVar58 = lVar52 - local_108;
            if (0xf < uVar58) {
              lVar79 = local_1a8 * 4 + local_1a0 * 4;
              lVar59 = (local_108 + lVar52) * 2;
              lVar48 = lVar79 + lVar59;
              lVar51 = lVar52 + local_1a8 + local_1a0;
              lVar70 = lVar51 * 4;
              uVar77 = (long)param_1 + lVar79 + local_1d8 * 4 + lVar59 + 0x5c;
              lVar79 = local_1d8 * 2;
              uVar45 = (long)param_1 + (lVar51 + local_1d8) * 4 + 0x5c;
              uVar46 = (long)param_1 + lVar48 + 0x5c;
              uVar47 = (long)param_1 + lVar48 + lVar79 + 0x5c;
              uVar2 = (long)param_1 + lVar70 + 0x5c;
              uVar50 = (long)param_1 + lVar70 + lVar79 + 0x5c;
              if (((uVar45 <= uVar46 || uVar2 <= uVar77) && (uVar50 <= uVar46 || uVar2 <= uVar47))
                 && (uVar50 <= uVar77 || uVar45 <= uVar47)) {
                uVar45 = uVar58 & 0xfffffffffffffff0;
                uVar76 = uVar45 + local_108;
                puVar55 = (undefined8 *)
                          ((long)param_1 +
                          (local_108 + lVar52) * 2 + (local_1a8 + local_1a0) * 4 + 0x6c);
                uVar77 = uVar45;
                do {
                  puVar6 = (undefined8 *)((long)puVar55 + local_1d8 * 4);
                  puVar55[-1] = 0;
                  puVar55[-2] = 0;
                  puVar55[1] = 0;
                  *puVar55 = 0;
                  puVar7 = (undefined8 *)((long)puVar55 + lVar79);
                  uVar77 = uVar77 - 0x10;
                  puVar55 = puVar55 + 4;
                  *(undefined2 *)puVar6 = 0x9000;
                  *(undefined2 *)((long)puVar6 + 2) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 4) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 6) = 0x9000;
                  puVar6[-2] = 0x9000900090009000;
                  *(undefined2 *)(puVar6 + 2) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x12) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x14) = 0x9000;
                  *(undefined2 *)((long)puVar6 + 0x16) = 0x9000;
                  *puVar6 = 0x9000900090009000;
                  *(undefined2 *)puVar7 = 0x9000;
                  *(undefined2 *)((long)puVar7 + 2) = 0x9000;
                  *(undefined2 *)((long)puVar7 + 4) = 0x9000;
                  *(undefined2 *)((long)puVar7 + 6) = 0x9000;
                  puVar7[-2] = 0x9000900090009000;
                  *(undefined2 *)(puVar7 + 2) = 0x9000;
                  *(undefined2 *)((long)puVar7 + 0x12) = 0x9000;
                  *(undefined2 *)((long)puVar7 + 0x14) = 0x9000;
                  *(undefined2 *)((long)puVar7 + 0x16) = 0x9000;
                  *puVar7 = 0x9000900090009000;
                } while (uVar77 != 0);
                if (uVar58 == uVar45) goto LAB_00e6b754;
              }
            }
            lVar48 = local_1a8 * 4 + local_1a0 * 4;
            lVar59 = (uVar76 + lVar52) * 2;
            lVar51 = lVar48 + lVar59;
            lVar79 = 0;
            do {
              lVar70 = lVar79 * 2;
              lVar79 = lVar79 + 1;
              *(undefined2 *)((long)param_1 + lVar70 + lVar51 + 0x5c) = 0;
              *(undefined2 *)((long)param_1 + lVar70 + lVar48 + local_1d8 * 4 + lVar59 + 0x5c) =
                   0x9000;
              *(undefined2 *)((long)param_1 + lVar70 + lVar51 + local_1d8 * 2 + 0x5c) = 0x9000;
            } while (lVar52 - uVar76 != lVar79);
          }
LAB_00e6b754:
          *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(local_f0 + 0x20);
          FUN_00e6d62c(local_a0,lVar82,uVar68 & 0xffffffff,local_1b8,
                       *(undefined4 *)((long)param_1 + 0x14),lVar84 + 0x10,(long)param_1 + 0x54,
                       uVar39);
          *(undefined4 *)(param_1 + 7) = 0;
          if (local_15c <
              *(int *)(puVar33 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar33 + 0x20)) + -0x20) {
            iVar83 = -3;
            goto LAB_00e6a398;
          }
          if (*(int *)(puVar33 + 0x30) != 0) {
            *(undefined4 *)(param_1 + 6) = 1;
          }
        }
        iVar83 = 0;
        if (*(int *)((long)param_1 + 0x14) != 0) {
          iVar83 = (int)uVar81 / *(int *)((long)param_1 + 0x14);
        }
        goto LAB_00e6a398;
      }
      uVar76 = uVar76 + 1;
      lVar82 = lVar82 + 8;
    } while (*(int *)(lVar84 + 0x20) + 1 != (int)uVar76);
  }
  iVar83 = -1;
LAB_00e6a398:
  if (*(long *)(lVar78 + 0x28) == alStack_88[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar83);
}


