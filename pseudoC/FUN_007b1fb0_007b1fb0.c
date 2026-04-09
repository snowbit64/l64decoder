// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b1fb0
// Entry Point: 007b1fb0
// Size: 384 bytes
// Signature: undefined FUN_007b1fb0(void)


void FUN_007b1fb0(DensityMapSyncer *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  EntityRegistryManager *this;
  long lVar4;
  Logger *this_00;
  ulong uVar5;
  DensityMap **ppDVar6;
  
  uVar1 = *param_2;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar4 = EntityRegistryManager::getEntityById(this,uVar1);
  if ((lVar4 == 0) || (uVar5 = *(ulong *)(lVar4 + 0x10), (uVar5 & 0xa00000000100) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 007b20f0 to 007b20f7 has its CatchHandler @ 007b2140 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b20fc to 007b20ff has its CatchHandler @ 007b2130 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid density map syncer density map with id %u.\n",(ulong)uVar1);
    return;
  }
  if ((uVar5 >> 0x2f & 1) == 0) {
    if (((uint)uVar5 >> 8 & 1) == 0) {
      ppDVar6 = (DensityMap **)(lVar4 + 0x20);
    }
    else {
      ppDVar6 = (DensityMap **)(lVar4 + 0x218);
    }
  }
  else {
    ppDVar6 = (DensityMap **)(lVar4 + 0x50);
  }
  bVar2 = true;
  switch(param_2[0xe]) {
  case 1:
  case 2:
    bVar2 = param_2[0xc] == 0;
    break;
  case 3:
    bVar2 = *(char *)(param_2 + 0xc) == '\0';
    break;
  case 4:
    bVar2 = (float)param_2[0xc] == 0.0;
    break;
  case 5:
    bVar2 = *(double *)(param_2 + 0xc) == 0.0;
    break;
  default:
    goto switchD_007b2074_caseD_6;
  case 7:
  case 8:
    lVar4 = *(long *)(param_2 + 0xc);
    goto LAB_007b2098;
  case 0xd:
    if (*(long **)(param_2 + 0xc) == (long *)0x0) {
      bVar2 = false;
      goto switchD_007b2074_caseD_6;
    }
    lVar4 = **(long **)(param_2 + 0xc);
LAB_007b2098:
    bVar2 = lVar4 == 0;
  }
  bVar2 = !bVar2;
switchD_007b2074_caseD_6:
  DensityMapSyncer::enableCellChangedCallbackForCell(param_1,*ppDVar6,param_2[4],param_2[8],bVar2);
  return;
}


