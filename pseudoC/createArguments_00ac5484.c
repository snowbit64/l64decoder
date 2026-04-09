// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createArguments
// Entry Point: 00ac5484
// Size: 308 bytes
// Signature: undefined __thiscall createArguments(DxcCompiler3 * this, wchar_t * param_1, wchar_t * param_2, wchar_t * * param_3, uint param_4)


/* DxcCompiler3::createArguments(wchar_t const*, wchar_t const*, wchar_t const**, unsigned int) */

void __thiscall
DxcCompiler3::createArguments
          (DxcCompiler3 *this,wchar_t *param_1,wchar_t *param_2,wchar_t **param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  Logger *this_00;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  DxcManager::getInstance();
  plVar3 = (long *)DxcManager::createIDxcUtils();
  if (plVar3 == (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00ac5574 to 00ac557b has its CatchHandler @ 00ac55c8 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00ac5580 to 00ac5583 has its CatchHandler @ 00ac55b8 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Failed to create DxcUtils\n");
    uVar4 = 0;
  }
  else {
    local_50 = 0;
    (**(code **)(*plVar3 + 0x70))(plVar3,0,param_1,param_2,param_3,param_4,0,0,&local_50);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar4 = local_50;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


