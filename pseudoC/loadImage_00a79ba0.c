// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImage
// Entry Point: 00a79ba0
// Size: 1316 bytes
// Signature: undefined __cdecl loadImage(char * param_1, uchar * param_2, uint param_3, ORIGIN param_4, ImageDesc * param_5, uint param_6)


/* DDSUtil::loadImage(char const*, unsigned char*, unsigned int, ImageDesc::ORIGIN, ImageDesc&,
   unsigned int) */

void DDSUtil::loadImage(char *param_1,uchar *param_2,uint param_3,ORIGIN param_4,ImageDesc *param_5,
                       uint param_6)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  size_t sVar9;
  uchar *__dest;
  ulong uVar10;
  uint uVar11;
  char *pcVar12;
  undefined8 *__src;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong __n;
  undefined8 uVar16;
  ulong local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if ((((param_3 < 0x80) || (*param_2 != 'D')) || (param_2[1] != 'D')) ||
     ((param_2[2] != 'S' || (param_2[3] != ' ')))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00a79ff8 to 00a7a003 has its CatchHandler @ 00a7a0cc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar12 = "Error: Invalid dds file \'%s\'\n";
LAB_00a79cac:
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar12,param_1);
  }
  else {
    uStack_98 = *(undefined8 *)(param_2 + 0x5c);
    local_a0 = *(undefined8 *)(param_2 + 0x54);
    uVar16 = *(undefined8 *)(param_2 + 0x4c);
    local_b0 = *(undefined8 *)(param_2 + 0x44);
    local_90 = *(undefined8 *)(param_2 + 100);
    uStack_7c = *(undefined8 *)(param_2 + 0x78);
    __src = (undefined8 *)(param_2 + 0x80);
    uStack_e8 = *(undefined8 *)(param_2 + 0xc);
    local_f0 = *(undefined8 *)(param_2 + 4);
    uStack_d8 = *(undefined8 *)(param_2 + 0x1c);
    uStack_e0 = *(undefined8 *)(param_2 + 0x14);
    uStack_88 = (undefined4)*(undefined8 *)(param_2 + 0x6c);
    uStack_c8 = *(undefined8 *)(param_2 + 0x2c);
    local_d0 = *(undefined8 *)(param_2 + 0x24);
    uStack_84 = (undefined4)*(undefined8 *)(param_2 + 0x70);
    uStack_80 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
    uStack_b8 = *(undefined8 *)(param_2 + 0x3c);
    uStack_c0 = *(undefined8 *)(param_2 + 0x34);
    uStack_a8._4_1_ = (byte)((ulong)uVar16 >> 0x20);
    uStack_a8 = uVar16;
    if (((uStack_a8._4_1_ >> 2 & 1) != 0) && ((int)local_a0 == 0x30315844)) {
      if (param_3 < 0x94) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 00a7a040 to 00a7a04b has its CatchHandler @ 00a7a0c8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar12 = "Error: Invalid dx10 dds file \'%s\'\n";
        goto LAB_00a79cac;
      }
      uStack_108 = *(undefined8 *)(param_2 + 0x88);
      local_110 = *__src;
      local_100 = *(undefined4 *)(param_2 + 0x90);
      __src = (undefined8 *)(param_2 + 0x94);
    }
    uVar8 = buildDesc((DDSHeader *)&local_f0,(DDSHeaderDX10 *)&local_110,param_4,param_5,param_1);
    if ((uVar8 & 1) != 0) {
      iVar7 = 6;
      if (*(int *)(param_5 + 0x1c) != 1) {
        iVar7 = 1;
      }
      if (param_6 != 0) {
        if (uStack_d8._4_4_ == 0x288ae8d9) {
          if ((local_d0._4_1_ >> 4 & 1) == 0) {
            if ((uint)local_d0 != 0) {
              if ((uint)local_d0 <= param_6) {
                param_6 = param_6 - (uint)local_d0;
              }
              goto LAB_00a79d8c;
            }
            goto LAB_00a79d68;
          }
        }
        else {
LAB_00a79d68:
          sVar9 = strlen(param_1);
          if (((uint)sVar9 < 6) || (param_1[(uint)sVar9 - 5] != 'H')) goto LAB_00a79d8c;
        }
        param_6 = 0;
      }
LAB_00a79d8c:
      uVar13 = *(uint *)(param_5 + 0x10);
      if (param_6 <= *(uint *)(param_5 + 0x10)) {
        uVar13 = param_6;
      }
      if (uVar13 == 0) {
        local_120 = 0;
      }
      else {
        uVar3 = *(uint *)param_5;
        uVar11 = *(uint *)(param_5 + 4);
        local_120 = 0;
        do {
          iVar4 = ImageUtil::getMemorySize
                            (uVar3,uVar11,1,*(FORMAT *)(param_5 + 0x40),*(TYPE *)(param_5 + 0x18));
          uVar13 = uVar13 - 1;
          local_120 = (ulong)(uint)(iVar4 + (int)local_120);
          uVar3 = *(uint *)param_5 >> 1;
          uVar11 = *(uint *)(param_5 + 4) >> 1;
          *(uint *)param_5 = uVar3;
          *(uint *)(param_5 + 4) = uVar11;
          *(int *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) + -1;
        } while (uVar13 != 0);
      }
      uVar3 = *(uint *)param_5;
      uVar11 = *(uint *)(param_5 + 4);
      uVar13 = 0;
      iVar4 = 0;
      uVar14 = *(uint *)(param_5 + 8);
      do {
        iVar5 = ImageUtil::getMemorySize
                          (uVar3,uVar11,uVar14,*(FORMAT *)(param_5 + 0x40),*(TYPE *)(param_5 + 0x18)
                          );
        iVar4 = iVar5 + iVar4;
        uVar3 = uVar3 >> (1 < uVar3);
        uVar13 = uVar13 + 1;
        uVar11 = uVar11 >> (1 < uVar11);
        uVar14 = uVar14 >> (1 < uVar14);
      } while (uVar13 <= *(uint *)(param_5 + 0x10));
      uVar13 = iVar4 * iVar7 * *(int *)(param_5 + 0xc);
      uVar8 = (ulong)uVar13 + 0x80;
      if (param_3 < uVar8) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 00a7a088 to 00a7a093 has its CatchHandler @ 00a7a0c4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Corrupt dds image file \'%s\'.\n",param_1);
      }
      else {
        *(uint *)(param_5 + 0x20) = uVar13;
        __dest = (uchar *)operator_new__((ulong)uVar13);
        uVar13 = local_d0._4_4_ & 1;
        *(uchar **)(param_5 + 0x28) = __dest;
        if (uStack_d8._4_4_ != 0x288ae8d9) {
          uVar13 = 0;
        }
        uVar10 = ImageUtil::getNeedFlipY
                           (*(ORIGIN *)(param_5 + 0x44),uVar13,*(TEXTURE_TYPE *)(param_5 + 0x1c));
        if ((uStack_d8._4_4_ == 0x288ae8d9) && ((local_d0._4_1_ >> 1 & 1) != 0)) {
          param_5[0x49] = (ImageDesc)0x1;
        }
        if (*(int *)(param_5 + 0xc) * iVar7 != 0) {
          uVar13 = 0;
          do {
            uVar3 = 0;
            uVar11 = *(uint *)param_5;
            uVar14 = *(uint *)(param_5 + 4);
            uVar15 = *(uint *)(param_5 + 8);
            __src = (undefined8 *)((long)__src + local_120);
            do {
              uVar6 = ImageUtil::getMemorySize
                                (uVar11,uVar14,uVar15,*(FORMAT *)(param_5 + 0x40),
                                 *(TYPE *)(param_5 + 0x18));
              __n = (ulong)uVar6;
              memcpy(__dest,__src,__n);
              if ((uVar10 & 1) != 0) {
                ImageUtil::flipY(__dest,uVar6,uVar11,uVar14,uVar15,*(FORMAT *)(param_5 + 0x40),
                                 param_1,false);
              }
              __dest = __dest + __n;
              __src = (undefined8 *)((long)__src + __n);
              uVar11 = uVar11 >> (1 < uVar11);
              uVar14 = uVar14 >> (1 < uVar14);
              uVar3 = uVar3 + 1;
              uVar15 = uVar15 >> (1 < uVar15);
            } while (uVar3 <= *(uint *)(param_5 + 0x10));
            uVar13 = uVar13 + 1;
          } while (uVar13 < (uint)(*(int *)(param_5 + 0xc) * iVar7));
        }
      }
      bVar2 = uVar8 <= param_3;
      goto LAB_00a79cbc;
    }
  }
  bVar2 = false;
LAB_00a79cbc:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


