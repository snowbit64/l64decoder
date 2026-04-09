// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addClass
// Entry Point: 00bb8314
// Size: 464 bytes
// Signature: undefined __thiscall addClass(LuauScriptSystem * this, char * param_1, char * param_2, _func_int_void_ptr * param_3, _func_int_void_ptr * param_4)


/* LuauScriptSystem::addClass(char const*, char const*, int (*)(void*), int (*)(void*)) */

void __thiscall
LuauScriptSystem::addClass
          (LuauScriptSystem *this,char *param_1,char *param_2,_func_int_void_ptr *param_3,
          _func_int_void_ptr *param_4)

{
  int iVar1;
  int iVar2;
  lua_State **pplVar3;
  
  checkYieldState();
  pplVar3 = (lua_State **)(this + 8);
  lua_createtable(*pplVar3,0,0);
  iVar1 = lua_gettop(*pplVar3);
  luaL_newmetatable(*pplVar3,param_1);
  iVar2 = lua_gettop(*pplVar3);
  lua_pushvalue(*pplVar3,-1);
  lua_pushstring(*pplVar3,param_1);
  lua_rawset(*pplVar3,-10000);
  lua_pushstring(*pplVar3,param_1);
  lua_pushvalue(*pplVar3,iVar1);
  lua_rawset(*pplVar3,-0x2712);
  lua_pushstring(*pplVar3,"__metatable");
  lua_pushvalue(*pplVar3,iVar1);
  lua_rawset(*pplVar3,iVar2);
  lua_pushstring(*pplVar3,"__index");
  lua_pushvalue(*pplVar3,iVar1);
  lua_rawset(*pplVar3,iVar2);
  if (param_4 != (_func_int_void_ptr *)0x0) {
    lua_pushstring(*pplVar3,"__gc");
    lua_pushcclosurek(*pplVar3,(_func_int_lua_State_ptr *)param_4,"__gc",0,
                      (_func_int_lua_State_ptr_int *)0x0);
    lua_rawset(*pplVar3,iVar2);
  }
  if (param_3 != (_func_int_void_ptr *)0x0) {
    lua_pushstring(*pplVar3,"new");
    lua_pushcclosurek(*pplVar3,(_func_int_lua_State_ptr *)param_3,"new",0,
                      (_func_int_lua_State_ptr_int *)0x0);
    lua_rawset(*pplVar3,iVar1);
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    lua_createtable(*pplVar3,0,0);
  }
  else {
    lua_getfield(*pplVar3,-10000,param_2);
  }
  lua_setmetatable(*pplVar3,iVar1);
  lua_settop(*pplVar3,-3);
  return;
}


