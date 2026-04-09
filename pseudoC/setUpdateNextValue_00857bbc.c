// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUpdateNextValue
// Entry Point: 00857bbc
// Size: 672 bytes
// Signature: undefined __thiscall setUpdateNextValue(DensityMapUpdater * this, uint param_1, uint param_2, uint param_3)


/* DensityMapUpdater::setUpdateNextValue(unsigned int, unsigned int, unsigned int) */

void __thiscall
DensityMapUpdater::setUpdateNextValue
          (DensityMapUpdater *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  long lVar9;
  int iVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint local_358 [2];
  char local_350 [760];
  long local_58;
  
  lVar9 = tpidr_el0;
  uVar15 = (ulong)param_3;
  local_58 = *(long *)(lVar9 + 0x28);
  if (*(int *)(this + 0x50) != 2) {
    memcpy(local_358,this + 0x54,0x300);
    lVar13 = 0;
    iVar10 = *(int *)(this + 0x354);
    uVar7 = *(uint *)(this + 0x4c);
    do {
      uVar14 = 0;
      uVar5 = local_358[lVar13 * 3];
      uVar6 = *(uint *)(local_350 + lVar13 * 0xc + -4);
      cVar8 = local_350[lVar13 * 0xc];
      do {
        uVar1 = uVar14;
        if ((int)uVar5 <= (int)uVar14) {
          uVar1 = uVar5;
        }
        uVar2 = uVar14;
        if ((int)uVar14 <= (int)uVar6) {
          uVar2 = uVar6;
        }
        uVar4 = uVar6;
        uVar3 = uVar5;
        if (cVar8 != '\0') {
          uVar4 = uVar2;
          uVar3 = uVar1;
        }
        if ((int)uVar3 <= (int)(iVar10 + uVar14)) {
          uVar3 = iVar10 + uVar14;
        }
        if ((int)uVar3 <= (int)uVar4) {
          uVar4 = uVar3;
        }
        (this + 0x54)[(ulong)uVar14 + lVar13 * 0x40] = SUB41(uVar4,0);
        uVar14 = uVar14 + 1;
      } while (uVar14 >> (ulong)(uVar7 & 0x1f) == 0);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x40);
    *(undefined4 *)(this + 0x50) = 2;
  }
  if (param_1 < 0x40) {
    if (param_2 < 0x40) {
      if (param_3 < 0x100) {
        if (*(uint *)(this + 0x4c) < 7) {
          this[(ulong)param_2 + (ulong)param_1 * 0x40 + 0x54] = SUB41(param_3,0);
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar10 != 0)) {
                    /* try { // try from 00857e20 to 00857e2b has its CatchHandler @ 00857e5c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Trying to set custom next update value for updater with too many channels (%u). Maximum is %u\n"
                             ,(ulong)*(uint *)(this + 0x4c),6);
        }
        goto LAB_00857d04;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0
         )) {
                    /* try { // try from 00857dd8 to 00857de3 has its CatchHandler @ 00857e60 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar11 = "Error: Next update value %u for mask value %u is too big. Maximum allowed is %u\n."
      ;
      uVar12 = 0xff;
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0
         )) {
                    /* try { // try from 00857d90 to 00857d9b has its CatchHandler @ 00857e64 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar11 = 
      "Error: Next update value source %u for mask value %u is too big. Maximum allowed is %u\n.";
      uVar12 = 0x3f;
      uVar15 = (ulong)param_2;
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar11,uVar15,
                       (ulong)param_1,uVar12);
  }
LAB_00857d04:
  if (*(long *)(lVar9 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


