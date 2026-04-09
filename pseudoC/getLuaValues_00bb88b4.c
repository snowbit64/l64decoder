// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLuaValues
// Entry Point: 00bb88b4
// Size: 556 bytes
// Signature: undefined __thiscall getLuaValues(LuauScriptSystem * this, lua_State * param_1, uint param_2, char * param_3, uint param_4, Type * param_5, Value * param_6)


/* LuauScriptSystem::getLuaValues(lua_State*, unsigned int, char const*, unsigned int, Value::Type
   const*, Value*) */

byte __thiscall
LuauScriptSystem::getLuaValues
          (LuauScriptSystem *this,lua_State *param_1,uint param_2,char *param_3,uint param_4,
          Type *param_5,Value *param_6)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Logger *this_00;
  Type *pTVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  Value *pVVar12;
  ulong uVar13;
  
  iVar4 = *(int *)(this + 0x120);
  *(uint *)(this + 0x120) = iVar4 + 1U;
  if ((iVar4 + 1U & 0x3fff) == 0) {
    checkForEmergencyGarbageCollection();
  }
  uVar3 = lua_gettop(param_1);
  uVar1 = uVar3 - (param_2 - 1);
  uVar10 = param_4;
  if (uVar1 < param_4) {
    pTVar7 = param_5 + uVar1;
    puVar8 = (undefined4 *)(param_6 + (ulong)uVar1 * 0x10 + 8);
    uVar9 = (param_4 + param_2) - 1;
    do {
      if (*pTVar7 != 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00bb8aa0 to 00bb8aa7 has its CatchHandler @ 00bb8af0 */
          this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bb8aac to 00bb8aaf has its CatchHandler @ 00bb8ae0 */
          Logger::Logger(this_00);
          LogManager::getInstance()::singletonLogManager = this_00;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning (script): Function \'%s\' called with invalid number of arguments. %u instead of %u.\n"
                          ,param_3,(ulong)uVar3,(ulong)((param_2 - 1) + param_4));
        checkYieldState();
        printCFunctionCallstack(this,*(lua_State **)(this + 8),param_3,1);
        return 0;
      }
      *puVar8 = 0;
      pTVar7 = pTVar7 + 1;
      *(undefined8 *)(puVar8 + -2) = 1;
      puVar8 = puVar8 + 4;
      uVar9 = uVar9 - 1;
      uVar10 = uVar1;
    } while (uVar3 != uVar9);
  }
  if (uVar10 == 0) {
    bVar2 = false;
  }
  else {
    uVar5 = getLuaValue(this,param_1,param_2,0,param_3,*param_5,param_6);
    if ((uVar5 & 1) == 0) {
      bVar2 = true;
    }
    else {
      uVar13 = (ulong)uVar10;
      pVVar12 = param_6 + 0x10;
      uVar5 = 1;
      do {
        uVar11 = uVar5;
        if (uVar13 == uVar11) {
          bVar2 = uVar11 < uVar13;
          goto LAB_00bb8a70;
        }
        iVar4 = (int)uVar11;
        uVar6 = getLuaValue(this,param_1,param_2 + iVar4,iVar4,param_3,param_5[uVar11],pVVar12);
        pVVar12 = pVVar12 + 0x10;
        uVar5 = uVar11 + 1;
      } while ((uVar6 & 1) != 0);
      bVar2 = uVar11 < uVar13;
      if (iVar4 != 0) {
        do {
          deleteValue(this,param_6);
          param_6 = param_6 + 0x10;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
  }
LAB_00bb8a70:
  return bVar2 ^ 1;
}


