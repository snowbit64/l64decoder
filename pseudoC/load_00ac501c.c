// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00ac501c
// Size: 340 bytes
// Signature: undefined __cdecl load(Platform param_1, char * param_2)


/* DxcManager::load(DxcManager::Platform, char const*) */

undefined8 DxcManager::load(Platform param_1,char *param_2)

{
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  Logger *this;
  char *pcVar5;
  char *pcVar6;
  
  puVar2 = (uint *)(ulong)param_1;
  *(undefined8 *)(puVar2 + 2) = 0;
  LibraryUtil::unloadModule(*puVar2);
  pcVar6 = (char *)0x0;
  *puVar2 = 0;
  if ((uint)param_2 < 3) {
    pcVar6 = &DAT_00523798 + *(int *)(&DAT_00523798 + (long)(int)(uint)param_2 * 4);
  }
  uVar3 = LibraryUtil::loadModule(pcVar6,puVar2);
  if ((uVar3 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 == 0)) {
      pcVar5 = "Error: Could not load platform shader compiler dll \'%s\'\n";
      goto LAB_00ac50c4;
    }
                    /* try { // try from 00ac50f8 to 00ac50ff has its CatchHandler @ 00ac5188 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00ac5104 to 00ac5107 has its CatchHandler @ 00ac5178 */
    Logger::Logger(this);
    pcVar5 = "Error: Could not load platform shader compiler dll \'%s\'\n";
  }
  else {
    lVar4 = LibraryUtil::loadFunction(*puVar2,"DxcCreateInstance");
    *(long *)(puVar2 + 2) = lVar4;
    if (lVar4 != 0) {
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 == 0)) {
      pcVar5 = 
      "Error: Could not load \'DxcCreateInstance\' from platform shader compiler dll \'%s\'\n";
      goto LAB_00ac50c4;
    }
                    /* try { // try from 00ac5124 to 00ac512b has its CatchHandler @ 00ac5174 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00ac5130 to 00ac5133 has its CatchHandler @ 00ac5170 */
    Logger::Logger(this);
    pcVar5 = 
    "Error: Could not load \'DxcCreateInstance\' from platform shader compiler dll \'%s\'\n";
  }
  LogManager::getInstance()::singletonLogManager = this;
  __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
               &PTR_LOOP_00fd8de0);
  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
LAB_00ac50c4:
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar5,pcVar6);
  return 0;
}


