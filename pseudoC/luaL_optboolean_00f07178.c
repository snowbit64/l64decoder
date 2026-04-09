// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_optboolean
// Entry Point: 00f07178
// Size: 120 bytes
// Signature: undefined __cdecl luaL_optboolean(lua_State * param_1, int param_2, int param_3)


/* luaL_optboolean(lua_State*, int, int) */

ulong luaL_optboolean(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 < 1) {
    return (ulong)(uint)param_3;
  }
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 == 1) {
    uVar2 = lua_toboolean(param_1,param_2);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f06fc0(param_1,param_2,1);
}


