// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printErrors
// Entry Point: 00bb72b0
// Size: 340 bytes
// Signature: undefined printErrors(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::printErrors() */

void LuauScriptSystem::printErrors(void)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  char *pcVar4;
  char *extraout_x1;
  char *extraout_x1_00;
  undefined auVar5 [16];
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  checkYieldState();
  lua_getfield(*(lua_State **)(in_x0 + 8),-0x2712,"_ALERT");
  iVar3 = lua_type(*(lua_State **)(in_x0 + 8),-1);
  if (iVar3 == 7) {
    lua_insert(*(lua_State **)(in_x0 + 8),-2);
    lua_call(*(lua_State **)(in_x0 + 8),1,0);
  }
  else {
    auVar5 = lua_tolstring(*(lua_State **)(in_x0 + 8),-2,(ulong *)0x0);
    pcVar4 = auVar5._8_8_;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
       pcVar4 = extraout_x1, iVar3 != 0)) {
                    /* try { // try from 00bb73c8 to 00bb73d3 has its CatchHandler @ 00bb7404 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      pcVar4 = extraout_x1_00;
    }
    reformatErrorMessage(auVar5._0_8_,pcVar4);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
                    /* try { // try from 00bb7364 to 00bb7377 has its CatchHandler @ 00bb7418 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,"Error: %s\n",pvVar1)
    ;
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    lua_settop(*(lua_State **)(in_x0 + 8),-3);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


