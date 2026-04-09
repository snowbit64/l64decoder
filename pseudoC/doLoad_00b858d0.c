// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doLoad
// Entry Point: 00b858d0
// Size: 4180 bytes
// Signature: undefined __thiscall doLoad(DensityMap * this, char * param_1)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DensityMap::doLoad(char const*) */

undefined4 __thiscall DensityMap::doLoad(DensityMap *this,char *param_1)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined (*pauVar5) [12];
  long lVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  unkbyte9 Var14;
  unkbyte9 Var15;
  bool bVar16;
  int iVar17;
  allocator *paVar18;
  ChunkedBitSquare *pCVar19;
  ulong uVar20;
  BitVector *this_00;
  BitVector *this_01;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  allocator *paVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  char *pcVar34;
  uint uVar35;
  char *pcVar36;
  void *pvVar37;
  long *plVar38;
  uint uVar39;
  undefined auVar40 [16];
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  undefined8 uVar58;
  byte bVar65;
  byte bVar66;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  undefined8 uVar67;
  byte bVar74;
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined4 uVar78;
  undefined auVar79 [16];
  uint uVar80;
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  undefined auVar121 [16];
  undefined auVar122 [16];
  undefined auVar123 [16];
  undefined auVar124 [16];
  undefined auVar125 [16];
  uint uStack_160;
  uint local_15c;
  uint local_158;
  undefined4 uStack_154;
  ulong uStack_150;
  char *local_148;
  ulong local_140;
  ulong uStack_138;
  char *local_130;
  ulong local_120;
  ulong uStack_118;
  char *local_110;
  ushort local_100 [4];
  ulong local_f8;
  char *local_f0;
  undefined8 local_e8;
  allocator *local_e0;
  void *local_d8;
  BitVector *local_d0;
  uint local_c8;
  uint uStack_c4;
  undefined4 local_c0;
  int iStack_bc;
  long local_b0;
  int local_9c;
  long local_90;
  
  lVar6 = tpidr_el0;
  local_90 = *(long *)(lVar6 + 0x28);
  paVar18 = (allocator *)strlen(param_1);
  if ((allocator *)0xffffffffffffffef < paVar18) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (paVar18 < (allocator *)0x17) {
    pvVar37 = (void *)((ulong)&local_e8 | 1);
    local_e8 = CONCAT71(local_e8._1_7_,(char)((int)paVar18 << 1));
    if (paVar18 != (allocator *)0x0) goto LAB_00b85960;
  }
  else {
    pvVar37 = operator_new((ulong)(paVar18 + 0x10) & 0xfffffffffffffff0);
    local_e8 = (ulong)(paVar18 + 0x10) & 0xfffffffffffffff0 | 1;
    local_e0 = paVar18;
    local_d8 = pvVar37;
LAB_00b85960:
    memcpy(pvVar37,param_1,(size_t)paVar18);
  }
  *(allocator *)((long)pvVar37 + (long)paVar18) = (allocator)0x0;
  pcVar34 = (char *)((ulong)&local_120 | 1);
  pcVar36 = (char *)((ulong)&local_140 | 1);
  local_100[0] = 0;
  paVar27 = (allocator *)(ulong)((byte)local_e8 >> 1);
  paVar18 = paVar27;
  if ((local_e8 & 1) != 0) {
    paVar18 = local_e0;
  }
  local_120 = local_120 & 0xffffffffffff0000;
  local_140 = local_140 & 0xffffffffffff0000;
  if (paVar18 < (allocator *)0x5) {
LAB_00b85a44:
    paVar18 = paVar27;
    if (((byte)local_e8 & 1) != 0) {
      paVar18 = local_e0;
    }
    bVar89 = (byte)local_e8;
    if ((allocator *)0x3 < paVar18) {
                    /* try { // try from 00b85a54 to 00b85a67 has its CatchHandler @ 00b86a10 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_d0,(ulong)&local_e8,(ulong)(paVar18 + -4),
                   (allocator *)0xffffffffffffffff);
      uVar20 = (ulong)local_d0 >> 1 & 0x7f;
      if (((ulong)local_d0 & 1) != 0) {
        uVar20 = CONCAT44(uStack_c4,local_c8);
      }
      if (uVar20 == 4) {
                    /* try { // try from 00b85a84 to 00b85a9f has its CatchHandler @ 00b869c8 */
        iVar17 = std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 compare((ulong)&local_d0,0,(char *)0xffffffffffffffff,0x4f27d8);
        bVar16 = iVar17 == 0;
      }
      else {
        bVar16 = false;
      }
      if (((ulong)local_d0 & 1) != 0) {
        operator_delete((void *)CONCAT44(iStack_bc,local_c0));
      }
      if (bVar16) {
                    /* try { // try from 00b85acc to 00b85ad7 has its CatchHandler @ 00b86a3c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_140,(basic_string *)&local_e8);
        goto LAB_00b85ba4;
      }
      paVar27 = (allocator *)(ulong)((byte)local_e8 >> 1);
      bVar89 = (byte)local_e8;
    }
    pvVar37 = (void *)((ulong)&local_e8 | 1);
    if ((bVar89 & 1) != 0) {
      pvVar37 = local_d8;
      paVar27 = local_e0;
    }
    do {
      if (paVar27 == (allocator *)0x0) goto LAB_00b85b98;
      paVar18 = paVar27 + (long)pvVar37 + -1;
      paVar27 = paVar27 + -1;
    } while (*paVar18 != (allocator)0x2e);
    if (paVar27 == (allocator *)0xffffffffffffffff) {
LAB_00b85b98:
                    /* try { // try from 00b85b98 to 00b85ba3 has its CatchHandler @ 00b86a14 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                local_100,(basic_string *)&local_e8);
    }
    else {
                    /* try { // try from 00b85b24 to 00b85b37 has its CatchHandler @ 00b869c4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_d0,(ulong)&local_e8,0,paVar27);
                    /* try { // try from 00b85b38 to 00b85b4b has its CatchHandler @ 00b869c0 */
      FUN_006cadd8(&local_158,&local_d0,&DAT_004f27d8);
      if ((local_140 & 1) != 0) {
        operator_delete(local_130);
      }
      local_140 = CONCAT44(uStack_154,local_158);
      uStack_138 = uStack_150;
      local_130 = local_148;
      pcVar3 = pcVar36;
      if ((local_158 & 1) != 0) {
        pcVar3 = local_148;
      }
                    /* try { // try from 00b85b78 to 00b85b83 has its CatchHandler @ 00b869d4 */
      uVar20 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar3);
      if ((uVar20 & 1) == 0) {
        if ((local_140 & 1) == 0) {
          local_140 = local_140 & 0xffffffffffff0000;
        }
        else {
          *local_130 = '\0';
          uStack_138 = 0;
        }
                    /* try { // try from 00b86388 to 00b8639b has its CatchHandler @ 00b8698c */
        FUN_006cadd8(&local_158,&local_d0,".grle");
        if ((local_120 & 1) != 0) {
          operator_delete(local_110);
        }
        local_120 = CONCAT44(uStack_154,local_158);
        uStack_118 = uStack_150;
        local_110 = local_148;
        pcVar3 = pcVar34;
        if ((local_158 & 1) != 0) {
          pcVar3 = local_148;
        }
                    /* try { // try from 00b863c8 to 00b86407 has its CatchHandler @ 00b869d4 */
        uVar20 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar3);
        if ((uVar20 & 1) == 0) {
          if ((local_120 & 1) == 0) {
            local_120 = local_120 & 0xffffffffffff0000;
          }
          else {
            *local_110 = '\0';
            uStack_118 = 0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_100,(basic_string *)&local_e8);
        }
      }
      if (((ulong)local_d0 & 1) != 0) {
        operator_delete((void *)CONCAT44(iStack_bc,local_c0));
      }
    }
  }
  else {
                    /* try { // try from 00b859ac to 00b859bf has its CatchHandler @ 00b86a30 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_d0,(ulong)&local_e8,(ulong)(paVar18 + -5),
                 (allocator *)0xffffffffffffffff);
    uVar20 = (ulong)local_d0 >> 1 & 0x7f;
    if (((ulong)local_d0 & 1) != 0) {
      uVar20 = CONCAT44(uStack_c4,local_c8);
    }
    if (uVar20 == 5) {
                    /* try { // try from 00b859dc to 00b859f7 has its CatchHandler @ 00b869d0 */
      iVar17 = std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               compare((ulong)&local_d0,0,(char *)0xffffffffffffffff,0x4db6f7);
      bVar16 = iVar17 == 0;
    }
    else {
      bVar16 = false;
    }
    if (((ulong)local_d0 & 1) != 0) {
      operator_delete((void *)CONCAT44(iStack_bc,local_c0));
    }
    if (!bVar16) {
      paVar27 = (allocator *)(ulong)((byte)local_e8 >> 1);
      goto LAB_00b85a44;
    }
                    /* try { // try from 00b85a24 to 00b85a2f has its CatchHandler @ 00b86a3c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_120,(basic_string *)&local_e8);
  }
LAB_00b85ba4:
  uVar20 = local_140 >> 1 & 0x7f;
  if ((local_140 & 1) != 0) {
    uVar20 = uStack_138;
  }
  if (uVar20 == 0) {
    uVar20 = local_120 >> 1 & 0x7f;
    if ((local_120 & 1) != 0) {
      uVar20 = uStack_118;
    }
    if (uVar20 == 0) {
      bVar16 = (local_100[0] & 1) != 0;
      uVar20 = (ulong)((byte)local_100[0] >> 1);
      if (bVar16) {
        uVar20 = local_f8;
      }
      if (uVar20 != 0) {
        pcVar34 = (char *)((ulong)local_100 | 1);
        pcVar36 = pcVar34;
        if (bVar16) {
          pcVar36 = local_f0;
        }
                    /* try { // try from 00b85f10 to 00b85f1f has its CatchHandler @ 00b86990 */
        BitmapImage::BitmapImage((BitmapImage *)&local_d0,pcVar36,0,0);
                    /* try { // try from 00b85f20 to 00b85f27 has its CatchHandler @ 00b869a8 */
        uVar20 = BitmapImage::isLoaded();
        uVar35 = uStack_c4;
        uVar24 = local_c8;
        if ((uVar20 & 1) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar17 != 0)) {
                    /* try { // try from 00b868a0 to 00b868ab has its CatchHandler @ 00b86928 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          if ((local_100[0] & 1) != 0) {
            pcVar34 = local_f0;
          }
                    /* try { // try from 00b86360 to 00b86373 has its CatchHandler @ 00b869a8 */
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Failed to load DensityMap image \'%s\'.\n",pcVar34);
          uVar78 = 0;
        }
        else {
                    /* try { // try from 00b85f30 to 00b85f37 has its CatchHandler @ 00b869a4 */
          plVar38 = (long *)operator_new(0x10);
          iVar17 = uVar35 * uVar24;
                    /* try { // try from 00b85f48 to 00b85f53 has its CatchHandler @ 00b86978 */
          BitVector::BitVector((BitVector *)plVar38,*(int *)(this + 0xc4) * iVar17,true,false);
          Var15 = _DAT_004c4f40;
          auVar85 = _DAT_004c4d70;
          auVar40 = _DAT_004c4a50;
          Var14 = _DAT_004c37b0;
          if (local_9c == 3) {
            uVar24 = iStack_bc * 0x10;
            if (*(uint *)(this + 0xc4) <= (uint)(iStack_bc * 0x10)) {
              uVar24 = *(uint *)(this + 0xc4);
            }
            if (iVar17 != 0) {
              uVar35 = uVar24 + 0xf >> 4;
              if (uVar35 < 2) {
                uVar35 = 1;
              }
              uVar20 = (ulong)uVar35;
              iVar25 = 0;
              uVar29 = uVar20 & 0xffffff0;
              if (uVar24 != 0) goto LAB_00b86490;
              do {
                uVar39 = 0;
                while( true ) {
                  lVar28 = *plVar38;
                  uVar33 = *(int *)(this + 0xc4) * iVar25;
                  uVar30 = (ulong)(uVar33 >> 3) & 0xffff;
                  lVar26 = *(long *)(lVar28 + (ulong)(uVar33 >> 0x13) * 8);
                  uVar80 = ~(-1 << (ulong)(uVar24 & 0x1f)) << (ulong)(uVar33 & 7);
                  uVar39 = uVar39 << (ulong)(uVar33 & 7);
                  if ((uint)uVar30 < 0xfffd) {
                    *(uint *)(lVar26 + uVar30) =
                         *(uint *)(lVar26 + uVar30) & (uVar80 ^ 0xffffffff) | uVar39;
                  }
                  else {
                    uVar21 = (uVar33 >> 3) + 1;
                    uVar33 = (uVar33 >> 3) + 2;
                    lVar31 = (ulong)(uVar21 >> 0x10) * 8;
                    lVar32 = (ulong)(uVar33 >> 0x10) * 8;
                    uVar23 = (ulong)uVar21 & 0xffff;
                    uVar22 = (ulong)uVar33 & 0xffff;
                    uVar39 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar28 + lVar32) + uVar22),
                                            CONCAT11(*(undefined *)
                                                      (*(long *)(lVar28 + lVar31) + uVar23),
                                                     *(undefined *)(lVar26 + uVar30))) &
                             (uVar80 ^ 0xffffffff) | uVar39;
                    *(char *)(lVar26 + uVar30) = (char)uVar39;
                    *(char *)(*(long *)(*plVar38 + lVar31) + uVar23) = (char)(uVar39 >> 8);
                    *(char *)(*(long *)(*plVar38 + lVar32) + uVar22) = (char)(uVar39 >> 0x10);
                  }
                  iVar25 = iVar25 + 1;
                  if (iVar25 == iVar17) goto LAB_00b8664c;
                  if (uVar24 == 0) break;
LAB_00b86490:
                  if (uVar35 < 0x10) {
                    uVar30 = 0;
                    uVar39 = 0;
                    goto LAB_00b864a4;
                  }
                  uVar80 = iStack_bc * iVar25;
                  uVar30 = 0;
                  uVar39 = 0;
                  if ((CARRY4(uVar80,(uint)(uVar20 - 1))) || (uVar39 = 0, uVar20 - 1 >> 0x20 != 0))
                  goto LAB_00b864a4;
                  bVar89 = 0;
                  bVar90 = 0;
                  bVar91 = 0;
                  bVar92 = 0;
                  bVar93 = 0;
                  bVar94 = 0;
                  bVar95 = 0;
                  bVar96 = 0;
                  bVar97 = 0;
                  bVar98 = 0;
                  bVar99 = 0;
                  bVar100 = 0;
                  bVar101 = 0;
                  bVar102 = 0;
                  bVar103 = 0;
                  bVar104 = 0;
                  bVar41 = 0;
                  bVar42 = 0;
                  bVar43 = 0;
                  bVar44 = 0;
                  bVar45 = 0;
                  bVar46 = 0;
                  bVar47 = 0;
                  bVar48 = 0;
                  bVar49 = 0;
                  bVar50 = 0;
                  bVar51 = 0;
                  bVar52 = 0;
                  bVar53 = 0;
                  bVar54 = 0;
                  bVar55 = 0;
                  bVar56 = 0;
                  uVar58 = 0;
                  uVar67 = 0;
                  iVar119 = 2;
                  iVar120 = 3;
                  iVar117 = 0;
                  iVar118 = 1;
                  iVar107 = 6;
                  iVar108 = 7;
                  iVar105 = 4;
                  iVar106 = 5;
                  uVar30 = uVar29;
                  auVar40 = ZEXT816(0);
                  do {
                    pauVar1 = (undefined (*) [16])(local_b0 + (ulong)uVar80 * 2);
                    uVar30 = uVar30 - 0x10;
                    auVar76._0_4_ = iVar105 * 0x10;
                    auVar76._4_4_ = iVar106 * 0x10;
                    auVar76._8_4_ = iVar107 * 0x10;
                    auVar76._12_4_ = iVar108 * 0x10;
                    uVar80 = uVar80 + 0x10;
                    auVar77._0_4_ = iVar117 * 0x10;
                    auVar77._4_4_ = iVar118 * 0x10;
                    auVar77._8_4_ = iVar119 * 0x10;
                    auVar77._12_4_ = iVar120 * 0x10;
                    auVar85 = *pauVar1;
                    auVar84 = pauVar1[1];
                    iVar117 = iVar117 + 0x10;
                    iVar118 = iVar118 + 0x10;
                    iVar119 = iVar119 + 0x10;
                    iVar120 = iVar120 + 0x10;
                    iVar109 = auVar76._4_4_ + 0x80;
                    iVar110 = auVar76._8_4_ + 0x80;
                    iVar111 = auVar76._12_4_ + 0x80;
                    auVar79._2_2_ = 0;
                    auVar79._0_2_ = auVar85._8_2_;
                    auVar125._2_2_ = 0;
                    auVar125._0_2_ = auVar85._0_2_;
                    auVar125._4_2_ = auVar85._2_2_;
                    auVar125._6_2_ = 0;
                    auVar125._8_2_ = auVar85._4_2_;
                    auVar125._10_2_ = 0;
                    auVar125._12_2_ = auVar85._6_2_;
                    auVar125._14_2_ = 0;
                    auVar86._2_2_ = 0;
                    auVar86._0_2_ = auVar84._8_2_;
                    auVar88._2_2_ = 0;
                    auVar88._0_2_ = auVar84._0_2_;
                    auVar88._4_2_ = auVar84._2_2_;
                    auVar88._6_2_ = 0;
                    auVar88._8_2_ = auVar84._4_2_;
                    auVar88._10_2_ = 0;
                    auVar88._12_2_ = auVar84._6_2_;
                    auVar88._14_2_ = 0;
                    iVar105 = iVar105 + 0x10;
                    iVar106 = iVar106 + 0x10;
                    iVar107 = iVar107 + 0x10;
                    iVar108 = iVar108 + 0x10;
                    auVar79._4_2_ = auVar85._10_2_;
                    auVar79._6_2_ = 0;
                    auVar79._8_2_ = auVar85._12_2_;
                    auVar79._10_2_ = 0;
                    auVar79._12_2_ = auVar85._14_2_;
                    auVar79._14_2_ = 0;
                    auVar79 = NEON_ushl(auVar79,auVar76,4);
                    auVar125 = NEON_ushl(auVar125,auVar77,4);
                    auVar85[4] = (char)iVar109;
                    auVar85._0_4_ = auVar76._0_4_ + 0x80;
                    auVar85[5] = (char)((uint)iVar109 >> 8);
                    auVar85[6] = (char)((uint)iVar109 >> 0x10);
                    auVar85[7] = (char)((uint)iVar109 >> 0x18);
                    auVar85[8] = (char)iVar110;
                    auVar85[9] = (char)((uint)iVar110 >> 8);
                    auVar85[10] = (char)((uint)iVar110 >> 0x10);
                    auVar85[11] = (char)((uint)iVar110 >> 0x18);
                    auVar85[12] = (char)iVar111;
                    auVar85[13] = (char)((uint)iVar111 >> 8);
                    auVar85[14] = (char)((uint)iVar111 >> 0x10);
                    auVar85[15] = (char)((uint)iVar111 >> 0x18);
                    auVar86._4_2_ = auVar84._10_2_;
                    auVar86._6_2_ = 0;
                    auVar86._8_2_ = auVar84._12_2_;
                    auVar86._10_2_ = 0;
                    auVar86._12_2_ = auVar84._14_2_;
                    auVar86._14_2_ = 0;
                    auVar85 = NEON_ushl(auVar86,auVar85,4);
                    auVar84._4_4_ = auVar77._4_4_ + 0x80;
                    auVar84._0_4_ = auVar77._0_4_ + 0x80;
                    auVar84._8_4_ = auVar77._8_4_ + 0x80;
                    auVar84._12_4_ = auVar77._12_4_ + 0x80;
                    auVar84 = NEON_ushl(auVar88,auVar84,4);
                    auVar75[0] = auVar79[0] | auVar40[0];
                    auVar75[1] = auVar79[1] | auVar40[1];
                    auVar75[2] = auVar79[2] | auVar40[2];
                    auVar75[3] = auVar79[3] | auVar40[3];
                    auVar75[4] = auVar79[4] | auVar40[4];
                    auVar75[5] = auVar79[5] | auVar40[5];
                    auVar75[6] = auVar79[6] | auVar40[6];
                    auVar75[7] = auVar79[7] | auVar40[7];
                    auVar75[8] = auVar79[8] | auVar40[8];
                    auVar75[9] = auVar79[9] | auVar40[9];
                    auVar75[10] = auVar79[10] | auVar40[10];
                    auVar75[11] = auVar79[11] | auVar40[11];
                    auVar75[12] = auVar79[12] | auVar40[12];
                    auVar75[13] = auVar79[13] | auVar40[13];
                    auVar75[14] = auVar79[14] | auVar40[14];
                    auVar75[15] = auVar79[15] | auVar40[15];
                    bVar89 = auVar125[0] | bVar89;
                    bVar90 = auVar125[1] | bVar90;
                    bVar91 = auVar125[2] | bVar91;
                    bVar92 = auVar125[3] | bVar92;
                    bVar93 = auVar125[4] | bVar93;
                    bVar94 = auVar125[5] | bVar94;
                    bVar95 = auVar125[6] | bVar95;
                    bVar96 = auVar125[7] | bVar96;
                    bVar97 = auVar125[8] | bVar97;
                    bVar98 = auVar125[9] | bVar98;
                    bVar99 = auVar125[10] | bVar99;
                    bVar100 = auVar125[11] | bVar100;
                    bVar101 = auVar125[12] | bVar101;
                    bVar102 = auVar125[13] | bVar102;
                    bVar103 = auVar125[14] | bVar103;
                    bVar104 = auVar125[15] | bVar104;
                    bVar57 = auVar85[0] | (byte)uVar58;
                    bVar59 = auVar85[1] | (byte)((ulong)uVar58 >> 8);
                    bVar60 = auVar85[2] | (byte)((ulong)uVar58 >> 0x10);
                    bVar61 = auVar85[3] | (byte)((ulong)uVar58 >> 0x18);
                    bVar62 = auVar85[4] | (byte)((ulong)uVar58 >> 0x20);
                    bVar63 = auVar85[5] | (byte)((ulong)uVar58 >> 0x28);
                    bVar64 = auVar85[6] | (byte)((ulong)uVar58 >> 0x30);
                    bVar65 = auVar85[7] | (byte)((ulong)uVar58 >> 0x38);
                    uVar58 = CONCAT17(bVar65,CONCAT16(bVar64,CONCAT15(bVar63,CONCAT14(bVar62,
                                                  CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,
                                                  bVar57)))))));
                    bVar66 = auVar85[8] | (byte)uVar67;
                    bVar68 = auVar85[9] | (byte)((ulong)uVar67 >> 8);
                    bVar69 = auVar85[10] | (byte)((ulong)uVar67 >> 0x10);
                    bVar70 = auVar85[11] | (byte)((ulong)uVar67 >> 0x18);
                    bVar71 = auVar85[12] | (byte)((ulong)uVar67 >> 0x20);
                    bVar72 = auVar85[13] | (byte)((ulong)uVar67 >> 0x28);
                    bVar73 = auVar85[14] | (byte)((ulong)uVar67 >> 0x30);
                    bVar74 = auVar85[15] | (byte)((ulong)uVar67 >> 0x38);
                    uVar67 = CONCAT17(bVar74,CONCAT16(bVar73,CONCAT15(bVar72,CONCAT14(bVar71,
                                                  CONCAT13(bVar70,CONCAT12(bVar69,CONCAT11(bVar68,
                                                  bVar66)))))));
                    bVar41 = auVar84[0] | bVar41;
                    bVar42 = auVar84[1] | bVar42;
                    bVar43 = auVar84[2] | bVar43;
                    bVar44 = auVar84[3] | bVar44;
                    bVar45 = auVar84[4] | bVar45;
                    bVar46 = auVar84[5] | bVar46;
                    bVar47 = auVar84[6] | bVar47;
                    bVar48 = auVar84[7] | bVar48;
                    bVar49 = auVar84[8] | bVar49;
                    bVar50 = auVar84[9] | bVar50;
                    bVar51 = auVar84[10] | bVar51;
                    bVar52 = auVar84[11] | bVar52;
                    bVar53 = auVar84[12] | bVar53;
                    bVar54 = auVar84[13] | bVar54;
                    bVar55 = auVar84[14] | bVar55;
                    bVar56 = auVar84[15] | bVar56;
                    auVar40 = auVar75;
                  } while (uVar30 != 0);
                  bVar89 = bVar41 | bVar89 | bVar57 | auVar75[0];
                  bVar90 = bVar42 | bVar90 | bVar59 | auVar75[1];
                  bVar91 = bVar43 | bVar91 | bVar60 | auVar75[2];
                  bVar92 = bVar44 | bVar92 | bVar61 | auVar75[3];
                  bVar93 = bVar45 | bVar93 | bVar62 | auVar75[4];
                  bVar94 = bVar46 | bVar94 | bVar63 | auVar75[5];
                  bVar95 = bVar47 | bVar95 | bVar64 | auVar75[6];
                  bVar96 = bVar48 | bVar96 | bVar65 | auVar75[7];
                  bVar97 = bVar49 | bVar97 | bVar66 | auVar75[8];
                  bVar98 = bVar50 | bVar98 | bVar68 | auVar75[9];
                  bVar99 = bVar51 | bVar99 | bVar69 | auVar75[10];
                  bVar100 = bVar52 | bVar100 | bVar70 | auVar75[11];
                  bVar101 = bVar53 | bVar101 | bVar71 | auVar75[12];
                  bVar102 = bVar54 | bVar102 | bVar72 | auVar75[13];
                  bVar103 = bVar55 | bVar103 | bVar73 | auVar75[14];
                  bVar104 = bVar56 | bVar104 | bVar74 | auVar75[15];
                  auVar40[1] = bVar90;
                  auVar40[0] = bVar89;
                  auVar40[2] = bVar91;
                  auVar40[3] = bVar92;
                  auVar40[4] = bVar93;
                  auVar40[5] = bVar94;
                  auVar40[6] = bVar95;
                  auVar40[7] = bVar96;
                  auVar40[8] = bVar97;
                  auVar40[9] = bVar98;
                  auVar40[10] = bVar99;
                  auVar40[11] = bVar100;
                  auVar40[12] = bVar101;
                  auVar40[13] = bVar102;
                  auVar40[14] = bVar103;
                  auVar40[15] = bVar104;
                  auVar8[1] = bVar90;
                  auVar8[0] = bVar89;
                  auVar8[2] = bVar91;
                  auVar8[3] = bVar92;
                  auVar8[4] = bVar93;
                  auVar8[5] = bVar94;
                  auVar8[6] = bVar95;
                  auVar8[7] = bVar96;
                  auVar8[8] = bVar97;
                  auVar8[9] = bVar98;
                  auVar8[10] = bVar99;
                  auVar8[11] = bVar100;
                  auVar8[12] = bVar101;
                  auVar8[13] = bVar102;
                  auVar8[14] = bVar103;
                  auVar8[15] = bVar104;
                  auVar40 = NEON_ext(auVar40,auVar8,8,1);
                  uVar39 = CONCAT13(bVar92 | auVar40[3],
                                    CONCAT12(bVar91 | auVar40[2],
                                             CONCAT11(bVar90 | auVar40[1],bVar89 | auVar40[0]))) |
                           CONCAT13(bVar96 | auVar40[7],
                                    CONCAT12(bVar95 | auVar40[6],
                                             CONCAT11(bVar94 | auVar40[5],bVar93 | auVar40[4])));
                  uVar30 = uVar29;
                  if (uVar29 != uVar20) {
LAB_00b864a4:
                    uVar80 = (int)uVar30 + iStack_bc * iVar25;
                    uVar33 = 0;
                    lVar26 = uVar30 - uVar20;
                    do {
                      uVar30 = (ulong)uVar80;
                      uVar80 = uVar80 + 1;
                      bVar16 = lVar26 != -1;
                      lVar26 = lVar26 + 1;
                      uVar21 = uVar33 & 0x1f;
                      uVar33 = uVar33 + 0x10;
                      uVar39 = (uint)*(ushort *)(local_b0 + uVar30 * 2) << (ulong)uVar21 | uVar39;
                    } while (bVar16);
                  }
                }
              } while( true );
            }
          }
          else {
            if (local_9c != 1) {
              pcVar36 = (char *)LogManager::getInstance();
              LogManager::errorf(pcVar36,"DensityMap: unsupported image format.\n");
              BitVector::~BitVector((BitVector *)plVar38);
              operator_delete(plVar38);
              uVar78 = 0;
              goto LAB_00b86714;
            }
            uVar24 = iStack_bc * 8;
            if (*(uint *)(this + 0xc4) <= (uint)(iStack_bc * 8)) {
              uVar24 = *(uint *)(this + 0xc4);
            }
            if (iVar17 != 0) {
              uVar35 = uVar24 + 7 >> 3;
              if (uVar35 < 2) {
                uVar35 = 1;
              }
              uVar20 = (ulong)uVar35;
              iVar25 = 0;
              uVar39 = ~(-1 << (ulong)(uVar24 & 0x1f));
              uVar29 = uVar20 & 0x1ffffff0;
              if (uVar24 != 0) goto LAB_00b8600c;
              do {
                uVar80 = 0;
                while( true ) {
                  lVar26 = *plVar38;
                  uVar21 = *(int *)(this + 0xc4) * iVar25;
                  uVar33 = uVar21 & 7;
                  uVar30 = (ulong)(uVar21 >> 3) & 0xffff;
                  lVar28 = *(long *)(lVar26 + (ulong)(uVar21 >> 0x13) * 8);
                  if ((uint)uVar30 < 0xfffd) {
                    *(uint *)(lVar28 + uVar30) =
                         *(uint *)(lVar28 + uVar30) & (uVar39 << (ulong)uVar33 ^ 0xffffffff) |
                         uVar80 << (ulong)uVar33;
                  }
                  else {
                    uVar2 = (uVar21 >> 3) + 1;
                    uVar21 = (uVar21 >> 3) + 2;
                    lVar31 = (ulong)(uVar2 >> 0x10) * 8;
                    lVar32 = (ulong)(uVar21 >> 0x10) * 8;
                    uVar23 = (ulong)uVar2 & 0xffff;
                    uVar22 = (ulong)uVar21 & 0xffff;
                    uVar80 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar26 + lVar32) + uVar22),
                                            CONCAT11(*(undefined *)
                                                      (*(long *)(lVar26 + lVar31) + uVar23),
                                                     *(undefined *)(lVar28 + uVar30))) &
                             (uVar39 << (ulong)uVar33 ^ 0xffffffff) | uVar80 << (ulong)uVar33;
                    *(char *)(lVar28 + uVar30) = (char)uVar80;
                    *(char *)(*(long *)(*plVar38 + lVar31) + uVar23) = (char)(uVar80 >> 8);
                    *(char *)(*(long *)(*plVar38 + lVar32) + uVar22) = (char)(uVar80 >> 0x10);
                  }
                  iVar25 = iVar25 + 1;
                  if (iVar25 == iVar17) goto LAB_00b8664c;
                  if (uVar24 == 0) break;
LAB_00b8600c:
                  if (uVar35 < 0x10) {
                    uVar30 = 0;
                    uVar80 = 0;
                    goto LAB_00b86020;
                  }
                  uVar33 = iStack_bc * iVar25;
                  uVar30 = 0;
                  uVar80 = 0;
                  if ((CARRY4(uVar33,(uint)(uVar20 - 1))) || (uVar80 = 0, uVar20 - 1 >> 0x20 != 0))
                  goto LAB_00b86020;
                  iVar107 = 2;
                  iVar108 = 3;
                  iVar105 = 0;
                  iVar106 = 1;
                  iVar111 = 6;
                  iVar112 = 7;
                  iVar109 = 4;
                  iVar110 = 5;
                  bVar89 = 0;
                  bVar90 = 0;
                  bVar91 = 0;
                  bVar92 = 0;
                  bVar93 = 0;
                  bVar94 = 0;
                  bVar95 = 0;
                  bVar96 = 0;
                  bVar97 = 0;
                  bVar98 = 0;
                  bVar99 = 0;
                  bVar100 = 0;
                  bVar101 = 0;
                  bVar102 = 0;
                  bVar103 = 0;
                  bVar104 = 0;
                  iVar115 = 10;
                  iVar116 = 0xb;
                  iVar113 = 8;
                  iVar114 = 9;
                  uVar30 = uVar29;
                  auVar84 = ZEXT816(0);
                  auVar79 = ZEXT816(0);
                  auVar86 = ZEXT816(0);
                  iVar117 = 0xc;
                  iVar118 = 0xd;
                  iVar119 = 0xe;
                  iVar120 = 0xf;
                  do {
                    pauVar5 = (undefined (*) [12])(local_b0 + (ulong)uVar33);
                    uVar78 = (undefined4)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20);
                    uVar30 = uVar30 - 0x10;
                    auVar121._0_4_ = iVar113 << 3;
                    auVar121._4_4_ = iVar114 << 3;
                    auVar121._8_4_ = iVar115 << 3;
                    auVar121._12_4_ = iVar116 << 3;
                    uVar33 = uVar33 + 0x10;
                    auVar122._0_4_ = iVar109 << 3;
                    auVar122._4_4_ = iVar110 << 3;
                    auVar122._8_4_ = iVar111 << 3;
                    auVar122._12_4_ = iVar112 << 3;
                    auVar123._0_4_ = iVar105 << 3;
                    auVar123._4_4_ = iVar106 << 3;
                    auVar123._8_4_ = iVar107 << 3;
                    auVar123._12_4_ = iVar108 << 3;
                    auVar124._0_4_ = iVar117 << 3;
                    auVar124._4_4_ = iVar118 << 3;
                    auVar124._8_4_ = iVar119 << 3;
                    auVar124._12_4_ = iVar120 << 3;
                    auVar7[9] = 0x10;
                    auVar7._0_9_ = Var14;
                    auVar7[10] = 0x10;
                    auVar7[11] = 0x10;
                    auVar7[12] = 0xb;
                    auVar7[13] = 0x10;
                    auVar7[14] = 0x10;
                    auVar7[15] = 0x10;
                    auVar10._12_4_ = uVar78;
                    auVar10._0_12_ = *pauVar5;
                    auVar125 = a64_TBL(ZEXT816(0),auVar10,ZEXT816(0),auVar7);
                    auVar11._12_4_ = uVar78;
                    auVar11._0_12_ = *pauVar5;
                    auVar75 = a64_TBL(ZEXT816(0),auVar11,ZEXT816(0),auVar85);
                    auVar9[9] = 0x10;
                    auVar9._0_9_ = Var15;
                    auVar9[10] = 0x10;
                    auVar9[11] = 0x10;
                    auVar9[12] = 3;
                    auVar9[13] = 0x10;
                    auVar9[14] = 0x10;
                    auVar9[15] = 0x10;
                    auVar12._12_4_ = uVar78;
                    auVar12._0_12_ = *pauVar5;
                    auVar76 = a64_TBL(ZEXT816(0),auVar12,ZEXT816(0),auVar9);
                    auVar13._12_4_ = uVar78;
                    auVar13._0_12_ = *pauVar5;
                    auVar77 = a64_TBL(ZEXT816(0),auVar13,ZEXT816(0),auVar40);
                    auVar125 = NEON_ushl(auVar125,auVar121,4);
                    auVar75 = NEON_ushl(auVar75,auVar122,4);
                    auVar76 = NEON_ushl(auVar76,auVar123,4);
                    auVar77 = NEON_ushl(auVar77,auVar124,4);
                    auVar87[0] = auVar125[0] | auVar86[0];
                    auVar87[1] = auVar125[1] | auVar86[1];
                    auVar87[2] = auVar125[2] | auVar86[2];
                    auVar87[3] = auVar125[3] | auVar86[3];
                    auVar87[4] = auVar125[4] | auVar86[4];
                    auVar87[5] = auVar125[5] | auVar86[5];
                    auVar87[6] = auVar125[6] | auVar86[6];
                    auVar87[7] = auVar125[7] | auVar86[7];
                    auVar87[8] = auVar125[8] | auVar86[8];
                    auVar87[9] = auVar125[9] | auVar86[9];
                    auVar87[10] = auVar125[10] | auVar86[10];
                    auVar87[11] = auVar125[11] | auVar86[11];
                    auVar87[12] = auVar125[12] | auVar86[12];
                    auVar87[13] = auVar125[13] | auVar86[13];
                    auVar87[14] = auVar125[14] | auVar86[14];
                    auVar87[15] = auVar125[15] | auVar86[15];
                    auVar83[0] = auVar75[0] | auVar79[0];
                    auVar83[1] = auVar75[1] | auVar79[1];
                    auVar83[2] = auVar75[2] | auVar79[2];
                    auVar83[3] = auVar75[3] | auVar79[3];
                    auVar83[4] = auVar75[4] | auVar79[4];
                    auVar83[5] = auVar75[5] | auVar79[5];
                    auVar83[6] = auVar75[6] | auVar79[6];
                    auVar83[7] = auVar75[7] | auVar79[7];
                    auVar83[8] = auVar75[8] | auVar79[8];
                    auVar83[9] = auVar75[9] | auVar79[9];
                    auVar83[10] = auVar75[10] | auVar79[10];
                    auVar83[11] = auVar75[11] | auVar79[11];
                    auVar83[12] = auVar75[12] | auVar79[12];
                    auVar83[13] = auVar75[13] | auVar79[13];
                    auVar83[14] = auVar75[14] | auVar79[14];
                    auVar83[15] = auVar75[15] | auVar79[15];
                    auVar81[0] = auVar76[0] | auVar84[0];
                    auVar81[1] = auVar76[1] | auVar84[1];
                    auVar81[2] = auVar76[2] | auVar84[2];
                    auVar81[3] = auVar76[3] | auVar84[3];
                    auVar81[4] = auVar76[4] | auVar84[4];
                    auVar81[5] = auVar76[5] | auVar84[5];
                    auVar81[6] = auVar76[6] | auVar84[6];
                    auVar81[7] = auVar76[7] | auVar84[7];
                    auVar81[8] = auVar76[8] | auVar84[8];
                    auVar81[9] = auVar76[9] | auVar84[9];
                    auVar81[10] = auVar76[10] | auVar84[10];
                    auVar81[11] = auVar76[11] | auVar84[11];
                    auVar81[12] = auVar76[12] | auVar84[12];
                    auVar81[13] = auVar76[13] | auVar84[13];
                    auVar81[14] = auVar76[14] | auVar84[14];
                    auVar81[15] = auVar76[15] | auVar84[15];
                    bVar89 = auVar77[0] | bVar89;
                    bVar90 = auVar77[1] | bVar90;
                    bVar91 = auVar77[2] | bVar91;
                    bVar92 = auVar77[3] | bVar92;
                    bVar93 = auVar77[4] | bVar93;
                    bVar94 = auVar77[5] | bVar94;
                    bVar95 = auVar77[6] | bVar95;
                    bVar96 = auVar77[7] | bVar96;
                    bVar97 = auVar77[8] | bVar97;
                    bVar98 = auVar77[9] | bVar98;
                    bVar99 = auVar77[10] | bVar99;
                    bVar100 = auVar77[11] | bVar100;
                    bVar101 = auVar77[12] | bVar101;
                    bVar102 = auVar77[13] | bVar102;
                    bVar103 = auVar77[14] | bVar103;
                    bVar104 = auVar77[15] | bVar104;
                    iVar105 = iVar105 + 0x10;
                    iVar106 = iVar106 + 0x10;
                    iVar107 = iVar107 + 0x10;
                    iVar108 = iVar108 + 0x10;
                    iVar109 = iVar109 + 0x10;
                    iVar110 = iVar110 + 0x10;
                    iVar111 = iVar111 + 0x10;
                    iVar112 = iVar112 + 0x10;
                    iVar113 = iVar113 + 0x10;
                    iVar114 = iVar114 + 0x10;
                    iVar115 = iVar115 + 0x10;
                    iVar116 = iVar116 + 0x10;
                    iVar117 = iVar117 + 0x10;
                    iVar118 = iVar118 + 0x10;
                    iVar119 = iVar119 + 0x10;
                    iVar120 = iVar120 + 0x10;
                    auVar84 = auVar81;
                    auVar79 = auVar83;
                    auVar86 = auVar87;
                  } while (uVar30 != 0);
                  auVar82[0] = auVar81[0] | auVar87[0] | auVar83[0] | bVar89;
                  auVar82[1] = auVar81[1] | auVar87[1] | auVar83[1] | bVar90;
                  auVar82[2] = auVar81[2] | auVar87[2] | auVar83[2] | bVar91;
                  auVar82[3] = auVar81[3] | auVar87[3] | auVar83[3] | bVar92;
                  auVar82[4] = auVar81[4] | auVar87[4] | auVar83[4] | bVar93;
                  auVar82[5] = auVar81[5] | auVar87[5] | auVar83[5] | bVar94;
                  auVar82[6] = auVar81[6] | auVar87[6] | auVar83[6] | bVar95;
                  auVar82[7] = auVar81[7] | auVar87[7] | auVar83[7] | bVar96;
                  auVar82[8] = auVar81[8] | auVar87[8] | auVar83[8] | bVar97;
                  auVar82[9] = auVar81[9] | auVar87[9] | auVar83[9] | bVar98;
                  auVar82[10] = auVar81[10] | auVar87[10] | auVar83[10] | bVar99;
                  auVar82[11] = auVar81[11] | auVar87[11] | auVar83[11] | bVar100;
                  auVar82[12] = auVar81[12] | auVar87[12] | auVar83[12] | bVar101;
                  auVar82[13] = auVar81[13] | auVar87[13] | auVar83[13] | bVar102;
                  auVar82[14] = auVar81[14] | auVar87[14] | auVar83[14] | bVar103;
                  auVar82[15] = auVar81[15] | auVar87[15] | auVar83[15] | bVar104;
                  auVar84 = NEON_ext(auVar82,auVar82,8,1);
                  uVar80 = CONCAT13(auVar82[3] | auVar84[3],
                                    CONCAT12(auVar82[2] | auVar84[2],
                                             CONCAT11(auVar82[1] | auVar84[1],
                                                      auVar82[0] | auVar84[0])));
                  uVar80 = uVar80 | (uint)(CONCAT17(auVar82[7] | auVar84[7],
                                                    CONCAT16(auVar82[6] | auVar84[6],
                                                             CONCAT15(auVar82[5] | auVar84[5],
                                                                      CONCAT14(auVar82[4] |
                                                                               auVar84[4],uVar80))))
                                          >> 0x20);
                  uVar30 = uVar29;
                  if (uVar29 != uVar20) {
LAB_00b86020:
                    uVar33 = (int)uVar30 + iStack_bc * iVar25;
                    uVar21 = 0;
                    lVar26 = uVar30 - uVar20;
                    do {
                      uVar30 = (ulong)uVar33;
                      uVar33 = uVar33 + 1;
                      bVar16 = lVar26 != -1;
                      lVar26 = lVar26 + 1;
                      uVar2 = uVar21 & 0x1f;
                      uVar21 = uVar21 + 8;
                      uVar80 = (uint)*(byte *)(local_b0 + uVar30) << (ulong)uVar2 | uVar80;
                    } while (bVar16);
                  }
                }
              } while( true );
            }
          }
LAB_00b8664c:
          if (this[0x90] == (DensityMap)0x0) {
            uVar78 = 1;
            *(long **)(this + 0xa0) = plVar38;
            *(ulong *)(this + 0xd4) = CONCAT44(uStack_c4,local_c8);
          }
          else {
            uVar24 = local_c8;
            if (local_c8 != uStack_c4) {
                    /* try { // try from 00b86664 to 00b8669b has its CatchHandler @ 00b869a4 */
              pcVar36 = (char *)LogManager::getInstance();
              if ((local_100[0] & 1) != 0) {
                pcVar34 = local_f0;
              }
              LogManager::warnf(pcVar36,
                                "Warning: DensityMap chunked format requires a square input image. Using square sub data of \'%s\'.\n"
                                ,pcVar34);
              uVar24 = uStack_c4;
            }
            if (local_c8 <= uVar24) {
              uVar24 = local_c8;
            }
            *(uint *)(this + 0xd4) = uVar24;
            *(uint *)(this + 0xd8) = uVar24;
            pCVar19 = (ChunkedBitSquare *)operator_new(0xa8);
                    /* try { // try from 00b866ac to 00b866af has its CatchHandler @ 00b86968 */
            ChunkedBitSquare::ChunkedBitSquare
                      (pCVar19,*(uint *)(this + 0xc4),*(uint *)(this + 0xa8),(uint *)(this + 0xac));
            *(ChunkedBitSquare **)(this + 0x98) = pCVar19;
                    /* try { // try from 00b866b8 to 00b866eb has its CatchHandler @ 00b869a4 */
            ChunkedBitSquare::initializeFromBitVector
                      (pCVar19,*(uint *)(this + 0xd4),(BitVector *)plVar38);
            BitVector::~BitVector((BitVector *)plVar38);
            operator_delete(plVar38);
            uVar78 = 1;
          }
        }
LAB_00b86714:
        BitmapImage::~BitmapImage((BitmapImage *)&local_d0);
        goto LAB_00b86290;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar17 != 0
         )) {
                    /* try { // try from 00b86858 to 00b86863 has its CatchHandler @ 00b8693c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00b86278 to 00b8628b has its CatchHandler @ 00b86a3c */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: DensityMap internal error.\n");
    }
    else {
      local_d0 = (BitVector *)0x0;
      pcVar36 = pcVar34;
      if ((local_120 & 1) != 0) {
        pcVar36 = local_110;
      }
                    /* try { // try from 00b85c40 to 00b85cbf has its CatchHandler @ 00b86a34 */
      uVar20 = RLEUtil::loadRLEImage
                         (pcVar36,&local_d0,*(uint *)(this + 0xc4),&local_158,&local_15c,&uStack_160
                          ,true);
      if ((uVar20 & 1) != 0) {
        if (this[0x90] == (DensityMap)0x0) {
          uVar78 = 1;
          *(BitVector **)(this + 0xa0) = local_d0;
          *(uint *)(this + 0xd4) = local_158;
          *(uint *)(this + 0xd8) = local_15c;
          goto LAB_00b86290;
        }
        uVar24 = local_158;
        if (local_158 != local_15c) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar17 != 0)) {
                    /* try { // try from 00b868e8 to 00b868f3 has its CatchHandler @ 00b86924 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          if ((local_120 & 1) != 0) {
            pcVar34 = local_110;
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: DensityMap chunked format requires a square input image. Using square sub data of \'%s\'.\n"
                            ,pcVar34);
          uVar24 = local_15c;
        }
        if (local_158 <= uVar24) {
          uVar24 = local_158;
        }
        *(uint *)(this + 0xd4) = uVar24;
        *(uint *)(this + 0xd8) = uVar24;
        pCVar19 = (ChunkedBitSquare *)operator_new(0xa8);
                    /* try { // try from 00b85cd0 to 00b85cd3 has its CatchHandler @ 00b86988 */
        ChunkedBitSquare::ChunkedBitSquare
                  (pCVar19,*(uint *)(this + 0xc4),*(uint *)(this + 0xa8),(uint *)(this + 0xac));
        *(ChunkedBitSquare **)(this + 0x98) = pCVar19;
                    /* try { // try from 00b85ce0 to 00b85ce7 has its CatchHandler @ 00b86a34 */
        ChunkedBitSquare::initializeFromBitVector(pCVar19,*(uint *)(this + 0xd4),local_d0);
        this_00 = local_d0;
        if (local_d0 == (BitVector *)0x0) {
          uVar78 = 1;
          goto LAB_00b86290;
        }
        BitVector::~BitVector(local_d0);
        goto LAB_00b8625c;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar17 != 0
         )) {
                    /* try { // try from 00b86780 to 00b8678b has its CatchHandler @ 00b86948 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      if ((local_120 & 1) != 0) {
        pcVar34 = local_110;
      }
                    /* try { // try from 00b86200 to 00b86213 has its CatchHandler @ 00b86a34 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Failed to load DensityMap grle image \'%s\'.\n",pcVar34);
    }
  }
  else if (this[0x90] == (DensityMap)0x0) {
                    /* try { // try from 00b85d00 to 00b85d07 has its CatchHandler @ 00b86a38 */
    this_00 = (BitVector *)operator_new(0xa8);
                    /* try { // try from 00b85d10 to 00b85d1b has its CatchHandler @ 00b869cc */
    ChunkedBitSquare::ChunkedBitSquare
              ((ChunkedBitSquare *)this_00,*(uint *)(this + 0xc4),1,(uint *)0x0);
    if ((local_140 & 1) != 0) {
      pcVar36 = local_130;
    }
                    /* try { // try from 00b85d2c to 00b85d5b has its CatchHandler @ 00b86a38 */
    uVar20 = ChunkedBitSquare::initializeFromFile((ChunkedBitSquare *)this_00,pcVar36);
    if ((uVar20 & 1) != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar17 != 0
         )) {
                    /* try { // try from 00b867c8 to 00b867d3 has its CatchHandler @ 00b86944 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Warning: DensityMap converting from GDM to planar data.\n");
      iVar17 = *(int *)((ChunkedBitSquare *)this_00 + 0x18);
      *(int *)(this + 0xd4) = iVar17;
      *(int *)(this + 0xd8) = iVar17;
                    /* try { // try from 00b85d64 to 00b85d6b has its CatchHandler @ 00b869a0 */
      this_01 = (BitVector *)operator_new(0x10);
                    /* try { // try from 00b85d7c to 00b85d87 has its CatchHandler @ 00b86994 */
      BitVector::BitVector(this_01,iVar17 * iVar17 * *(int *)(this + 0xc4),true,false);
      uVar24 = *(uint *)(this + 0xd8);
      *(BitVector **)(this + 0xa0) = this_01;
      if (uVar24 != 0) {
        uVar35 = 0;
        uVar39 = *(uint *)(this + 0xd4);
        do {
          if (uVar39 != 0) {
            uVar24 = 0;
            do {
              plVar38 = *(long **)(this + 0xa0);
              uVar80 = *(uint *)(this + 0xc4);
                    /* try { // try from 00b85dec to 00b85e03 has its CatchHandler @ 00b86a40 */
              iVar17 = ChunkedBitSquare::readBits
                                 ((ChunkedBitSquare *)this_00,uVar24,uVar35,0,uVar80);
              lVar28 = *plVar38;
              uVar33 = uVar80 * (uVar24 + uVar35 * uVar39);
              uVar20 = (ulong)(uVar33 >> 3) & 0xffff;
              lVar26 = *(long *)(lVar28 + (ulong)(uVar33 >> 0x13) * 8);
              uVar39 = ~(-1 << (ulong)(uVar80 & 0x1f)) << (ulong)(uVar33 & 7);
              uVar80 = iVar17 << (ulong)(uVar33 & 7);
              if ((uint)uVar20 < 0xfffd) {
                *(uint *)(lVar26 + uVar20) =
                     *(uint *)(lVar26 + uVar20) & (uVar39 ^ 0xffffffff) | uVar80;
              }
              else {
                uVar21 = (uVar33 >> 3) + 1;
                uVar33 = (uVar33 >> 3) + 2;
                lVar31 = (ulong)(uVar21 >> 0x10) * 8;
                lVar32 = (ulong)(uVar33 >> 0x10) * 8;
                uVar30 = (ulong)uVar21 & 0xffff;
                uVar29 = (ulong)uVar33 & 0xffff;
                uVar80 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar28 + lVar32) + uVar29),
                                        CONCAT11(*(undefined *)(*(long *)(lVar28 + lVar31) + uVar30)
                                                 ,*(undefined *)(lVar26 + uVar20))) &
                         (uVar39 ^ 0xffffffff) | uVar80;
                *(char *)(lVar26 + uVar20) = (char)uVar80;
                *(char *)(*(long *)(*plVar38 + lVar31) + uVar30) = (char)(uVar80 >> 8);
                *(char *)(*(long *)(*plVar38 + lVar32) + uVar29) = (char)(uVar80 >> 0x10);
              }
              uVar39 = *(uint *)(this + 0xd4);
              uVar24 = uVar24 + 1;
            } while (uVar24 < uVar39);
            uVar24 = *(uint *)(this + 0xd8);
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 < uVar24);
      }
      ChunkedBitSquare::~ChunkedBitSquare((ChunkedBitSquare *)this_00);
LAB_00b8625c:
      operator_delete(this_00);
      uVar78 = 1;
      goto LAB_00b86290;
    }
    ChunkedBitSquare::~ChunkedBitSquare((ChunkedBitSquare *)this_00);
    operator_delete(this_00);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar17 != 0))
    {
                    /* try { // try from 00b86810 to 00b8681b has its CatchHandler @ 00b86940 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00b86238 to 00b8624b has its CatchHandler @ 00b86a38 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: DensityMap failed to load GDM file.\n");
  }
  else {
                    /* try { // try from 00b85bc4 to 00b85bcb has its CatchHandler @ 00b86a3c */
    pCVar19 = (ChunkedBitSquare *)operator_new(0xa8);
                    /* try { // try from 00b85bdc to 00b85bdf has its CatchHandler @ 00b86a18 */
    ChunkedBitSquare::ChunkedBitSquare
              (pCVar19,*(uint *)(this + 0xc4),*(uint *)(this + 0xa8),(uint *)(this + 0xac));
    *(ChunkedBitSquare **)(this + 0x98) = pCVar19;
    if ((local_140 & 1) != 0) {
      pcVar36 = local_130;
    }
                    /* try { // try from 00b85bf4 to 00b85bfb has its CatchHandler @ 00b86a3c */
    uVar20 = ChunkedBitSquare::initializeFromFile(pCVar19,pcVar36);
    pCVar19 = *(ChunkedBitSquare **)(this + 0x98);
    if ((uVar20 & 1) != 0) {
      uVar4 = *(undefined4 *)(pCVar19 + 0x18);
      uVar78 = 1;
      *(undefined4 *)(this + 0xd4) = uVar4;
      *(undefined4 *)(this + 0xd8) = uVar4;
      goto LAB_00b86290;
    }
    if (pCVar19 != (ChunkedBitSquare *)0x0) {
      ChunkedBitSquare::~ChunkedBitSquare(pCVar19);
      operator_delete(pCVar19);
    }
    *(undefined8 *)(this + 0x98) = 0;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar17 != 0))
    {
                    /* try { // try from 00b86738 to 00b86743 has its CatchHandler @ 00b8694c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00b85ed0 to 00b85ee3 has its CatchHandler @ 00b86a3c */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: DensityMap failed to load GDM file.\n");
  }
  uVar78 = 0;
LAB_00b86290:
  if ((local_140 & 1) != 0) {
    operator_delete(local_130);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar6 + 0x28) == local_90) {
    return uVar78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


