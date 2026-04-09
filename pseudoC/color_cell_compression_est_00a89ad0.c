// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: color_cell_compression_est
// Entry Point: 00a89ad0
// Size: 2180 bytes
// Signature: undefined __cdecl color_cell_compression_est(uint param_1, color_quad_u8 * param_2, uchar param_3, uint * param_4, ulong param_5)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BC7EncodeUtil::BC7Enc16::color_cell_compression_est(unsigned int,
   BC7EncodeUtil::BC7Enc16::color_quad_u8 const*, unsigned char, unsigned int*, unsigned long) */

ulong BC7EncodeUtil::BC7Enc16::color_cell_compression_est
                (uint param_1,color_quad_u8 *param_2,uchar param_3,uint *param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  color_quad_u8 cVar11;
  color_quad_u8 cVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  undefined auVar27 [16];
  uint uVar28;
  bool bVar29;
  color_quad_u8 *pcVar30;
  uint uVar47;
  ulong uVar48;
  long lVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  long lVar54;
  ulong uVar55;
  uint uVar56;
  ulong uVar57;
  uint uVar58;
  undefined auVar59 [16];
  uint uVar60;
  undefined auVar61 [16];
  uint uVar62;
  undefined auVar63 [16];
  uint uVar64;
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  uint uVar68;
  uint uVar69;
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined in_q24 [16];
  undefined8 in_register_00005328;
  undefined8 in_register_00005348;
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  int local_100 [8];
  int local_e0 [8];
  int local_c0 [8];
  undefined4 local_a0;
  undefined local_9c;
  undefined local_9b;
  undefined local_9a;
  undefined local_98;
  undefined local_97;
  undefined local_96;
  undefined local_94;
  undefined local_93;
  undefined local_92;
  undefined local_90;
  undefined local_8f;
  undefined local_8e;
  undefined local_8c;
  undefined local_8b;
  undefined local_8a;
  undefined local_88;
  undefined local_87;
  undefined local_86;
  uint local_84;
  long local_80;
  color_quad_u8 *pcVar31;
  color_quad_u8 *pcVar32;
  color_quad_u8 *pcVar33;
  color_quad_u8 *pcVar34;
  color_quad_u8 *pcVar35;
  color_quad_u8 *pcVar36;
  color_quad_u8 *pcVar37;
  color_quad_u8 *pcVar38;
  color_quad_u8 *pcVar39;
  color_quad_u8 *pcVar40;
  color_quad_u8 *pcVar41;
  color_quad_u8 *pcVar42;
  color_quad_u8 *pcVar43;
  color_quad_u8 *pcVar44;
  color_quad_u8 *pcVar45;
  color_quad_u8 *pcVar46;
  
  lVar26 = tpidr_el0;
  local_80 = *(long *)(lVar26 + 0x28);
  if (param_1 == 0) {
    uVar47 = 0;
    uVar56 = 0;
    uVar53 = 0;
    uVar52 = 0xff;
    uVar51 = 0xff;
    uVar50 = 0xff;
  }
  else {
    uVar48 = (ulong)param_1;
    if (param_1 < 9) {
      lVar54 = 0;
      uVar60 = 0;
      uVar69 = 0;
      uVar68 = 0;
      uVar58 = 0xff;
      uVar62 = 0xff;
      uVar64 = 0xff;
    }
    else {
      uVar57 = 8;
      if ((param_1 & 7) != 0) {
        uVar57 = uVar48 & 7;
      }
      lVar54 = uVar48 - uVar57;
      auVar59._8_8_ = 0xff000000ff;
      auVar59._0_8_ = 0xff000000ff;
      auVar61._8_8_ = 0xff000000ff;
      auVar61._0_8_ = 0xff000000ff;
      auVar63._8_8_ = 0xff000000ff;
      auVar63._0_8_ = 0xff000000ff;
      auVar65._8_8_ = 0xff000000ff;
      auVar65._0_8_ = 0xff000000ff;
      auVar66._8_8_ = 0xff000000ff;
      auVar66._0_8_ = 0xff000000ff;
      auVar67._8_8_ = 0xff000000ff;
      auVar67._0_8_ = 0xff000000ff;
      auVar71 = ZEXT816(0);
      auVar72 = ZEXT816(0);
      auVar73 = ZEXT816(0);
      auVar74 = ZEXT816(0);
      auVar75 = ZEXT816(0);
      auVar76 = ZEXT816(0);
      lVar49 = lVar54;
      pcVar46 = param_2;
      do {
        pcVar30 = pcVar46 + 1;
        pcVar31 = pcVar46 + 2;
        auVar70[1] = pcVar46[4];
        auVar70[0] = *pcVar46;
        pcVar32 = pcVar46 + 5;
        pcVar33 = pcVar46 + 6;
        auVar70[2] = pcVar46[8];
        pcVar34 = pcVar46 + 9;
        pcVar35 = pcVar46 + 10;
        auVar70[3] = pcVar46[0xc];
        pcVar36 = pcVar46 + 0xd;
        pcVar37 = pcVar46 + 0xe;
        auVar70[4] = pcVar46[0x10];
        pcVar38 = pcVar46 + 0x11;
        pcVar39 = pcVar46 + 0x12;
        auVar70[5] = pcVar46[0x14];
        pcVar40 = pcVar46 + 0x15;
        pcVar41 = pcVar46 + 0x16;
        auVar70[6] = pcVar46[0x18];
        pcVar42 = pcVar46 + 0x19;
        pcVar43 = pcVar46 + 0x1a;
        auVar70[7] = pcVar46[0x1c];
        pcVar44 = pcVar46 + 0x1d;
        pcVar45 = pcVar46 + 0x1e;
        pcVar46 = pcVar46 + 0x20;
        auVar77[1] = *pcVar32;
        auVar77[0] = *pcVar30;
        auVar77[2] = *pcVar34;
        auVar77[3] = *pcVar36;
        auVar77[4] = *pcVar38;
        auVar77[5] = *pcVar40;
        auVar77[6] = *pcVar42;
        auVar77[7] = *pcVar44;
        auVar77._8_8_ = in_register_00005328;
        lVar49 = lVar49 + -8;
        auVar70._8_8_ = in_q24._8_8_;
        auVar79 = a64_TBL(ZEXT816(0),auVar70,ZEXT816(0),_DAT_004c4f40);
        auVar80 = a64_TBL(ZEXT816(0),auVar70,ZEXT816(0),_DAT_004c4d70);
        auVar70 = a64_TBL(ZEXT816(0),auVar77,ZEXT816(0),_DAT_004c4f40);
        auVar77 = a64_TBL(ZEXT816(0),auVar77,ZEXT816(0),_DAT_004c4d70);
        auVar78[1] = *pcVar33;
        auVar78[0] = *pcVar31;
        auVar78[2] = *pcVar35;
        auVar78[3] = *pcVar37;
        auVar78[4] = *pcVar39;
        auVar78[5] = *pcVar41;
        auVar78[6] = *pcVar43;
        auVar78[7] = *pcVar45;
        auVar78._8_8_ = in_register_00005348;
        auVar78 = a64_TBL(ZEXT816(0),auVar78,ZEXT216(0),_DAT_004c4f40);
        auVar27[1] = *pcVar33;
        auVar27[0] = *pcVar31;
        auVar27[2] = *pcVar35;
        auVar27[3] = *pcVar37;
        auVar27[4] = *pcVar39;
        auVar27[5] = *pcVar41;
        auVar27[6] = *pcVar43;
        auVar27[7] = *pcVar45;
        auVar27._8_8_ = in_register_00005348;
        in_q24 = a64_TBL(ZEXT816(0),auVar27,ZEXT216(0),_DAT_004c4d70);
        auVar61 = NEON_umin(auVar61,auVar80,4);
        auVar59 = NEON_umin(auVar59,auVar79,4);
        auVar65 = NEON_umin(auVar65,auVar77,4);
        auVar63 = NEON_umin(auVar63,auVar70,4);
        auVar67 = NEON_umin(auVar67,in_q24,4);
        auVar66 = NEON_umin(auVar66,auVar78,4);
        auVar72 = NEON_umax(auVar72,auVar80,4);
        auVar71 = NEON_umax(auVar71,auVar79,4);
        auVar74 = NEON_umax(auVar74,auVar77,4);
        auVar73 = NEON_umax(auVar73,auVar70,4);
        auVar76 = NEON_umax(auVar76,in_q24,4);
        auVar75 = NEON_umax(auVar75,auVar78,4);
      } while (lVar49 != 0);
      auVar75 = NEON_umax(auVar75,auVar76,4);
      auVar73 = NEON_umax(auVar73,auVar74,4);
      auVar71 = NEON_umax(auVar71,auVar72,4);
      auVar66 = NEON_umin(auVar66,auVar67,4);
      auVar63 = NEON_umin(auVar63,auVar65,4);
      auVar59 = NEON_umin(auVar59,auVar61,4);
      uVar68 = NEON_umaxv(auVar75,4);
      uVar69 = NEON_umaxv(auVar73,4);
      uVar60 = NEON_umaxv(auVar71,4);
      uVar64 = NEON_uminv(auVar66,4);
      uVar62 = NEON_uminv(auVar63,4);
      uVar58 = NEON_uminv(auVar59,4);
    }
    lVar49 = uVar48 - lVar54;
    pcVar46 = param_2 + lVar54 * 4 + 1;
    do {
      pcVar45 = pcVar46 + -1;
      cVar11 = *pcVar46;
      pcVar34 = pcVar46 + 1;
      pcVar46 = pcVar46 + 4;
      uVar53 = (uint)(byte)*pcVar45;
      uVar50 = uVar53;
      if (uVar58 <= (byte)*pcVar45) {
        uVar50 = uVar58;
      }
      uVar56 = (uint)(byte)cVar11;
      uVar51 = uVar56;
      if (uVar62 <= (byte)cVar11) {
        uVar51 = uVar62;
      }
      uVar47 = (uint)(byte)*pcVar34;
      uVar52 = uVar47;
      if (uVar64 <= (byte)*pcVar34) {
        uVar52 = uVar64;
      }
      if (uVar53 <= uVar60) {
        uVar53 = uVar60;
      }
      if (uVar56 <= uVar69) {
        uVar56 = uVar69;
      }
      if (uVar47 <= uVar68) {
        uVar47 = uVar68;
      }
      lVar49 = lVar49 + -1;
      uVar60 = uVar53;
      uVar69 = uVar56;
      uVar68 = uVar47;
      uVar64 = uVar52;
      uVar62 = uVar51;
      uVar58 = uVar50;
    } while (lVar49 != 0);
    uVar47 = uVar47 & 0xff;
    uVar56 = uVar56 & 0xff;
    uVar53 = uVar53 & 0xff;
  }
  uVar20 = uVar51 << 8 | uVar52 << 0x10 | uVar50;
  local_a0 = uVar20;
  uVar28 = local_a0;
  uVar60 = uVar56 * 9 + uVar51 * 0x37 + 0x20;
  uVar69 = uVar53 * 9 + uVar50 * 0x37 + 0x20;
  uVar68 = uVar47 * 9 + uVar52 * 0x37 + 0x20;
  local_9b = (char)(uVar60 >> 6);
  local_9c = (char)(uVar69 >> 6);
  uVar64 = uVar50 * 0x2e + uVar53 * 0x12 + 0x20;
  local_9a = (char)(uVar68 >> 6);
  uVar62 = uVar51 * 0x2e + uVar56 * 0x12 + 0x20;
  local_98 = (char)(uVar64 >> 6);
  uVar58 = uVar52 * 0x2e + uVar47 * 0x12 + 0x20;
  uVar1 = uVar50 * 0x25 + uVar53 * 0x1b + 0x20;
  local_97 = (char)(uVar62 >> 6);
  uVar2 = uVar51 * 0x25 + uVar56 * 0x1b + 0x20;
  local_94 = (char)(uVar1 >> 6);
  local_96 = (char)(uVar58 >> 6);
  local_84 = uVar47 << 0x10 | uVar56 << 8 | uVar53;
  local_93 = (char)(uVar2 >> 6);
  uVar3 = uVar50 * 0x1b + uVar53 * 0x25 + 0x20;
  uVar4 = uVar51 * 0x1b + uVar56 * 0x25 + 0x20;
  uVar5 = uVar52 * 0x25 + uVar47 * 0x1b + 0x20;
  local_90 = (char)(uVar3 >> 6);
  local_8f = (char)(uVar4 >> 6);
  uVar6 = uVar52 * 0x1b + uVar47 * 0x25 + 0x20;
  uVar7 = uVar50 * 0x12 + uVar53 * 0x2e + 0x20;
  local_8e = (char)(uVar6 >> 6);
  local_8c = (char)(uVar7 >> 6);
  iVar21 = uVar53 - uVar50;
  local_a0._1_1_ = (byte)(uVar20 >> 8);
  iVar22 = uVar47 - uVar52;
  iVar23 = uVar56 - uVar51;
  uVar24 = uVar69 >> 6 & 0xff;
  local_92 = (char)(uVar5 >> 6);
  local_a0._2_1_ = (byte)(uVar20 >> 0x10);
  uVar20 = uVar68 >> 6 & 0xff;
  uVar69 = uVar51 * 0x12 + uVar56 * 0x2e + 0x20 >> 6;
  uVar25 = uVar60 >> 6 & 0xff;
  uVar64 = uVar64 >> 6 & 0xff;
  uVar62 = uVar62 >> 6 & 0xff;
  uVar1 = uVar1 >> 6 & 0xff;
  uVar7 = uVar7 >> 6 & 0xff;
  iVar13 = iVar21 * uVar24 + iVar23 * uVar25 + iVar22 * uVar20;
  uVar2 = uVar2 >> 6 & 0xff;
  uVar60 = uVar52 * 0x12 + uVar47 * 0x2e + 0x20 >> 6;
  local_8b = (char)uVar69;
  uVar68 = uVar50 * 9 + uVar53 * 0x37 + 0x20 >> 6;
  local_8a = (char)uVar60;
  uVar3 = uVar3 >> 6 & 0xff;
  iVar14 = iVar21 * uVar7 + iVar23 * uVar69 + iVar22 * uVar60;
  uVar51 = uVar51 * 9 + uVar56 * 0x37 + 0x20 >> 6;
  uVar4 = uVar4 >> 6 & 0xff;
  uVar58 = uVar58 >> 6 & 0xff;
  uVar5 = uVar5 >> 6 & 0xff;
  uVar6 = uVar6 >> 6 & 0xff;
  uVar52 = uVar52 * 9 + uVar47 * 0x37 + 0x20 >> 6;
  iVar15 = iVar21 * uVar64 + iVar23 * uVar62 + iVar22 * uVar58;
  local_88 = (char)uVar68;
  iVar16 = iVar21 * uVar1 + iVar23 * uVar2 + iVar22 * uVar5;
  iVar17 = iVar21 * uVar3 + iVar23 * uVar4 + iVar22 * uVar6;
  iVar18 = iVar21 * uVar68 + iVar23 * uVar51 + iVar22 * uVar52;
  iVar8 = (int)(iVar21 * (uVar50 & 0xff) + iVar23 * (uint)local_a0._1_1_ +
                iVar22 * (uint)local_a0._2_1_ + iVar13 + 1) >> 1;
  iVar13 = iVar13 + iVar15 + 1 >> 1;
  iVar15 = iVar15 + iVar16 + 1 >> 1;
  iVar9 = iVar14 + iVar18 + 1 >> 1;
  iVar16 = iVar16 + iVar17 + 1 >> 1;
  iVar18 = (int)(iVar18 + iVar21 * uVar53 + iVar23 * uVar56 + iVar22 * uVar47 + 1) >> 1;
  iVar14 = iVar17 + iVar14 + 1 >> 1;
  local_87 = (char)uVar51;
  local_86 = (char)uVar52;
  if (param_3 == '\0') {
    if (param_1 != 0) {
      uVar48 = 0;
      pcVar46 = param_2 + 1;
      uVar57 = 1;
      do {
        pcVar45 = pcVar46 + -1;
        cVar11 = *pcVar46;
        pcVar34 = pcVar46 + 1;
        iVar17 = iVar21 * (uint)(byte)*pcVar45 + iVar23 * (uint)(byte)cVar11 +
                 iVar22 * (uint)(byte)*pcVar34;
        if (iVar17 < iVar18) {
          if (iVar17 < iVar9) {
            if (iVar17 < iVar14) {
              if (iVar17 < iVar16) {
                if (iVar17 < iVar15) {
                  if (iVar17 < iVar13) {
                    uVar55 = (ulong)(iVar8 <= iVar17);
                  }
                  else {
                    uVar55 = 2;
                  }
                }
                else {
                  uVar55 = 3;
                }
              }
              else {
                uVar55 = 4;
              }
            }
            else {
              uVar55 = 5;
            }
          }
          else {
            uVar55 = 6;
          }
        }
        else {
          uVar55 = 7;
        }
        pcVar46 = pcVar46 + 4;
        iVar17 = (uint)*(byte *)(&local_a0 + uVar55) - (uint)(byte)*pcVar45;
        iVar10 = (uint)*(byte *)((long)&local_a0 + uVar55 * 4 + 1) - (uint)(byte)cVar11;
        iVar19 = (uint)*(byte *)((long)&local_a0 + uVar55 * 4 + 2) - (uint)(byte)*pcVar34;
        uVar48 = uVar48 + (iVar17 * iVar17 * *param_4 + iVar10 * iVar10 * param_4[1] +
                          iVar19 * iVar19 * param_4[2]);
        bVar29 = uVar57 < param_1;
        uVar57 = uVar57 + 1;
      } while (uVar48 <= param_5 && bVar29);
      goto LAB_00a8a314;
    }
  }
  else {
    local_c0[0] = (uVar50 & 0xff) * 0x6d + (uint)local_a0._1_1_ * 0x16e +
                  (uint)local_a0._2_1_ * 0x25;
    local_c0[1] = uVar24 * 0x6d + uVar25 * 0x16e + uVar20 * 0x25;
    local_c0[3] = uVar1 * 0x6d + uVar2 * 0x16e + uVar5 * 0x25;
    local_e0[0] = (uVar50 & 0xff) * 0x200 - local_c0[0];
    local_e0[1] = uVar24 * 0x200 - local_c0[1];
    local_c0[2] = uVar64 * 0x6d + uVar62 * 0x16e + uVar58 * 0x25;
    local_100[0] = (uint)local_a0._2_1_ * 0x200 - local_c0[0];
    local_100[1] = uVar20 * 0x200 - local_c0[1];
    local_e0[2] = uVar64 * 0x200 - local_c0[2];
    local_e0[3] = uVar1 * 0x200 - local_c0[3];
    local_c0[4] = uVar3 * 0x6d + uVar4 * 0x16e + uVar6 * 0x25;
    local_100[2] = uVar58 * 0x200 - local_c0[2];
    local_100[3] = uVar5 * 0x200 - local_c0[3];
    local_c0[5] = uVar7 * 0x6d + (uVar69 & 0xff) * 0x16e + (uVar60 & 0xff) * 0x25;
    local_e0[4] = uVar3 * 0x200 - local_c0[4];
    local_e0[5] = uVar7 * 0x200 - local_c0[5];
    local_100[4] = uVar6 * 0x200 - local_c0[4];
    local_100[5] = (uVar60 & 0xff) * 0x200 - local_c0[5];
    local_c0[6] = (uVar68 & 0xff) * 0x6d + (uVar51 & 0xff) * 0x16e + (uVar52 & 0xff) * 0x25;
    local_c0[7] = uVar53 * 0x6d + uVar56 * 0x16e + uVar47 * 0x25;
    local_e0[6] = (uVar68 & 0xff) * 0x200 - local_c0[6];
    local_e0[7] = uVar53 * 0x200 - local_c0[7];
    local_100[6] = (uVar52 & 0xff) * 0x200 - local_c0[6];
    local_100[7] = uVar47 * 0x200 - local_c0[7];
    if (param_1 != 0) {
      uVar48 = 0;
      pcVar46 = param_2 + 1;
      uVar57 = 1;
      do {
        cVar12 = pcVar46[-1];
        cVar11 = pcVar46[1];
        iVar17 = iVar21 * (uint)(byte)cVar12 + iVar23 * (uint)(byte)*pcVar46 +
                 iVar22 * (uint)(byte)cVar11;
        if (iVar17 < iVar18) {
          if (iVar17 < iVar9) {
            if (iVar17 < iVar14) {
              if (iVar17 < iVar16) {
                if (iVar17 < iVar15) {
                  if (iVar17 < iVar13) {
                    uVar55 = (ulong)(iVar8 <= iVar17);
                  }
                  else {
                    uVar55 = 2;
                  }
                }
                else {
                  uVar55 = 3;
                }
              }
              else {
                uVar55 = 4;
              }
            }
            else {
              uVar55 = 5;
            }
          }
          else {
            uVar55 = 6;
          }
        }
        else {
          uVar55 = 7;
        }
        iVar19 = (uint)(byte)cVar12 * 0x6d + (uint)(byte)*pcVar46 * 0x16e +
                 (uint)(byte)cVar11 * 0x25;
        iVar17 = local_c0[uVar55] - iVar19 >> 8;
        iVar10 = (int)(iVar19 + (uint)(byte)cVar12 * -0x200 + local_e0[uVar55]) >> 8;
        iVar19 = (int)(iVar19 + (uint)(byte)cVar11 * -0x200 + local_100[uVar55]) >> 8;
        uVar48 = uVar48 + (long)(int)(iVar17 * iVar17 * *param_4 + iVar10 * iVar10 * param_4[1] +
                                     iVar19 * iVar19 * param_4[2]);
        if (param_5 < uVar48) break;
        bVar29 = uVar57 < param_1;
        pcVar46 = pcVar46 + 4;
        uVar57 = uVar57 + 1;
      } while (bVar29);
      goto LAB_00a8a314;
    }
  }
  uVar48 = 0;
LAB_00a8a314:
  if (*(long *)(lVar26 + 0x28) == *(long *)(lVar26 + 0x28)) {
    return uVar48;
  }
  local_a0 = uVar28;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


