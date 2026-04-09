// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_optvector
// Entry Point: 00f07428
// Size: 96 bytes
// Signature: undefined __cdecl luaL_optvector(lua_State * param_1, int param_2, float * param_3)


/* luaL_optvector(lua_State*, int, float const*) */

float * luaL_optvector(lua_State *param_1,int param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,param_2);
  if ((0 < iVar1) && (param_3 = (float *)lua_tovector(param_1,param_2), param_3 == (float *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00f06fc0(param_1,param_2,4);
  }
  return param_3;
}


