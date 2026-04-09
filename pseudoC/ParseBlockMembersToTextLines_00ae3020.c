// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseBlockMembersToTextLines
// Entry Point: 00ae3020
// Size: 3244 bytes
// Signature: undefined __cdecl ParseBlockMembersToTextLines(char * param_1, int param_2, bool param_3, basic_string * param_4, uint param_5, SpvReflectBlockVariable * param_6, vector * param_7)


/* ParseBlockMembersToTextLines(char const*, int, bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int,
   SpvReflectBlockVariable const*, std::__ndk1::vector<TextLine, std::__ndk1::allocator<TextLine>
   >*) */

void ParseBlockMembersToTextLines
               (char *param_1,int param_2,bool param_3,basic_string *param_4,uint param_5,
               SpvReflectBlockVariable *param_6,vector *param_7)

{
  int iVar1;
  char *pcVar2;
  TextLine *pTVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined2 uVar7;
  size_t sVar8;
  void *pvVar9;
  undefined8 *puVar10;
  basic_ostream *pbVar11;
  undefined (*pauVar12) [16];
  undefined8 *puVar13;
  SpvReflectTypeDescription *pSVar14;
  void *pvVar15;
  uint *puVar16;
  SpvReflectBlockVariable *pSVar17;
  ulong uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  int local_4c4;
  ulong local_4c0;
  byte local_4b8 [16];
  void *local_4a8;
  byte local_4a0 [16];
  void *local_490;
  ulong local_488;
  undefined8 local_480;
  void *local_478;
  ulong local_470;
  undefined8 uStack_468;
  void *local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  ulong local_440;
  undefined8 uStack_438;
  void *local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 local_318;
  size_t local_310;
  void *local_308;
  byte local_300;
  void *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined **local_2d0 [8];
  byte local_290;
  undefined8 uStack_288;
  void *local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined8 local_268 [17];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined local_1d0 [6];
  undefined2 uStack_1ca;
  undefined6 uStack_1c8;
  undefined2 uStack_1c2;
  void *local_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong local_178;
  undefined8 uStack_170;
  void *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  if (param_5 != 0) {
    pvVar15 = (void *)((ulong)&local_318 | 1);
    puVar13 = (undefined8 *)((ulong)&local_318 | 2);
    local_4c0 = 0;
    pSVar17 = param_6 + 0x40;
    local_4c4 = param_2;
    do {
      local_2e0 = 0;
      local_268[0] = 0xfdbff0;
      local_2e8 = 0xfdbfc8;
      local_2d8 = 0xfdbeb0;
      iVar1 = 2;
      if (!param_3) {
        iVar1 = local_4c4;
      }
                    /* try { // try from 00ae31b8 to 00ae31c3 has its CatchHandler @ 00ae3e20 */
      std::__ndk1::ios_base::init(local_268);
      local_1d8 = 0xffffffff;
      local_1e0 = 0;
      local_268[0] = 0xfdbed8;
      local_2e8 = 0xfdbe88;
      local_2d8 = 0xfdbeb0;
                    /* try { // try from 00ae31f0 to 00ae31f7 has its CatchHandler @ 00ae3e28 */
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
      local_2d0[0] = &PTR__basic_stringbuf_00fd8fa0;
      uStack_288 = 0;
      local_290 = 0;
      uStack_278 = 0;
      local_280 = (void *)0x0;
      local_270 = 0x18;
      iVar5 = iVar1;
      if (0 < iVar1) {
        do {
          sVar8 = strlen(param_1);
                    /* try { // try from 00ae322c to 00ae3237 has its CatchHandler @ 00ae3ebc */
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_2d8,param_1,sVar8);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
                    /* try { // try from 00ae3240 to 00ae324b has its CatchHandler @ 00ae3e1c */
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      if ((*(byte *)(*(long *)(param_6 + local_4c0 * 0x160 + 0x158) + 0x1f) >> 4 & 1) == 0) {
        pcVar2 = "";
        if (*(char **)(param_6 + local_4c0 * 0x160 + 8) != (char *)0x0) {
          pcVar2 = *(char **)(param_6 + local_4c0 * 0x160 + 8);
        }
        sVar8 = strlen(pcVar2);
        if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 00ae3cc0 to 00ae3cc7 has its CatchHandler @ 00ae3e08 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar8 < 0x17) {
          local_318 = CONCAT71(local_318._1_7_,(char)((int)sVar8 << 1));
          pvVar9 = pvVar15;
          if (sVar8 != 0) goto LAB_00ae332c;
        }
        else {
          uVar18 = sVar8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00ae330c to 00ae3313 has its CatchHandler @ 00ae3d2c */
          pvVar9 = operator_new(uVar18);
          local_318 = uVar18 | 1;
          local_310 = sVar8;
          local_308 = pvVar9;
LAB_00ae332c:
          memcpy(pvVar9,pcVar2,sVar8);
        }
        *(undefined *)((long)pvVar9 + sVar8) = 0;
        if (param_3) {
          uVar18 = (ulong)(*(byte *)param_4 >> 1);
          if ((*(byte *)param_4 & 1) != 0) {
            uVar18 = *(ulong *)(param_4 + 2);
          }
          if (uVar18 != 0) {
                    /* try { // try from 00ae3368 to 00ae337b has its CatchHandler @ 00ae3d0c */
            FUN_006cadd8(&local_470,param_4,&DAT_004ccf25);
            pvVar9 = pvVar15;
            if ((local_318 & 1) != 0) {
              pvVar9 = local_308;
            }
                    /* try { // try from 00ae339c to 00ae33a3 has its CatchHandler @ 00ae3cd8 */
            puVar10 = (undefined8 *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_470,(ulong)pvVar9);
            uVar7 = *(undefined2 *)puVar10;
            local_1d0[0] = SUB81(*(undefined8 *)((long)puVar10 + 2),0);
            local_1d0._1_5_ = (undefined5)((ulong)*(undefined8 *)((long)puVar10 + 2) >> 8);
            pvVar9 = (void *)puVar10[2];
            uStack_1ca = (undefined2)puVar10[1];
            uStack_1c8 = (undefined6)((ulong)puVar10[1] >> 0x10);
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
            if ((local_318 & 1) != 0) {
              operator_delete(local_308);
            }
            local_318 = CONCAT62(local_318._2_6_,uVar7);
            *puVar13 = CONCAT26(uStack_1ca,CONCAT51(local_1d0._1_5_,local_1d0[0]));
            *(ulong *)((long)puVar13 + 6) = CONCAT62(uStack_1c8,uStack_1ca);
            local_308 = pvVar9;
            if ((local_470 & 1) != 0) {
              operator_delete(local_460);
            }
          }
        }
        local_3e0 = 0;
        uStack_3f8 = 0;
        local_400 = 0;
        uStack_3e8 = 0;
        uStack_3f0 = 0;
        uStack_418 = 0;
        local_420 = 0;
        uStack_408 = 0;
        local_410 = 0;
        uStack_428 = 0;
        local_430 = (void *)0x0;
        uStack_448 = 0;
        local_450 = 0;
        uStack_438 = 0;
        local_440 = 0;
        uStack_468 = 0;
        local_470 = 0;
        uStack_458 = 0;
        local_460 = (void *)0x0;
        uStack_3d0 = 0;
        local_3d8 = 0;
        uStack_3c0 = 0;
        uStack_3c8 = 0;
        uStack_3b0 = 0;
        local_3b8 = 0;
        uStack_3a0 = 0;
        uStack_3a8 = 0;
        uStack_390 = 0;
        local_398 = 0;
        uStack_380 = 0;
        uStack_388 = 0;
        uStack_370 = 0;
        local_378 = 0;
        uStack_360 = 0;
        uStack_368 = 0;
        uStack_350 = 0;
        local_358 = 0;
        uStack_340 = 0;
        uStack_348 = 0;
        uStack_330 = 0;
        local_338 = 0;
        uStack_320 = 0;
        uStack_328 = 0;
                    /* try { // try from 00ae3448 to 00ae3453 has its CatchHandler @ 00ae3e54 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_470,(basic_string *)&local_300);
                    /* try { // try from 00ae346c to 00ae3473 has its CatchHandler @ 00ae3e04 */
        ToStringComponentType
                  (*(SpvReflectTypeDescription **)(param_6 + local_4c0 * 0x160 + 0x158),
                   *(uint *)(param_6 + local_4c0 * 0x160 + 0x20));
        if ((local_440 & 1) != 0) {
          operator_delete(local_430);
        }
        local_440 = CONCAT26(uStack_1ca,CONCAT51(local_1d0._1_5_,local_1d0[0]));
        auVar22._8_6_ = uStack_1c8;
        auVar22._0_8_ = local_440;
        auVar22._14_2_ = uStack_1c2;
        uStack_438 = auVar22._8_8_;
        local_430 = local_1c0;
                    /* try { // try from 00ae349c to 00ae34a7 has its CatchHandler @ 00ae3e54 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&uStack_428,(basic_string *)&local_318);
        puVar16 = (uint *)(param_6 + local_4c0 * 0x160 + 0x3c);
        if (*puVar16 != 0) {
          uStack_1c8 = 0;
          uStack_1c2 = 0;
          local_150 = 0xfdbff0;
          local_1d0[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0xc8;
          local_1d0._1_5_ = 0xfdbf;
          uStack_1ca = 0;
          local_1c0 = (void *)0xfdbeb0;
                    /* try { // try from 00ae34e8 to 00ae34f7 has its CatchHandler @ 00ae3d80 */
          std::__ndk1::ios_base::init(&local_150);
          local_150 = 0xfdbed8;
          local_c8 = 0;
          local_c0 = CONCAT44(local_c0._4_4_,0xffffffff);
          local_1d0[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x88;
          local_1d0._1_5_ = 0xfdbe;
          uStack_1ca = 0;
          local_1c0 = (void *)0xfdbeb0;
                    /* try { // try from 00ae3518 to 00ae351f has its CatchHandler @ 00ae3d64 */
          std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
          ppuStack_1b8 = &PTR__basic_stringbuf_00fd8fa0;
          uStack_170 = 0;
          local_178 = 0;
          local_160 = 0;
          local_168 = (void *)0x0;
          uStack_158 = CONCAT44(uStack_158._4_4_,0x18);
          if (*puVar16 != 0) {
            uVar18 = 0;
            do {
              uVar4 = *(uint *)(pSVar17 + uVar18 * 4);
                    /* try { // try from 00ae3558 to 00ae3583 has its CatchHandler @ 00ae3e64 */
              pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  ((basic_ostream *)&local_1c0,"[",1);
              pbVar11 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,
                                   uVar4);
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar11,"]",1);
              uVar18 = uVar18 + 1;
            } while (uVar18 < *puVar16);
          }
                    /* try { // try from 00ae3594 to 00ae359f has its CatchHandler @ 00ae3d54 */
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
          pvVar9 = (void *)((ulong)&local_488 | 1);
          if ((local_488 & 1) != 0) {
            pvVar9 = local_478;
          }
                    /* try { // try from 00ae35bc to 00ae35c3 has its CatchHandler @ 00ae3d3c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&uStack_428,(ulong)pvVar9);
          if ((local_488 & 1) != 0) {
            operator_delete(local_478);
          }
          local_1c0 = (void *)0xfdbeb0;
          local_150 = 0xfdbed8;
          ppuStack_1b8 = &PTR__basic_stringbuf_00fd8fa0;
          local_1d0[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x88;
          local_1d0._1_5_ = 0xfdbe;
          uStack_1ca = 0;
          if ((local_178 & 1) != 0) {
            operator_delete(local_168);
          }
          std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                    ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&ppuStack_1b8);
          std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
                    ((basic_iostream<char,std::__ndk1::char_traits<char>> *)local_1d0);
          std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                    ((basic_ios<char,std::__ndk1::char_traits<char>> *)&local_150);
        }
        pTVar3 = *(TextLine **)(param_7 + 8);
        auVar20 = *(undefined (*) [16])(param_6 + local_4c0 * 0x160 + 0x10);
        auVar21 = NEON_ext(auVar20,auVar20,0xc,1);
        auVar19._0_4_ = auVar20._0_4_;
        auVar19._4_4_ = auVar20._8_4_;
        auVar19._8_4_ = auVar21._0_4_;
        auVar19._12_4_ = auVar21._8_4_;
        local_400 = *(undefined8 *)(param_6 + local_4c0 * 0x160 + 0x140);
        auVar20 = NEON_ext(auVar19,auVar19,0xc,1);
        uStack_408 = auVar20._8_8_;
        local_410 = auVar20._0_8_;
        if (pTVar3 == *(TextLine **)(param_7 + 0x10)) {
                    /* try { // try from 00ae37e4 to 00ae37ef has its CatchHandler @ 00ae3e54 */
          std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::
          __push_back_slow_path<TextLine_const&>
                    ((vector<TextLine,std::__ndk1::allocator<TextLine>> *)param_7,
                     (TextLine *)&local_470);
        }
        else {
                    /* try { // try from 00ae3670 to 00ae367b has its CatchHandler @ 00ae3d30 */
          TextLine::TextLine(pTVar3,(TextLine *)&local_470);
          *(TextLine **)(param_7 + 8) = pTVar3 + 0x158;
        }
      }
      else {
        pcVar2 = "";
        if (*(char **)(param_6 + local_4c0 * 0x160 + 8) != (char *)0x0) {
          pcVar2 = *(char **)(param_6 + local_4c0 * 0x160 + 8);
        }
        sVar8 = strlen(pcVar2);
        if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 00ae3cb8 to 00ae3cbf has its CatchHandler @ 00ae3e0c */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar8 < 0x17) {
          local_318 = CONCAT71(local_318._1_7_,(char)((int)sVar8 << 1));
          pvVar9 = pvVar15;
          if (sVar8 != 0) goto LAB_00ae36ac;
        }
        else {
          uVar18 = sVar8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00ae3690 to 00ae3697 has its CatchHandler @ 00ae3d28 */
          pvVar9 = operator_new(uVar18);
          local_318 = uVar18 | 1;
          local_310 = sVar8;
          local_308 = pvVar9;
LAB_00ae36ac:
          memcpy(pvVar9,pcVar2,sVar8);
        }
        *(undefined *)((long)pvVar9 + sVar8) = 0;
        local_3e0 = 0;
        uStack_3f8 = 0;
        local_400 = 0;
        uStack_3e8 = 0;
        uStack_3f0 = 0;
        uStack_418 = 0;
        local_420 = 0;
        uStack_408 = 0;
        local_410 = 0;
        uStack_428 = 0;
        local_430 = (void *)0x0;
        uStack_448 = 0;
        local_450 = 0;
        uStack_438 = 0;
        local_440 = 0;
        uStack_468 = 0;
        local_470 = 0;
        uStack_458 = 0;
        local_460 = (void *)0x0;
        uStack_3d0 = 0;
        local_3d8 = 0;
        uStack_3c0 = 0;
        uStack_3c8 = 0;
        uStack_3b0 = 0;
        local_3b8 = 0;
        uStack_3a0 = 0;
        uStack_3a8 = 0;
        uStack_390 = 0;
        local_398 = 0;
        uStack_380 = 0;
        uStack_388 = 0;
        uStack_370 = 0;
        local_378 = 0;
        uStack_360 = 0;
        uStack_368 = 0;
        uStack_350 = 0;
        local_358 = 0;
        uStack_340 = 0;
        uStack_348 = 0;
        uStack_330 = 0;
        local_338 = 0;
        uStack_320 = 0;
        uStack_328 = 0;
                    /* try { // try from 00ae36f8 to 00ae372f has its CatchHandler @ 00ae3e50 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_470,(basic_string *)&local_300);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_440);
        auVar20 = *(undefined (*) [16])(param_6 + local_4c0 * 0x160 + 0x10);
        local_400 = *(undefined8 *)(param_6 + local_4c0 * 0x160 + 0x140);
        auVar21 = NEON_ext(auVar20,auVar20,0xc,1);
        local_3e0 = 4;
        auVar20._4_4_ = auVar20._8_4_;
        auVar20._8_4_ = auVar21._0_4_;
        auVar20._12_4_ = auVar21._8_4_;
        auVar20 = NEON_ext(auVar20,auVar20,0xc,1);
        uStack_408 = auVar20._8_8_;
        local_410 = auVar20._0_8_;
        if (param_3) {
          local_140 = 0;
          uStack_158 = 0;
          local_160 = 0;
          uStack_148 = 0;
          local_150 = 0;
          local_178 = 0;
          uStack_180 = 0;
          local_168 = (void *)0x0;
          uStack_170 = 0;
          uStack_198 = 0;
          local_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          ppuStack_1b8 = (undefined **)0x0;
          local_1c0 = (void *)0x0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_1c8 = 0;
          uStack_1c2 = 0;
          local_1d0[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x0;
          local_1d0._1_5_ = 0;
          uStack_1ca = 0;
          uStack_130 = 0;
          local_138 = 0;
          uStack_120 = 0;
          uStack_128 = 0;
          uStack_110 = 0;
          local_118 = 0;
          uStack_100 = 0;
          uStack_108 = 0;
          uStack_f0 = 0;
          local_f8 = 0;
          uStack_e0 = 0;
          uStack_e8 = 0;
          uStack_d0 = 0;
          local_d8 = 0;
          local_c0 = 0;
          local_c8 = 0;
          uStack_b0 = 0;
          local_b8 = 0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_90 = 0;
          local_98 = 0;
          uStack_80 = 0;
          uStack_88 = 0;
          TextLine::operator=((TextLine *)&local_470,(TextLine *)local_1d0);
          TextLine::~TextLine((TextLine *)local_1d0);
LAB_00ae385c:
          local_478 = (void *)0x0;
          local_480 = 0;
          local_488 = 0;
          uVar18 = (ulong)(*(byte *)param_4 >> 1);
          if ((*(byte *)param_4 & 1) != 0) {
            uVar18 = *(ulong *)(param_4 + 2);
          }
          if (uVar18 == 0) {
                    /* try { // try from 00ae38cc to 00ae38d7 has its CatchHandler @ 00ae3ccc */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)local_1d0);
          }
          else {
                    /* try { // try from 00ae3878 to 00ae3887 has its CatchHandler @ 00ae3d24 */
            FUN_006cadd8(local_4a0,param_4,&DAT_004ccf25);
            pvVar9 = pvVar15;
            if ((local_318 & 1) != 0) {
              pvVar9 = local_308;
            }
                    /* try { // try from 00ae38a8 to 00ae38af has its CatchHandler @ 00ae3d1c */
            pauVar12 = (undefined (*) [16])
                       std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append((char *)local_4a0,(ulong)pvVar9);
            local_1c0 = *(void **)pauVar12[1];
            auVar20 = *pauVar12;
            uStack_1c8 = auVar20._8_6_;
            uStack_1c2 = auVar20._14_2_;
            local_1d0[0] = auVar20[0];
            local_1d0._1_5_ = auVar20._1_5_;
            uStack_1ca = auVar20._6_2_;
            *(undefined8 *)(*pauVar12 + 8) = 0;
            *(undefined8 *)pauVar12[1] = 0;
            *(undefined8 *)*pauVar12 = 0;
          }
                    /* try { // try from 00ae38d8 to 00ae38e3 has its CatchHandler @ 00ae3d90 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_488,(basic_string *)local_1d0);
          if (((byte)local_1d0[0] & 1) != 0) {
            operator_delete(local_1c0);
          }
          puVar10 = (undefined8 *)param_7;
          if ((uVar18 != 0) && ((local_4a0[0] & 1) != 0)) {
            operator_delete(local_490);
          }
        }
        else {
          pTVar3 = *(TextLine **)(param_7 + 8);
          if (pTVar3 == *(TextLine **)(param_7 + 0x10)) {
                    /* try { // try from 00ae37f8 to 00ae37ff has its CatchHandler @ 00ae3e50 */
            std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::
            __push_back_slow_path<TextLine_const&>
                      ((vector<TextLine,std::__ndk1::allocator<TextLine>> *)param_7,
                       (TextLine *)&local_470);
          }
          else {
                    /* try { // try from 00ae37cc to 00ae37d7 has its CatchHandler @ 00ae3cd0 */
            TextLine::TextLine(pTVar3,(TextLine *)&local_470);
            *(TextLine **)(param_7 + 8) = pTVar3 + 0x158;
          }
          local_140 = 0;
          uStack_158 = 0;
          local_160 = 0;
          uStack_148 = 0;
          local_150 = 0;
          local_178 = 0;
          uStack_180 = 0;
          local_168 = (void *)0x0;
          uStack_170 = 0;
          uStack_198 = 0;
          local_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          ppuStack_1b8 = (undefined **)0x0;
          local_1c0 = (void *)0x0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_1c8 = 0;
          uStack_1c2 = 0;
          local_1d0[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x0;
          local_1d0._1_5_ = 0;
          uStack_1ca = 0;
          uStack_130 = 0;
          local_138 = 0;
          uStack_120 = 0;
          uStack_128 = 0;
          uStack_110 = 0;
          local_118 = 0;
          uStack_100 = 0;
          uStack_108 = 0;
          uStack_f0 = 0;
          local_f8 = 0;
          uStack_e0 = 0;
          uStack_e8 = 0;
          uStack_d0 = 0;
          local_d8 = 0;
          local_c0 = 0;
          local_c8 = 0;
          uStack_b0 = 0;
          local_b8 = 0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_90 = 0;
          local_98 = 0;
          uStack_80 = 0;
          uStack_88 = 0;
          TextLine::operator=((TextLine *)&local_470,(TextLine *)local_1d0);
          TextLine::~TextLine((TextLine *)local_1d0);
          local_488 = 0;
          local_480 = 0;
          local_478 = (void *)0x0;
          puVar10 = &local_3d8;
          if (param_3) goto LAB_00ae385c;
        }
                    /* try { // try from 00ae3928 to 00ae393b has its CatchHandler @ 00ae3e5c */
        ParseBlockMembersToTextLines
                  (param_1,iVar1 + 1,param_3,(basic_string *)&local_488,
                   *(uint *)(param_6 + local_4c0 * 0x160 + 0x148),
                   *(SpvReflectBlockVariable **)(param_6 + local_4c0 * 0x160 + 0x150),
                   (vector *)puVar10);
        pTVar3 = *(TextLine **)(param_7 + 8);
        local_3e0 = 0x10;
        if (pTVar3 == *(TextLine **)(param_7 + 0x10)) {
                    /* try { // try from 00ae3968 to 00ae39d7 has its CatchHandler @ 00ae3e5c */
          std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::
          __push_back_slow_path<TextLine_const&>
                    ((vector<TextLine,std::__ndk1::allocator<TextLine>> *)param_7,
                     (TextLine *)&local_470);
        }
        else {
                    /* try { // try from 00ae3950 to 00ae395b has its CatchHandler @ 00ae3d58 */
          TextLine::TextLine(pTVar3,(TextLine *)&local_470);
          *(TextLine **)(param_7 + 8) = pTVar3 + 0x158;
        }
        local_140 = 0;
        uStack_158 = 0;
        local_160 = 0;
        uStack_148 = 0;
        local_150 = 0;
        local_178 = 0;
        uStack_180 = 0;
        local_168 = (void *)0x0;
        uStack_170 = 0;
        uStack_198 = 0;
        local_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        ppuStack_1b8 = (undefined **)0x0;
        local_1c0 = (void *)0x0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_1c8 = 0;
        uStack_1c2 = 0;
        local_1d0[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x0;
        local_1d0._1_5_ = 0;
        uStack_1ca = 0;
        uStack_130 = 0;
        local_138 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_110 = 0;
        local_118 = 0;
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_f0 = 0;
        local_f8 = 0;
        uStack_e0 = 0;
        uStack_e8 = 0;
        uStack_d0 = 0;
        local_d8 = 0;
        local_c0 = 0;
        local_c8 = 0;
        uStack_b0 = 0;
        local_b8 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_80 = 0;
        uStack_88 = 0;
        TextLine::operator=((TextLine *)&local_470,(TextLine *)local_1d0);
        TextLine::~TextLine((TextLine *)local_1d0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_470,(basic_string *)&local_300);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&uStack_428,(basic_string *)&local_318);
        puVar16 = (uint *)(param_6 + local_4c0 * 0x160 + 0x3c);
        if (*puVar16 == 0) {
          pSVar14 = *(SpvReflectTypeDescription **)(param_6 + local_4c0 * 0x160 + 0x158);
          if (*(int *)(pSVar14 + 0x58) != 0) {
            puVar16 = (uint *)(pSVar14 + 0x54);
            goto LAB_00ae39fc;
          }
        }
        else {
LAB_00ae39fc:
          uStack_1c8 = 0;
          uStack_1c2 = 0;
          local_150 = 0xfdbff0;
          local_1d0[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0xc8;
          local_1d0._1_5_ = 0xfdbf;
          uStack_1ca = 0;
          local_1c0 = (void *)0xfdbeb0;
                    /* try { // try from 00ae3a28 to 00ae3a37 has its CatchHandler @ 00ae3df4 */
          std::__ndk1::ios_base::init(&local_150);
          local_150 = 0xfdbed8;
          local_c8 = 0;
          local_c0 = CONCAT44(local_c0._4_4_,0xffffffff);
          local_1d0[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x88;
          local_1d0._1_5_ = 0xfdbe;
          uStack_1ca = 0;
          local_1c0 = (void *)0xfdbeb0;
                    /* try { // try from 00ae3a58 to 00ae3a5f has its CatchHandler @ 00ae3dd8 */
          std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
          uStack_170 = 0;
          local_178 = 0;
          local_160 = 0;
          local_168 = (void *)0x0;
          uStack_158 = CONCAT44(uStack_158._4_4_,0x18);
          ppuStack_1b8 = &PTR__basic_stringbuf_00fd8fa0;
          if (*puVar16 != 0) {
            uVar18 = 0;
            do {
              uVar4 = puVar16[uVar18 + 1];
              if (uVar4 == 0) {
                    /* try { // try from 00ae3a98 to 00ae3aef has its CatchHandler @ 00ae3e74 */
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          ((basic_ostream *)&local_1c0,"[]",2);
              }
              else {
                pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    ((basic_ostream *)&local_1c0,"[",1);
                pbVar11 = (basic_ostream *)
                          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                          operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,
                                     uVar4);
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar11,"]",1);
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < *puVar16);
          }
                    /* try { // try from 00ae3af4 to 00ae3aff has its CatchHandler @ 00ae3dbc */
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
          pvVar9 = (void *)((ulong)local_4b8 | 1);
          if ((local_4b8[0] & 1) != 0) {
            pvVar9 = local_4a8;
          }
                    /* try { // try from 00ae3b1c to 00ae3b23 has its CatchHandler @ 00ae3dc0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&uStack_428,(ulong)pvVar9);
          if ((local_4b8[0] & 1) != 0) {
            operator_delete(local_4a8);
          }
          local_1c0 = (void *)0xfdbeb0;
          local_150 = 0xfdbed8;
          ppuStack_1b8 = &PTR__basic_stringbuf_00fd8fa0;
          local_1d0[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x88;
          local_1d0._1_5_ = 0xfdbe;
          uStack_1ca = 0;
          if ((local_178 & 1) != 0) {
            operator_delete(local_168);
          }
          std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                    ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&ppuStack_1b8);
          std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
                    ((basic_iostream<char,std::__ndk1::char_traits<char>> *)local_1d0);
          std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                    ((basic_ios<char,std::__ndk1::char_traits<char>> *)&local_150);
        }
        auVar20 = *(undefined (*) [16])(param_6 + local_4c0 * 0x160 + 0x10);
        auVar22 = NEON_ext(auVar20,auVar20,0xc,1);
        auVar21._0_4_ = auVar20._0_4_;
        auVar21._4_4_ = auVar20._8_4_;
        auVar21._8_4_ = auVar22._0_4_;
        auVar21._12_4_ = auVar22._8_4_;
        local_400 = *(undefined8 *)(param_6 + local_4c0 * 0x160 + 0x140);
        auVar20 = NEON_ext(auVar21,auVar21,0xc,1);
        uStack_408 = auVar20._8_8_;
        local_410 = auVar20._0_8_;
        local_3e0 = 8;
        if (!param_3) {
          pTVar3 = *(TextLine **)(param_7 + 8);
          if (pTVar3 == *(TextLine **)(param_7 + 0x10)) {
                    /* try { // try from 00ae3bfc to 00ae3c07 has its CatchHandler @ 00ae3e5c */
            std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::
            __push_back_slow_path<TextLine_const&>
                      ((vector<TextLine,std::__ndk1::allocator<TextLine>> *)param_7,
                       (TextLine *)&local_470);
          }
          else {
                    /* try { // try from 00ae3be4 to 00ae3bef has its CatchHandler @ 00ae3cd4 */
            TextLine::TextLine(pTVar3,(TextLine *)&local_470);
            *(TextLine **)(param_7 + 8) = pTVar3 + 0x158;
          }
        }
        if ((local_488 & 1) != 0) {
          operator_delete(local_478);
        }
      }
      TextLine::~TextLine((TextLine *)&local_470);
      if ((local_318 & 1) != 0) {
        operator_delete(local_308);
      }
      if ((local_300 & 1) != 0) {
        operator_delete(local_2f0);
      }
      local_2e8 = 0xfdbe88;
      local_2d8 = 0xfdbeb0;
      local_268[0] = 0xfdbed8;
      local_2d0[0] = &PTR__basic_stringbuf_00fd8fa0;
      if ((local_290 & 1) != 0) {
        operator_delete(local_280);
      }
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_2d0);
      std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
                ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_2e8);
      std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_268);
      pSVar17 = pSVar17 + 0x160;
      local_4c0 = local_4c0 + 1;
      local_4c4 = iVar1;
    } while (local_4c0 != param_5);
  }
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


