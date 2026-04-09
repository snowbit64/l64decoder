// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addClassInstance
// Entry Point: 00bb8690
// Size: 96 bytes
// Signature: undefined __thiscall addClassInstance(LuauScriptSystem * this, void * param_1, void * param_2, char * param_3)


/* LuauScriptSystem::addClassInstance(void*, void*, char const*) */

bool __thiscall
LuauScriptSystem::addClassInstance(LuauScriptSystem *this,void *param_1,void *param_2,char *param_3)

{
  checkYieldState();
  if (param_2 == (void *)0x0) {
    lua_pushnil((lua_State *)param_1);
  }
  else {
    pushData(this,(lua_State *)param_1,param_2,param_3);
  }
  return param_2 != (void *)0x0;
}


