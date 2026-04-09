// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c400
// Entry Point: 0079c400
// Size: 196 bytes
// Signature: undefined FUN_0079c400(void)


void FUN_0079c400(PLATFORM_ID *param_1)

{
  byte bVar1;
  int iVar2;
  Logger *this;
  
  if ((int)*param_1 < 0xb) {
    bVar1 = MeshSplitManager::getIsConnectionWithinLimits
                      ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,*param_1);
    bVar1 = bVar1 & 1;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0079c484 to 0079c48b has its CatchHandler @ 0079c4d4 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 0079c490 to 0079c493 has its CatchHandler @ 0079c4c4 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: getIsSplitShapeConnectionWithinLimits with invalid platform id %u\n",
                       (ulong)param_1[4]);
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x40) = bVar1;
  param_1[0x42] = 3;
  return;
}


