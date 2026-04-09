// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b2158
// Entry Point: 007b2158
// Size: 340 bytes
// Signature: undefined FUN_007b2158(void)


void FUN_007b2158(DensityMapSyncer *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  EntityRegistryManager *this;
  long lVar5;
  Logger *this_00;
  ulong uVar6;
  DensityMap **ppDVar7;
  uint local_40;
  uint uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar5 = EntityRegistryManager::getEntityById(this,uVar1);
  if ((lVar5 == 0) || (uVar6 = *(ulong *)(lVar5 + 0x10), (uVar6 & 0xa00000000100) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 007b2268 to 007b226f has its CatchHandler @ 007b22bc */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b2274 to 007b2277 has its CatchHandler @ 007b22ac */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid density map syncer density map with id %u.\n",(ulong)uVar1);
  }
  else {
    if ((uVar6 >> 0x2f & 1) == 0) {
      if (((uint)uVar6 >> 8 & 1) == 0) {
        ppDVar7 = (DensityMap **)(lVar5 + 0x20);
      }
      else {
        ppDVar7 = (DensityMap **)(lVar5 + 0x218);
      }
    }
    else {
      ppDVar7 = (DensityMap **)(lVar5 + 0x50);
    }
    bVar3 = DensityMapSyncer::getCellIndicesAtWorldPosition
                      (param_1,*ppDVar7,(float)param_2[4],(float)param_2[8],(int *)&uStack_3c,
                       (int *)&local_40);
    param_2[0x40] = uStack_3c;
    param_2[0x44] = local_40;
    param_2[0x42] = 1;
    param_2[0x46] = 1;
    *(byte *)(param_2 + 0x48) = bVar3 & 1;
    param_2[0x4a] = 3;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


