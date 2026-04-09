// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FormatTextLines
// Entry Point: 00ae4630
// Size: 2808 bytes
// Signature: undefined __cdecl FormatTextLines(vector * param_1, char * param_2, vector * param_3)


/* FormatTextLines(std::__ndk1::vector<TextLine, std::__ndk1::allocator<TextLine> > const&, char
   const*, std::__ndk1::vector<TextLine, std::__ndk1::allocator<TextLine> >*) */

void FormatTextLines(vector *param_1,char *param_2,vector *param_3)

{
  ulong uVar1;
  char *pcVar2;
  TextLine *this;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  size_t sVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong in_x5;
  ulong in_x6;
  ulong in_x7;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong unaff_x19;
  ulong uVar23;
  ulong unaff_x22;
  ulong uVar24;
  ulong unaff_x25;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong local_418;
  undefined8 uStack_410;
  void *local_408;
  ulong local_400;
  ulong uStack_3f8;
  char *local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulong local_350;
  ulong uStack_348;
  undefined1 *puStack_340;
  ulong local_338;
  ulong uStack_330;
  undefined1 *local_328;
  ulong uStack_320;
  ulong uStack_318;
  undefined1 *local_310;
  ulong local_308;
  ulong uStack_300;
  undefined1 *local_2f8;
  ulong local_2f0;
  ulong uStack_2e8;
  undefined1 *puStack_2e0;
  ulong local_2d8;
  ulong uStack_2d0;
  undefined1 *local_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  void *local_2b0;
  ulong local_2a8;
  ulong uStack_2a0;
  undefined1 *local_298;
  undefined **local_290 [8];
  byte local_250;
  undefined8 uStack_248;
  void *local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined8 local_228 [17];
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  undefined **local_178 [2];
  long alStack_168 [6];
  byte local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  lVar27 = *(long *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar27 == lVar3) {
    uVar14 = 0;
    uVar18 = 0;
    uVar20 = 0;
  }
  else {
    uVar14 = (lVar3 - lVar27) - 0x158;
    if (uVar14 < 0x158) {
      uVar20 = 0;
      uVar18 = 0;
      uVar14 = 0;
      lVar25 = lVar27;
    }
    else {
      pbVar12 = (byte *)(lVar27 + 0x170);
      uVar26 = uVar14 / 0x158 + 1;
      uVar17 = uVar26 & 0x1fffffffffffffe;
      lVar25 = lVar27 + uVar17 * 0x158;
      uVar10 = 0;
      uVar13 = uVar17;
      uVar15 = 0;
      uVar16 = 0;
      uVar19 = 0;
      uVar21 = 0;
      uVar22 = 0;
      do {
        iVar6 = *(int *)(pbVar12 + -0xe0);
        if (iVar6 == 0) {
          in_x5 = (ulong)pbVar12[-0x158];
          iVar5 = *(int *)(pbVar12 + 0x78);
        }
        else {
          iVar5 = *(int *)(pbVar12 + 0x78);
        }
        if (iVar5 == 0) {
          in_x7 = (ulong)*pbVar12;
        }
        uVar14 = in_x6;
        if (iVar6 == 0) {
          uVar14 = *(ulong *)(pbVar12 + -0x150);
        }
        if (iVar5 == 0) {
          unaff_x19 = *(ulong *)(pbVar12 + 8);
        }
        uVar20 = in_x5 >> 1 & 0xff;
        uVar23 = in_x7 >> 1 & 0xff;
        in_x6 = uVar20;
        if ((in_x5 & 1) != 0) {
          in_x6 = uVar14;
        }
        in_x5 = uVar23;
        if ((in_x7 & 1) != 0) {
          in_x5 = unaff_x19;
        }
        in_x7 = (ulong)(uVar16 < in_x5);
        if (iVar6 == 0) {
          unaff_x19 = (ulong)pbVar12[-0x140];
        }
        if (iVar5 == 0) {
          uVar23 = (ulong)pbVar12[0x18];
        }
        if (iVar6 == 0) {
          uVar20 = *(ulong *)(pbVar12 + -0x138);
        }
        if (iVar5 == 0) {
          unaff_x22 = *(ulong *)(pbVar12 + 0x20);
        }
        uVar24 = unaff_x19 >> 1 & 0xff;
        uVar14 = uVar23 >> 1;
        uVar18 = uVar24;
        if ((unaff_x19 & 1) != 0) {
          uVar18 = uVar20;
        }
        unaff_x19 = uVar14;
        if ((uVar23 & 1) != 0) {
          unaff_x19 = unaff_x22;
        }
        bVar8 = uVar21 < unaff_x19;
        if (iVar6 == 0) {
          unaff_x22 = (ulong)pbVar12[-0x128];
          if (iVar5 == 0) goto LAB_00ae4858;
LAB_00ae47f0:
          if (iVar6 == 0) goto LAB_00ae46f4;
LAB_00ae4860:
          if (iVar5 == 0) goto LAB_00ae4864;
LAB_00ae4700:
          in_x7 = 0;
          bVar8 = false;
        }
        else {
          if (iVar5 != 0) goto LAB_00ae47f0;
LAB_00ae4858:
          uVar24 = (ulong)pbVar12[0x30];
          if (iVar6 != 0) goto LAB_00ae4860;
LAB_00ae46f4:
          uVar14 = *(ulong *)(pbVar12 + -0x120);
          if (iVar5 != 0) goto LAB_00ae4700;
LAB_00ae4864:
          unaff_x25 = *(ulong *)(pbVar12 + 0x38);
        }
        bVar9 = iVar6 != 0;
        uVar20 = unaff_x22 & 1;
        unaff_x22 = unaff_x22 >> 1 & 0xff;
        if (uVar20 != 0) {
          unaff_x22 = uVar14;
        }
        pbVar12 = pbVar12 + 0x2b0;
        uVar23 = uVar24 >> 1;
        if ((uVar24 & 1) != 0) {
          uVar23 = unaff_x25;
        }
        uVar14 = unaff_x22;
        if (bVar9 || unaff_x22 <= uVar22) {
          uVar14 = uVar22;
        }
        if (uVar23 <= uVar10 || iVar5 != 0) {
          uVar23 = uVar10;
        }
        if (bVar9 || uVar18 <= uVar19) {
          uVar18 = uVar19;
        }
        uVar24 = unaff_x19;
        if (!bVar8) {
          uVar24 = uVar21;
        }
        uVar20 = in_x6;
        if (bVar9 || in_x6 <= uVar15) {
          uVar20 = uVar15;
        }
        uVar1 = in_x5;
        if ((int)in_x7 == 0) {
          uVar1 = uVar16;
        }
        uVar13 = uVar13 - 2;
        uVar10 = uVar23;
        uVar15 = uVar20;
        uVar16 = uVar1;
        uVar19 = uVar18;
        uVar21 = uVar24;
        uVar22 = uVar14;
      } while (uVar13 != 0);
      if (uVar14 <= uVar23) {
        uVar14 = uVar23;
      }
      if (uVar18 <= uVar24) {
        uVar18 = uVar24;
      }
      if (uVar20 <= uVar1) {
        uVar20 = uVar1;
      }
      if (uVar26 == uVar17) goto LAB_00ae488c;
    }
    do {
      uVar26 = uVar14;
      if (*(int *)(lVar25 + 0x90) == 0) {
        uVar13 = (ulong)(*(byte *)(lVar25 + 0x18) >> 1);
        if ((*(byte *)(lVar25 + 0x18) & 1) != 0) {
          uVar13 = *(ulong *)(lVar25 + 0x20);
        }
        if (uVar13 <= uVar20) {
          uVar13 = uVar20;
        }
        uVar20 = (ulong)(*(byte *)(lVar25 + 0x30) >> 1);
        if ((*(byte *)(lVar25 + 0x30) & 1) != 0) {
          uVar20 = *(ulong *)(lVar25 + 0x38);
        }
        if (uVar20 <= uVar18) {
          uVar20 = uVar18;
        }
        uVar26 = (ulong)(*(byte *)(lVar25 + 0x48) >> 1);
        if ((*(byte *)(lVar25 + 0x48) & 1) != 0) {
          uVar26 = *(ulong *)(lVar25 + 0x50);
        }
        uVar18 = uVar20;
        uVar20 = uVar13;
        if (uVar26 <= uVar14) {
          uVar26 = uVar14;
        }
      }
      uVar14 = uVar26;
      lVar25 = lVar25 + 0x158;
    } while (lVar25 != lVar3);
  }
LAB_00ae488c:
  if (lVar3 - lVar27 != 0) {
    lVar25 = 0;
    uVar26 = (lVar3 - lVar27) / 0x158;
    if (uVar26 < 2) {
      uVar26 = 1;
    }
    do {
      local_188 = 0;
      local_110[0] = 0xfdbff0;
      local_190 = 0xfdbfc8;
      local_180 = 0xfdbeb0;
      lVar27 = *(long *)param_1;
                    /* try { // try from 00ae49f0 to 00ae49fb has its CatchHandler @ 00ae51cc */
      std::__ndk1::ios_base::init(local_110);
      local_110[0] = 0xfdbed8;
      local_180 = 0xfdbeb0;
      local_88 = 0;
      local_80 = 0xffffffff;
      local_190 = 0xfdbe88;
                    /* try { // try from 00ae4a20 to 00ae4a27 has its CatchHandler @ 00ae51b0 */
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
      local_178[0] = &PTR__basic_stringbuf_00fd8fa0;
      uStack_130 = 0;
      local_138 = 0;
      uStack_120 = 0;
      local_128 = (void *)0x0;
      local_118 = 0x18;
      switch(*(undefined4 *)(lVar27 + lVar25 + 0x90)) {
      case 1:
      case 4:
        sVar11 = strlen(param_2);
                    /* try { // try from 00ae4a80 to 00ae4bef has its CatchHandler @ 00ae51f0 */
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,param_2,sVar11);
        pbVar12 = (byte *)(lVar27 + lVar25);
        uVar13 = *(ulong *)(pbVar12 + 8);
        pbVar4 = *(byte **)(pbVar12 + 0x10);
        if ((*pbVar12 & 1) == 0) {
          pbVar4 = pbVar12 + 1;
          uVar13 = (ulong)(*pbVar12 >> 1);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,(char *)pbVar4,uVar13);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,"struct ",7);
        lVar3 = lVar27 + lVar25;
        pcVar2 = (char *)(lVar3 + 0x31);
        uVar13 = (ulong)(*(byte *)(lVar3 + 0x30) >> 1);
        if ((*(byte *)(lVar3 + 0x30) & 1) != 0) {
          pcVar2 = *(char **)(lVar3 + 0x40);
          uVar13 = *(ulong *)(lVar3 + 0x38);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,pcVar2,uVar13);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180," {",2);
        break;
      case 2:
      case 8:
        sVar11 = strlen(param_2);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,param_2,sVar11);
        pbVar12 = (byte *)(lVar27 + lVar25);
        uVar13 = *(ulong *)(pbVar12 + 8);
        pbVar4 = *(byte **)(pbVar12 + 0x10);
        if ((*pbVar12 & 1) == 0) {
          pbVar4 = pbVar12 + 1;
          uVar13 = (ulong)(*pbVar12 >> 1);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,(char *)pbVar4,uVar13);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,"} ",2);
        lVar3 = lVar27 + lVar25;
        pcVar2 = (char *)(lVar3 + 0x49);
        uVar13 = (ulong)(*(byte *)(lVar3 + 0x48) >> 1);
        if ((*(byte *)(lVar3 + 0x48) & 1) != 0) {
          pcVar2 = *(char **)(lVar3 + 0x58);
          uVar13 = *(ulong *)(lVar3 + 0x50);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,pcVar2,uVar13);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,";",1);
        break;
      default:
        sVar11 = strlen(param_2);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,param_2,sVar11);
        pbVar12 = (byte *)(lVar27 + lVar25);
        uVar13 = *(ulong *)(pbVar12 + 8);
        pbVar4 = *(byte **)(pbVar12 + 0x10);
        if ((*pbVar12 & 1) == 0) {
          pbVar4 = pbVar12 + 1;
          uVar13 = (ulong)(*pbVar12 >> 1);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,(char *)pbVar4,uVar13);
        if (uVar20 != 0) {
          *(long *)((long)alStack_168 + *(long *)(local_180 + -0x18)) = (long)(int)uVar20;
          lVar3 = lVar27 + lVar25;
          *(uint *)((long)local_178 + *(long *)(local_180 + -0x18)) =
               *(uint *)((long)local_178 + *(long *)(local_180 + -0x18)) & 0xffffff4f | 0x20;
          uVar13 = (ulong)(*(byte *)(lVar3 + 0x18) >> 1);
          pcVar2 = (char *)(lVar3 + 0x19);
          if ((*(byte *)(lVar3 + 0x18) & 1) != 0) {
            uVar13 = *(ulong *)(lVar3 + 0x20);
            pcVar2 = *(char **)(lVar3 + 0x28);
          }
                    /* try { // try from 00ae4c48 to 00ae4c4f has its CatchHandler @ 00ae5128 */
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_180,pcVar2,uVar13);
                    /* try { // try from 00ae4c50 to 00ae4c63 has its CatchHandler @ 00ae51f0 */
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_180," ",1);
        }
        *(long *)((long)alStack_168 + *(long *)(local_180 + -0x18)) = (long)(int)uVar18;
        lVar3 = lVar27 + lVar25;
        *(uint *)((long)local_178 + *(long *)(local_180 + -0x18)) =
             *(uint *)((long)local_178 + *(long *)(local_180 + -0x18)) & 0xffffff4f | 0x20;
        uVar13 = (ulong)(*(byte *)(lVar3 + 0x30) >> 1);
        pcVar2 = (char *)(lVar3 + 0x31);
        if ((*(byte *)(lVar3 + 0x30) & 1) != 0) {
          uVar13 = *(ulong *)(lVar3 + 0x38);
          pcVar2 = *(char **)(lVar3 + 0x40);
        }
                    /* try { // try from 00ae4cb4 to 00ae4cbb has its CatchHandler @ 00ae5148 */
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,pcVar2,uVar13);
                    /* try { // try from 00ae4cbc to 00ae4ccf has its CatchHandler @ 00ae51f0 */
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180," ",1);
        *(long *)((long)alStack_168 + *(long *)(local_180 + -0x18)) = (long)(int)uVar14;
                    /* try { // try from 00ae4cec to 00ae4cfb has its CatchHandler @ 00ae5144 */
        FUN_006cadd8(&local_400,lVar27 + lVar25 + 0x48,&DAT_004e7154);
        uVar13 = local_400 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_400 | 1);
        if ((local_400 & 1) != 0) {
          uVar13 = uStack_3f8;
          pcVar2 = local_3f0;
        }
                    /* try { // try from 00ae4d18 to 00ae4d1f has its CatchHandler @ 00ae512c */
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,pcVar2,uVar13);
        if ((local_400 & 1) != 0) {
          operator_delete(local_3f0);
        }
        break;
      case 0x10:
        FormatTextLines((vector *)(lVar27 + lVar25 + 0x98),param_2,param_3);
      }
      local_370 = 0;
      uStack_388 = 0;
      local_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_3a8 = 0;
      local_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_3c8 = 0;
      local_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3e8 = 0;
      local_3f0 = (char *)0x0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3f8 = 0;
      local_400 = 0;
      uStack_360 = 0;
      local_368 = 0;
      local_350 = 0;
      uStack_358 = 0;
      puStack_340 = (undefined1 *)0x0;
      uStack_348 = 0;
      uStack_330 = 0;
      local_338 = 0;
      uStack_320 = 0;
      local_328 = (undefined1 *)0x0;
      local_310 = (undefined1 *)0x0;
      uStack_318 = 0;
      uStack_300 = 0;
      local_308 = 0;
      local_2f0 = 0;
      local_2f8 = (undefined1 *)0x0;
      puStack_2e0 = (undefined1 *)0x0;
      uStack_2e8 = 0;
      uStack_2d0 = 0;
      local_2d8 = 0;
      uStack_2c0 = 0;
      local_2c8 = (undefined1 *)0x0;
      local_2b0 = (void *)0x0;
      uStack_2b8 = 0;
                    /* try { // try from 00ae4d68 to 00ae4d73 has its CatchHandler @ 00ae51e0 */
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      if ((local_350 & 1) != 0) {
        operator_delete(puStack_340);
      }
      uStack_348 = uStack_2a0;
      local_350 = local_2a8;
      puStack_340 = local_298;
      uVar13 = local_2a8 >> 1 & 0x7f;
      if ((local_2a8 & 1) != 0) {
        uVar13 = uStack_2a0;
      }
      if (uVar13 != 0) {
        lVar3 = lVar27 + lVar25;
        local_390 = CONCAT44(local_390._4_4_,*(undefined4 *)(lVar3 + 0x70));
        local_370 = *(undefined4 *)(lVar27 + lVar25 + 0x90);
                    /* try { // try from 00ae4dcc to 00ae4dd3 has its CatchHandler @ 00ae51a4 */
        std::__ndk1::to_string(*(uint *)(lVar3 + 0x60));
        if ((local_338 & 1) != 0) {
          operator_delete(local_328);
        }
        uStack_330 = uStack_2a0;
        local_338 = local_2a8;
        local_328 = local_298;
                    /* try { // try from 00ae4e04 to 00ae4e0b has its CatchHandler @ 00ae51a8 */
        std::__ndk1::to_string(*(uint *)(lVar27 + lVar25 + 100));
        if ((uStack_320 & 1) != 0) {
          operator_delete(local_310);
        }
        uStack_318 = uStack_2a0;
        uStack_320 = local_2a8;
        local_310 = local_298;
                    /* try { // try from 00ae4e3c to 00ae4e43 has its CatchHandler @ 00ae51ac */
        std::__ndk1::to_string(*(uint *)(lVar27 + lVar25 + 0x68));
        if ((local_308 & 1) != 0) {
          operator_delete(local_2f8);
        }
        uStack_300 = uStack_2a0;
        local_308 = local_2a8;
        local_2f8 = local_298;
                    /* try { // try from 00ae4e74 to 00ae4e7b has its CatchHandler @ 00ae519c */
        std::__ndk1::to_string(*(uint *)(lVar27 + lVar25 + 0x6c));
        if ((local_2f0 & 1) != 0) {
          operator_delete(puStack_2e0);
        }
        uStack_2e8 = uStack_2a0;
        local_2f0 = local_2a8;
        puStack_2e0 = local_298;
                    /* try { // try from 00ae4ea8 to 00ae4eaf has its CatchHandler @ 00ae51a0 */
        std::__ndk1::to_string(*(uint *)(lVar3 + 0x70));
        if ((local_2d8 & 1) != 0) {
          operator_delete(local_2c8);
        }
        uStack_2d0 = uStack_2a0;
        local_2d8 = local_2a8;
        local_2c8 = local_298;
        if (*(int *)(lVar27 + lVar25 + 0x74) != 0) {
          uStack_2a0 = 0;
          local_228[0] = 0xfdbff0;
          local_2a8 = 0xfdbfc8;
          local_298 = (undefined1 *)0xfdbeb0;
                    /* try { // try from 00ae4f08 to 00ae4f17 has its CatchHandler @ 00ae517c */
          std::__ndk1::ios_base::init(local_228);
          local_228[0] = 0xfdbed8;
          local_1a0 = 0;
          local_198 = 0xffffffff;
          local_2a8 = 0xfdbe88;
          local_298 = (undefined1 *)0xfdbeb0;
                    /* try { // try from 00ae4f38 to 00ae4f3f has its CatchHandler @ 00ae5154 */
          std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
          local_290[0] = &PTR__basic_stringbuf_00fd8fa0;
          uStack_248 = 0;
          local_250 = 0;
          uStack_238 = 0;
          local_240 = (void *)0x0;
          local_230 = 0x18;
          if ((*(byte *)(lVar27 + lVar25 + 0x74) & 1) != 0) {
                    /* try { // try from 00ae4f6c to 00ae4f7f has its CatchHandler @ 00ae514c */
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)&local_298,"UNUSED",6);
          }
                    /* try { // try from 00ae4f80 to 00ae4f8b has its CatchHandler @ 00ae518c */
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
          if ((uStack_2c0 & 1) != 0) {
            operator_delete(local_2b0);
          }
          local_2a8 = 0xfdbe88;
          local_228[0] = 0xfdbed8;
          local_298 = std::__ndk1::
                      basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::vtable + 0x40;
          uStack_2b8 = uStack_410;
          uStack_2c0 = local_418;
          local_2b0 = local_408;
          local_290[0] = &PTR__basic_stringbuf_00fd8fa0;
          if ((local_250 & 1) != 0) {
            operator_delete(local_240);
          }
          std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                    ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_290);
          std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
                    ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_2a8);
          std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                    ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_228);
        }
        this = *(TextLine **)(param_3 + 8);
        if (this == *(TextLine **)(param_3 + 0x10)) {
                    /* try { // try from 00ae5034 to 00ae503f has its CatchHandler @ 00ae5150 */
          std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::
          __push_back_slow_path<TextLine_const&>
                    ((vector<TextLine,std::__ndk1::allocator<TextLine>> *)param_3,
                     (TextLine *)&local_400);
        }
        else {
                    /* try { // try from 00ae501c to 00ae5027 has its CatchHandler @ 00ae5170 */
          TextLine::TextLine(this,(TextLine *)&local_400);
          *(TextLine **)(param_3 + 8) = this + 0x158;
        }
      }
      TextLine::~TextLine((TextLine *)&local_400);
      local_190 = 0xfdbe88;
      local_180 = 0xfdbeb0;
      local_110[0] = 0xfdbed8;
      local_178[0] = &PTR__basic_stringbuf_00fd8fa0;
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_178);
      std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
                ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_190);
      std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_110);
      uVar26 = uVar26 - 1;
      lVar25 = lVar25 + 0x158;
    } while (uVar26 != 0);
  }
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


