// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_where
// Entry Point: 00f06bd0
// Size: 156 bytes
// Signature: undefined __cdecl luaL_where(lua_State * param_1, int param_2)


/* luaL_where(lua_State*, int) */

void luaL_where(lua_State *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  lua_Debug alStack_168 [28];
  int local_14c;
  undefined auStack_145 [269];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_getinfo(param_1,param_2,"sl",alStack_168);
  if ((iVar2 == 0) || (local_14c < 1)) {
    lua_pushlstring(param_1,"",0);
  }
  else {
    lua_pushfstringL(param_1,"%s:%d: ",auStack_145);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


