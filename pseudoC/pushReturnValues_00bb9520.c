// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushReturnValues
// Entry Point: 00bb9520
// Size: 120 bytes
// Signature: undefined __thiscall pushReturnValues(LuauScriptSystem * this, void * param_1, char * param_2, uint param_3, Value * param_4)


/* LuauScriptSystem::pushReturnValues(void*, char const*, unsigned int, Value const*) */

uint __thiscall
LuauScriptSystem::pushReturnValues
          (LuauScriptSystem *this,void *param_1,char *param_2,uint param_3,Value *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = lua_checkstack((lua_State *)param_1,param_3);
  uVar2 = 0;
  if ((iVar1 != 0) && (param_3 != 0)) {
    uVar3 = (ulong)param_3;
    do {
      pushValue(this,(lua_State *)param_1,param_4);
      param_4 = param_4 + 0x10;
      uVar3 = uVar3 - 1;
      uVar2 = param_3;
    } while (uVar3 != 0);
  }
  return uVar2;
}


