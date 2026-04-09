// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c310
// Entry Point: 0079c310
// Size: 180 bytes
// Signature: undefined FUN_0079c310(void)


void FUN_0079c310(uint *param_1)

{
  int iVar1;
  Logger *this;
  
  if ((int)param_1[4] < 0xb) {
    MeshSplitManager::addConnection
              ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,*param_1,
               param_1[4]);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0079c384 to 0079c38b has its CatchHandler @ 0079c3d4 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 0079c390 to 0079c393 has its CatchHandler @ 0079c3c4 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: addSplitShapeConnection with invalid platform id %u\n",
                     (ulong)param_1[4]);
  return;
}


