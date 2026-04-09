// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: execute
// Entry Point: 009e5bf0
// Size: 3264 bytes
// Signature: undefined __thiscall execute(ProceduralPlacementRule * this, basic_string * param_1, uint param_2)


/* WARNING: Type propagation algorithm not settling */
/* ProceduralPlacementRule::execute(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int) */

void __thiscall
ProceduralPlacementRule::execute(ProceduralPlacementRule *this,basic_string *param_1,uint param_2)

{
  uchar *puVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  byte *pbVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  byte **ppbVar9;
  long lVar10;
  byte *pbVar11;
  ulong *puVar12;
  LuauScriptSystem *this_00;
  ProceduralPlacementManager *this_01;
  ProceduralPlacementRule *this_02;
  basic_string_conflict *pbVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  undefined8 local_f0;
  ulong uStack_e8;
  void *local_e0;
  byte *local_d0;
  byte *pbStack_c8;
  byte *local_c0;
  uint local_b4;
  uchar *local_b0;
  byte local_a8;
  undefined7 uStack_a7;
  uint uStack_a0;
  undefined uStack_9c;
  undefined uStack_9b;
  undefined2 uStack_9a;
  uchar *local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  long local_78;
  
  pbVar13 = (basic_string_conflict *)(ulong)param_2;
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  std::__ndk1::operator+("/data/maps/proceduralPlacements/",*(basic_string **)(this + 0x50));
  puVar19 = (undefined8 *)(this + 8);
  if ((*(byte *)puVar19 & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  local_b0 = (uchar *)0x0;
  local_b4 = 0;
  *(ulong *)(this + 0x10) = CONCAT26(uStack_9a,CONCAT15(uStack_9b,CONCAT14(uStack_9c,uStack_a0)));
  *puVar19 = CONCAT71(uStack_a7,local_a8);
  *(uchar **)(this + 0x18) = local_98;
  std::__ndk1::operator+((__ndk1 *)&m_scriptFnPrefix,(basic_string_conflict *)puVar19,pbVar13);
  puVar1 = (uchar *)((ulong)&local_a8 | 1);
  if ((local_a8 & 1) != 0) {
    puVar1 = local_98;
  }
                    /* try { // try from 009e5c98 to 009e5ca7 has its CatchHandler @ 009e6a18 */
  uVar8 = NativeFileUtil::loadFile((char *)puVar1,&local_b0,&local_b4,1);
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((uVar8 & 1) != 0) {
    local_b0[local_b4] = '\0';
    local_a8 = 0x18;
    uStack_9c = 0x22;
    uStack_a7 = 0x6d614e656c7572;
    uStack_a0 = 0x203d2065;
    uStack_9b = 0;
                    /* try { // try from 009e5cf8 to 009e5d0b has its CatchHandler @ 009e6a10 */
    FUN_006cadd8(&local_d0,this + 0x28,&DAT_00504532);
    pbVar22 = (byte *)((ulong)&local_d0 | 1);
    if (((ulong)local_d0 & 1) != 0) {
      pbVar22 = local_c0;
    }
                    /* try { // try from 009e5d28 to 009e5d2f has its CatchHandler @ 009e69fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_a8,(ulong)pbVar22);
    if (((byte)local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
                    /* try { // try from 009e5d40 to 009e5d57 has its CatchHandler @ 009e69f4 */
    std::__ndk1::operator+("GAME_INSTALL_PATH = \"",(basic_string *)&m_scriptFnPrefix);
                    /* try { // try from 009e5d58 to 009e5d67 has its CatchHandler @ 009e69e0 */
    ppbVar9 = (byte **)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append((char *)&local_f0);
    local_c0 = ppbVar9[2];
    pbStack_c8 = ppbVar9[1];
    local_d0 = *ppbVar9;
    ppbVar9[1] = (byte *)0x0;
    ppbVar9[2] = (byte *)0x0;
    *ppbVar9 = (byte *)0x0;
    pbVar22 = (byte *)((ulong)&local_d0 | 1);
    if (((ulong)local_d0 & 1) != 0) {
      pbVar22 = local_c0;
    }
                    /* try { // try from 009e5da0 to 009e5da7 has its CatchHandler @ 009e69c8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_a8,(ulong)pbVar22);
    if (((ulong)local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
    lVar20 = *(long *)(this + 0x50);
    lVar14 = *(long *)(lVar20 + 0x18);
    if (*(long *)(lVar20 + 0x20) != lVar14) {
      uVar8 = 0;
      pbVar22 = (byte *)((ulong)&local_d0 | 1);
      do {
        lVar10 = lVar14 + uVar8 * 0x48;
        pbVar11 = (byte *)(lVar10 + 0x18);
        bVar2 = *pbVar11;
        uVar17 = *(ulong *)(lVar10 + 0x20);
        uVar18 = (ulong)(bVar2 >> 1);
        uVar16 = uVar18;
        if ((bVar2 & 1) != 0) {
          uVar16 = uVar17;
        }
        if (uVar16 == 6) {
                    /* try { // try from 009e5e94 to 009e5ea7 has its CatchHandler @ 009e6afc */
          iVar7 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,0x4eabbd);
          if (iVar7 != 0) {
            lVar14 = *(long *)(lVar20 + 0x18);
            lVar10 = lVar14 + uVar8 * 0x48;
            bVar2 = *(byte *)(lVar10 + 0x18);
            uVar17 = *(ulong *)(lVar10 + 0x20);
            uVar18 = (ulong)(bVar2 >> 1);
            goto LAB_009e5ec8;
          }
                    /* try { // try from 009e6204 to 009e620f has its CatchHandler @ 009e6a68 */
          FUN_006cadd8(&local_110,*(long *)(lVar20 + 0x18) + uVar8 * 0x48,&DAT_004e330b);
          lVar14 = *(long *)(lVar20 + 0x18) + uVar8 * 0x48;
          uVar16 = lVar14 + 0x31;
          if ((*(byte *)(lVar14 + 0x30) & 1) != 0) {
            uVar16 = *(ulong *)(lVar14 + 0x40);
          }
                    /* try { // try from 009e6238 to 009e623f has its CatchHandler @ 009e6a64 */
          puVar12 = (ulong *)std::__ndk1::
                             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             ::append((char *)&local_110,uVar16);
          local_e0 = (void *)puVar12[2];
          uStack_e8 = puVar12[1];
          local_f0 = *puVar12;
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
                    /* try { // try from 009e6258 to 009e6263 has its CatchHandler @ 009e6a60 */
          ppbVar9 = (byte **)std::__ndk1::
                             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             ::append((char *)&local_f0);
          local_c0 = ppbVar9[2];
          pbStack_c8 = ppbVar9[1];
          local_d0 = *ppbVar9;
          ppbVar9[1] = (byte *)0x0;
          ppbVar9[2] = (byte *)0x0;
          *ppbVar9 = (byte *)0x0;
          pbVar11 = pbVar22;
          if (((ulong)local_d0 & 1) != 0) {
            pbVar11 = local_c0;
          }
                    /* try { // try from 009e6294 to 009e629b has its CatchHandler @ 009e6a5c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_a8,(ulong)pbVar11);
LAB_009e63fc:
          if (((ulong)local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
          if ((local_f0 & 1) != 0) {
            operator_delete(local_e0);
          }
          if ((local_110 & 1) != 0) {
            operator_delete(local_100);
          }
        }
        else {
LAB_009e5ec8:
          uVar16 = uVar18;
          if ((bVar2 & 1) != 0) {
            uVar16 = uVar17;
          }
          if (uVar16 == 4) {
                    /* try { // try from 009e5ee0 to 009e5ef7 has its CatchHandler @ 009e6af8 */
            iVar7 = std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    compare(lVar14 + uVar8 * 0x48 + 0x18,0,(char *)0xffffffffffffffff,0x4c8124);
            if (iVar7 == 0) {
                    /* try { // try from 009e62ac to 009e62bb has its CatchHandler @ 009e6a50 */
              FUN_006cadd8(&local_110,*(long *)(lVar20 + 0x18) + uVar8 * 0x48," = PPMask.new(\"");
              lVar14 = *(long *)(lVar20 + 0x18) + uVar8 * 0x48;
              uVar16 = lVar14 + 0x31;
              if ((*(byte *)(lVar14 + 0x30) & 1) != 0) {
                uVar16 = *(ulong *)(lVar14 + 0x40);
              }
                    /* try { // try from 009e62e4 to 009e62eb has its CatchHandler @ 009e6a4c */
              puVar12 = (ulong *)std::__ndk1::
                                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 ::append((char *)&local_110,uVar16);
              local_e0 = (void *)puVar12[2];
              uStack_e8 = puVar12[1];
              local_f0 = *puVar12;
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar12 = 0;
                    /* try { // try from 009e6304 to 009e6313 has its CatchHandler @ 009e6a48 */
              ppbVar9 = (byte **)std::__ndk1::
                                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 ::append((char *)&local_f0);
              local_c0 = ppbVar9[2];
              pbStack_c8 = ppbVar9[1];
              local_d0 = *ppbVar9;
              ppbVar9[1] = (byte *)0x0;
              ppbVar9[2] = (byte *)0x0;
              *ppbVar9 = (byte *)0x0;
              pbVar11 = pbVar22;
              if (((ulong)local_d0 & 1) != 0) {
                pbVar11 = local_c0;
              }
                    /* try { // try from 009e6344 to 009e634b has its CatchHandler @ 009e6a44 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_a8,(ulong)pbVar11);
              goto LAB_009e63fc;
            }
            lVar14 = *(long *)(lVar20 + 0x18);
            lVar10 = lVar14 + uVar8 * 0x48;
            bVar2 = *(byte *)(lVar10 + 0x18);
            uVar17 = *(ulong *)(lVar10 + 0x20);
            uVar18 = (ulong)(bVar2 >> 1);
          }
          uVar16 = uVar18;
          if ((bVar2 & 1) != 0) {
            uVar16 = uVar17;
          }
          if (uVar16 == 9) {
                    /* try { // try from 009e5f30 to 009e5f47 has its CatchHandler @ 009e6af4 */
            iVar7 = std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    compare(lVar14 + uVar8 * 0x48 + 0x18,0,(char *)0xffffffffffffffff,0x4f7761);
            if (iVar7 == 0) {
                    /* try { // try from 009e635c to 009e636b has its CatchHandler @ 009e6a38 */
              FUN_006cadd8(&local_110,*(long *)(lVar20 + 0x18) + uVar8 * 0x48,
                           " = PPIndexMask.new(\"");
              lVar14 = *(long *)(lVar20 + 0x18) + uVar8 * 0x48;
              uVar16 = lVar14 + 0x31;
              if ((*(byte *)(lVar14 + 0x30) & 1) != 0) {
                uVar16 = *(ulong *)(lVar14 + 0x40);
              }
                    /* try { // try from 009e6394 to 009e639b has its CatchHandler @ 009e6a34 */
              puVar12 = (ulong *)std::__ndk1::
                                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 ::append((char *)&local_110,uVar16);
              local_e0 = (void *)puVar12[2];
              uStack_e8 = puVar12[1];
              local_f0 = *puVar12;
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar12 = 0;
                    /* try { // try from 009e63b4 to 009e63c3 has its CatchHandler @ 009e6a30 */
              ppbVar9 = (byte **)std::__ndk1::
                                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 ::append((char *)&local_f0);
              local_c0 = ppbVar9[2];
              pbStack_c8 = ppbVar9[1];
              local_d0 = *ppbVar9;
              ppbVar9[1] = (byte *)0x0;
              ppbVar9[2] = (byte *)0x0;
              *ppbVar9 = (byte *)0x0;
              pbVar11 = pbVar22;
              if (((ulong)local_d0 & 1) != 0) {
                pbVar11 = local_c0;
              }
                    /* try { // try from 009e63f4 to 009e63fb has its CatchHandler @ 009e6a2c */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_a8,(ulong)pbVar11);
              goto LAB_009e63fc;
            }
            lVar14 = *(long *)(lVar20 + 0x18);
            lVar10 = lVar14 + uVar8 * 0x48;
            bVar2 = *(byte *)(lVar10 + 0x18);
            uVar17 = *(ulong *)(lVar10 + 0x20);
            uVar18 = (ulong)(bVar2 >> 1);
          }
          uVar16 = uVar18;
          if ((bVar2 & 1) != 0) {
            uVar16 = uVar17;
          }
          if (uVar16 == 3) {
                    /* try { // try from 009e5f80 to 009e5f97 has its CatchHandler @ 009e6a7c */
            iVar7 = std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    compare(lVar14 + uVar8 * 0x48 + 0x18,0,(char *)0xffffffffffffffff,0x4dbc25);
            if (iVar7 != 0) {
              lVar14 = *(long *)(lVar20 + 0x18);
              lVar10 = lVar14 + uVar8 * 0x48;
              bVar2 = *(byte *)(lVar10 + 0x18);
              uVar17 = *(ulong *)(lVar10 + 0x20);
              uVar18 = (ulong)(bVar2 >> 1);
              goto LAB_009e5fb8;
            }
LAB_009e6148:
                    /* try { // try from 009e6154 to 009e6163 has its CatchHandler @ 009e6a90 */
            FUN_006cadd8(&local_110,*(long *)(lVar20 + 0x18) + uVar8 * 0x48,&DAT_004d59c8);
            lVar14 = *(long *)(lVar20 + 0x18) + uVar8 * 0x48;
            uVar16 = lVar14 + 0x31;
            if ((*(byte *)(lVar14 + 0x30) & 1) != 0) {
              uVar16 = *(ulong *)(lVar14 + 0x40);
            }
                    /* try { // try from 009e618c to 009e6193 has its CatchHandler @ 009e6a80 */
            puVar12 = (ulong *)std::__ndk1::
                               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ::append((char *)&local_110,uVar16);
            local_e0 = (void *)puVar12[2];
            uStack_e8 = puVar12[1];
            local_f0 = *puVar12;
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = 0;
                    /* try { // try from 009e61ac to 009e61bb has its CatchHandler @ 009e6acc */
            ppbVar9 = (byte **)std::__ndk1::
                               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ::append((char *)&local_f0);
            local_c0 = ppbVar9[2];
            pbStack_c8 = ppbVar9[1];
            local_d0 = *ppbVar9;
            ppbVar9[1] = (byte *)0x0;
            ppbVar9[2] = (byte *)0x0;
            *ppbVar9 = (byte *)0x0;
            pbVar11 = pbVar22;
            if (((ulong)local_d0 & 1) != 0) {
              pbVar11 = local_c0;
            }
                    /* try { // try from 009e61ec to 009e61f3 has its CatchHandler @ 009e6a98 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_a8,(ulong)pbVar11);
            goto LAB_009e63fc;
          }
LAB_009e5fb8:
          uVar16 = uVar18;
          if ((bVar2 & 1) != 0) {
            uVar16 = uVar17;
          }
          if (uVar16 == 5) {
                    /* try { // try from 009e5fd0 to 009e5fe7 has its CatchHandler @ 009e6a78 */
            iVar7 = std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    compare(lVar14 + uVar8 * 0x48 + 0x18,0,(char *)0xffffffffffffffff,0x50b0a0);
            if (iVar7 == 0) goto LAB_009e6148;
            lVar14 = *(long *)(lVar20 + 0x18);
            lVar10 = lVar14 + uVar8 * 0x48;
            bVar2 = *(byte *)(lVar10 + 0x18);
            uVar17 = *(ulong *)(lVar10 + 0x20);
            uVar18 = (ulong)(bVar2 >> 1);
          }
          uVar16 = uVar18;
          if ((bVar2 & 1) != 0) {
            uVar16 = uVar17;
          }
          if (uVar16 == 7) {
                    /* try { // try from 009e6020 to 009e6037 has its CatchHandler @ 009e6a58 */
            iVar7 = std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    compare(lVar14 + uVar8 * 0x48 + 0x18,0,(char *)0xffffffffffffffff,0x4d1dd3);
            if (iVar7 == 0) goto LAB_009e6148;
            lVar14 = *(long *)(lVar20 + 0x18);
            lVar10 = lVar14 + uVar8 * 0x48;
            bVar2 = *(byte *)(lVar10 + 0x18);
            uVar17 = *(ulong *)(lVar10 + 0x20);
            uVar18 = (ulong)(bVar2 >> 1);
          }
          uVar16 = uVar18;
          if ((bVar2 & 1) != 0) {
            uVar16 = uVar17;
          }
          if (uVar16 == 0xd) {
                    /* try { // try from 009e6070 to 009e6087 has its CatchHandler @ 009e6a40 */
            iVar7 = std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    compare(lVar14 + uVar8 * 0x48 + 0x18,0,(char *)0xffffffffffffffff,0x50b179);
            if (iVar7 == 0) goto LAB_009e6148;
            lVar14 = *(long *)(lVar20 + 0x18);
            lVar10 = lVar14 + uVar8 * 0x48;
            bVar2 = *(byte *)(lVar10 + 0x18);
            uVar17 = *(ulong *)(lVar10 + 0x20);
            uVar18 = (ulong)(bVar2 >> 1);
          }
          if ((bVar2 & 1) != 0) {
            uVar18 = uVar17;
          }
                    /* try { // try from 009e60c0 to 009e60d7 has its CatchHandler @ 009e6a28 */
          if ((uVar18 == 5) &&
             (iVar7 = std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::compare(lVar14 + uVar8 * 0x48 + 0x18,0,(char *)0xffffffffffffffff,0x50694d),
             iVar7 == 0)) {
            local_d0 = (byte *)0x0;
            pbStack_c8 = (byte *)0x0;
            local_c0 = (byte *)0x0;
            uVar16 = local_f0 >> 0x10;
            local_f0 = CONCAT62((uint6)uVar16 & 0xffffffffff00,0x3b02);
                    /* try { // try from 009e6100 to 009e6113 has its CatchHandler @ 009e6920 */
            StringUtil::split((basic_string *)(*(long *)(lVar20 + 0x18) + uVar8 * 0x48 + 0x30),
                              (basic_string *)&local_f0,(vector *)&local_d0,true,true);
            if ((local_f0 & 1) != 0) {
              operator_delete(local_e0);
            }
            local_f0 = 0;
            uStack_e8 = 0;
            local_e0 = (void *)0x0;
            if ((long)pbStack_c8 - (long)local_d0 == 0x18) {
              uVar15 = 0;
            }
            else {
              uVar16 = 0;
              do {
                    /* try { // try from 009e647c to 009e648b has its CatchHandler @ 009e6b18 */
                FUN_006cadd8(&local_110,local_d0 + uVar16 * 0x18,&DAT_004df685);
                pvVar4 = (void *)((ulong)&local_110 | 1);
                if ((local_110 & 1) != 0) {
                  pvVar4 = local_100;
                }
                    /* try { // try from 009e64a4 to 009e64ab has its CatchHandler @ 009e6b00 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)&local_f0,(ulong)pvVar4);
                if ((local_110 & 1) != 0) {
                  operator_delete(local_100);
                }
                uVar16 = (ulong)((int)uVar16 + 1);
              } while (uVar16 < ((long)pbStack_c8 - (long)local_d0 >> 3) * -0x5555555555555555 - 1U)
              ;
              uVar15 = (uint)(byte)local_f0;
            }
            uVar16 = (ulong)(uVar15 >> 1);
            if ((uVar15 & 1) != 0) {
              uVar16 = uStack_e8;
            }
                    /* try { // try from 009e64d8 to 009e64eb has its CatchHandler @ 009e691c */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)&local_110,(ulong)&local_f0,0,(allocator *)(uVar16 - 1));
            if ((local_f0 & 1) != 0) {
              operator_delete(local_e0);
            }
            uStack_e8 = uStack_108;
            local_f0 = local_110;
            local_e0 = local_100;
                    /* try { // try from 009e6518 to 009e6527 has its CatchHandler @ 009e6918 */
            FUN_006cadd8(&local_90,*(long *)(lVar20 + 0x18) + uVar8 * 0x48,&DAT_00506adb);
            pvVar4 = (void *)((ulong)&local_f0 | 1);
            if ((local_f0 & 1) != 0) {
              pvVar4 = local_e0;
            }
                    /* try { // try from 009e6540 to 009e6547 has its CatchHandler @ 009e6904 */
            puVar12 = (ulong *)std::__ndk1::
                               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ::append((char *)&local_90,(ulong)pvVar4);
            local_120 = (void *)puVar12[2];
            uStack_128 = puVar12[1];
            local_130 = *puVar12;
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = 0;
                    /* try { // try from 009e6560 to 009e656f has its CatchHandler @ 009e68e4 */
            puVar12 = (ulong *)std::__ndk1::
                               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ::append((char *)&local_130);
            local_100 = (void *)puVar12[2];
            uStack_108 = puVar12[1];
            local_110 = *puVar12;
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = 0;
            pvVar4 = (void *)((ulong)&local_110 | 1);
            if ((local_110 & 1) != 0) {
              pvVar4 = local_100;
            }
                    /* try { // try from 009e65a0 to 009e65a7 has its CatchHandler @ 009e68b0 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_a8,(ulong)pvVar4);
            if ((local_110 & 1) != 0) {
              operator_delete(local_100);
            }
            if ((local_130 & 1) != 0) {
              operator_delete(local_120);
            }
            if ((local_90 & 1) != 0) {
              operator_delete(local_80);
            }
            pbVar11 = local_d0;
            if ((local_f0 & 1) != 0) {
              operator_delete(local_e0);
              pbVar11 = local_d0;
            }
            local_d0 = pbVar11;
            pbVar21 = pbStack_c8;
            if (pbVar11 != (byte *)0x0) {
              while (pbVar5 = pbVar21, pbVar5 != pbVar11) {
                pbVar21 = pbVar5 + -0x18;
                if ((*pbVar21 & 1) != 0) {
                  operator_delete(*(void **)(pbVar5 + -8));
                }
              }
              pbStack_c8 = pbVar11;
              operator_delete(local_d0);
            }
          }
        }
        lVar14 = *(long *)(lVar20 + 0x18);
        uVar8 = (ulong)((int)uVar8 + 1);
        uVar16 = (*(long *)(lVar20 + 0x20) - lVar14 >> 3) * -0x71c71c71c71c71c7;
      } while (uVar8 <= uVar16 && uVar16 - uVar8 != 0);
    }
    local_90 = 0;
    uStack_88 = 0;
    FUN_009e6b4c(&local_90);
                    /* try { // try from 009e6674 to 009e6687 has its CatchHandler @ 009e69c0 */
    std::__ndk1::operator+("parentObjects = PPParentObjects.new(\"",param_1);
                    /* try { // try from 009e6688 to 009e6697 has its CatchHandler @ 009e69ac */
    puVar12 = (ulong *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append((char *)&local_130);
    local_100 = (void *)puVar12[2];
    uStack_108 = puVar12[1];
    local_110 = *puVar12;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
                    /* try { // try from 009e66b0 to 009e66bb has its CatchHandler @ 009e698c */
    puVar12 = (ulong *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append((char *)&local_110);
    local_e0 = (void *)puVar12[2];
    uStack_e8 = puVar12[1];
    local_f0 = *puVar12;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
                    /* try { // try from 009e66d8 to 009e66e7 has its CatchHandler @ 009e696c */
    ppbVar9 = (byte **)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append((char *)&local_f0);
    local_c0 = ppbVar9[2];
    pbStack_c8 = ppbVar9[1];
    local_d0 = *ppbVar9;
    ppbVar9[1] = (byte *)0x0;
    ppbVar9[2] = (byte *)0x0;
    *ppbVar9 = (byte *)0x0;
    pbVar22 = (byte *)((ulong)&local_d0 | 1);
    if (((ulong)local_d0 & 1) != 0) {
      pbVar22 = local_c0;
    }
                    /* try { // try from 009e6720 to 009e6727 has its CatchHandler @ 009e6930 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_a8,(ulong)pbVar22);
    if (((ulong)local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
    if ((local_110 & 1) != 0) {
      operator_delete(local_100);
    }
    if ((local_130 & 1) != 0) {
      operator_delete(local_120);
    }
                    /* try { // try from 009e6754 to 009e679b has its CatchHandler @ 009e6a70 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_a8);
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    bVar6 = (local_a8 & 1) != 0;
    puVar1 = (uchar *)((ulong)&local_a8 | 1);
    if (bVar6) {
      puVar1 = local_98;
    }
    uVar15 = (uint)(local_a8 >> 1);
    if (bVar6) {
      uVar15 = uStack_a0;
    }
    LuauScriptSystem::doBuffer(this_00,puVar1,uVar15,(char *)0x0,"",false);
    if (local_b0 != (uchar *)0x0) {
      operator_delete__(local_b0);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
  }
  lVar14 = *(long *)(this + 0x68);
  if (*(long *)(this + 0x70) != lVar14) {
    uVar8 = 0;
    do {
      lVar14 = *(long *)(lVar14 + uVar8 * 8);
      bVar2 = *(byte *)(basic_string *)(lVar14 + 0x30);
      uVar16 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar16 = *(ulong *)(lVar14 + 0x38);
      }
      if (uVar16 != 0) {
        this_01 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
        this_02 = (ProceduralPlacementRule *)
                  ProceduralPlacementManager::getRule(this_01,(basic_string *)(lVar14 + 0x30));
        if (this_02 != (ProceduralPlacementRule *)0x0) {
          if (this_02 != this) {
            std::__ndk1::
            __tree<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>>>
            ::
            __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::__tree_node<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,void*>*,long>>
                      ((__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>>>
                        *)(this_02 + 0xa8),(__tree_const_iterator)*(undefined8 *)(this + 0xa8),
                       (int)this + 0xb0);
          }
          execute(this_02,(basic_string *)(this + 0x28),*(uint *)(lVar14 + 0x28));
        }
      }
      lVar14 = *(long *)(this + 0x68);
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(*(long *)(this + 0x70) - lVar14 >> 3));
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


