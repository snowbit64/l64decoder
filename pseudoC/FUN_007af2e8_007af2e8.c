// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007af2e8
// Entry Point: 007af2e8
// Size: 372 bytes
// Signature: undefined FUN_007af2e8(void)


DensityMapUpdater * FUN_007af2e8(char **param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  EntityRegistryManager *this;
  long lVar4;
  Logger *this_00;
  DensityMapUpdater *this_01;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 2);
  local_68 = 0;
  uStack_58 = 0x100000001;
  local_60 = 0x40;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0x476a600000000001;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar4 = EntityRegistryManager::getEntityById(this,uVar1);
  if ((lVar4 == 0) || (-1 < *(char *)(lVar4 + 0x15))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 007af418 to 007af41f has its CatchHandler @ 007af46c */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007af424 to 007af427 has its CatchHandler @ 007af45c */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid terrain detail with id %u.\n",(ulong)uVar1);
    this_01 = (DensityMapUpdater *)0x0;
  }
  else {
    local_68 = *(undefined8 *)(lVar4 + 0x50);
    local_60 = CONCAT44(*(undefined4 *)(param_1 + 4),*(undefined4 *)(lVar4 + 0x6c));
    uStack_58 = CONCAT44(*(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 6));
    local_50 = CONCAT44(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8));
    local_48 = CONCAT44(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xe));
    local_40 = CONCAT44(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x12));
    this_01 = (DensityMapUpdater *)operator_new(0x1090);
                    /* try { // try from 007af3d4 to 007af3df has its CatchHandler @ 007af484 */
    DensityMapUpdater::DensityMapUpdater(this_01,*param_1,(DensityMapUpdaterDesc *)&local_68,true);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


