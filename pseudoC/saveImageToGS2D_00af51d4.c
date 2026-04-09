// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveImageToGS2D
// Entry Point: 00af51d4
// Size: 1856 bytes
// Signature: undefined __thiscall saveImageToGS2D(GiantsAdsProvider * this, basic_string * param_1, bool param_2, bool param_3, basic_string * param_4, uchar * * param_5, uint * param_6)


/* GiantsAdsProvider::saveImageToGS2D(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned char*&, unsigned int&) */

void __thiscall
GiantsAdsProvider::saveImageToGS2D
          (GiantsAdsProvider *this,basic_string *param_1,bool param_2,bool param_3,
          basic_string *param_4,uchar **param_5,uint *param_6)

{
  uchar **ppuVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uchar *puVar12;
  uchar *puVar13;
  long *plVar14;
  FORMAT FVar15;
  uchar *puVar16;
  char *pcVar17;
  uchar *puVar18;
  uchar *puVar19;
  uint uVar20;
  uint uVar21;
  int local_190;
  uchar *local_130;
  uint local_124;
  ulong local_120;
  undefined8 uStack_118;
  int local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  int local_100;
  uchar *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  FORMAT local_e0;
  undefined4 uStack_dc;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uchar *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  puVar18 = *(uchar **)(param_1 + 4);
  local_c0 = 0x100000001;
  bVar5 = (*(byte *)param_1 & 1) == 0;
  if (bVar5) {
    puVar18 = (uchar *)((long)param_1 + 1);
  }
  local_c8 = 0;
  uVar9 = (uint)(*(byte *)param_1 >> 1);
  if (!bVar5) {
    uVar9 = param_1[2];
  }
  local_88 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = (uchar *)0x0;
  uVar11 = ImageLoadUtil::loadImage("",puVar18,uVar9,1,(ImageDesc *)&local_c8,0);
  puVar18 = local_a0;
  bVar5 = false;
  if ((uVar11 & 1) != 0) {
    if ((((((FORMAT)local_88 == 3) && (local_b8._4_4_ == 3)) && (local_c0._4_4_ == 1)) &&
        ((local_b0._4_4_ == 0 && ((int)local_c0 == 1)))) &&
       (((int)local_b8 == 0 && ((TYPE)local_b0 == 1)))) {
      uVar8 = (uint)local_c8;
      uVar20 = local_c8._4_4_;
      uVar9 = local_c8._4_4_;
      if (param_3) {
        uVar11 = local_c8 & 0xffffffff;
      }
      else if ((((uint)local_c8 | local_c8._4_4_) & 3) == 0) {
        uVar11 = local_c8 & 0xffffffff;
      }
      else {
        uVar21 = (uint)local_c8 + 3;
        uVar7 = local_c8._4_4_ + 3;
        uVar2 = uVar21 & 0xfffffffc;
        uVar11 = (ulong)uVar2;
        uVar9 = uVar7 & 0xfffffffc;
        puVar12 = (uchar *)operator_new__((ulong)(uVar2 * uVar9 * 3));
        ImageUtil::addPaddingToImageRGB(puVar18,uVar8,uVar20,3,uVar2,uVar9,puVar12);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar10 != 0)) {
                    /* try { // try from 00af58d8 to 00af58e3 has its CatchHandler @ 00af5914 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning (gads): Saving image with invalid resolution %dx%d. Must be a multiple of 4. New resolution %dx%d\n"
                          ,local_c8 & 0xffffffff,local_c8 >> 0x20,uVar11,(ulong)uVar9);
        if (local_a0 != (uchar *)0x0) {
          operator_delete__(local_a0);
        }
        local_a8 = 0;
        local_c8 = CONCAT44(uVar7,uVar21) & 0xfffffffcfffffffc;
        local_a0 = puVar12;
      }
      uVar20 = (uint)uVar11;
      uVar8 = uVar9;
      if (uVar20 <= uVar9) {
        uVar8 = uVar20;
      }
      if (uVar8 < 5) {
        iVar10 = 0;
      }
      else {
        iVar10 = 0;
        do {
          iVar10 = iVar10 + 1;
          bVar5 = 9 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar5);
      }
      uVar7 = uVar9 >> 1;
      uVar8 = 0;
      iVar6 = 0;
      uVar21 = uVar20 >> 1;
      if (uVar20 < 2) {
        uVar21 = 1;
      }
      if (uVar9 < 2) {
        uVar7 = 1;
      }
      do {
        iVar6 = iVar6 + uVar21 * uVar7;
        uVar20 = uVar21 >> 1;
        uVar2 = uVar7 >> 1;
        if (uVar2 + uVar20 == 0) break;
        uVar8 = uVar8 + 1;
        if (uVar21 < 2) {
          uVar20 = 1;
        }
        if (uVar7 < 2) {
          uVar2 = 1;
        }
        uVar21 = uVar20;
        uVar7 = uVar2;
      } while (uVar8 <= iVar10 - 1U);
      puVar18 = (uchar *)operator_new__((ulong)(uint)(iVar6 * 3));
      if (iVar10 != 0) {
        uVar8 = local_b8._4_4_;
        puVar12 = local_a0;
        puVar19 = puVar18;
        iVar6 = iVar10;
        do {
          uVar21 = (uint)uVar11;
          uVar20 = uVar21 >> 1;
          if (uVar21 < 2) {
            uVar20 = 1;
          }
          uVar7 = uVar9 >> 1;
          if (uVar9 < 2) {
            uVar7 = 1;
          }
          if (param_2) {
            MipMapUtil::buildMipMapSRGB(puVar19,puVar12,uVar21,uVar9,1,uVar8);
          }
          else {
            MipMapUtil::buildMipMap<unsigned_char>(puVar19,puVar12,uVar21,uVar9,1,uVar8);
          }
          uVar2 = uVar21 >> 1;
          if (uVar21 < 2) {
            uVar2 = uVar21;
          }
          uVar11 = (ulong)uVar2;
          uVar21 = uVar9 >> 1;
          if (uVar9 < 2) {
            uVar21 = uVar9;
          }
          iVar6 = iVar6 + -1;
          puVar12 = puVar19;
          puVar19 = puVar19 + uVar8 * uVar7 * uVar20;
          uVar9 = uVar21;
        } while (iVar6 != 0);
      }
      uVar11 = 0;
      uVar9 = 0;
      FVar15 = 0x23;
      if (!param_3) {
        FVar15 = 7;
      }
      do {
        uVar8 = (uint)local_c8 >> (ulong)(uVar9 & 0x1f);
        uVar20 = local_c8._4_4_ >> (ulong)(uVar9 & 0x1f);
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        if (uVar20 == 0) {
          uVar20 = 1;
        }
        iVar6 = ImageUtil::getMemorySize(uVar8,uVar20,1,FVar15,(TYPE)local_b0);
        uVar9 = uVar9 + 1;
        uVar8 = iVar6 + (int)uVar11;
        uVar11 = (ulong)uVar8;
      } while (iVar10 + 1U != uVar9);
      if (uVar8 == 0) {
        puVar12 = (uchar *)0x0;
        local_190 = 0;
      }
      else {
        puVar12 = (uchar *)operator_new(uVar11);
        local_190 = (int)puVar12 + uVar8;
        memset(puVar12,0,uVar11);
      }
      uVar9 = 0;
      puVar19 = puVar12;
      local_130 = puVar18;
      do {
        uVar8 = (uint)local_c8 >> (ulong)(uVar9 & 0x1f);
        uVar20 = local_c8._4_4_ >> (ulong)(uVar9 & 0x1f);
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        if (uVar20 == 0) {
          uVar20 = 1;
        }
        ppuVar1 = &local_a0;
        if (uVar9 != 0) {
          ppuVar1 = &local_130;
        }
                    /* try { // try from 00af5600 to 00af560f has its CatchHandler @ 00af5938 */
        uVar11 = ImageUtil::getMemorySize(uVar8,uVar20,1,(FORMAT)local_88,(TYPE)local_b0);
                    /* try { // try from 00af5618 to 00af5697 has its CatchHandler @ 00af593c */
        uVar7 = ImageUtil::getMemorySize(uVar8,uVar20,1,FVar15,(TYPE)local_b0);
        puVar16 = *ppuVar1;
        uVar21 = local_b8._4_4_;
        if (param_3) {
          ASTCUtil::getBlockSize(0x3f,(uint *)&local_120,&local_124);
          uVar2 = 0;
          if ((uint)local_120 != 0) {
            uVar2 = ((uVar8 + (uint)local_120) - 1) / (uint)local_120;
          }
          uVar3 = 0;
          if (local_124 != 0) {
            uVar3 = ((uVar20 + local_124) - 1) / local_124;
          }
          if (uVar7 == uVar2 * uVar3 * 0x10) {
            uVar8 = ASTCUtil::convertLDRBlocksFast
                              (puVar16,uVar8,uVar20,uVar21,(uint)local_120,local_124,puVar19,uVar7);
          }
          else {
            uVar8 = 0;
          }
        }
        else {
          if (((uVar20 | uVar8) & 3) == 0) {
            puVar13 = (uchar *)0x0;
          }
          else {
            uVar2 = uVar8 + 3 & 0xfffffffc;
            uVar3 = uVar20 + 3 & 0xfffffffc;
                    /* try { // try from 00af56c8 to 00af5747 has its CatchHandler @ 00af5934 */
            puVar13 = (uchar *)operator_new__((ulong)(uVar3 * uVar2 * local_b8._4_4_));
            ImageUtil::addPaddingToImageRGB(puVar16,uVar8,uVar20,uVar21,uVar2,uVar3,puVar13);
            uVar8 = uVar2;
            uVar20 = uVar3;
          }
          if ((uVar8 & 0x7ffffffc) * 2 * (uVar20 >> 2) == uVar7) {
            if (puVar13 != (uchar *)0x0) {
              puVar16 = puVar13;
            }
            uVar8 = DXTUtil::encodeToBC1(param_2,puVar16,uVar8,uVar20,uVar21,puVar19,uVar7);
            if (puVar13 != (uchar *)0x0) {
              operator_delete__(puVar13);
            }
          }
          else {
            uVar8 = 0;
          }
        }
        puVar19 = puVar19 + uVar7;
        uVar9 = uVar9 + 1;
        *ppuVar1 = *ppuVar1 + (uVar11 & 0xffffffff);
      } while (iVar10 + 1U != uVar9);
      operator_delete__(puVar18);
      uVar9 = 0;
      local_d8 = 0;
      uStack_dc = local_88._4_4_;
      local_120 = local_c8;
      uStack_118 = 0x100000001;
      local_d4 = 0;
      local_d0 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_108 = 1;
      uStack_10c = local_b8._4_4_;
      local_100 = local_190 - (int)puVar12;
      local_110 = iVar10;
      local_f8 = puVar12;
      local_e0 = FVar15;
      if ((uVar8 & 1) != 0) {
                    /* try { // try from 00af57d0 to 00af57df has its CatchHandler @ 00af5930 */
        uVar9 = GS2DUtil::saveImageToBuffer((ImageDesc *)&local_120,param_5,param_6);
        uVar9 = uVar9 & 1;
      }
      if (puVar12 != (uchar *)0x0) {
        operator_delete(puVar12);
      }
      if (uVar9 != 0) {
        pcVar17 = *(char **)(param_4 + 4);
        if ((*(byte *)param_4 & 1) == 0) {
          pcVar17 = (char *)((long)param_4 + 1);
        }
        plVar14 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,
                                           pcVar17,1,false);
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x30))(plVar14,*param_5,*param_6);
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      bVar5 = uVar9 != 0;
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0
         )) {
                    /* try { // try from 00af5890 to 00af589b has its CatchHandler @ 00af5918 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error (gads): Trying to save image with wrong image format.\n");
      bVar5 = false;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


