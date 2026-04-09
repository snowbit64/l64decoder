// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: showBitmaps
// Entry Point: 00a647fc
// Size: 720 bytes
// Signature: undefined showBitmaps(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageSystemDesc::MultiLayer::showBitmaps() */

void FoliageSystemDesc::MultiLayer::showBitmaps(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long **in_x0;
  long *plVar8;
  ulong uVar9;
  Logger *pLVar10;
  long *plVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  byte local_88 [32];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00a64a88 to 00a64a8f has its CatchHandler @ 00a64ad8 */
    pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a64a94 to 00a64a97 has its CatchHandler @ 00a64acc */
    Logger::Logger(pLVar10);
    LogManager::getInstance()::singletonLogManager = pLVar10;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  plVar11 = *in_x0;
  lVar2 = (long)plVar11 + 0x31;
  if ((*(byte *)(plVar11 + 6) & 1) != 0) {
    lVar2 = plVar11[8];
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "FoliageMultiLayer for density map \'%s\':\n",lVar2);
  plVar11 = in_x0[1];
  plVar3 = in_x0[2];
  do {
    if (plVar11 == plVar3) {
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    iVar6 = (**(code **)(**in_x0 + 0x58))();
    if (iVar6 != 0) {
      uVar14 = 0;
      do {
        plVar8 = *in_x0;
        local_88[uVar14] = 0x78;
        uVar14 = uVar14 + 1;
        uVar9 = (**(code **)(*plVar8 + 0x58))();
      } while (uVar14 < (uVar9 & 0xffffffff));
    }
    uVar14 = (**(code **)(**in_x0 + 0x58))();
    plVar8 = *in_x0;
    local_88[uVar14 & 0xffffffff] = 0;
    uVar13 = *(uint *)(plVar11 + 9);
    iVar6 = (**(code **)(*plVar8 + 0x60))(plVar8);
    if (iVar6 != 0) {
      uVar14 = 0;
      do {
        plVar8 = *in_x0;
        bVar4 = (byte)uVar13;
        uVar13 = uVar13 >> 1;
        local_88[uVar14] = bVar4 & 1 | 0x30;
        uVar14 = uVar14 + 1;
        uVar9 = (**(code **)(*plVar8 + 0x60))();
      } while (uVar14 < (uVar9 & 0xffffffff));
    }
    if (*(int *)(plVar11 + 10) != 0) {
      uVar13 = 0;
      do {
        uVar1 = uVar13 + *(int *)((long)plVar11 + 0x4c);
        uVar13 = uVar13 + 1;
        local_88[uVar1] = 0x53;
      } while (uVar13 < *(uint *)(plVar11 + 10));
    }
    iVar6 = (**(code **)(**in_x0 + 0x58))();
    if (iVar6 != 0) {
      uVar14 = 0;
      iVar6 = -1;
      do {
        iVar7 = (**(code **)(**in_x0 + 0x58))();
        uVar9 = (ulong)(uint)(iVar7 + iVar6);
        if (uVar9 <= uVar14) break;
        bVar4 = local_88[uVar14];
        plVar8 = *in_x0;
        local_88[uVar14] = local_88[uVar9];
        uVar14 = uVar14 + 1;
        local_88[uVar9] = bVar4;
        uVar9 = (**(code **)(*plVar8 + 0x58))();
        iVar6 = iVar6 + -1;
      } while (uVar14 < (uVar9 & 0xffffffff));
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00a64a08 to 00a64a0f has its CatchHandler @ 00a64aec */
      pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a64a14 to 00a64a17 has its CatchHandler @ 00a64adc */
      Logger::Logger(pLVar10);
      LogManager::getInstance()::singletonLogManager = pLVar10;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pbVar12 = (byte *)plVar11[2];
    if ((*(byte *)plVar11 & 1) == 0) {
      pbVar12 = (byte *)((long)plVar11 + 1);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  %s -> %s\n",
                      local_88,pbVar12);
    plVar11 = plVar11 + 0xe;
  } while( true );
}


