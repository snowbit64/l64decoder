// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImage
// Entry Point: 00a909e4
// Size: 1000 bytes
// Signature: undefined __cdecl loadImage(char * param_1, uchar * param_2, uint param_3, ORIGIN param_4, ImageDesc * param_5, uint param_6, bool param_7)


/* GS2DUtil::loadImage(char const*, unsigned char*, unsigned int, ImageDesc::ORIGIN, ImageDesc&,
   unsigned int, bool) */

uint GS2DUtil::loadImage(char *param_1,uchar *param_2,uint param_3,ORIGIN param_4,ImageDesc *param_5
                        ,uint param_6,bool param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uchar *puVar12;
  uchar *__dest;
  char *pcVar13;
  uint uVar14;
  uchar *__src;
  uint local_e4;
  uchar *local_e0;
  uchar *puStack_d8;
  uchar *local_d0;
  uchar *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_e4 = param_6;
  if ((((param_3 < 0x4c) || (*param_2 != *s_GS2DHeaderID)) || (param_2[1] != s_GS2DHeaderID[1])) ||
     ((param_2[2] != s_GS2DHeaderID[2] || (param_2[3] != s_GS2DHeaderID[3])))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0))
    {
                    /* try { // try from 00a90d48 to 00a90d53 has its CatchHandler @ 00a90dd0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar13 = "Error: Invalid texture file \'%s\' (header ID mismatch)\n";
LAB_00a90ab8:
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar13,param_1);
  }
  else {
    if (*(uint *)(param_2 + 4) < 6) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0
         )) {
                    /* try { // try from 00a90d90 to 00a90d9b has its CatchHandler @ 00a90dcc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar13 = "Error: Outdated gs2d file \'%s\'\n";
      goto LAB_00a90ab8;
    }
    uStack_98 = *(undefined8 *)(param_2 + 0x30);
    local_a0 = *(undefined8 *)(param_2 + 0x28);
    uStack_88 = *(undefined8 *)(param_2 + 0x40);
    uStack_90 = *(undefined8 *)(param_2 + 0x38);
    local_80 = *(undefined8 *)(param_2 + 0x48);
    uStack_a8 = *(undefined8 *)(param_2 + 0x20);
    uStack_b0 = *(undefined8 *)(param_2 + 0x18);
    uStack_b8 = *(undefined8 *)(param_2 + 0x10);
    local_c0 = *(undefined8 *)(param_2 + 8);
    uVar11 = buildDesc((GS2DHeader *)&local_c0,param_4,param_5,param_1,&local_e4,param_7);
    if ((uVar11 & 1) != 0) {
      bVar5 = (int)local_80 != 0;
      uVar6 = ImageUtil::getNeedFlipY(param_4,(uint)bVar5,*(TEXTURE_TYPE *)(param_5 + 0x1c));
      if (param_7) {
        uVar6 = 0;
        *(uint *)(param_5 + 0x44) = (uint)bVar5;
      }
      iVar10 = 6;
      if (*(int *)(param_5 + 0x1c) != 1) {
        iVar10 = 1;
      }
      iVar10 = iVar10 * *(int *)(param_5 + 0xc);
      iVar7 = MipMapUtil::getMipRangeSize(param_5,0,*(int *)(param_5 + 0x10) + 1);
      uVar14 = iVar7 * iVar10;
      puVar12 = (uchar *)operator_new__((ulong)uVar14);
      puStack_d8 = param_2 + 0x50 + (uStack_a8._4_4_ + 0xfU & 0xfffffff0);
      local_d0 = puStack_d8 + ((int)local_a0 + 0xfU & 0xfffffff0);
      puStack_c8 = local_d0 + (local_a0._4_4_ + 0xfU & 0xfffffff0);
      local_e0 = param_2 + 0x50;
      uVar8 = decompressContent((GS2DHeader *)&local_c0,*(FORMAT *)(param_5 + 0x40),
                                *(TYPE *)(param_5 + 0x18),puVar12,uVar14,&local_e0,
                                (uint *)((long)&uStack_a8 + 4),
                                (uint)uStack_b0._2_2_ - *(int *)(param_5 + 0x10),
                                *(int *)(param_5 + 0x10) + 1);
      if ((uVar8 & 1) != 0) {
        if (*(void **)(param_5 + 0x28) != (void *)0x0) {
          operator_delete__(*(void **)(param_5 + 0x28));
        }
        *(undefined8 *)(param_5 + 0x28) = 0;
        *(undefined4 *)(param_5 + 0x20) = 0;
        __dest = (uchar *)operator_new__((ulong)uVar14);
        *(uint *)(param_5 + 0x20) = uVar14;
        *(uchar **)(param_5 + 0x28) = __dest;
        if (iVar10 != 0) {
          iVar7 = 0;
          __src = puVar12;
          do {
            uVar14 = 0;
            do {
              uVar1 = *(uint *)param_5 >> (ulong)(uVar14 & 0x1f);
              uVar2 = *(uint *)(param_5 + 4) >> (ulong)(uVar14 & 0x1f);
              if (uVar1 < 2) {
                uVar1 = 1;
              }
              uVar3 = *(uint *)(param_5 + 8) >> (ulong)(uVar14 & 0x1f);
              if (uVar2 < 2) {
                uVar2 = 1;
              }
              if (uVar3 < 2) {
                uVar3 = 1;
              }
              uVar9 = ImageUtil::getMemorySize
                                (uVar1,uVar2,uVar3,*(FORMAT *)(param_5 + 0x40),
                                 *(TYPE *)(param_5 + 0x18));
              uVar11 = (ulong)uVar9;
              memcpy(__dest,__src,uVar11);
              if ((uVar6 & 1) != 0) {
                ImageUtil::flipY(__dest,uVar9,uVar1,uVar2,uVar3,*(FORMAT *)(param_5 + 0x40),param_1,
                                 false);
              }
              __dest = __dest + uVar11;
              __src = __src + uVar11;
              uVar14 = uVar14 + 1;
            } while (uVar14 <= *(uint *)(param_5 + 0x10));
            iVar7 = iVar7 + 1;
          } while (iVar7 != iVar10);
        }
      }
      operator_delete__(puVar12);
      goto LAB_00a90ac8;
    }
  }
  uVar8 = 0;
LAB_00a90ac8:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8 & 1;
}


