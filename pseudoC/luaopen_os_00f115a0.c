// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaopen_os
// Entry Point: 00f115a0
// Size: 40 bytes
// Signature: undefined __cdecl luaopen_os(lua_State * param_1)


/* luaopen_os(lua_State*) */

undefined8 luaopen_os(lua_State *param_1)

{
  luaL_register(param_1,"os",(luaL_Reg *)&PTR_s_clock_010174a8);
  return 1;
}


