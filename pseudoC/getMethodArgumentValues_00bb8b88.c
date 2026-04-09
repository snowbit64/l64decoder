// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMethodArgumentValues
// Entry Point: 00bb8b88
// Size: 28 bytes
// Signature: undefined __thiscall getMethodArgumentValues(LuauScriptSystem * this, void * param_1, char * param_2, uint param_3, Type * param_4, Value * param_5)


/* LuauScriptSystem::getMethodArgumentValues(void*, char const*, unsigned int, Value::Type const*,
   Value*) */

void __thiscall
LuauScriptSystem::getMethodArgumentValues
          (LuauScriptSystem *this,void *param_1,char *param_2,uint param_3,Type *param_4,
          Value *param_5)

{
  getLuaValues(this,(lua_State *)param_1,1,param_2,param_3,param_4,param_5);
  return;
}


