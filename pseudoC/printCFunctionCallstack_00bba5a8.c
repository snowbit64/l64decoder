// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printCFunctionCallstack
// Entry Point: 00bba5a8
// Size: 272 bytes
// Signature: undefined __thiscall printCFunctionCallstack(LuauScriptSystem * this, lua_State * param_1, char * param_2, uint param_3)


/* LuauScriptSystem::printCFunctionCallstack(lua_State*, char const*, unsigned int) */

void __thiscall
LuauScriptSystem::printCFunctionCallstack
          (LuauScriptSystem *this,lua_State *param_1,char *param_2,uint param_3)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  pcVar4 = (char *)(ulong)param_3;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((LogManager::getInstance()::singletonLogManager & 1) == 0) {
    pcVar5 = pcVar4;
    iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager);
    param_3 = (uint)pcVar5;
    if (iVar3 != 0) {
                    /* try { // try from 00bba67c to 00bba687 has its CatchHandler @ 00bba6b8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
  }
  checkYieldState();
  getCFunctionCallstackAsStringStatic
            ((LuauScriptSystem *)param_1,(lua_State *)param_2,pcVar4,param_3);
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
                    /* try { // try from 00bba620 to 00bba633 has its CatchHandler @ 00bba6cc */
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004d33bb,pvVar1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


