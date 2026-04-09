// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSystemVarValue
// Entry Point: 00c1fa98
// Size: 548 bytes
// Signature: undefined __thiscall getSystemVarValue(HlslParser * this, char * param_1, uint * param_2, uint param_3, bool param_4)


/* HlslParser::getSystemVarValue(char const*, unsigned int*, unsigned int, bool) */

undefined8 __thiscall
HlslParser::getSystemVarValue
          (HlslParser *this,char *param_1,uint *param_2,uint param_3,bool param_4)

{
  long **pplVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  Logger *this_00;
  char *pcVar5;
  long **pplVar6;
  uint uVar7;
  
  plVar3 = (long *)GISLParserContext::getTopLevelDeclarationInitializer
                             (*(GISLParserContext **)(this + 0x48),param_1);
  if (plVar3 == (long *)0x0) {
    if (!param_4) {
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 == 0)) {
      pcVar5 = "Error: %s is not initialized.\n";
      goto LAB_00c1fbb4;
    }
                    /* try { // try from 00c1fc1c to 00c1fc23 has its CatchHandler @ 00c1fcd0 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c1fc28 to 00c1fc2b has its CatchHandler @ 00c1fccc */
    Logger::Logger(this_00);
    pcVar5 = "Error: %s is not initialized.\n";
  }
  else {
    lVar4 = (**(code **)(*plVar3 + 0x30))();
    if (lVar4 != 0) {
      pplVar6 = *(long ***)(lVar4 + 0x50);
      pplVar1 = *(long ***)(lVar4 + 0x58);
      if (pplVar6 != pplVar1) {
        uVar7 = 0;
        do {
          lVar4 = (**(code **)(**pplVar6 + 0x28))();
          if (lVar4 == 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar2 != 0)) {
                    /* try { // try from 00c1fc48 to 00c1fc4f has its CatchHandler @ 00c1fcc8 */
              this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c1fc54 to 00c1fc57 has its CatchHandler @ 00c1fcc4 */
              Logger::Logger(this_00);
              pcVar5 = "Error: %s has non-constant initializer.\n";
              goto LAB_00c1fc8c;
            }
            pcVar5 = "Error: %s has non-constant initializer.\n";
            goto LAB_00c1fbb4;
          }
          iVar2 = **(int **)(lVar4 + 0x48);
          if ((iVar2 != 6) && (iVar2 != 5)) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar2 != 0)) {
                    /* try { // try from 00c1fc74 to 00c1fc7b has its CatchHandler @ 00c1fcc0 */
              this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c1fc80 to 00c1fc83 has its CatchHandler @ 00c1fcbc */
              Logger::Logger(this_00);
              pcVar5 = "Error: %s has non-integer initializer.\n";
              goto LAB_00c1fc8c;
            }
            pcVar5 = "Error: %s has non-integer initializer.\n";
            goto LAB_00c1fbb4;
          }
          if (uVar7 < param_3) {
            param_2[uVar7] = (*(int **)(lVar4 + 0x48))[1];
            uVar7 = uVar7 + 1;
          }
          pplVar6 = pplVar6 + 1;
        } while (pplVar6 != pplVar1);
      }
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 == 0)) {
      pcVar5 = "Error: %s has invalid/unrecognized initializer.\n";
      goto LAB_00c1fbb4;
    }
                    /* try { // try from 00c1fbf0 to 00c1fbf7 has its CatchHandler @ 00c1fce4 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c1fbfc to 00c1fbff has its CatchHandler @ 00c1fcd4 */
    Logger::Logger(this_00);
    pcVar5 = "Error: %s has invalid/unrecognized initializer.\n";
  }
LAB_00c1fc8c:
  LogManager::getInstance()::singletonLogManager = this_00;
  __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
               &PTR_LOOP_00fd8de0);
  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
LAB_00c1fbb4:
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar5,param_1);
  return 0;
}


