// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invokeScriptMethod
// Entry Point: 00bb9da8
// Size: 748 bytes
// Signature: undefined __thiscall invokeScriptMethod(LuauScriptSystem * this, int param_1, MethodInvocation * param_2, int param_3, int param_4, int param_5, char * param_6, int param_7)


/* LuauScriptSystem::invokeScriptMethod(int, MethodInvocation*, int, int, int, char const*, int) */

void __thiscall
LuauScriptSystem::invokeScriptMethod
          (LuauScriptSystem *this,int param_1,MethodInvocation *param_2,int param_3,int param_4,
          int param_5,char *param_6,int param_7)

{
  void *pvVar1;
  long lVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  MethodInvocation *pMVar10;
  Value *pVVar11;
  ulong uVar12;
  undefined auVar13 [16];
  basic_string local_80 [4];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lua_checkstack(*(lua_State **)(this + 8),param_4);
  if (0 < param_4) {
    uVar12 = (ulong)(uint)param_4;
    pVVar11 = (Value *)param_2;
    do {
      pushValue(this,*(lua_State **)(this + 8),pVVar11);
      pVVar11 = pVVar11 + 0x10;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  iVar4 = lua_pcall(*(lua_State **)(this + 8),param_4 + param_3,param_5,param_7);
  if (iVar4 == 0) {
    if (0 < param_5) {
      uVar12 = (ulong)(uint)param_5 + 1;
      do {
        uVar5 = lua_type(*(lua_State **)(this + 8),-1);
        uVar9 = uVar12 - 2;
        switch(uVar5) {
        case 1:
          iVar6 = lua_toboolean(*(lua_State **)(this + 8),-1);
          *(undefined4 *)(param_2 + (uVar9 & 0xffffffff) * 0x10 + 0x108) = 3;
          param_2[(uVar9 & 0xffffffff) * 0x10 + 0x100] = (MethodInvocation)(iVar6 == 1);
          break;
        case 2:
          pMVar10 = param_2 + (uVar9 & 0xffffffff) * 0x10;
          uVar8 = lua_touserdata(*(lua_State **)(this + 8),-1);
          *(undefined4 *)(pMVar10 + 0x108) = 7;
          goto LAB_00bb9ff8;
        case 3:
          dVar3 = (double)lua_tonumberx(*(lua_State **)(this + 8),-1,(int *)0x0);
          *(undefined4 *)(param_2 + (uVar9 & 0xffffffff) * 0x10 + 0x108) = 4;
          *(float *)(param_2 + (uVar9 & 0xffffffff) * 0x10 + 0x100) = (float)dVar3;
          break;
        case 5:
          uVar9 = uVar9 & 0xffffffff;
          pcVar7 = (char *)lua_tolstring(*(lua_State **)(this + 8),-1,(ulong *)0x0);
          uVar8 = StringUtil::createStrCpy(pcVar7);
          *(undefined4 *)(param_2 + uVar9 * 0x10 + 0x108) = 6;
          *(undefined8 *)(param_2 + uVar9 * 0x10 + 0x100) = uVar8;
          *(ushort *)(param_2 + uVar9 * 0x10 + 0x10c) =
               *(ushort *)(param_2 + uVar9 * 0x10 + 0x10c) & 0xfffe;
          break;
        case 8:
          pMVar10 = param_2 + (uVar9 & 0xffffffff) * 0x10;
          uVar8 = lua_touserdata(*(lua_State **)(this + 8),-1);
          *(undefined4 *)(pMVar10 + 0x108) = 0xd;
LAB_00bb9ff8:
          *(undefined8 *)(pMVar10 + 0x100) = uVar8;
          *(ushort *)(pMVar10 + 0x10c) = *(ushort *)(pMVar10 + 0x10c) & 0xfffe;
        }
        lua_settop(*(lua_State **)(this + 8),-2);
        uVar12 = uVar12 - 1;
      } while (1 < uVar12);
    }
  }
  else {
    auVar13 = lua_tolstring(*(lua_State **)(this + 8),-1,(ulong *)0x0);
    reformatErrorMessage(auVar13._0_8_,auVar13._8_8_);
                    /* try { // try from 00bb9e64 to 00bb9ec3 has its CatchHandler @ 00bba0a8 */
    StringUtil::replace(local_80,"<invokedMethod>",param_6);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00bba058 to 00bba063 has its CatchHandler @ 00bba094 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pvVar1 = (void *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pvVar1 = local_70;
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Running LUA method \'%s\'.\n%s\n",param_6,pvVar1);
    lua_settop(*(lua_State **)(this + 8),param_1);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4 == 0);
}


