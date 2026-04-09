// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClassMethodArgumentValues
// Entry Point: 00bb8b08
// Size: 128 bytes
// Signature: undefined __thiscall getClassMethodArgumentValues(LuauScriptSystem * this, void * param_1, char * param_2, void * * param_3, uint param_4, Type * param_5, Value * param_6)


/* LuauScriptSystem::getClassMethodArgumentValues(void*, char const*, void*&, unsigned int,
   Value::Type const*, Value*) */

void __thiscall
LuauScriptSystem::getClassMethodArgumentValues
          (LuauScriptSystem *this,void *param_1,char *param_2,void **param_3,uint param_4,
          Type *param_5,Value *param_6)

{
  void **ppvVar1;
  
  ppvVar1 = (void **)lua_touserdata((lua_State *)param_1,1);
  *param_3 = *ppvVar1;
  getLuaValues(this,(lua_State *)param_1,2,param_2,param_4,param_5,param_6);
  return;
}


