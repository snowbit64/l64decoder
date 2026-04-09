// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readMips
// Entry Point: 00a8f950
// Size: 1232 bytes
// Signature: undefined __cdecl readMips(File * param_1, GS2DHeader * param_2, ImageDesc * param_3, bool param_4, uint param_5, uint param_6, uchar * param_7, uint param_8, char * param_9)


/* GS2DUtil::readMips(File&, GS2DUtil::GS2DHeader const&, ImageDesc const&, bool, unsigned int,
   unsigned int, unsigned char*, unsigned int, char const*) */

uint GS2DUtil::readMips(File *param_1,GS2DHeader *param_2,ImageDesc *param_3,bool param_4,
                       uint param_5,uint param_6,uchar *param_7,uint param_8,char *param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uchar *puVar11;
  Logger *pLVar12;
  char *pcVar13;
  uchar **ppuVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uchar *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uchar *local_a0 [5];
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar2 = *(int *)(param_3 + 0xc);
  iVar8 = *(int *)(param_3 + 0x10);
  local_78 = 0;
  local_70 = 0;
  iVar16 = 6;
  if (*(int *)(param_3 + 0x1c) != 1) {
    iVar16 = 1;
  }
  iVar17 = 4;
  if (iVar8 + 1U < 4) {
    iVar17 = iVar8 + 1;
  }
  if (iVar8 < 4) {
    iVar8 = 3;
  }
  if (iVar17 == 0) {
    uVar21 = 0;
    uVar19 = 0;
    uVar6 = 0;
LAB_00a8fb68:
    puVar11 = (uchar *)operator_new__((ulong)uVar21);
    uVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,puVar11,uVar21);
    if (uVar5 == uVar21) {
      local_a0[1] = (uchar *)0x0;
      local_a0[0] = (uchar *)0x0;
      local_a0[3] = (uchar *)0x0;
      local_a0[2] = (uchar *)0x0;
      if (uVar19 < uVar19 + uVar6) {
        lVar9 = (ulong)(uVar19 + uVar6) - (ulong)uVar19;
        ppuVar14 = local_a0 + uVar19;
        puVar15 = (uint *)((long)&local_78 + (ulong)uVar19 * 4);
        puVar18 = puVar11;
        do {
          uVar6 = *puVar15;
          *ppuVar14 = puVar18;
          lVar9 = lVar9 + -1;
          puVar18 = puVar18 + uVar6;
          ppuVar14 = ppuVar14 + 1;
          puVar15 = puVar15 + 1;
        } while (lVar9 != 0);
      }
      uVar6 = decompressContent(param_2,*(FORMAT *)(param_3 + 0x40),*(TYPE *)(param_3 + 0x18),
                                param_7,param_8,local_a0,(uint *)(param_2 + 0x1c),param_5,param_6);
      operator_delete__(puVar11);
      if (((uVar6 & 1) != 0) && (iVar16 * iVar2 != 0)) {
        uVar19 = 0;
        do {
          uVar5 = param_6;
          uVar21 = param_5;
          if (param_5 < param_6 + param_5) {
            do {
              uVar1 = *(uint *)param_3 >> (ulong)(uVar21 & 0x1f);
              uVar3 = *(uint *)(param_3 + 4) >> (ulong)(uVar21 & 0x1f);
              if (uVar1 < 2) {
                uVar1 = 1;
              }
              uVar20 = *(uint *)(param_3 + 8) >> (ulong)(uVar21 & 0x1f);
              if (uVar3 < 2) {
                uVar3 = 1;
              }
              if (uVar20 < 2) {
                uVar20 = 1;
              }
              uVar7 = ImageUtil::getMemorySize
                                (uVar1,uVar3,uVar20,*(FORMAT *)(param_3 + 0x40),
                                 *(TYPE *)(param_3 + 0x18));
              if (param_4) {
                ImageUtil::flipY(param_7,uVar7,uVar1,uVar3,uVar20,*(FORMAT *)(param_3 + 0x40),
                                 param_9,(uVar19 | uVar21) == 0);
              }
              param_7 = param_7 + uVar7;
              uVar21 = uVar21 + 1;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != iVar16 * iVar2);
      }
      goto LAB_00a8fd48;
    }
    operator_delete__(puVar11);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00a8fd8c to 00a8fd93 has its CatchHandler @ 00a8fe38 */
      pLVar12 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a8fd98 to 00a8fd9b has its CatchHandler @ 00a8fe28 */
      Logger::Logger(pLVar12);
      LogManager::getInstance()::singletonLogManager = pLVar12;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar13 = "Error: failed to read from gs2d file \'%s\'\n";
  }
  else {
    uVar3 = (param_6 + param_5) - 1;
    uVar6 = (uint)((iVar17 + iVar8) - 4U < param_5 || uVar3 < iVar17 - 1U);
    uVar19 = *(int *)(param_2 + 0x1c) + 0xfU & 0xfffffff0;
    uVar1 = uVar19;
    uVar5 = 0;
    if (uVar6 == 0) {
      uVar1 = 0;
      uVar5 = uVar19;
    }
    uVar6 = uVar6 ^ 1;
    local_78 = (ulong)(*(int *)(param_2 + 0x1c) + 0xfU) & 0xfffffffffffffff0;
    uVar21 = uVar5;
    uVar20 = uVar1;
    if (iVar17 == 1) {
      uVar19 = 0;
    }
    else {
      uVar7 = *(int *)(param_2 + 0x20) + 0xfU & 0xfffffff0;
      local_78 = CONCAT44(*(int *)(param_2 + 0x20) + 0xfU,(undefined4)local_78) & 0xfffffff0ffffffff
      ;
      if ((iVar17 - 2U < param_5) || (uVar3 < iVar17 - 2U)) {
        uVar19 = 0;
        if (uVar5 != 0) goto LAB_00a8fb3c;
        uVar1 = uVar7 + uVar1;
      }
      else {
        uVar6 = uVar6 + 1;
        uVar19 = (uint)(uVar5 == 0);
        uVar5 = uVar7 + uVar5;
      }
      uVar21 = uVar5;
      uVar20 = uVar1;
      if (iVar17 != 2) {
        uVar7 = *(int *)(param_2 + 0x24) + 0xfU & 0xfffffff0;
        local_70 = (ulong)(*(int *)(param_2 + 0x24) + 0xfU) & 0xfffffffffffffff0;
        if ((iVar17 - 3U < param_5) || (uVar3 < iVar17 - 3U)) {
          if (uVar5 != 0) goto LAB_00a8fb3c;
          uVar1 = uVar7 + uVar1;
        }
        else {
          uVar21 = 2;
          if (uVar5 != 0) {
            uVar21 = uVar19;
          }
          uVar6 = uVar6 + 1;
          uVar5 = uVar7 + uVar5;
          uVar19 = uVar21;
        }
        uVar21 = uVar5;
        uVar20 = uVar1;
        if (iVar17 != 3) {
          uVar7 = *(int *)(param_2 + 0x28) + 0xfU & 0xfffffff0;
          local_70 = CONCAT44(*(int *)(param_2 + 0x28) + 0xfU,(undefined4)local_70) &
                     0xfffffff0ffffffff;
          if ((iVar17 - 4U < param_5) || (uVar3 < iVar17 - 4U)) {
            uVar21 = 0;
            uVar20 = uVar7 + uVar1;
            if (uVar5 != 0) {
              uVar21 = uVar5;
              uVar20 = uVar1;
            }
          }
          else {
            uVar1 = 3;
            if (uVar5 != 0) {
              uVar1 = uVar19;
            }
            uVar6 = uVar6 + 1;
            uVar21 = uVar7 + uVar5;
            uVar19 = uVar1;
          }
        }
      }
    }
LAB_00a8fb3c:
    if (uVar20 == 0) goto LAB_00a8fb68;
    lVar9 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
    uVar10 = (**(code **)(*(long *)param_1 + 0x38))(param_1,lVar9 + (ulong)uVar20);
    if ((uVar10 & 1) != 0) goto LAB_00a8fb68;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00a8fddc to 00a8fde3 has its CatchHandler @ 00a8fe24 */
      pLVar12 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a8fde8 to 00a8fdeb has its CatchHandler @ 00a8fe20 */
      Logger::Logger(pLVar12);
      LogManager::getInstance()::singletonLogManager = pLVar12;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar13 = "Error: failed to seek in gs2d file \'%s\'\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar13,param_9);
  uVar6 = 0;
LAB_00a8fd48:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 1;
}


