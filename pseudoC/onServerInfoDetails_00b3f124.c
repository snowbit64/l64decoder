// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onServerInfoDetails
// Entry Point: 00b3f124
// Size: 2244 bytes
// Signature: undefined __cdecl onServerInfoDetails(GsBitStream * param_1, uint param_2)


/* WARNING: Type propagation algorithm not settling */
/* MasterServerManager::onServerInfoDetails(GsBitStream*, unsigned int) */

void MasterServerManager::onServerInfoDetails(GsBitStream *param_1,uint param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  void **ppvVar6;
  void **ppvVar7;
  ulong uVar8;
  undefined8 uVar9;
  LuauScriptSystem *pLVar10;
  GsBitStream *pGVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  void **ppvVar16;
  ushort *puVar17;
  void **ppvVar18;
  char *local_288;
  ushort local_27c [2];
  ulong local_278;
  ulong local_270;
  void *local_268;
  uchar local_260 [4];
  undefined4 local_25c;
  ulong local_258;
  undefined8 uStack_250;
  void *local_248;
  ulong local_240;
  undefined8 uStack_238;
  void *local_230;
  uchar local_228 [4];
  uchar local_224 [4];
  uchar local_220 [4];
  uchar local_21c [4];
  ulong local_218;
  undefined8 uStack_210;
  void *local_208;
  ulong local_200;
  undefined8 uStack_1f8;
  void *local_1f0;
  ushort local_1e4 [2];
  ushort local_1e0 [2];
  byte local_1dc [4];
  ulong local_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8 [2];
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined local_1aa;
  void *local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined local_19a;
  uint local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined local_18a;
  uint local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined local_17a;
  uint local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined local_16a;
  void *local_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined local_15a;
  void *local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined local_14a;
  undefined local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined local_13a;
  uchar local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined local_12a;
  void **local_128;
  undefined4 local_120;
  short local_11c;
  byte local_11a;
  void **local_118;
  undefined4 local_110;
  short local_10c;
  byte local_10a;
  uchar local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined local_fa;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined local_ea;
  void *local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined local_da;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined local_ca;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined local_ba;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined local_aa;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined local_9a;
  undefined4 local_90;
  undefined2 local_8c;
  undefined local_8a;
  undefined4 local_80;
  undefined2 local_7c;
  undefined local_7a;
  undefined4 local_70;
  undefined2 local_6c;
  undefined local_6a;
  undefined4 local_60;
  undefined2 local_5c;
  undefined local_5a;
  long local_58;
  
  pGVar11 = (GsBitStream *)(ulong)param_2;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_1 + 0x20c) != 1) goto LAB_00b3f950;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1dc[0] = 0;
  local_1e0[0] = 0;
  local_1e4[0] = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = (void *)0x0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = (void *)0x0;
  local_21c[0] = '\0';
  local_220[0] = '\0';
  local_224[0] = '\0';
  local_228[0] = '\0';
  local_240 = 0;
  uStack_238 = 0;
  local_230 = (void *)0x0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = (void *)0x0;
  local_25c = 0;
  local_260[0] = '\0';
  local_278 = 0;
  local_270 = 0;
  local_268 = (void *)0x0;
  local_27c[0] = 0;
                    /* try { // try from 00b3f1bc to 00b3f35b has its CatchHandler @ 00b3fa00 */
  uVar5 = GsBitStream::readBits(pGVar11,(uchar *)((long)&local_1c0 + 4),0x20,true);
  if ((((((((uVar5 & 1) == 0) ||
          (uVar5 = GsBitStream::readBits(pGVar11,(uchar *)&local_1c0,0x20,true), (uVar5 & 1) == 0))
         || (uVar5 = MasterServerUtil::readString(pGVar11,(basic_string *)&local_1d8),
            (uVar5 & 1) == 0)) ||
        ((uVar5 = MasterServerUtil::readString(pGVar11,(basic_string *)&local_200), (uVar5 & 1) == 0
         || (uVar5 = MasterServerUtil::readString(pGVar11,(basic_string *)&local_218),
            (uVar5 & 1) == 0)))) ||
       ((uVar5 = MasterServerUtil::readString(pGVar11,(basic_string *)&local_240), (uVar5 & 1) == 0
        || ((uVar5 = MasterServerUtil::readString(pGVar11,(basic_string *)&local_258),
            (uVar5 & 1) == 0 ||
            (uVar5 = MasterServerUtil::readString(pGVar11,(basic_string *)&local_278),
            (uVar5 & 1) == 0)))))) ||
      (uVar5 = GsBitStream::readBits(pGVar11,(uchar *)&local_25c,5,true), (uVar5 & 1) == 0)) ||
     (((uVar5 = GsBitStream::readBits(pGVar11,local_1dc,5,true), (uVar5 & 1) == 0 ||
       (uVar5 = GsBitStream::readBits(pGVar11,(uchar *)local_1e0,5,true), (uVar5 & 1) == 0)) ||
      (uVar5 = GsBitStream::readBits(pGVar11,(uchar *)local_1e4,5,true), (uVar5 & 1) == 0)))) {
LAB_00b3f664:
    ppvVar6 = (void **)0x0;
    ppvVar7 = (void **)0x0;
LAB_00b3f66c:
    local_1b0 = 0;
    local_1aa = 0;
    local_1ac = 0;
    *(undefined4 *)(param_1 + 0x440) = 0xffffffff;
    local_1a0 = 0;
    local_19a = 0;
    local_19c = 0;
    local_190 = 0;
    local_18a = 0;
    local_18c = 0;
    local_180 = 0;
    local_17a = 0;
    local_17c = 0;
    local_170 = 0;
    local_16a = 0;
    local_16c = 0;
    local_160 = 0;
    local_15a = 0;
    local_15c = 0;
    local_150 = 0;
    local_14a = 0;
    local_14c = 0;
    local_140 = 0;
    local_13a = 0;
    local_13c = 0;
    local_130 = 0;
    local_12a = 0;
    local_12c = 0;
    local_120 = 0;
    local_11a = 0;
    local_11c = 0;
    local_110 = 0;
    local_10a = 0;
    local_10c = 0;
    local_100 = 0;
    local_fa = 0;
    local_fc = 0;
    local_f0 = 0;
    local_ea = 0;
    local_ec = 0;
    local_e0 = 0;
    local_da = 0;
    local_dc = 0;
    local_d0 = 0;
    local_ca = 0;
    local_cc = 0;
    local_c0 = 0;
    local_ba = 0;
    local_bc = 0;
    local_b0 = 0;
    local_aa = 0;
    local_ac = 0;
    local_a0 = 0;
    local_9a = 0;
    local_9c = 0;
    local_90 = 0;
    local_8a = 0;
    local_8c = 0;
    local_80 = 0;
    local_7a = 0;
    local_7c = 0;
    local_70 = 0;
    local_6a = 0;
    local_6c = 0;
    local_60 = 0;
    local_5a = 0;
    local_5c = 0;
                    /* try { // try from 00b3f77c to 00b3f7ab has its CatchHandler @ 00b3fa04 */
    ScriptSystemManager::getInstance();
    pLVar10 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    pGVar11 = param_1 + 0x311;
    if (((byte)param_1[0x310] & 1) != 0) {
      pGVar11 = *(GsBitStream **)(param_1 + 800);
    }
    LuauScriptSystem::invokeScriptMethod
              (pLVar10,(char *)pGVar11,(MethodInvocation *)local_1b8,0,0,*(void **)(param_1 + 0x328)
              );
    if (ppvVar6 != (void **)0x0) {
      if (local_27c[0] == 0) goto LAB_00b3f904;
LAB_00b3f7b8:
      uVar5 = 0;
      ppvVar16 = ppvVar7;
      ppvVar18 = ppvVar6;
      do {
        if (*ppvVar18 != (void *)0x0) {
          operator_delete__(*ppvVar18);
        }
        if (*ppvVar16 != (void *)0x0) {
          operator_delete__(*ppvVar16);
        }
        uVar5 = uVar5 + 1;
        ppvVar18 = ppvVar18 + 2;
        ppvVar16 = ppvVar16 + 2;
      } while (uVar5 < local_27c[0]);
      operator_delete__(ppvVar6);
      goto LAB_00b3f910;
    }
  }
  else {
    local_21c[0] = '\0';
    uVar5 = GsBitStream::readBits(pGVar11,local_21c,1,true);
    if ((uVar5 & 1) == 0) goto LAB_00b3f664;
    local_228[0] = '\0';
    uVar5 = GsBitStream::readBits(pGVar11,local_228,1,true);
    if ((uVar5 & 1) == 0) {
LAB_00b3f808:
      ppvVar6 = (void **)0x0;
      ppvVar7 = (void **)0x0;
      goto LAB_00b3f66c;
    }
    local_220[0] = '\0';
    uVar5 = GsBitStream::readBits(pGVar11,local_220,1,true);
    if ((uVar5 & 1) == 0) goto LAB_00b3f808;
    local_224[0] = '\0';
    uVar5 = GsBitStream::readBits(pGVar11,local_224,1,true);
    if ((uVar5 & 1) == 0) goto LAB_00b3f808;
    local_260[0] = '\0';
    uVar5 = GsBitStream::readBits(pGVar11,local_260,1,true);
    if (((uVar5 & 1) == 0) ||
       (uVar5 = GsBitStream::readBits(pGVar11,(uchar *)local_27c,0x10,true), uVar2 = local_27c[0],
       (uVar5 & 1) == 0)) goto LAB_00b3f808;
    uVar5 = (ulong)local_27c[0] << 4;
                    /* try { // try from 00b3f368 to 00b3f39b has its CatchHandler @ 00b3f9f0 */
    ppvVar6 = (void **)operator_new__(uVar5);
    if (uVar2 != 0) {
      puVar12 = (undefined2 *)((long)ppvVar6 + 0xc);
      uVar8 = uVar5;
      do {
        uVar8 = uVar8 - 0x10;
        *(undefined4 *)(puVar12 + -2) = 0;
        *(undefined *)(puVar12 + 1) = 0;
        *puVar12 = 0;
        puVar12 = puVar12 + 8;
      } while (uVar8 != 0);
    }
    ppvVar7 = (void **)operator_new__(uVar5);
    if (uVar2 != 0) {
      puVar12 = (undefined2 *)((long)ppvVar7 + 0xc);
      do {
        uVar5 = uVar5 - 0x10;
        *(undefined4 *)(puVar12 + -2) = 0;
        *(undefined *)(puVar12 + 1) = 0;
        *puVar12 = 0;
        puVar12 = puVar12 + 8;
      } while (uVar5 != 0);
      if (uVar2 != 0) {
        uVar5 = 0;
        puVar15 = (ushort *)((long)ppvVar6 + 0xc);
        puVar17 = (ushort *)((long)ppvVar7 + 0xc);
        do {
                    /* try { // try from 00b3f3d0 to 00b3f3db has its CatchHandler @ 00b3f9fc */
          uVar8 = MasterServerUtil::readString(pGVar11,&local_288);
          if ((uVar8 & 1) == 0) {
LAB_00b3f9dc:
            local_27c[0] = (ushort)uVar5;
            goto LAB_00b3f66c;
          }
                    /* try { // try from 00b3f3e0 to 00b3f3ef has its CatchHandler @ 00b3f9f8 */
          uVar8 = GsBitStream::readAlignedBytes(pGVar11,(uchar *)local_1b8,0x10);
          if ((uVar8 & 1) == 0) {
            if (local_288 != (char *)0x0) {
              operator_delete__(local_288);
            }
            goto LAB_00b3f9dc;
          }
                    /* try { // try from 00b3f3f4 to 00b3f403 has its CatchHandler @ 00b3f9f4 */
          uVar9 = HexStringStreamUtil::encodeToString((uchar *)local_1b8,0x10,false);
          *(undefined4 *)(puVar15 + -2) = 6;
          uVar2 = *puVar15;
          uVar5 = uVar5 + 1;
          uVar3 = *puVar17;
          *(undefined8 *)(puVar17 + -6) = uVar9;
          *(char **)(puVar15 + -6) = local_288;
          *(undefined4 *)(puVar17 + -2) = 6;
          *puVar15 = uVar2 & 0xfffe;
          *puVar17 = uVar3 & 0xfffe;
          puVar15 = puVar15 + 8;
          puVar17 = puVar17 + 8;
        } while (uVar5 < local_27c[0]);
      }
    }
    iVar14 = (int)local_1c0;
    iVar13 = local_1c0._4_4_;
    if ((param_1[0x210] == (GsBitStream)0x0) &&
       ((*(int *)(param_1 + 0x218) != local_1c0._4_4_ ||
        (iVar14 = *(int *)(param_1 + 0x21c), iVar13 = *(int *)(param_1 + 0x218),
        *(int *)(param_1 + 0x21c) != (int)local_1c0)))) goto LAB_00b3f66c;
    uVar1 = *(undefined4 *)(param_1 + 0x214);
    *(int *)(param_1 + 0x444) = iVar13;
    if (param_1[0x210] != (GsBitStream)0x0) {
      uVar1 = 0x7fffffff;
    }
    *(int *)(param_1 + 0x448) = iVar14;
    *(undefined4 *)(param_1 + 0x440) = uVar1;
    *(undefined4 *)(param_1 + 0x468) = local_25c;
                    /* try { // try from 00b3f474 to 00b3f493 has its CatchHandler @ 00b3f9ec */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_1 + 0x488),(basic_string *)&local_258);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_1 + 0x470),(basic_string *)&local_240);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_1 + 0x450),(basic_string *)&local_278);
    local_1a8 = (void *)((ulong)&local_1d8 | 1);
    if ((local_1d8 & 1) != 0) {
      local_1a8 = local_1c8;
    }
    local_168 = (void *)((ulong)&local_200 | 1);
    if ((local_200 & 1) != 0) {
      local_168 = local_1f0;
    }
    local_aa = 0;
    local_ac = 0;
    local_9a = 0;
    local_9c = 0;
    local_8a = 0;
    local_8c = 0;
    local_7a = 0;
    local_7c = 0;
    local_6a = 0;
    local_6c = 0;
    local_5a = 0;
    local_5c = 0;
    local_198 = (uint)local_1dc[0];
    local_19c = 0;
    local_178 = (uint)local_1e4[0];
    local_15c = 0;
    local_158 = (void *)((ulong)&local_218 | 1);
    if ((local_218 & 1) != 0) {
      local_158 = local_208;
    }
    local_1aa = 0;
    local_1ac = 0;
    local_19a = 0;
    local_18a = 0;
    local_18c = 0;
    local_17a = 0;
    local_17c = 0;
    local_16a = 0;
    local_16c = 0;
    local_15a = 0;
    local_14a = 0;
    local_13a = 0;
    local_13c = 0;
    local_12a = 0;
    local_12c = 0;
    local_fa = 0;
    local_fc = 0;
    local_ea = 0;
    local_ec = 0;
    local_da = 0;
    local_d0 = 0;
    local_ca = 0;
    local_cc = 0;
    local_c0 = 0;
    local_ba = 0;
    local_bc = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_80 = 0;
    local_70 = 0;
    local_60 = 0;
    local_1b0 = 1;
    local_1a0 = 6;
    local_190 = 1;
    local_188 = (uint)local_1e0[0];
    local_180 = 1;
    local_170 = 1;
    local_160 = 6;
    local_150 = 6;
    local_14c = 0;
    if (local_21c[0] == '\0') {
      local_148 = false;
    }
    else {
      uVar5 = local_278 >> 1 & 0x7f;
      if ((local_278 & 1) != 0) {
        uVar5 = local_270;
      }
      local_148 = uVar5 == 0;
    }
    local_138 = local_220[0];
    local_11a = (byte)(local_27c[0] >> 0xf);
    local_11c = local_27c[0] << 1;
    local_120 = 9;
    local_110 = 9;
    local_108 = local_260[0];
    local_e8 = (void *)((ulong)&local_278 | 1);
    if ((local_278 & 1) != 0) {
      local_e8 = local_268;
    }
    local_f0 = 1;
    local_140 = 3;
    local_130 = 3;
    local_100 = 3;
    local_f8 = local_25c;
    local_e0 = 6;
    local_dc = 0;
    local_1b8[0] = uVar1;
    local_128 = ppvVar6;
    local_118 = ppvVar7;
    local_10c = local_11c;
    local_10a = local_11a;
                    /* try { // try from 00b3f8c8 to 00b3f8f7 has its CatchHandler @ 00b3f9e8 */
    ScriptSystemManager::getInstance();
    pLVar10 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    pGVar11 = param_1 + 0x2f9;
    if (((byte)param_1[0x2f8] & 1) != 0) {
      pGVar11 = *(GsBitStream **)(param_1 + 0x308);
    }
    LuauScriptSystem::invokeScriptMethod
              (pLVar10,(char *)pGVar11,(MethodInvocation *)local_1b8,0xe,0,
               *(void **)(param_1 + 0x328));
    if (local_27c[0] != 0) goto LAB_00b3f7b8;
LAB_00b3f904:
    operator_delete__(ppvVar6);
    if (ppvVar7 != (void **)0x0) {
LAB_00b3f910:
      operator_delete__(ppvVar7);
    }
  }
  if ((local_278 & 1) != 0) {
    operator_delete(local_268);
  }
  if ((local_258 & 1) != 0) {
    operator_delete(local_248);
  }
  if ((local_240 & 1) != 0) {
    operator_delete(local_230);
  }
  if ((local_218 & 1) != 0) {
    operator_delete(local_208);
  }
  if ((local_200 & 1) != 0) {
    operator_delete(local_1f0);
  }
  if ((local_1d8 & 1) != 0) {
    operator_delete(local_1c8);
  }
LAB_00b3f950:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


