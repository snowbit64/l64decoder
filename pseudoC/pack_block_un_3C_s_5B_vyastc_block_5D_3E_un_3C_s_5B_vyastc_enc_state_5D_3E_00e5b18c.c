// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pack_block___un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
// Entry Point: 00e5b18c
// Size: 1944 bytes
// Signature: undefined pack_block___un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_(void)


/* WARNING: Type propagation algorithm not settling */

undefined8
pack_block___un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
          (undefined param_1 [16],int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  undefined *puVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  uint uVar22;
  byte bVar23;
  byte bVar24;
  undefined4 uVar25;
  byte bVar26;
  undefined4 uVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_198;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  ulong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  char local_e8;
  undefined4 local_e4;
  undefined auStack_e0 [64];
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_8c;
  undefined4 local_7c;
  undefined local_78;
  undefined local_77;
  undefined local_76;
  undefined local_75;
  undefined local_74;
  undefined local_73;
  undefined local_72;
  undefined local_71;
  
  code_block___un_3C_s_5B_vyastc_block_5D__3E_();
  iVar1 = *param_2;
  iVar2 = param_2[1];
  cVar7 = *(char *)(param_2 + 2);
  iVar3 = param_2[0x4c];
  iVar4 = param_2[0x54];
  uVar32 = *(undefined8 *)(param_2 + 6);
  uVar30 = *(undefined8 *)(param_2 + 4);
  auVar9 = *(undefined (*) [16])(param_2 + 0x48);
  bVar21 = param_1[0] & 1;
  bVar23 = param_1[4] & 2;
  bVar24 = param_1[8] & 4;
  bVar26 = param_1[12] & 8;
  uVar33 = *(undefined8 *)(param_2 + 0x52);
  uVar31 = *(undefined8 *)(param_2 + 0x50);
  auVar10 = *(undefined (*) [16])(param_2 + 0x68);
  auVar11 = *(undefined (*) [16])(param_2 + 0x58);
  iVar16 = 1;
  if (cVar7 != '\0') {
    iVar16 = 2;
  }
  uVar20 = (ulong)((uint)bVar21 + (uint)bVar23 + (uint)bVar24 + (uint)bVar26);
  uVar8 = iVar2 * iVar1 * iVar16;
  do {
    uVar14 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar19 = (uVar14 & 0x3333333333333333) << 2;
    uVar19 = LZCOUNT((uVar19 >> 4 |
                     ((uVar14 & 0xcccccccccccccccc) >> 2 | uVar19 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38
                    );
    uVar14 = uVar19 & 3;
    local_e4 = *(undefined4 *)((ulong)&local_150 | uVar14 << 2);
    uVar25 = *(undefined4 *)((ulong)&local_140 | uVar14 << 2);
    uVar27 = *(undefined4 *)((ulong)&local_130 | uVar14 << 2);
    uVar5 = *(undefined4 *)((ulong)&local_120 | uVar14 << 2);
    uVar6 = *(undefined4 *)((ulong)&local_110 | uVar14 << 2);
    uVar14 = (ulong)uVar8;
    piVar15 = param_2 + 8;
    puVar17 = auStack_e0;
    if (0 < (int)uVar8) {
      do {
        local_158 = (ulong)CONCAT16(*(undefined *)((long)piVar15 + 3),
                                    (uint6)CONCAT14(*(undefined *)((long)piVar15 + 2),
                                                    (uint)CONCAT12(*(undefined *)((long)piVar15 + 1)
                                                                   ,(ushort)*(byte *)piVar15)));
        *puVar17 = (char)*(undefined2 *)((ulong)&local_158 | (uVar19 & 3) << 1);
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 1;
        puVar17 = puVar17 + 1;
      } while (uVar14 != 0);
    }
    local_1b0 = (ulong)CONCAT16(*(undefined *)((long)param_2 + 0x1b3),
                                (uint6)CONCAT14(*(undefined *)((long)param_2 + 0x1b2),
                                                (uint)CONCAT12(*(undefined *)((long)param_2 + 0x1b1)
                                                               ,(ushort)*(byte *)(param_2 + 0x6c))))
    ;
    uVar14 = uVar19 & 3;
    local_1a8 = (ulong)CONCAT16(*(undefined *)((long)param_2 + 0x1b7),
                                (uint6)CONCAT14(*(undefined *)((long)param_2 + 0x1b6),
                                                (uint)CONCAT12(*(undefined *)((long)param_2 + 0x1b5)
                                                               ,(ushort)*(byte *)(param_2 + 0x6d))))
    ;
    local_78 = (undefined)*(undefined2 *)((ulong)&local_1b0 | uVar14 << 1);
    local_1a0 = (ulong)CONCAT16(*(undefined *)((long)param_2 + 0x1bb),
                                (uint6)CONCAT14(*(undefined *)((long)param_2 + 0x1ba),
                                                (uint)CONCAT12(*(undefined *)((long)param_2 + 0x1b9)
                                                               ,(ushort)*(byte *)(param_2 + 0x6e))))
    ;
    local_77 = (undefined)*(undefined2 *)((ulong)&local_1a8 | uVar14 << 1);
    local_198 = (ulong)CONCAT16(*(undefined *)((long)param_2 + 0x1bf),
                                (uint6)CONCAT14(*(undefined *)((long)param_2 + 0x1be),
                                                (uint)CONCAT12(*(undefined *)((long)param_2 + 0x1bd)
                                                               ,(ushort)*(byte *)(param_2 + 0x6f))))
    ;
    local_76 = (undefined)*(undefined2 *)((ulong)&local_1a0 | uVar14 << 1);
    local_190 = (ulong)CONCAT16(*(undefined *)((long)param_2 + 0x1c3),
                                (uint6)CONCAT14(*(undefined *)((long)param_2 + 0x1c2),
                                                (uint)CONCAT12(*(undefined *)((long)param_2 + 0x1c1)
                                                               ,(ushort)*(byte *)(param_2 + 0x70))))
    ;
    local_75 = (undefined)*(undefined2 *)((ulong)&local_198 | uVar14 << 1);
    local_188 = (ulong)CONCAT16(*(undefined *)((long)param_2 + 0x1c7),
                                (uint6)CONCAT14(*(undefined *)((long)param_2 + 0x1c6),
                                                (uint)CONCAT12(*(undefined *)((long)param_2 + 0x1c5)
                                                               ,(ushort)*(byte *)(param_2 + 0x71))))
    ;
    local_74 = (undefined)*(undefined2 *)((ulong)&local_190 | uVar14 << 1);
    local_180 = (ulong)CONCAT16(*(undefined *)((long)param_2 + 0x1cb),
                                (uint6)CONCAT14(*(undefined *)((long)param_2 + 0x1ca),
                                                (uint)CONCAT12(*(undefined *)((long)param_2 + 0x1c9)
                                                               ,(ushort)*(byte *)(param_2 + 0x72))))
    ;
    local_73 = (undefined)*(undefined2 *)((ulong)&local_188 | uVar14 << 1);
    uVar18 = (undefined4)uVar19;
    auVar28._4_4_ = uVar18;
    auVar28._0_4_ = uVar18;
    auVar28._8_4_ = uVar18;
    auVar28._12_4_ = uVar18;
    local_178 = (ulong)CONCAT16(*(undefined *)((long)param_2 + 0x1cf),
                                (uint6)CONCAT14(*(undefined *)((long)param_2 + 0x1ce),
                                                (uint)CONCAT12(*(undefined *)((long)param_2 + 0x1cd)
                                                               ,(ushort)*(byte *)(param_2 + 0x73))))
    ;
    local_72 = (undefined)*(undefined2 *)((ulong)&local_180 | uVar14 << 1);
    auVar29._8_8_ = 0x300000002;
    auVar29._0_8_ = 0x100000000;
    auVar29 = NEON_cmeq(auVar28,auVar29,4);
    local_71 = (undefined)*(undefined2 *)((ulong)&local_178 | uVar14 << 1);
    local_150 = uVar30;
    uStack_148 = uVar32;
    local_140 = auVar9._0_8_;
    uStack_138 = auVar9._8_8_;
    local_130 = uVar31;
    uStack_128 = uVar33;
    local_120 = auVar10._0_8_;
    uStack_118 = auVar10._8_8_;
    local_110 = auVar11._0_8_;
    uStack_108 = auVar11._8_8_;
    local_f0 = iVar1;
    local_ec = iVar2;
    local_e8 = cVar7;
    local_a0 = uVar25;
    local_9c = iVar3;
    local_98 = uVar27;
    local_94 = iVar4;
    local_8c = uVar6;
    local_7c = uVar5;
    pack_block_c(&local_100,(astc_block *)&local_f0);
    uVar22 = (uint)(bVar21 & auVar29[0]) + (uint)(bVar23 & auVar29[4]) +
             (uint)(bVar24 & auVar29[8]) + (uint)(bVar26 & auVar29[12]);
    auVar29 = *(undefined (*) [16])(param_3 + 0x2000);
    uStack_168 = auVar29._8_8_;
    local_170 = auVar29._0_8_;
    *(uint *)((ulong)&local_170 | uVar14 << 2) = local_100;
    uVar25 = auVar29._8_4_;
    uVar27 = auVar29._12_4_;
    if ((uVar22 & 1) == 0) {
      if ((uVar22 >> 1 & 1) == 0) {
        if ((uVar22 >> 2 & 1) != 0) {
          *(undefined4 *)(param_3 + 0x2008) = uVar25;
        }
        if ((uVar22 >> 3 & 1) != 0) {
          *(undefined4 *)(param_3 + 0x200c) = uVar27;
        }
        uStack_218 = *(undefined8 *)(param_3 + 0x2018);
        local_220 = *(undefined8 *)(param_3 + 0x2010);
        *(undefined4 *)((ulong)&local_220 | (uVar19 & 3) << 2) = local_fc;
        if ((uVar22 >> 2 & 1) != 0) {
          *(int *)(param_3 + 0x2018) = (int)uStack_218;
        }
        if ((uVar22 >> 3 & 1) != 0) {
          *(int *)(param_3 + 0x201c) = (int)((ulong)uStack_218 >> 0x20);
        }
        uStack_228 = *(undefined8 *)(param_3 + 0x2028);
        local_230 = *(undefined8 *)(param_3 + 0x2020);
        *(undefined4 *)((ulong)&local_230 | (uVar19 & 3) << 2) = local_f8;
        if ((uVar22 >> 2 & 1) != 0) {
          *(int *)(param_3 + 0x2028) = (int)uStack_228;
        }
        if ((uVar22 >> 3 & 1) != 0) {
          *(int *)(param_3 + 0x202c) = (int)((ulong)uStack_228 >> 0x20);
        }
        uStack_238 = *(undefined8 *)(param_3 + 0x2038);
        local_240 = *(undefined8 *)(param_3 + 0x2030);
        *(undefined4 *)((ulong)&local_240 | (uVar19 & 3) << 2) = local_f4;
        uVar12 = local_240;
        uVar13 = uStack_238;
        if ((uVar22 >> 2 & 1) != 0) {
          *(int *)(param_3 + 0x2038) = (int)uStack_238;
        }
      }
      else {
        *(int *)(param_3 + 0x2004) = auVar29._4_4_;
        if ((uVar22 >> 2 & 1) != 0) {
          *(undefined4 *)(param_3 + 0x2008) = uVar25;
        }
        if ((uVar22 >> 3 & 1) != 0) {
          *(undefined4 *)(param_3 + 0x200c) = uVar27;
        }
        uStack_1e8 = *(undefined8 *)(param_3 + 0x2018);
        local_1f0 = *(undefined8 *)(param_3 + 0x2010);
        *(undefined4 *)((ulong)&local_1f0 | (uVar19 & 3) << 2) = local_fc;
        *(int *)(param_3 + 0x2014) = (int)((ulong)local_1f0 >> 0x20);
        if ((uVar22 >> 2 & 1) != 0) {
          *(int *)(param_3 + 0x2018) = (int)uStack_1e8;
        }
        if ((uVar22 >> 3 & 1) != 0) {
          *(int *)(param_3 + 0x201c) = (int)((ulong)uStack_1e8 >> 0x20);
        }
        uStack_1f8 = *(undefined8 *)(param_3 + 0x2028);
        local_200 = *(undefined8 *)(param_3 + 0x2020);
        *(undefined4 *)((ulong)&local_200 | (uVar19 & 3) << 2) = local_f8;
        *(int *)(param_3 + 0x2024) = (int)((ulong)local_200 >> 0x20);
        if ((uVar22 >> 2 & 1) != 0) {
          *(int *)(param_3 + 0x2028) = (int)uStack_1f8;
        }
        if ((uVar22 >> 3 & 1) != 0) {
          *(int *)(param_3 + 0x202c) = (int)((ulong)uStack_1f8 >> 0x20);
        }
        uStack_208 = *(undefined8 *)(param_3 + 0x2038);
        local_210 = *(undefined8 *)(param_3 + 0x2030);
        *(undefined4 *)((ulong)&local_210 | (uVar19 & 3) << 2) = local_f4;
        *(int *)(param_3 + 0x2034) = (int)((ulong)local_210 >> 0x20);
        uVar12 = local_210;
        uVar13 = uStack_208;
        if ((uVar22 >> 2 & 1) != 0) {
          *(int *)(param_3 + 0x2038) = (int)uStack_208;
        }
      }
    }
    else {
      *(int *)(param_3 + 0x2000) = auVar29._0_4_;
      if ((uVar22 >> 1 & 1) != 0) {
        *(int *)(param_3 + 0x2004) = auVar29._4_4_;
      }
      if ((uVar22 >> 2 & 1) != 0) {
        *(undefined4 *)(param_3 + 0x2008) = uVar25;
      }
      if ((uVar22 >> 3 & 1) != 0) {
        *(undefined4 *)(param_3 + 0x200c) = uVar27;
      }
      uStack_1b8 = *(undefined8 *)(param_3 + 0x2018);
      local_1c0 = *(undefined8 *)(param_3 + 0x2010);
      *(undefined4 *)((ulong)&local_1c0 | (uVar19 & 3) << 2) = local_fc;
      *(int *)(param_3 + 0x2010) = (int)local_1c0;
      if ((uVar22 >> 1 & 1) != 0) {
        *(int *)(param_3 + 0x2014) = (int)((ulong)local_1c0 >> 0x20);
      }
      if ((uVar22 >> 2 & 1) != 0) {
        *(int *)(param_3 + 0x2018) = (int)uStack_1b8;
      }
      if ((uVar22 >> 3 & 1) != 0) {
        *(int *)(param_3 + 0x201c) = (int)((ulong)uStack_1b8 >> 0x20);
      }
      uStack_1c8 = *(undefined8 *)(param_3 + 0x2028);
      local_1d0 = *(undefined8 *)(param_3 + 0x2020);
      *(undefined4 *)((ulong)&local_1d0 | (uVar19 & 3) << 2) = local_f8;
      *(int *)(param_3 + 0x2020) = (int)local_1d0;
      if ((uVar22 >> 1 & 1) != 0) {
        *(int *)(param_3 + 0x2024) = (int)((ulong)local_1d0 >> 0x20);
      }
      if ((uVar22 >> 2 & 1) != 0) {
        *(int *)(param_3 + 0x2028) = (int)uStack_1c8;
      }
      if ((uVar22 >> 3 & 1) != 0) {
        *(int *)(param_3 + 0x202c) = (int)((ulong)uStack_1c8 >> 0x20);
      }
      uStack_1d8 = *(undefined8 *)(param_3 + 0x2038);
      local_1e0 = *(undefined8 *)(param_3 + 0x2030);
      *(undefined4 *)((ulong)&local_1e0 | (uVar19 & 3) << 2) = local_f4;
      *(int *)(param_3 + 0x2030) = (int)local_1e0;
      if ((uVar22 >> 1 & 1) != 0) {
        *(int *)(param_3 + 0x2034) = (int)((ulong)local_1e0 >> 0x20);
      }
      uVar12 = local_1e0;
      uVar13 = uStack_1d8;
      if ((uVar22 >> 2 & 1) != 0) {
        *(int *)(param_3 + 0x2038) = (int)uStack_1d8;
      }
    }
    if ((uVar22 >> 3 & 1) != 0) {
      *(int *)(param_3 + 0x203c) = (int)((ulong)uVar13 >> 0x20);
    }
    uVar20 = uVar20 & (1L << (uVar19 & 0x3f) ^ 0xffffffffffffffffU);
  } while (uVar20 != 0);
  return uVar12;
}


